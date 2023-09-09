#include <iostream>
#include <string>
#include "../head.h"

const int size = 4;

std::string out[4];

int array[4][4] = {
        {1, 1, 1, 1},
        {1, 0, 0, 1},
        {1, 0, 0, 1},
        {1, 1, 1, 1},
};

int main() {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (array[i][j] == 1) {
                out[j] = "#";
            } else if (array[i][j] == 0) {
                out[j] = ".";
            }
        }
        for (int j = 0; j < size; ++j) {
            std::cout << out[j];
        }
        std::cout << std::endl;
    }
    return 0;
}





