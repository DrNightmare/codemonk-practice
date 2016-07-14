// Solution for the problem 'Prateek and his Friends'
#include "iostream"

#define REP(i, n) for(int i = 0; i < n; i++)

using namespace std;

bool subSum(long long int array[], long long int n, long long int sum) {
	long long int curr = array[0];
	int i;
	int start;
	start = 0;

	for(i = 1; i <= n; i++) {
		while(curr > sum && start < i-1) {
			curr -= array[start++];
		}
		if (curr == sum) return true;
		if (i < n) curr += array[i];
	}
	return false;
}

int main()
{
	int t;
	long long int x, i, n;
	cin >> t;

	while(t--) {
		cin >> n >> x;
		long long int costs[n];
		for (i = 0; i < n; ++i) cin >> costs[i];
		if (subSum(costs, n, x)) cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;
}