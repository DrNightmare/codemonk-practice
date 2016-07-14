#include "iostream"
#include "stack"

#define REP(i, n) for(int i = 0; i < n; i++)

using namespace std;

int main()
{
	int q, cost, qtype;
	stack<int> food;
	cin >> q;
	for (int i = 0; i < q; ++i)
	{
		cin >> qtype;
		if (qtype == 1) {
			if (food.size() == 0) {cout << "No Food\n";}
			else {cout << food.top() << '\n'; food.pop();}
		}
		else if (qtype == 2) {cin >> cost; food.push(cost);} 
	}
	return 0;
}