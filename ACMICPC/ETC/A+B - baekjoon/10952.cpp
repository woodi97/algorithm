#include <iostream>

int main(void){
    int a,b;
    while(std::cin >> a >> b){
        if(a+b==0)
            break;
        std::cout << a+b << std::endl;
    }
    return 0;
}