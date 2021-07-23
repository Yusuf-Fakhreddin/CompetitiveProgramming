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

int n, m,cntr ;
int arr1[N],arr2[N];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /*
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    */
  cin >> n >> m  ;

  for (int i=0;i<n;i++)
  {
    cin >> arr1[i];
  }

  for (int i=0;i<m;i++)
  {
    cin >> arr2[i];
  }
  
  for (int i=arr1[n-1];i<=arr2[0];i++)
  {
    bool flag = true;
    for (int j=0;j<n;j++)
    {
      if(i%arr1[j]!=0)
      {
      flag=false;
      break;
      }
    }
    if(!flag)continue;
    for (int j=0;j<m;j++)
    {
      if(arr2[j]%i!=0)
      {flag=false;
      break;}

    }
    if(flag) cntr++;

  }

  cout << cntr;


    return 0;
}