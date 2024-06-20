
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ios_base::sync_with_stdio(false);					
    cin.tie(NULL);
    cout.tie(NULL);
    ll n; cin>>n;
    ll ans = 0;
    while(n>0){
        n = n/5;
        ans = ans + n;
    }
    cout<<ans<<endl;
}
