#include <bits/stdc++.h>
using namespace std;

namespace {

	#define ll long long
	#define ld long double
	#define ull unsigned long long
	#define pl pair<ll,ll>
	#define vec(type) vector<type>
	#define all(cont) begin(cont), end(cont)
	#define ps push_back
	#define pp pop_back
	#define ff first
	#define ss second
	#define sz(cont) ((long long) (cont).size())
	
	#define rep(itr, start, end) \
		for (int itr = (start); itr < (end); ++itr)
	#define reps(itr, start, end, step) \
		for (int itr = (start); itr < (end); itr += (step))
	
	#define rep0(itr, end) rep(itr, 0, end)
	#define reps0(itr, end, step) rep(itr, 0, end, step)
	
	#define rev(itr, start, end) \
		for (int itr = (start-1); itr >= (end); --itr)
	#define revs(itr, start, end, step) \
		for (int itr = (start-1); itr >= (end); itr -= (step))
	
	#define rev0(itr, start) rep(itr, start, 0)
	#define revs0(itr, start, step) rep(itr, start, 0, step)

	#define each(it, cont) for (auto &it : cont)

	#define itr(it, cont) \
		for (auto it = begin(cont); it != end(cont); ++it)
	#define itrr(it, cont) \
		for (auto it = rbegin(cont); it != rend(cont); ++it)

	template <class T>
	constexpr T& minof(T& a, T& b) {
		if (b < a) a = b;
		return a;
	}

	template <class T>
	constexpr T& maxof(T& a, T& b) {
		if (b > a) a = b;
		return a;
	}

	void sf() {}
	template <class T, class... TT>
	void sf(T& t, TT&... tt) {
		cin >> t; sf(tt...);
	}

	string sep = " ";
	string enl = "\n";

	template <class T>
	ostream& operator<< (ostream& out, const vector<T> &obj) {
		for (auto j = obj.begin(), i = j++; i != obj.end(); ++i, ++j) {
			out << *i;
			if (j != obj.end()) {
				out << sep;
			}
		}
		return out;
	}

	template <class T> void pf(const T& t) {
		cout << t << enl;
	}
	template <class T, class... TT>
	void pf(const T& t, const TT&... tt) {
		cout << t << sep; pf(tt...);
	}
	template <class... T>
	void pff(string _sep, string _enl, const T&... t) {
		swap(sep, _sep); swap(enl, _enl); pf(t...);
		swap(sep, _sep); swap(enl, _enl);
	}
	template <class... T> void pf1(const T&... t) {
		enl = " "; pf(t...); enl = "\n";
	}
	
	#ifndef ONLINE_JUDGE
		#define df(x) cerr << #x <<" "; _df(x); cerr << '\n';
	#else
		#define df(x)
	#endif

	void _df(ll t) { cerr << t; }
	void _df(int t) { cerr << t; }
	void _df(string t) { cerr << t; }
	void _df(char t) { cerr << t; }
	void _df(ld t) { cerr << t; }
	void _df(double t) { cerr << t; }
	void _df(ull t) { cerr << t; }

	template <class T> void _df(const set<T> &v);
	template <class T> void _df(const vector<T> &v);
	template <class T> void _df(const multiset<T> &v);
	template <class T, class V> void _df(const map<T, V> &v);
	template <class T, class V> void _df(const pair<T, V> &p);
	
	template <class T, class V> void _df(const pair<T, V> &p) {
		cerr << "{"; _df(p.ff);
		cerr << ","; _df(p.ss);
		cerr << "}";
	}
	template <class T> void _df(const vector<T> &v) {
		cerr << "[ ";
		for (const T &i : v) {
			_df(i); cerr << " ";
		}
		cerr << "]";
	}
	template <class T> void _df(const set<T> &v) {
		cerr << "[ ";
		for (const T &i : v) {
			_df(i); cerr << " ";
		}
		cerr << "]";
	}
	template <class T> void _df(const multiset<T> &v) {
		cerr << "[ ";
		for (const T &i : v) {
			_df(i); cerr << " ";
		}
		cerr << "]";
	}
	template <class T, class V> void _df(const map<T, V> &v) {
		cerr << "[ ";
		for (auto i : v) {
			_df(i); cerr << " ";
		}
		cerr << "]";
	}
}

int testCases = 1;

const bool fastio = []() {

	#ifndef ONLINE_JUDGE
	    freopen("input", "r", stdin);
	    freopen("output", "w", stdout);
	    freopen("error", "w", stderr);
	#endif

	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	return 0;
}();

void solve();

////////////////////////////////////////////////////////////////////////////

int main() {
	// cin >> testCases;
	while (testCases--) solve();
}

void solve() {
	
	
}