#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MX 10000008
#define lp(i, n) for (ll i = 0; i < n; i++)
const int N = 1e7 + 7; // 100,005
const long long INF = 1e18L + 5; // 10^18
const ll MOD = 1000000007 ;
#define X first
#define Y second
 
/*map<int,vector<int>> adj;
map<int,bool>visited;
long long d[N]; // distance from vertex 1
priority_queue<pair<int,int>>q;
*/

int s,t,a,b,m,n,d; 
int k,cntr1,cntr2;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /*
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    */

   cin >> s>>t >>a>>b>>m>>n;
   for(int i=0;i<m;i++)
   {
     cin >> k;
     if(k+a>=s&&k+a<=t)
     cntr1++;
   }

   for(int i=0;i<n;i++)
   {
     cin >> k;
     if(k+b>=s&&k+b<=t)
     cntr2++;
   }
   cout << cntr1 << endl << cntr2 ;

    return 0;
}