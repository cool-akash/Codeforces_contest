#include<bits/stdc++.h>
using namespace std;

#define ff              first
#define ss              second
#define int             long long
#define float           double
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mi              map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountint(x)
#define zrobits(x)      __builtin_ctzint(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define W(x)            int x; cin>>x; while(x--)
#define fr(i, x, y)     for (long long i = x; i < y; i++)
#define Fr(i, x, y)     for (long long i = x; i >= y; i--)
#define fe(x,v)         for(auto x:v)
#define nl              "\n"
#define M               32
#define ti(type ,var)   type var;cin>>var;
#define tii(n)          int n;cin>>n;

template <typename T>
T * ta(T a[], int n) {
	fr(i, 0, n)cin >> a[i];
	return a;
}

void solution(int a, int b, int n)
{
	// traverse for all possible values
	for (int i = 0; i * a <= n; i++) {

		// check if it is satisfying the equation
		if ((n - (i * a)) % b == 0) {
			cout << "YES" << nl;
			return;
		}
	}

	cout << "NO" << nl;
}

int32_t main()
{

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	///////////////////////////////////////////////////////<<CODE BEGIN HERE>>

	W(t) {
		int n; cin >> n;
		solution(11, 111, n);
	}

//////////////////////////////////////////////////////////////////////////
	return 0;
}

