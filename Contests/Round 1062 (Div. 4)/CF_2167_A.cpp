#include <iostream>
using namespace std;

int main(){
    long long t;
    long long a,b,c,d;
    cin >> t;
    while(t--){
        cin >> a >> b >> c >> d;
        if(a == b && a== c && a == d){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}