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

int x1,v1,x2,v2;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /*
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    */
   cin >> x1>>v1>>x2>>v2; 
   if( v2-v1!=0 && (x1-x2)%(v2-v1)==0 &&(x1-x2)/(v2-v1)>=0 )
  cout << "YES" ;
  else {
    cout << "NO";
  }

    return 0;
}