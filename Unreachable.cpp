//http://codechef.com/problems/BLREACH
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define f(i,n) for(long long i=0;i<n;i++)
#define v(a,n) vector<long long>a(n);

void solve() {
    ll n;
    cin >>n;
    v(a,n);
    bool c=false;
    bool b=false;
    f(i,n){
        cin >> a[i];
        if(a[i]==1){ 
            if(i%2==0)
            c=true;
        else b=true;
        }
    }
    if(c&&b)
    cout<<"No"<<endl;
    else 
    cout<<"Yes"<<endl;
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
