#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    long long  t,n,k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        if(n%2 !=0 && k%2==0){
            cout << "NO" << endl;
        }
        else if(n%2 !=0 && k%2 != 0){
            cout << "YES" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    return 0;
}