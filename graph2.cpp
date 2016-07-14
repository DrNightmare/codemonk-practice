#include "iostream"
#include "set"

#define REP(i, n) for(int i = 0; i < n; i++)

using namespace std;

int main()
{
	set<int> cities;
	int t, e, x, y;
	cin >> t;
	while(t--){
		cin >> e;
		REP(i, e) {cin >> x >> y; cities.insert(x); cities.insert(y);}
		cout << cities.size() << '\n';
		cities.clear();
	}
	return 0;
}