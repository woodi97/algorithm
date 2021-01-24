#include <iostream>

int main(void){
    int b=0,d=0;
    int a[4];
    for(int j=0;j<3;j++){
        for(int i=0;i<4;i++)
            std::cin >> a[i];
        for(int i=0;i<4;i++){
            if(a[i]==0)
                b++;
            else
                d++;
        }
        if(b==0 && d==4)
            std::cout << 'E' << std::endl;
        else if(b==1 && d==3)
            std::cout << 'A' << std::endl;
        else if(b==2 && d==2)
            std::cout << 'B' << std::endl;
        else if(b==3 && d==1)
            std::cout << 'C' << std::endl;
        else if(b==4 && d==0)
            std::cout << 'D' << std::endl;
        b=0;d=0;
    }
    return 0;
}