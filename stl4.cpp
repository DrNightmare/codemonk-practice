#include "iostream"
#include "queue"

#define REP(i, n) for(int i = 0; i < n; i++)

using namespace std;

int main()
{
	int n, k, t;
	cin >> t;
	while(t--){
		long long int x;
		priority_queue<long long int> candies;
		long long int sum = 0;
		cin >> n >> k;
		REP(i, n) {cin >> x; candies.push(x);}
		REP(i, k) {
			long long int temp = candies.top();
			candies.pop();
			candies.push(temp/2);
			sum += temp;
		}
		cout << sum << '\n';
	}
	return 0;
}