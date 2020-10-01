#include <bits/stdc++.h>
#define int long long int
#define mod 1000000007
#define f(i,a,b) for(int i=a;i<b;i++)
#define rf(i,a,b) for(int i=a;i>=b;i--)
#define rep(i,n) f(i,0,n)
#define rrep(i,n) rf(i,n-1,0)
#define w(t) int t; cin>>t; while(t--)
#define vi vector<int>
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define mii map<int,int>
#define omi unordered_map<int,int>
#define mci map<char,int>
#define mmi multimap<int,int>
#define inf (int)(1e18)
using namespace std;

void fast_IO_file()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int32_t main()
{
	fast_IO_file();
	int n, flag = 0;
	cin >> n;

	int a[n]; // array 'a' stores the elements from input
	mii m; // To store frequencies of elements
	rep(i, n)
	{
		cin >> a[i];
		m[a[i]]++;
	}

	if (n == 1)
	{
		cout << "YES" << endl;
	}
	else
	{

		for (auto it : m)
		{
			if (it.ss > (n + 1) / 2)
			{
				flag = 1;
				break;
			}
		}

		if (flag)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}
	return 0;
}