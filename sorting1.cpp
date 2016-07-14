// Solution for the problem 'Chandu and his Girlfriend'
#include "iostream"
#include "algorithm"

#define REP(i, n) for(int i = 0; i < n; i++)

using namespace std;

void printArrayReverse(long long int array[], int n) {
	for (int i = n - 1; i >= 0; --i)
		cout << array[i] << ' ';
	cout << '\n';
}

int main()
{
	int n, t;
	cin >> t;

	while(t--) {
	 	cin >> n;
	 	long long int array[n];
	 	REP(i, n) cin >> array[i];
	 	sort(array, array + n);
	 	printArrayReverse(array, n);
	}
	return 0;
}