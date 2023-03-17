#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define ll long long int
#define vi vector<ll>
vi divisors(ll n){vi div;for(ll i=1;i*i<=n;i++){ if(n%i==0) { div.pb(i); if(n/i!=i) div.pb(n/i); }} return div;}


void solve(){
    int n;
    cin>>n;
    int a[n];

    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }


    map<int,int> occ;

    for (int i = 0; i < n-2; ++i)
    {
        if(gcd(a[i],a[i+2])>gcd(a[i],a[i+1])){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;


}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t t1=clock();
    int t;
    cin>>t;

    while(t--){
        solve();
    }
}