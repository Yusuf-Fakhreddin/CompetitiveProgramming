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
 
int n,r,t,l;
int arr[N];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /*
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    */
   cin >> n ;
   for (int i=1;i<=n*n;i++)
   {
     cin >> arr[i];
   }
  for (int i=1;i<=n*n;i+=n+1)
  {
    r+=arr[i];
  }
  for (int i=n;i<n*n;i+=n-1)
  {
    l+=arr[i];
    // cout << arr[i] << " ";
  }
   r>=l? cout << r-l: cout << l-r;
  // cout << r << " " << l;
    return 0;
}