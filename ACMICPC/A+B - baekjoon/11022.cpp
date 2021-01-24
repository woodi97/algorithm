#include <iostream>
using namespace std;
int main(){
    int tc,a,b;
    cin >> tc;
    for(int i=1;i<=tc;i++){
        cin >> a >> b;
        cout << "Case #" << i << ": " 
        << a << " + " << b << " = " << a+b << "\n";
    }
    return 0;
}