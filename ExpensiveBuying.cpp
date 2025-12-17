//http://codechef.com/viewsolution/1196072653
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define f(i,n) for(long long i=0;i<n;i++)
#define v(a,n) vector<long long>a(n);

void solve() {
    ll n,k;
    cin >> n >> k;
    v(a,n);
    f(i,n){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    ll j=n-1;
    ll sum=0;
    f(i,k){
        sum+=a[j];
        j--;
    }
    cout<<sum<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
