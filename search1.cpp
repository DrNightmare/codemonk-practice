#include "iostream"
#include "vector"
#include "algorithm"

#define REP(i, n) for(int i = 0; i < n; i++)

using namespace std;

int main()
{
	int n, q, x, e;
	cin >> n >> q;
	vector<int> v;

	REP(i, n) { cin >> e; v.push_back(e);}
	sort(v.begin(), v.end());
	for (int i = 0; i < q; ++i)
	{
		bool found = false;
		cin >> x;
		if (binary_search(v.begin(), v.end(), x)) cout << "YES\n";
		else cout << "NO\n";
	}
		
	return 0;
}