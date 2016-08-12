#include "iostream"
#include "vector"

#define REP(i, n) for(int i = 0; i < n; i++)

using namespace std;

vector<int> adj[1000];
bool done[1000];
bool cycle = false;
int startnode;
int count;
void dfs(int x) {
	done[x] = true;
	count++;
	for (int i = 0; i < adj[x].size(); ++i) {
		if (adj[x][i] == startnode) cycle = true;
		if (!done[adj[x][i]]) {
			dfs(adj[x][i]);
		}
	}
}

int main()
{
	int n, d, x, y;
	int minfriends = 1001;
	cin >> n >> d;
	REP(i, d) {cin >> x >> y; adj[x-1].push_back(y-1);}
	REP(i, n) {
		if (!done[i]) {
			cycle = false;
			startnode = i;
			count = 0;
			dfs(i);
			if (cycle) {
				if (count < minfriends) minfriends = count;
			}
			else minfriends = 1;
		}
	}
	cout << minfriends << '\n';
	return 0;
}