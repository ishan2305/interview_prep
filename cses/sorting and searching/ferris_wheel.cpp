#include <bits/stdc++.h>


using namespace std;
#define ll long long int
#define pb push_back
#define endl "\n"

int main() {
    ll n , x;
    cin>>n>>x;
    vector<ll> v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    ll start_pointer = 0 , end_pointer = n-1;
    ll count = 0;
    while (start_pointer < end_pointer) {
        while(start_pointer < end_pointer && v[start_pointer] + v[end_pointer] > x) {
            end_pointer--;
        }
        if (start_pointer >= end_pointer) {
            break;
        } else {
            count++;
            start_pointer++;
            end_pointer--;
        }
    }
    cout<<n - count<<endl;
}
