#include "iostream"
#include "string"
#include "set"

#define REP(i, n) for(int i = 0; i < n; i++)

using namespace std;

int main()
{
	int n, t;
	cin >> t;

	while(t--){
		set<string> namelist;
		set<string>::iterator it;
		string name;
		cin >> n;
		REP(i, n) {
			cin >> name;
			namelist.insert(name);
		}
		for (it = namelist.begin(); it != namelist.end(); ++it)
			cout << *it << '\n';
	}	
	return 0;
}