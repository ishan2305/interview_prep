#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl "\n"

int main() {
    ll n;
    cin>>n;
    vector<ll> v(n);
    vector<ll> ans(n);
    ll maxx = -1e18;
    for (ll i=0;i<n;i++) {
        cin>>v[i];
        if (i==0) {
            ans[i] = v[i];
        }
        else {
            ans[i] = max(v[i] , ans[i-1] + v[i]);
        }
        maxx = max(maxx, ans[i]);
    }
    cout<<maxx<<endl;
}

