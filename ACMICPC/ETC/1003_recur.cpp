#include <iostream>

int zcount=0,
    ocount=0;

int fibonacci(int n){
    if(n==0){
        zcount++;
        return 0;
    } else if (n==1){
        ocount++;
        return 1;
    } else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(void){
    int tc;
    std::cin >> tc;

    while(tc>0){
        int n=0;
        std::cin >> n;
        fibonacci(n);
        std::cout << zcount << " " << ocount << std::endl;
        tc--;zcount=0;ocount=0;
    }
}