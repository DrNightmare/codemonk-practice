#include "iostream"
#include "queue"

#define REP(i, n) for(int i = 0; i < n; i++)

using namespace std;

int main()
{
	int n, x;
	queue<int> callingOrder;
	queue<int> idealOrder;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> x;
		callingOrder.push(x);
	}
	for (int i = 0; i < n; ++i)
	{
		cin >> x;
		idealOrder.push(x);
	}
	int count = 0;
	while(callingOrder.size() > 0) {
		if (callingOrder.front() == idealOrder.front()) {
			callingOrder.pop();
			idealOrder.pop();
		}
		else {
			int e = callingOrder.front();
			callingOrder.pop();
			callingOrder.push(e);
		}
		count++;
	}
	cout << count << '\n';
	return 0;
}