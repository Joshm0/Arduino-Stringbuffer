#include <iostream>
#include "StringBuffer.hpp"

int main() {

    StringBuffer buff(10);

    std::cout << "Initial currlen: " << buff.length() << std::endl;

    buff.append('H');
    buff.append('e');
    buff.append('l');
    buff.append('l');
    buff.append('o');

    std::cout << "Buffer content: " << buff.toString() << std::endl;
    std::cout << "Buffer length: " << buff.length() << std::endl;
    std::cout << "Is buffer empty? " << (buff.isEmpty() ? "Yes" : "No") << std::endl;
    std::cout << "Testing resize..." << std::endl;

    buff.append(' ');
    buff.append('W');
    buff.append('o');
    buff.append('r');
    buff.append('l');
    buff.append('d');
    buff.append('!');

    std::cout << "Buffer content after appending more: " << buff.toString() << std::endl;
    std::cout << "Buffer length after appending more: " << buff.length() << std::endl;
    std::cout << "Clearing buffer..." << std::endl;
    buff.clear();
    std::cout << "Is buffer empty after clearing? " << (buff.isEmpty() ? "Yes" : "No") << std::endl;

    std::cout << "Test completed - Yippie!!." << std::endl;

    return 0;
}