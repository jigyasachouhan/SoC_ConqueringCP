
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ios_base::sync_with_stdio(false);					
    cin.tie(NULL);
    cout.tie(NULL);
    ll n; cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    ll ans = 0;
    ll greatest = a[0];
    for(ll i=1; i<n; i++){
        // cout<<i<<" ";
        if(a[i]<greatest){
            ans += greatest - a[i];
            // cout<<"ans = "<<ans<<endl;
        }
        else if(a[i]>greatest){
            greatest = a[i];
            // cout<<"greatest = "<<greatest<<endl;
        }
    }
    cout<<ans<<endl;
}
