#include <iostream>
#include <string>
#include "head.h"
const int size = 4;

std::string out ="XXXX" ;

int array[4][4] = {
        {1,1,1,1,},
        {1,0,0,1,},
        {1,0,0,1,},
        {1,1,1,1,},
};

int main() {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (array[i][j] == 1) {
                out[j] = '#';
            } else if (array[i][j] == 0) {
                out[j] = '.';
            }
        }
        std::cout<<out<<std::endl;
    }
}