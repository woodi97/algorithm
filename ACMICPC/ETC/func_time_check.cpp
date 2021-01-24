#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

int check1(void){
    printf("");
}

int check2(void){
    std::cout << "";
}

int main(void){
    clock_t start1, start2, end1, end2;
    float res1, res2;
    int i;

    //1st func time measurement
    start1 = clock();
    for(i=0; i<=10000000;i++)
        check1();
    end1 = clock();
    res1 = (float)(end1 - start1)/CLOCKS_PER_SEC;
    //std::cout << "\n * 첫번째 함수 \n";

    //2nd func time measurement
    start2 = clock();
    for(i=0; i<=10000000;i++)
        check2();
    end2 = clock();
    res2 = (float)(end2 - start2)/CLOCKS_PER_SEC;
    //std::cout << "\n * 두번째 함수 \n";

    std::cout << std::setprecision(6);
    std::cout << "time consumption for 1st func :" << res1 << std::endl;
    std::cout << "time consumption for 2nd func :" << res2 << std::endl;


}