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

#define mx 100007
#define mod 100000007
#define PI acos(-1.0)

#define size1 12
#define pb push_back

int main()
{

    ll k, num, prime, m, tc, t = 4;

    sc1(num);

    ll arr[num];

    ll mn = INT_MAX, pos = 0;
    for(ll i = 0; i < num; i++){
        sc1(arr[i]);
        if(arr[i] >= 0) arr[i] = - arr[i] - 1;
        if(arr[i] < mn){
            mn = arr[i];
            pos = i;
        }
    }

    if(num & 1) arr[pos] = - arr[pos] - 1;

    for(ll i = 0; i < num; i++){
        cout << arr[i] << endl;
    }
}


OR


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
 
#define mx 100007
#define mod 100000007
#define PI acos(-1.0)
 
#define size1 12
#define pb push_back
 
int main()
{
 
    ll k, num, prime, m, tc, t = 4;
 
    sc1(num);
 
    ll arr[num];
 
    ll mn = INT_MAX;
    for(ll i = 0; i < num; i++){
        sc1(arr[i]);
        if(arr[i] >= 0) arr[i] = - arr[i] - 1;
        mn = min(mn, arr[i]);
    }
 
    if(num & 1){
        for(ll i = 0; i < num; i++){
            if(arr[i] == mn){
                arr[i] = -arr[i] - 1;
                break;
            }
        }
    }
 
    for(ll i = 0; i < num; i++){
        cout << arr[i] << endl;
    }
}
