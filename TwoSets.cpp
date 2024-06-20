
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ios_base::sync_with_stdio(false);					
    cin.tie(NULL);
    cout.tie(NULL);
    ll n; cin>>n;
    ll sum = (n*(n+1))/2;
    if(sum%2){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
        vector<ll> a,b;
        ll sum1 = sum/2;
        while(n){
            if(sum1-n>=0){
                a.push_back(n);
                sum1-=n;
            }
            else{
                b.push_back(n);
            }
            n--;
        }
        cout<<a.size()<<"\n";
        for(ll i=0; i<a.size(); i++){
            cout<<a[i]<<" ";
        }
        cout<<"\n";
        cout<<b.size()<<"\n";
        for(ll i=0; i<b.size(); i++){
            cout<<b[i]<<" ";
        }
    }
}
