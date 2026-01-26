#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i = 0;i<t;i++){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }        
        int pn = -1;
        for(int i = 0;i<n;i++){
            if(arr[i]==n){
                pn = i;
                break;
            }
        }
        if(pn != 0){
            reverse(arr.begin(),arr.begin()+pn+1);
        }
        else{
            int pn1 = -1;
            for(int i = 0;i<n;i++){
                if(arr[i]==n-1){
                    pn1 = i;
                    break;
                }
            }
            if(n>1 && pn1!=1){
                reverse(arr.begin()+1,arr.begin()+pn1+1);
            }
            else{
                reverse(arr.begin(),arr.begin()+1);
            }
        }
        for(int x : arr){
            cout << x << " ";
        }
        cout << endl;
    }
}