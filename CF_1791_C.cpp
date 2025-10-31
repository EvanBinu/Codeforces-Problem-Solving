#include <iostream>
#include <cmath>
#include <set>
#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while(t--){
        int n;
        string bin;
        cin >> n;
        cin >> bin;
        if(bin.front() == bin.back()){
            cout << n << endl;
        }
        else{
            int count = n;
            while(bin.size() > 1 && bin.front() != bin.back()){
                bin.erase(bin.begin());
                bin.pop_back();
                count = count-2;
            }
            if (bin.empty()) count = 0;
            cout << count << endl;
        }
    }
    return 0;
}