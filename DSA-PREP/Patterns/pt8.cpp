#include <bits/stdc++.h>

using namespace std;

void pattern (int n){
    for(int i=0;i<n;i++){
        /*
        space - star - space
        */
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int k=0;k<2*n-i;k++){
            //n=5 n-i= 5-0=5
        cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    pattern(n);
}