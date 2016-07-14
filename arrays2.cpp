// Solution for the problem 'Chandu and Consecutive Letters'
#include "iostream"
#include "string"

#define REP(i, n) for(int i = 0; i < n; i++)

using namespace std;

int main()
{
	string badString, goodString;
	int t;

	cin >> t;

	while(t--) {
		goodString = "";
		cin >> badString;
		goodString.push_back(badString[0]);

		for (int i = 1; i < badString.size(); ++i)
		{
			if (badString[i] != badString[i - 1]) {
				goodString.push_back(badString[i]);
			}
		}
		cout << goodString << '\n';
	}
	return 0;
}