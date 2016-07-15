#include "iostream"

#define REP(i, n) for(int i = 0; i < n; i++)

using namespace std;

int main()
{
	int n, d, sum, mn;
	mn = 1001;
	sum = 0;
	cin >> n;
	REP(i, n) {cin >> d; mn = min(mn, d); sum += d;}
	(sum == 2 * (n-1))?cout << "Yes\n":cout << "No\n";
	return 0;
}