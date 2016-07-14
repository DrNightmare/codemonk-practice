// Solution for the problem 'Terrible Chandu'
#include "iostream"
#include "string"

#define REP(i, n) for(int i = 0; i < n; i++)

using namespace std;

int main()
{
	int t;
	string inpString;
	cin >> t;

	while(t--) {
		cin >> inpString;
		for (int i = inpString.size() - 1; i >= 0; --i)
		{
			cout << inpString[i];
		}
		cout << '\n';
	}

	return 0;
}