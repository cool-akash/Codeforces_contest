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

long long binpow(long long a, long long b, long long m) {
	a %= m;
	long long res = 1;
	while (b > 0) {
		if (b & 1)
			res = res * a % m;
		a = a * a % m;
		b >>= 1;
	}
	return res;
}

int32_t main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	///////////////////////////////////////////////////////<<CODE BEGIN HERE>>
	/*	// A
		W(t) {
			int n; cin >> n;
			int a[n + 1];
			int k = 0;
			fr(i, 0, n) {
				cin >> a[i];
				int x;
				x = sqrt(a[i]);
				if (x * x != a[i])k = -1;
			}
			if (k != -1)cout << "NO" << nl;
			else cout << "YES" << nl;
		}
	*/



	/*
		 // B
		W(t) {
			int n, k; cin >> n >> k;
			cout << binpow(n, k, mod) << nl;
		}

	*/



	/*  // C

		int n; cin >> n;
		int ans[n + 1] = {0};
		int p = 1;
		fr(i, 1, n) {
			if (__gcd(i, n) == 1) {
				ans[i] = 1;
				p = (p * i) % n;
			}
		}
		if (p != 1) {
			ans[p] = 0;
		}
		cout << count(ans, ans + n, 1) << nl;
		fr(i, 0, n) {
			if (ans[i] == 1)cout << i << " ";
		}
		cout << nl;
	*/
	//////////////////////////////////////////////////////////////////////////
	return 0;
}


