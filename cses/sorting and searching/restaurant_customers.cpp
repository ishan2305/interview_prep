#include <bits/stdc++.h>


using namespace std;
#define ll long long int
#define pb push_back
#define endl "\n"

int main() {
    ll n;
    cin>>n;
    multiset<ll> set;
    ll ans = -1;
    vector<pair<ll , ll>> v;
    for (ll i=0; i< n; i++) {
        ll arrival, departure;
        cin>>arrival>>departure;
        v.push_back(make_pair(arrival,departure));
    }
    sort(v.begin() , v.end());
    for (ll i=0; i< n; i++) {
        ll arrival = v[i].first , departure = v[i].second;
        if (i == 0) {
            ans = 1;
        }
        else {
            auto it = set.lower_bound(arrival);
            while (set.size() != 0 && *set.begin() < arrival) {
                set.erase(set.begin());
            }
            ans = max(ans ,(ll)set.size() + 1);
        }
        set.insert(departure);
    }
    cout<<ans<<endl;
}

