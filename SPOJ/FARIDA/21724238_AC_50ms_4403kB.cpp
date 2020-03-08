#include<bits/stdc++.h>

using namespace std;

#pragma GCC optimize("Ofast,no-stack-protector")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")
#define FastIO      ios_base::sync_with_stdio(false); cin.tie(0);

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n",a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define vpnt(ans) for(ll i = 0; i < ans.size(); i++) cout << ans[i] << (i + 1 < ans.size() ? ' ' : '\n');
#define apnt(arr, num) for(ll i = 0; i < num; i++) cout << arr[i] << (i + 1 < num ? ' ' : '\n');

#define mx 100007
#define mod 100000007
#define PI acos(-1.0)
#define size1 10005

#define no cout << "NO" << endl
#define yes cout << "YES" << endl
#define clr(x,a)    memset(x,a,sizeof(x))

#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define case cout << "Case " << t++ << ": ";

typedef vector <ll> vll;
typedef vector <vll> vvll;
typedef map <ll, ll> mll;
typedef pair <ll, ll> pll;
typedef vector <pair <ll, ll> > vpll;

ll m, n, tc, num, t = 1;

ll arr[size1], dp[size1];

ll call(ll i) {

    if(i >= num) return 0;

    if(dp[i] != 0) return dp[i];

    ll mx1 = call(i + 1);
    ll mx2 = call(i + 2) + arr[i];

    return dp[i] = max(mx1, mx2);
}


int main()
{
    FastIO;
    #ifndef ONLINE_JUDGE
         freopen("/opt/Coding/clion code/input.txt", "r", stdin);
         //freopen("/opt/Coding/clion code/output.txt", "w", stdout);
    #endif

    sc1(tc);
    while (tc--){

        clr(arr, 0);

        sc1(num);
        for (ll i = 0; i < num; ++i) {
            sc1(arr[i]);
        }

        clr(dp, 0);

        cout << "Case " << t++ << ": ";
        cout << call(0) << endl;
    }
}