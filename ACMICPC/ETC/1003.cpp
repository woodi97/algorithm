#include <iostream>

int dp[50]={1,1,};

int fibonacci(int n){
    if(n<=1)
        return dp[n];
    else{
        if(dp[n]>0)
            return dp[n];
    }
    return dp[n] = fibonacci(n-1) + fibonacci(n-2);
}

int main(void){
    int tc;
    std::cin >> tc;

    for(int i=0;i<tc;i++){
        int ni; //num input
        std::cin >> ni;

        if(ni==0)
            std::cout << "1 0" << std::endl;
        else if(ni==1)
            std::cout << "0 1" << std::endl;
        else{
            fibonacci(ni);
            std::cout << dp[ni-2] << " " << dp[ni-1];
        }
    }
    return 0;
}