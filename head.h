#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
void Log(const std::string& var){
    std::cout<<var<<std::endl;
}
int randitTest(int x,int y){
    srand(time(nullptr));
    return (rand() % (y-x+1)) + x;
}