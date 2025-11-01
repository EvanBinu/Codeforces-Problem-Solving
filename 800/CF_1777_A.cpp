#include <iostream>
#include <cmath>
#include <set>
#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> arr(n);
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }

        int count = 0;
        for(int i = 0;i<n-1;i++){
            if(arr[i]%2==arr[i+1]%2){
                count++;
                long long num1 = arr[i];  
                long long num2 = arr[i+1];  
                arr.erase(arr.begin()+i, arr.begin() +i+1);  
                arr.insert(arr.begin()+i, num1*num2);
            }
            else{
                continue;
            }
        }
        cout << count << endl;
    }
}