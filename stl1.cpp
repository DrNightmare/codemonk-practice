#include "iostream"
#include "set"

#define REP(i, n) for(int i = 0; i < n; i++)

using namespace std;

int main()
{
	int t, n, m;
	long long int x;
	cin >> t;
	while(t--){
		set<long long int> candies;
		set<long long int>::iterator it;
		cin >> n >> m;
		REP(i, n) {cin >> x; candies.insert(x);}
		REP(i, m) {
			cin >> x;
			it = candies.find(x);
			if (it == candies.end()) cout << "NO\n";
			else cout << "YES\n";
			candies.insert(x);
		}
	}
	return 0;
}