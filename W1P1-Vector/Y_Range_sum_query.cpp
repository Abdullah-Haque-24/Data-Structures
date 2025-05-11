#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin>>n>>q;
    vector<long long> sum(n);
    for(int i=0; i<n; i++){
        long long x;
        cin>>x;
        if(i==0) sum[i]=x;
        else sum[i] = sum[i-1]+x;
    }
    while(q--){
        int l, r;
        cin>>l>>r;
        l--, r--;
        if(l==0) cout<<sum[r]<<endl;
        else cout<<sum[r]-sum[l-1]<<endl;
        
    }
    return 0;
}
