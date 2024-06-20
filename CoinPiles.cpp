
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ios_base::sync_with_stdio(false);					
    cin.tie(NULL);
    cout.tie(NULL);
    ll t; cin>>t;

    while(t--){
        ll a,b;
        cin>>a>>b;
        if(2*a>=b && 2*b>=a && (2*a-b)%3==0 && (2*b-a)%3==0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
