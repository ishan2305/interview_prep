#include <bits/stdc++.h>


using namespace std;
#define ll long long int
#define pb push_back
#define endl "\n"

int main() {
    int n;
    cin>>n;
    vector<pair<ll , ll>> times;
    for (int i=0;i<n;i++) {
        int start , end;
        cin>>start>>end;
        times.push_back(make_pair(end, start));
    }
    sort(times.begin(),times.end());
    vector<ll> ans(n, -1);
    vector<ll> maxx(n, -1);
    for (int i=0;i<n;i++) {
        if (i == 0) {
           ans[i]  = 1;
           maxx[i]  = 1;
        }
        else {
            ll left = 0 , right = i-1;
            while (left <= right) {
                ll mid = (left + right) / 2;
                if (left == right ) {
                    if(times[mid].first <= times[i].second) {
                        ans[i] = max(ans[i] , maxx[mid] + 1);
                    }
                    break;
                }
                else if (times[mid].first <= times[i].second) {
                    ans[i] = max(ans[i] , maxx[mid] + 1);
                    left = mid + 1;
                }
                else {
                    right = mid - 1;
                }
            }
            maxx[i] = max(maxx[i-1] , ans[i]);
        }
    }
    cout<<maxx[n-1]<<endl;
}

