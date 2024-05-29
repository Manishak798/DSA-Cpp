#include <bits/stdc++.h>

using namespace std;

void pattern (int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
if((i%2==0 && j%2!=0) || (j%2==0 && i%2!=0) ){
            cout<<"0";
        }else{
            cout<<"1";
        }
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin>>n;
    pattern(n);
}