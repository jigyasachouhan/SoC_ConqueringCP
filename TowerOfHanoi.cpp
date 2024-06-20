
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void arrange(ll n, ll from, ll to, ll use){
    if(n==1){
        cout<<from<<" "<<to<<"\n";
    }
    else if(n==2){
        cout<<from<<" "<<use<<"\n";
        cout<<from<<" "<<to<<"\n";
        cout<<use<<" "<<to<<"\n";
    }
    else{
        arrange(n-1, from, use, to);
        cout<<from<<" "<<to<<endl;
        arrange(n-1, use, to, from);
    }
}

ll moves(ll n){
    if(n==1) return 1;
    else return 2*moves(n-1)+1;
}

int main(){
    ios_base::sync_with_stdio(false);					
    cin.tie(NULL);
    cout.tie(NULL);
    ll n; cin>>n;
    cout<<moves(n)<<"\n";
    arrange(n, 1, 3, 2);
    
}
