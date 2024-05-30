#include <bits/stdc++.h>
int main(){
               /* Nested Pairs in cpp */
    pair <int, pair<int, int>> p = {1,{2,3}};
    cout<<p.first<<" "<<p.second.first<<" "<<p.second.second;
}