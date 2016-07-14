#include "iostream"

#define REP(i, n) for(int i = 0; i < n; i++)

using namespace std;

int main()
{
	int t, n;
	cin >> t;
	while(t--) {
		cin >> n;
		long long int a1[n], a2[n];
		REP(i, n) cin >> a1[i];
		REP(i, n) cin >> a2[i];

		int j = 0; int k = 0; int monkiness = 0;
		while(j < n && k < n) {
			if (k < j) {k++; continue;}
			if (a2[k] < a1[j]) {j++; continue;}
			if (k - j > monkiness) monkiness = k - j; 
			k++;
		}
		cout << monkiness << '\n';
	}
	return 0;
}