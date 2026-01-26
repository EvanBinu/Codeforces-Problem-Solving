#include <iostream>
#include <cmath>
#include <set>
#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long arr[n];
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        int ans = 0;
        for(int i = n-2;i>=0;i--){
            while (arr[i] >= arr[i + 1]) {
				ans++; 
				arr[i] /= 2; 
				if (arr[i] == 0) 
					break;
			}
            if(arr[i] == 0 && arr[i + 1] == 0){
                ans = -1;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}