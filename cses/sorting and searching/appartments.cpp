#include <bits/stdc++.h>


using namespace std;
#define ll long long int
#define pb push_back
#define endl "\n"

void print_vector(vector<ll> v) {
    for(auto x: v){
        cout<<x<<" ";
    }
    cout<<endl;
}

int main() {
    ll n, m , k;
    cin>>n>>m>>k;
    vector<ll> a(n);
    vector<ll> b(m);
    for(int i=0;i<n;i++)  {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)  {
        cin>>b[i];
    }
    sort(a.begin() , a.end());
    sort(b.begin() , b.end());
//    print_vector(a);
//    print_vector(b);
    ll a_pointer = 0;
    ll b_pointer = 0;
    ll ans = 0;
    while( a_pointer < n && b_pointer < m)    {
        if (a[a_pointer] + k < b[b_pointer] ) {
            a_pointer++;
        } else if (b[b_pointer] < a[a_pointer] - k ){
           b_pointer++;
        }else {
            a_pointer++; b_pointer++;
            ans++;
        }
    }
    cout<<ans<<endl;
}

