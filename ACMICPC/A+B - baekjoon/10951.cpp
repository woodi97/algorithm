#include <iostream>

int main(void){
    int a,b;
    while(std::cin >> a >> b){
        std::cout << a+b << std::endl;
    }
    return 0;
}

// 입력 갯수가 정해져 있지 않을때 입력 종료를 어떻게 할 것인가 