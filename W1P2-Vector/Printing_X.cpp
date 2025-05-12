#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, end=0;
    cin>>n;
    for(int i=0; i<n/2; i++){
        for(int j=0; j<n-1; j++) {
            if(i==j) cout<<"\\";
            if (j==n-end-2){
                cout<<"/";
                
            }
            else cout<<" ";
        }
        end++;
        cout<<endl;
    }
    for(int i=0; i<=n/2;i++){
        if(i==n/2) cout<<"X"<<endl;
        else cout<<" ";
    }
    int start=n/2 -1;
    end=n/2 +1;
    for(int i=0; i<n/2; i++){
        for(int j=0; j<n; j++) {
            if(j==end){
                cout<<"\\";
                
            }
            else if (j==start){
                cout<<"/";
                
            }
            else cout<<" ";
        }
        end++;
        start--;
        cout<<endl;
    }
    return 0;
}
