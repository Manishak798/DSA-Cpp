#include <bits/stdc++.h>

using namespace std;

void pattern (int n){
    for(int i=0;i<n;i++){
        /*
        1. 0-> n-i= 5
        2. 0-> n-i= 4 
        */
        for(int j=0;j<n-i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    pattern(n);
}