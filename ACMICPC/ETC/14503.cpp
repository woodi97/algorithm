#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool movable(){

}

int main(void){
    int n,m,cur_m,cur_direc;
    int clean_count=0, cur_r=0,cur_c=0, cur_loc=0;
    std::cin >> n >> m >> cur_r >> cur_c >> cur_direc;
    int *array = new int[n*m];
    cur_loc = (cur_r+1) * (cur_c+1);

    for(int i=0;i<n*m;i++)
        std::cin >> array[i];

    while(1){
        for(int counter=3;counter>=0;counter--){
            switch((cur_loc+counter)%4){
                case 0:
                    
                    break;
                case 1:
                    break;
                case 2:
                    break;
                case 3:
                    break;


            }
            break;
        }

        if(array[cur_loc]!=1){
            array[cur_loc] = 2;
            clean_count++;
        }
    }

    return 0;
}