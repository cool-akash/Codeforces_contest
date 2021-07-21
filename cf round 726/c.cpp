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

int32_t main()
{

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	///////////////////////////////////////////////////////<<CODE BEGIN HERE>>
	W(t) {
		int n; cin >> n;
		int h[n + 1];
		fr(i, 0, n)cin >> h[i];
		sort(h, h + n);
		int k = 0;

		fr(i, 0, n - 1) {
			if (h[i] == h[i + 1]) {
				k = i;
				break;
			}
		}

		if (k != 0) {

			fr(i, k + 1, n) {
				cout << h[i] << " ";
			}

			fr(i, 0, k + 1)
			cout << h[i] << " ";
			cout << nl;
			continue;
		}

		int d = 0;
		int m = INT_MAX;
		int di = -1;
		fr(i, 1, n) {
			d = h[i] - h[i - 1];
			if (d < m) {
				m = min(m, d);
				di = i;
			}
		}
		cout << h[di - 1] << " ";
		if (di + 1 < n)
			fr(i, di + 1, n) {
			cout << h[i] << " ";
		}
		fr(i, 0, di - 1) {
			cout << h[i] << " ";
		}
		cout << h[di] << nl;

	}

	//////////////////////////////////////////////////////////////////////////
	return 0;
}

