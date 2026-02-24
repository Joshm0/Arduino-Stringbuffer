#include "StringBuffer.hpp"

#define BASE_CAPACITY 15

void StringBuffer::resize() {
    
    // Dont like doubling the capacity, find equation? -> 3sqrt(n) try
    int newCapacity = capacity * 2; // = 3 * sqrt(capacity);
    char *newbuf    = (char*)malloc(newCapacity * sizeof(char));

    strcpy(newbuf, buffer);
    free(buffer);

    buffer   = newbuf;
    capacity = newCapacity;
    // Currlen can stay the same
}

StringBuffer::StringBuffer(int capacity){

    // Ensures capacity is non-negative or 0
    if (capacity <= 0) {
        capacity = BASE_CAPACITY;
    }

    buffer = (char *)malloc(capacity * sizeof(char));

    this->buffer[0] = '\0'; 
    this->capacity  = capacity;
    this->currlen   = 0;
}

StringBuffer::~StringBuffer() {
    free(buffer);
}

void StringBuffer::append(char c) {

    if (currlen + 1 >= capacity) {
        resize();
    }

    buffer[currlen] = c;
    buffer[currlen + 1] = '\0';
    // Not counting null terminator
    currlen++;
}

// Returns a copy, USER MUST FREE
char* StringBuffer::toString() {

    // Compensate for null terminator
    char *buffcpy = (char*)malloc((currlen + 1) * sizeof(char));
            
    buffcpy = strcpy(buffcpy, buffer);

    return buffcpy;
}

// Data is still there but it should be fine
void StringBuffer::clear() {
    currlen   = 0;
    buffer[0] = '\0';
}

// Return length
int StringBuffer::length() {
    return currlen;
}

// Return capacity
int StringBuffer::size() {
    return capacity;
}

// Return if empty
bool StringBuffer::isEmpty() {
    return currlen == 0;
}
