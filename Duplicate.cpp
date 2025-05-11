#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, flag=0;
    cin>>n;
    vector<int> v(n), freq();
    for(int i=0; i<n; i++){
         cin>>v[i];

    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i!=j && v[i]==v[j]){
                flag=1;
                break;
            }
        }
    }
    if(flag) cout<<"YES";
    else cout<<"NO";
    return 0;
}
