#include <bits/stdc++.h>
using namespace std;
void rev(vector<int> &v, int n){
    int start=0, end=n-1;
    while(start<end){
        int temp=v[start];
        v[start]=v[end];
        v[end]=temp;
        start++;
        end--;
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    rev(v, n);
    for(int i=0; i<n; i++) cout<<v[i]<<" ";
    return 0;
}
