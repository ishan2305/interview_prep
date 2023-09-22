#include <bits/stdc++.h>

using namespace std;
#define ll long long int
#define pb push_back
#define endl "\n"

int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin() , v.end());
    int different_numbers = 1;
    for (int i=1;i<n;i++){
       if (v[i] != v[i-1]){
           different_numbers++;
       }
    }
    cout<<different_numbers<<endl;
}