#include <iostream>
#include <string>
#include "head.h"
int main() {
    int n;
    Log(":");
    std::cin>> n;
    for (int i = 0; i < n; ++i) {
        std::cout<<randitTest(1,6)<<std::endl;
    }
}