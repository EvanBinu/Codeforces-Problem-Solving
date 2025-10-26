#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int l = 0;l<t;l++){
        long long a,b,c;
        cin >> a >> b >> c;
        if(c%2 !=0){
            if(b>a){
                cout << "Second" << endl;
            }
            else{
                cout << "First" << endl;
            }
        }
        else{
            if(b<a){
                cout << "First" << endl;
            }
            else{
                cout << "Second" << endl;
            }
        }
    }
}
