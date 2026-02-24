#ifndef STRINGBUFFER

#define STRINGBUFFER

#include <stdlib.h>
#include <string.h>

class StringBuffer {
private:
    char *buffer = NULL;
    int capacity = 0;
    int currlen  = 0;
    void resize();

public:

    StringBuffer(int capacity);
    ~StringBuffer();
    void append(char c);
    char* toString();
    void clear();
    int length();
    int size();
    bool isEmpty();
};

#endif
