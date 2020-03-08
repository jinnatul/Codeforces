#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long int ll;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(0);
#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)
#define sc3(a,b,c) scanf("%lld %lld %lld",&a,&b,&c)

#define pf1(a) printf("%lld\n",a)
#define pf2(a,b) printf("%lld %lld\n",a,b)
#define pf3(a,b,c) printf("%lld %lld %lld\n",a,b,c)

#define fr1(n) for(i=0;i<n;i++)
#define fr2(n) for(i=1;i<n;i++)
#define fr3(i,a,b) for(i=a;i<=b;i++)

/*primes in range 1 - n
1 - 100(1e2) -> 25 primes
1 - 1000(1e3) -> 168 primes
1 - 10000(1e4) -> 1229 primes
1 - 100000(1e5) -> 9592 primes
1 - 1000000(1e6) -> 78498 primes
1 - 10000000(1e7) -> 664579 primes
large primes ->
104729 1299709 15485863 179424673 2147483647 32416190071 112272535095293 48112959837082048697
*/

#define mx 1000005
#define mod 1000000007


#define for1(a,b) for(ll i=a; i<b; i++)
#define rev(v) reverse(v.begin(),v.end())
#define srt(v) sort(v.begin(),v.end())
#define grtsrt(v) sort(v.begin(),v.end(),greater<ll>())

char allNumber_1_To_1000[3000] = "1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253545556575859606162636465666768697071727374757677787980818283848586878889909192939495969798991001011021031041051061071081091101111121131141151161171181191201211221231241251261271281291301311321331341351361371381391401411421431441451461471481491501511521531541551561571581591601611621631641651661671681691701711721731741751761771781791801811821831841851861871881891901911921931941951961971981992002012022032042052062072082092102112122132142152162172182192202212222232242252262272282292302312322332342352362372382392402412422432442452462472482492502512522532542552562572582592602612622632642652662672682692702712722732742752762772782792802812822832842852862872882892902912922932942952962972982993003013023033043053063073083093103113123133143153163173183193203213223233243253263273283293303313323333343353363373383393403413423433443453463473483493503513523533543553563573583593603613623633643653663673683693703713723733743753763773783793803813823833843853863873883893903913923933943953963973983994004014024034044054064074084094104114124134144154164174184194204214224234244254264274284294304314324334344354364374384394404414424434444454464474484494504514524534544554564574584594604614624634644654664674684694704714724734744754764774784794804814824834844854864874884894904914924934944954964974984995005015025035045055065075085095105115125135145155165175185195205215225235245255265275285295305315325335345355365375385395405415425435445455465475485495505515525535545555565575585595605615625635645655665675685695705715725735745755765775785795805815825835845855865875885895905915925935945955965975985996006016026036046056066076086096106116126136146156166176186196206216226236246256266276286296306316326336346356366376386396406416426436446456466476486496506516526536546556566576586596606616626636646656666676686696706716726736746756766776786796806816826836846856866876886896906916926936946956966976986997007017027037047057067077087097107117127137147157167177187197207217227237247257267277287297307317327337347357367377387397407417427437447457467477487497507517527537547557567577587597607617627637647657667677687697707717727737747757767777787797807817827837847857867877887897907917927937947957967977987998008018028038048058068078088098108118128138148158168178188198208218228238248258268278288298308318328338348358368378388398408418428438448458468478488498508518528538548558568578588598608618628638648658668678688698708718728738748758768778788798808818828838848858868878888898908918928938948958968978988999009019029039049059069079089099109119129139149159169179189199209219229239249259269279289299309319329339349359369379389399409419429439449459469479489499509519529539549559569579589599609619629639649659669679689699709719729739749759769779789799809819829839849859869879889899909919929939949959969979989991000";

