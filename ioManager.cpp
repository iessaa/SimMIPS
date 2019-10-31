#include "ioManager.hpp"
#include <iostream>
uint ioManager::get_word(){
    int input;
    input = std::getchar();
    return static_cast<uint>(input);
}

void ioManager::store_word(uint word){
    char out = 0xFF & word;
    std::putchar(out);
    return;
}