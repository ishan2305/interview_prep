#include <bits/stdc++.h>


using namespace std;
#define ll long long int
#define pb push_back
#define endl "\n"



int main() {
    int n , m , i;
    cin>>n>>m;
    vector<ll> h(n);
    vector<ll> t(m);
    multiset<ll> set;
    for (i=0;i<n;i++){
        cin>>h[i];
        set.insert(h[i]);
    }
    for (i=0;i<m;i++){
        cin>>t[i];
    }
    for (i=0;i<m;i++){
        if (set.size() == 0) {
            cout<<-1<<endl;
            continue;
        }
        auto it = set.upper_bound(t[i]);
        if (it == set.begin()) {
            cout<<-1<<endl;
        } else {
            it--;
            if ((*it) <= t[i]) {
                cout<<(*it)<<endl;
                set.erase(it);
            }
            else {
                cout<<-1<<endl;
            }
        }
    }

}
