#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin>>n>>q;
    vector<int> v(n);
    for(int i=0;i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    while(q--){
        int target;
        cin>>target;
        int high=n-1, low=0, mid=(high+low)/2, flag=0;
        while (low<=high)
        {
            mid=(high+low)/2;
            if(v[mid]==target){
                flag=1;
                break;
            }
            else if(v[mid]>target) high=mid-1;
            else low=mid+1;
        }
        if(flag) cout<<"found"<<endl;
        else cout<<"not found"<<endl;
    }   
    return 0;
}
