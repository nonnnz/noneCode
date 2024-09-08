#include <iostream>
#include <vector>
using namespace std;

const int MAX_N = 1000;
const int MAX_M = 1000;

int n, m;
int matrix[MAX_N][MAX_M];
bool visited[MAX_N][MAX_M];

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

bool inBounds(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

bool canVisit(int x, int y) {
    return inBounds(x, y) && matrix[x][y] != 0 && !visited[x][y];
}

void dfs(int x, int y, int& sum) {
    visited[x][y] = true;
    sum += matrix[x][y];
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (canVisit(nx, ny)) {
            dfs(nx, ny, sum);
        }
    }
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n >> m;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> matrix[i][j];
                visited[i][j] = false;
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (canVisit(i, j)) {
                    int sum = 0;
                    dfs(i, j, sum);
                    ans = max(ans, sum);
                }
            }
        }
        if (i == t - 1 ) cout << ans;
        else cout << ans << endl;
    }
    return 0;
}
