#include "iostream"

#define REP(i, n) for(int i = 0; i < n; i++)

using namespace std;

int polyValue(int a, int b, int c, int x) {
	return (a * x * x + b * x + c);
}

int main()
{
	int t, a, b, c, k, x;
	cin >> t;
	while(t--) {
		bool found = false;
		cin >> a >> b >> c >> k;
		for (x = 0; ; ++x)
		{
			if (polyValue(a, b, c, x) >= k) {
				found = true;
				break;
			}
		}
		if (found) cout << x << '\n';
	}
	return 0;
}