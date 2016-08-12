#include "iostream"
#include "vector"

#define REP(i, n) for(int i = 0; i < n; i++)

using namespace std;

vector<long long int> adj[10000];
bool done[10000];
long long int sum;
long long int maxsum;
long long int bans[10000];

void dfs(int x) {
	done[x] = true;
	for (int i = 0; i < adj[x].size(); ++i)
		if (!done[adj[x][i]]) {
			sum += bans[adj[x][i]];
			dfs(adj[x][i]);
		}
}

int main()
{
	int n, m, t;
	cin >> t;
	while(t--){
		maxsum = 0;
		cin >> n >> m;
		int x, y;
		REP(i, m) {
			cin >> x >> y;
			adj[x-1].push_back(y-1);
			adj[y-1].push_back(x-1);
		}		
		REP(i, n) {
			cin >> bans[i];
			done[i] = false;
		}
		REP(i, n) {
			if (!done[i]) {
				sum = bans[i];
				dfs(i);
				if (sum > maxsum) maxsum = sum;
			}
		}
		cout << maxsum << '\n';
		REP(i, n) {
			adj[i].clear();
		}
	}	
	return 0;
}