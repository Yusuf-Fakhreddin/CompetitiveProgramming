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

string s ; 
int cntr;
char arr[4]={'S','O','S'};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /*
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    */

   cin >> s ;
  for (int i=0;i<s.length();i+=3)
  {
    if(s[i]!=arr[0]) cntr++;
    if(s[i+1]!=arr[1]) cntr++;
    if(s[i+2]!=arr[2]) cntr++;
  }
  cout << cntr;
return 0 ;}