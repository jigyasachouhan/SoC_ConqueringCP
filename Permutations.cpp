
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ios_base::sync_with_stdio(false);					
    cin.tie(NULL);
    cout.tie(NULL);
    ll n; cin>>n;
    if(1<n && n<4){
        cout<<"NO SOLUTION\n";
    }
    else if(n==4){
        cout<<"2 4 1 3\n";
    }
    else if(n%2==1){
        ll a[n];
        for(ll i=0; i<n; i=i+2){
            a[i] = i/2 + 1;
        }
        for(ll i=1; i<n; i=i+2){
            a[i] = (n+1)/2 + (i+1)/2;
        }
        for(ll i=0; i<n; i++){
            cout<<a[i]<<" ";
        }
    }
    else{
        ll a[n];
        for(ll i=0; i<n; i=i+2){
            a[i] = i/2 + 1;
        }
        for(ll i=1; i<n; i=i+2){
            a[i] = (n)/2 + (i+1)/2;
        }
        for(ll i=0; i<n; i++){
            cout<<a[i]<<" ";
        }
    }
    
}
