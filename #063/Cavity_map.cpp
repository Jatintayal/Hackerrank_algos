#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin >> n;
    vector<vector<char> > grid(n, vector<char> (n));
    vector<vector<char> > gc(n, vector<char> (n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> grid[i][j];
            gc[i][j] = grid[i][j];
        }
    }
    for(int i = 1; i < n - 1; i++){
        for(int j = 1; j < n - 1; j++){
            if(grid[i][j] > grid[i][j + 1] && grid[i][j] > grid[i][j - 1] && grid[i][j] > grid[i - 1][j] && grid[i][j] > grid[i + 1][j]){
                gc[i][j] = 'X';
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << gc[i][j];
        }
        cout << endl;
    }
    return 0;
}