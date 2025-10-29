#include <iostream>
#include <cmath>
#include <set>
#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main(){
    long t,n;
    cin >> t;
    while(t--){
        cin >> n;
        int arr[n];
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        vector<int> maxi;
        int maxii = 0;
        if(n == 1 && arr[0] == 0){
            cout << 1 << endl;
        }
        else if(n == 1 && arr[0] == 1){
            cout << 0 << endl;
        }
        else{
            for(int i = 0;i<n;i++){
                if(arr[i] == 0 ){
                    maxii = 1;
                    
                    maxi.push_back(maxii);
                    int j = i;
                    while((arr[j] == 0 && arr[j+1] == 0) && (j+1 < n)){
                        maxi.back()++;
                        j++;
                    }
                    i = j;
                    
                }
                else{
                    maxi.push_back(0);
                }
            }        
            cout << *max_element(maxi.begin(), maxi.end()) << endl;
        }
        
    }
    return 0;
}