#include <bits/stdc++.h>


using namespace std;
#define ll long long int
#define pb push_back
#define endl "\n"

int main() {
    ll n , x;
    cin>>n>>x;
    vector<pair<ll , ll>> v;
    for (int i=0 ; i< n; i++ ) {
        ll temp;
        cin>>temp;
        v.pb({temp , i+1});
    }
    sort(v.begin(), v.end());

    for (int i=0 ; i< n; i++ ) {
        ll target = x - v[i].first;
        ll left = i+1 , right = n-1;
        while(left <= right) {
            ll mid = (left + right) / 2 ;
            if (left == right) {
                if(v[mid].first == target) {
                    cout<<v[i].second<<" "<<v[mid].second<<endl;
                    return 0;
                }
                break;
            }
            else {
                if(v[mid].first == target) {
                    cout<<v[i].second<<" "<<v[mid].second<<endl;
                    return 0;
                }
                else if (v[mid].first < target) {
                    left = mid + 1;
                }
                else {
                    right = mid - 1;
                }
            }
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
}
