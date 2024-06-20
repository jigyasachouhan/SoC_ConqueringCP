#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector<ll>
#define pb push_back

int main(){
    ios_base::sync_with_stdio(false);					
    cin.tie(NULL);
    cout.tie(NULL);
    ll t; cin>>t;

    while(t--){
        ll n, k; cin>>n>>k;
        vll a(n);
        for(ll i=0; i<n; i++) cin>>a[i];
        ll start = 0;
        ll end = 0;
        ll count = 0;
        for(ll i=0; i<n-1 ;i++){
            if(a[i]<2*a[i+1]){
                end++;
            }
            else{
                start = end = i+1;
            }
            if(end-start+1 > k){
                count++;
            }
        }
        cout<<count<<endl;
    }
}