/************ Start my personal Library ************/
// Square number count in 2 number range (3 - 10)--> 2
/*
#define Square_number_count_in_2_rang(n) for(ll i=0; i<n; i++){ scl2(a,b); ck = sqrt(a-1); dk = sqrt(b); cout<<dk-ck<<endl; }

int sum[mx];
ll max(ll a, ll b){  return (a>b) ? a : b; }

ll knapsack(ll cap,ll wt[],ll val[],ll item){ if(cap==0 || item == 0) return 0; if(wt[item-1]>cap) return knapsack(cap, wt, val, item-1);
   else return max(val[item-1]+ knapsack(cap-wt[item-1], wt, val, item-1), knapsack(cap, wt, val, item-1) ); }

ll totalLearYearCount(ll year){ ll check4 = year/4; ll check100 = year/100; ll check400 = year/400; return (check4 + check400) - check100; }

ll checkTwoSquaresOrNotTwoSquares(ll n ){ ll a = sqrt(n),ck=0,i=0,j=0; while(a > 0){ if(i*i > n){ cout<<"No"<<endl; break; } else if(a*a + i*i == n){
   cout<<"Yes"<<endl; break; } else if(a*a + i*i < n){ i++; } else a--; } }

bool checkPrime(int n) { int i; if(n<=1)return false; for(i=2;i*i<=n;i++){ if(n%i==0)return false; } return true; }
void primeSaveinArray() { sum[0] = sum[1]=0; for(int i=2; i<=mx; i++){ sum[i] = sum[i-1]; if(checkPrime(i)){ sum[i]++; } } }

ll revNumber(ll n) { ll b=0; while(n!=0){ b = b*10 + n%10; n/=10; } return b; }

ll learYearCheck(ll year) { if(year%4!=0) return 0; else if(year%100!=0) return 1; else if(year%400!=0) return 0; else return 1; }

ll countDevisior(ll n) { ll ck=0; for(ll i=1; i*i<=n; i++){ if(n%i==0){ ck++; if(i!=n/i) ck++; } } return ck; }

ll primeFactorsCount(ll n){ ll gf =0;  while (n%2 == 0) { gf++; n = n/2; } for (ll i = 3; i <= sqrt(n); i = i+2) { while (n%i == 0) { gf++;  n = n/i; } } if (n > 2){ gf++; } return gf; }

ll factorial(ll n) { if(n == 1) return 1; return n*factorial(n-1); }

ll binarySearch(ll high, ll sV, ll arr[]) { ll low = 0; while(low<=high){ ll mid = (high+low)/2; if(sV == arr[mid]) return mid+1; else if(sV > arr[mid]) low = mid+1; else high = mid-1; } return -1; }


/************ Start my main method code ************/

char ar[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

bool com(pair<string ,string> a , pair<string, string> b ){
     if(a.second==b.second) return a.first < b.first;
     return a.second < b.second; }  /// kom theke beshi sort ///return p.first > q.first; /// beshi theke kom sort

vector<ll>vc;
vector<pair<string, string> >vcp;
map<char, ll>mp,mp2;
map<char, ll>::iterator it,it2;
set<string>my1;

ll checkprime[mx];
vector<ll>prime;

void sieve()
{
    ll n,i,j;
    for(i=4; i<mx; i+=2) checkprime[i] = 1;
    for(i=3; i*i<=mx; i+=2){
        if(checkprime[i]==0){
            for(j=i*i; j<mx; j+=(i+i))
                checkprime[j] = 1;
        }
    }
    for(i=2; i<mx; i++) if(!checkprime[i]) prime.push_back(i);
}

ll rr[26];

int main()
{
    FastIO;
    //sieve();
    ll n,m,t,c,i,j=0,k,ck=0,dk=0,a,b;

    string arr;
    cin>>arr;
    n = arr.size();
    for(i=0; i<n; i++){
        rr[arr[i] - 'a']++;
    }
    sort(rr, rr+26);

    ll xx = 0;
    for(i = 25; i>=0; i--){
        if(rr[i] > 0){
            if(xx<2) xx++;
            else ck+= rr[i];
        }
    }

    cout<<ck<<endl;

}
