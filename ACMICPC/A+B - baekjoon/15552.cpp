#include <iostream>
using namespace std;
int main(void){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int tc,a,b;
    cin >> tc;
    while(tc>0){
        cin >> a >> b;
        cout << a+b << "\n";
        tc--;
    }
    return 0;
}