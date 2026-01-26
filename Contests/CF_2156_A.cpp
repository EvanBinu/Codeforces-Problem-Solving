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
        long long n;
        cin >> n;
        int count = 0;
        while(n>2){
            n = n-2;
            count++;

        }
        cout << count << endl;
    }return 0;
}