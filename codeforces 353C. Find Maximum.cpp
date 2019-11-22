#include<bits/stdc++.h>

using namespace std;

#pragma GCC optimize("Ofast,no-stack-protector")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n",a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define vpnt(ans) for(ll i = 0; i < ans.size(); i++) cout << ans[i] << (i + 1 < ans.size() ? ' ' : '\n');
#define apnt(arr, num) for(ll i = 0; i < num; i++) cout << arr[i] << (i + 1 < num ? ' ' : '\n');

#define mx 100007
#define mod 1000000007
#define PI acos(-1.0)
#define size1 10001

#define no cout << "NO" << endl
#define yes cout << "YES" << endl

#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define case cout << "Case " << t++ << ": ";

typedef vector <ll> vll;
typedef set <ll> sll;
typedef map <ll, ll> mll;
typedef pair <ll, ll> pll;
typedef vector <pair <ll , ll> > vpll;


int main() {

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);

    ll m, tc, num, t = 1;

    sc1(num);

    ll arr[num], pre[num + 1];
    for (ll i = 0; i < num; ++i) {
        sc1(arr[i]);
    }

    string str;
    cin >> str;

    memset(pre, 0, sizeof(pre));
    for (ll i = 0; i < num; ++i) {
        pre[i + 1] = pre[i] + arr[i];
    }

    ll ans = 0, presum = 0;
    for (ll i = num - 1; i >= 0; i--) {
        if(str[i] == '1') {
            ans = max(ans, presum + pre[i]);
            presum += arr[i];
        }
    }

    ans = max(ans, presum);
    pf1(ans);
}
