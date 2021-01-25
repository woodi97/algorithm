#include <iostream>

int main(void){
    int tc,a,b;
    std::cin >> tc;
    while(tc>0){
        std::cin >> a >> b;
        std::cout << a+b << std::endl;
        tc--;
    }
    return 0;
}