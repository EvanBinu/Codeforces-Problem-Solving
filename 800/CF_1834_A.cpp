#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    long long t,n;
    cin >> t;
    while(t--){
        cin >> n;
        long long arr[n];
        long long cn = 0,cp = 0;
        for(int  i =0;i<n;i++){
            cin >> arr[i];            
            if(arr[i] == 1){
                cp++;
            }
            else{
                cn++;
            }
        }
        long long operations = 0;
        while (cp < cn || cn % 2 == 1){
            operations++;
            cp++; 
            cn--; 
        }
        cout << operations << endl;

    }
    return 0;
}