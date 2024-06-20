
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ios_base::sync_with_stdio(false);					
    cin.tie(NULL);
    cout.tie(NULL);
    ll t; cin>>t;

    while(t--){
        ll a,b,c,d; cin>>a>>b>>c>>d;
        if(d<b){
            cout<<"-1\n";
        }
        else if(a+d-b<c){
            cout<<"-1\n";
        }
        else{
            cout<<a+2*d-2*b-c<<"\n";
        }
    }
}
