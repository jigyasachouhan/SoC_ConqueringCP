
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll pow(ll a, ll b){
    ll ans = 1;
    for(ll i=0; i<b; i++){
        ans *= a;
    }
    return ans;
}

vector<string> solve(ll n){
    if(n==1){
        vector<string> ans;
        ans.push_back("0");
        ans.push_back("1");
        return ans;
    }
    vector<string> ans = solve(n-1);
    vector<string> final;
    for(ll i=0; i<pow(2,n-1); i++){
        final.push_back(ans[i]);
    }
    for(ll i=pow(2,n-1)-1; i>=0; i--){
        final.push_back(ans[i]);
    }
    for(ll i=0; i<pow(2,n-1); i++){
        final[i] = "0" + final[i];
    }
    for(ll i=pow(2,n-1); i<pow(2,n); i++){
        final[i] = "1" + final[i];
    }
    return final;

}

int main(){
    ios_base::sync_with_stdio(false);					
    cin.tie(NULL);
    cout.tie(NULL);
    ll n; cin>>n;
    vector<string> ans = solve(n);
    for(ll i=0; i<pow(2,n); i++){
        
        cout<<ans[i]<<"\n";
    }
}

