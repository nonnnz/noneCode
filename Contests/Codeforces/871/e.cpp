#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n, m;
        cin >> n >> m;
        int matrix[n][m];
        // create matrix
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> matrix[i][j];
            }
        }
        int _sum = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                // for top left
                if(i == 0 || j == 0) {
                    // right
                } 
            }
        }
    }
    
    return 0;
}
