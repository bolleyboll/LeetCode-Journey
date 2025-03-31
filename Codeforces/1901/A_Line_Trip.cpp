// Author: Aman Gupta
// Created: 2025-02-27
// Updated: 2025-02-27
// Description: Template File for Codeforces
// Github: https://github.com/bolleyboll

// Basic Libraries
#include <bits/stdc++.h>
using namespace std;

// Definitions: Abbreviations of commonly used functions
#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert

// Definitions: Helper Functions
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define rep(i, a, b) for (int i = a; i < (b); i++)
#define per(i, a, b) for (int i = (b) - 1; i >= a; i--)
#define print_map(m)                                                     \
	for (const auto &[key, value] : m)                                   \
	{                                                                    \
		cout << '[' << key << ']' << ' ' << '=' << ' ' << value << '\n'; \
	}
#define print_vector(v)                          \
	int vadnfiv = 0;                             \
	for (const auto &value : v)                  \
	{                                            \
		cout << vadnfiv << ' ' << value << '\n'; \
		vadnfiv++;                               \
	}
#define start_time                       \
	using chrono::duration;              \
	using chrono::duration_cast;         \
	using chrono::high_resolution_clock; \
	using chrono::milliseconds;          \
	auto t1 = high_resolution_clock::now();
#define end_time                                 \
	auto t2 = high_resolution_clock::now();      \
	duration<double, milli> ms_double = t2 - t1; \
	cout << ms_double.count() << 'm' << 's' << nl;

// Definitions: Most Used
#define fastio                        \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);                    \
	cout.tie(NULL);
#define multicase \
	int t = 1;    \
	cin >> t;     \
	for (int test = 1; test <= t; test++)

// Constants
const int MOD = 1e9 + 7;
const int INF = 1e9;
const char nl = '\n';

// Definitions: Typedefs
typedef long long ll;
typedef long double ld;
typedef complex<ld> cld;

typedef pair<int, int> pi;
typedef pair<ll, ll> pll;
typedef pair<ld, ld> pd;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vll;
typedef vector<pi> vpi;
typedef vector<pll> vpll;
typedef vector<cld> vcld;

// Functions
bool isPrime(int n)
{
	if (n == 2 || n == 3)
	{
		return true;
	}
	if (n <= 1 || n % 2 == 0 || n % 3 == 0)
	{
		return false;
	}
	for (int i = 5; i * i <= n; i += 6)
	{
		if (n % i == 0 || n % (i + 2) == 0)
		{
			return false;
		}
	}
	return true;
}
bool isPalindrome(string S)
{
	string P = S;
	reverse(P.begin(), P.end());
	if (S == P)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool isPowerOf(long long num, long long base)
{
	if (num <= 0)
	{
		return false;
	}
	if (num % base == 0)
	{
		return isPowerOf(num / base, base);
	}
	if (num == 1)
	{
		return true;
	}
	return false;
}

// Template Classes
template <class T>
bool chkMin(T &a, const T &b) { return b < a ? a = b, 1 : 0; }
template <class T>
bool chkMax(T &a, const T &b) { return a < b ? a = b, 1 : 0; }

// Main Function
int main()
{
	fastio
	int t;
	cin >> t;
	while (t--)
	{
		int n, x;
		cin >> n >> x;
		int last = 0, res = 0;
		for (int i = 0; i < n; ++i)
		{
			int a;
			cin >> a;
			res = max(res, a - last);
			last = a;
		}
		res = max(res, 2 * (x - last));
		cout << res << '\n';
	}
	return 0;
}
