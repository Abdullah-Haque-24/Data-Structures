#include <bits/stdc++.h>
using namespace std;
void concat(vector<int> &v1, vector<int> &v2){
    for(int x:v1) v2.push_back(x);
}
int main()
{
    int n;
    cin>>n;
    vector<int> v1(n), v2(n);
    for (int i = 0; i < n; i++) cin>>v1[i];
    for (int i = 0; i < n; i++) cin>>v2[i];
    concat(v1, v2);
    for(int x:v2) cout<<x<<" ";
    return 0;
}
