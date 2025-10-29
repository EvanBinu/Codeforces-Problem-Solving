// Not accepted
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
    long long t,n;
    cin >> t;
    while(t--){
        cin >> n;
        long long arr[n];
        long long x = 1000000000000000000LL;
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        int g = 0;
        int ans = 0;
        for(int i = 0;i<n;i++){
            for(int j=2;j<x;j++){
                g = gcd(arr[i],2);
                if(g == 1){
                    ans=j;
                    break;
                }

            }

        }
        if(ans > 0){
            cout << ans << endl;
        }
        else{
            cout << -1<< endl;
        }
        

    }
    return 0;
}