#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin >> n >> x;
    vector<int> vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-1; j++){
            if(vec[j] > vec[j+1]){
              if(n >= j+1+x || j-x >= 0){
                swap(vec[j],vec[j+1]);
              }
              else{
                cout << "NO" << endl;
                return 0;
              }
            }
        }
    }
    cout << "YES" << endl;
}
