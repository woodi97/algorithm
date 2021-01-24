#include <iostream>
using namespace std;
int main(void){
    int tc,a,b;
    cin >> tc;
    for(int i=1;i<=tc;i++){
        cin >> a >> b;
        cout << "Case #" << i << ": " << a+b << "\n";
    }
    return 0;
}