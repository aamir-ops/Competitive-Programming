// Li Hong Sheng Gabriel's Competitive Programming Template v2017.9
#include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tag_and_trait.hpp>

//using namespace __gnu_pbds;
using namespace std;

#define ll long long
#define mp make_pair
#define eb emplace_back
#define pb push_back
#define em emplace
#define len(s) (int) s.length()
#define sz(v) (int) v.size()
#define p32 pair<int,int>
#define p64 pair<ll,ll>
#define pdd pair<double,double>
#define fi first
#define se second
#define repn(i,e) for(int i = 0; i < e; i++)
#define repsn(i,s,e) for(int i = s; i < e; i++)
#define rrepn(i,s) for(int i = s; i >= 0; i--)
#define rrepsn(i,s,e) for(int i = s; i >= e; i--)
#define v64 vector<ll>
#define v32 vector<int>
#define vp64 vector<p64>
#define vp32 vector<p32>
#define aprint(a,s) if(DRAFT) { cout << "DEBUG: "; repn(k,s) { cout << setw(4) << right << a[k] << " "; } cout << endl; }
#define mprint(aa,rn,cn) if(DRAFT) { repn(i,rn) { aprint(aa[i],cn); } cout << endl; }
#define vprint(a) if(DRAFT) { cout << "DEBUG: "; repn(k,sz(a)) { cout << setw(4) << right << a[k] << " "; } cout << endl; }
#define vrprint(a,b) if(DRAFT) { cout << "DEBUG: "; repn(k,b) { cout << setw(4) << right << a[k] << " "; } cout << endl; }
#define vvprint(a) if(DRAFT) repn(i,sz(a)) { cout << "DEBUG: " << i << ": "; repn(j,sz(a[i])) { cout << setw(4) << right << a[i][j] << " "; } cout << endl; }
#define vvrprint(a,b) if(DRAFT) repn(i,b) { cout << "DEBUG: " << i << ": "; repn(j,sz(a[i])) { cout << setw(4) << right << a[i][j] << " "; } cout << endl; }
#define value(a) if(DRAFT) { cout << "DEBUG: The value of " << #a << " is " << a << endl; }
#define valuep(p) { if(DRAFT) cout << "DEBUG: " << "( " << p.fi << ", " << p.se << " )" << endl; }
#define dmsg(s) { if(DRAFT) cout << "MESSAGE: " << s << endl; }
#define inf32 INT_MAX
#define inf64 LLONG_MAX
#define all(a) a.begin(),a.end()
#define UM unordered_map
#define US unordered_set
#define EPS 1e-10
#define breakl "\n"
#define MOD 1000000007
#define lcstring(s) transform(all(s), s.begin(), ::tolower)
#define ucstring(s) transform(all(s), s.begin(), ::toupper)
#define lcchar(c) ((char) tolower(c))
#define ucchar(c) ((char) toupper(c))
#define islcchar(c) (c >= 'a' && c <= 'z')
#define isucchar(c) (c >= 'A' && c <= 'Z')

// Uncomment the include files, namespace and type to use
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> AVL;
// Usage for AVL:
// set functions, rank and select:
//select: cout<<*X.find_by_order(>=1)<<endl;
//rank: cout<<X.order_of_key(>=1)<<endl;

inline void scale(int x) { cout.precision(x); cout << fixed; }
//double dist(pdd x,pdd y) { return sqrt((x.fi-y.fi)*(x.fi-y.fi)+(x.se-y.se)*(x.se-y.se)); }
ll lpow(ll x, int y) { if(!y)return 1;ll t=lpow(x,y/2);if(y&1)return(y>0)?x*t*t:(t*t)/x;return t*t; }
int ipow(int x, int y) { if(!y)return 1;int t=ipow(x,y/2);if(y&1)return(y>0)?x*t*t:(t*t)/x;return t*t; }

void split(vector<string> &tmp,string &line,char * buffer,char delim=' ') {
	strcpy(buffer,line.c_str()); // buffer length must be at least |line| + 1
	char * token = strtok(buffer,&delim);
	while(token != 0) {
		tmp.eb(string(token)); // tokens are stored in tmp vector
		token = strtok(NULL,&delim);
	}
}

inline void fastio(int debug) {
	if(debug) {
		cout << "DEBUGGING MODE..." << endl;
		freopen("in","r",stdin);
	} else {
		ios_base::sync_with_stdio(false), cin.tie(0);
	}
}

// End of Template

bool DRAFT = 1; // DO NOT REMOVE THIS LINE

#define MOD2 1000000009

int t;
ll n;

int powMod(int a, int b, int MODULO) {
	if (b == 0) return 1;
	long long res = powMod(a, b / 2, MODULO);
	res = (res * res) % MODULO;
	return (int) ((b & 1) ? a * res % MODULO : res);
}

int invMod(int a, int MODULO) {
	return powMod(a, MODULO - 2, MODULO) % MODULO;
}

int main(void) {
	fastio(0);
	cin >> t;
	while(t--) {
		cin >> n;
		ll n1 = n % MOD, n2 = n % MOD2;
		ll p1 = n1 * (n1 - 1) % MOD, q1 = invMod((4*n1 - 6 + MOD) % MOD, MOD);
		ll p2 = n2 * (n2 - 1) % MOD2, q2 = invMod((4*n2 - 6 + MOD2) % MOD2, MOD2);
		cout << p1*q1%MOD << " " << p2*q2%MOD2 << breakl;
	}
	return 0;
}
