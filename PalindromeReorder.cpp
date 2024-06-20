
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ios_base::sync_with_stdio(false);					
    cin.tie(NULL);
    cout.tie(NULL);
    string s; cin>>s;
    ll n = s.size();
    ll count[26];
    for(ll i=0; i<26; i++){
        count[i] = 0;
    }
    for(ll i=0; i<n; i++){
        count[s[i]-'A']++;
    }
    // for(ll i=0; i<26; i++){
    //     cout<<count[i]<<" ";
    // }
    bool possible = true;
    bool once = false;
    ll odd = -1;
    for(ll i=0; i<26; i++){
        
        if(!once && count[i]%2==1){
            once = true;
            odd = i;
        }
        else if(once && count[i]%2==1){
            possible = false;
            break;
        }
        
    }
    // cout<<possible<<" possible\n";
    if(!possible){
        cout<<"NO SOLUTION\n";
    }
    else{
        char ans[n+1];
        ans[n] = '\0';
        if(!once){
            ll j=0;
            for(ll i=0; i<26; i++){
                // cout<<"2\n";
                if(count[i]>0){
                    ans[j] = 'A' + i;
                    ans[n-1-j] = 'A' + i;
                    count[i] -= 2;
                    j++;
                    i--;
                }
            }
            cout<<ans<<"\n";
        }
        else{
            // cout<<"1\n";
            ans[(n-1)/2] = 'A' + odd;
            count[odd]--;
            ll j=0;
            for(ll i=0; i<26; i++){
                // cout<<"2\n";
                if(count[i]>0){
                    ans[j] = 'A' + i;
                    ans[n-1-j] = 'A' + i;
                    count[i] -= 2;
                    j++;
                    i--;
                }
            }
            cout<<ans<<"\n";
        }
        
    }

}
