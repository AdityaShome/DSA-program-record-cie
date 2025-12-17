//https://www.codechef.com/START206D/problems/BUYING7
#define ll long long
#define ld long double
#define f(i,n) for(long long i=0;i<n;i++)
#define v(a,n) vector<long long>a(n);

void solve() {
    ll n;
    cin >> n;
    ll maxi=((n-1)*(n-2))/2;
    ll mini=max((ll)0,n-2);
    cout<<mini<<" "<<maxi<<endl;
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
