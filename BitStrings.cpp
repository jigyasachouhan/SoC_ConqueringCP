
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ios_base::sync_with_stdio(false);					
    cin.tie(NULL);
    cout.tie(NULL);
    ll n; cin>>n;

    ll ans = 1;
    for(ll i=1; i<=n; i++){
        ans = ans * 2;
        ans = ans%1000000007;
    }
    cout<<ans<<endl;
}
