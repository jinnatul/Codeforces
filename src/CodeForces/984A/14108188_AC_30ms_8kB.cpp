#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long int ll;


//Int data type
#define sc1(a)              scanf("%d", &a)
#define sc2(a, b)           scanf("%d %d", &a, &b)
#define sc3(a, b, c)        scanf("%d %d %d", &a, &b, &c)
#define sc4(a, b, c, d)     scanf("%d %d %d %d", &a, &b, &c, &d)

//Long Data type
#define scl1(a)             scanf("%lld", &a)
#define scl2(a, b)          scanf("%lld %lld", &a, &b)
#define scl3(a, b, c)       scanf("%lld %lld %lld", &a, &b, &c)
#define scl4(a, b, c, d)    scanf("%lld %lld %lld %lld", &a, &b, &c, &d)



int main(){

    ll i=1,j=0,n,m,t,a=1,b,ck=0,ln;
    scl1(n);
    ll arr[n];

    for(i=0; i<n; i++)
        scl1(arr[i]);
    sort(arr, arr+n);

    if(n%2==0){
        cout<<arr[n/2-1]<<endl;
    }
    else{
        cout<<arr[n/2]<<endl;
    }
}
