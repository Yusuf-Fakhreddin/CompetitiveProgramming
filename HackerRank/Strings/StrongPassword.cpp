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
 
string s;
bool length , digit,lower,upper,special ;
int cntr,n;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /*
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    */
   cin >> n;
   cin>> s ;
   for (int i=0;i<n;i++)
   {
     if(s[i]>=65&&s[i]<=90)
     upper=true;
     else if(s[i]>=97&&s[i]<=122)
     lower=true;
    else if (s[i] >= 48 && s[i] <= 57)
       digit=true;
    else special=true;
   }
  if(!digit) cntr++;
  if(!lower) cntr++;
  if(!upper) cntr++;
  if(!special) cntr++;

  if(n+cntr>=6) {
    cout << cntr;
  }

else
 cout << (cntr) + 6-(n+cntr) ;


    return 0;
}