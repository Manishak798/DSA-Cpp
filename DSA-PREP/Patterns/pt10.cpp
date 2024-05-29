#include <bits/stdc++.h>

using namespace std;

void pattern (int n){
    for(int i=0;i<2*n;i++){
       /*
       once i reaches to the value n need to print inverted triangle
       */
      if(i<n){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
      }else{
        for(int j=0;j<=((2*n)-i)+1); j++){
            cout<<"*";
        }
      }
      cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    pattern(n);
}