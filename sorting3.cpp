// Solution for the problem 'Chandu and his Girlfriend Returns'
#include "iostream"

#define REP(i, n) for(int i = 0; i < n; i++)

using namespace std;

void printarray(int array[], int n) {
	for (int i = 0; i < n; ++i)
		cout << array[i] << ' ';
	cout << '\n';
}

int main()
{
	int n, m, t;

	cin >> t;
	while(t--) {
		cin >> n >> m;
		int sorted1[n];
		int sorted2[m];
		int merged[n + m];

		REP(i, n) cin >> sorted1[i];
		REP(i, m) cin >> sorted2[i];

		int j = 0; int k = 0; int i = 0;

		while(j < n && k < m)
		{
			if (sorted1[j] > sorted2[k]) merged[i++] = sorted1[j++];
			else merged[i++] = sorted2[k++];
		}
		while(j < n) {
			merged[i++] = sorted1[j++];
		}
		while(k < m) {
			merged[i++] = sorted2[k++];
		}

		printarray(merged, n + m);
	}

	return 0;
}