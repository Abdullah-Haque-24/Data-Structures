#include <bits/stdc++.h>
using namespace std;
bool fnd(vector<int> &v, int value){
    for(int i=0; i<v.size(); i++){
        if(v[i]==value+1) return 1;
    }
    return 0;
}
int main()
{
    int n, count=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    for(int i=0; i<n; i++){
        if(fnd(v, v[i])) count++;
    }
    cout<<count;
    return 0;
}