#include <iostream>
#include <numeric>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 0;i<t;i++){
        int n,s,x;
        cin >> n >> s>> x;
        int arr[n];
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        int sum = accumulate(arr,arr+n,0);
        int flag = 0;
        if(s - sum == 0){
            flag++;
        }
        else if((s-sum)<0){
            flag = 0;
        }
        else if((s-sum)%x==0){
            flag++;
        }
        
        if(flag>0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        

    }
}