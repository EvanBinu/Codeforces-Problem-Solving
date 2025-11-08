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
        int arr[n];
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        int cn = 0,cz = 0;
        for(int i = 0;i<n;i++){
            if(arr[i] == -1){
                cn++;
            }
            else if(arr[i] == 0){
                cz++;
            }
        }
        int count = 0;
        if(cn%2 !=0){
            count = count+2;
        }
        count= count+cz;
        cout << count << endl;
    }
    return 0;
}