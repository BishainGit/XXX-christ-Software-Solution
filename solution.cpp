#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<vector<int>> grid(N, vector<int>(N));
    vector<pair<int, int>> maxMinPos;
    int maxMin = 0;
    
    // Read the grid and find the maximum minimum amount
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            char c;
            cin >> grid[i][j] >> c;
        }
    }
    
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            int currentMin = grid[i][j];
            
            // Check the 8 neighbors
            if (i > 0) {
                currentMin = min(currentMin, grid[i - 1][j]);
                if (j > 0)
                    currentMin = min(currentMin, grid[i - 1][j - 1]);
                if (j < N - 1)
                    currentMin = min(currentMin, grid[i - 1][j + 1]);
            }
            
            if (i < N - 1) {
                currentMin = min(currentMin, grid[i + 1][j]);
                if (j > 0)
                    currentMin = min(currentMin, grid[i + 1][j - 1]);
                if (j < N - 1)
                    currentMin = min(currentMin, grid[i + 1][j + 1]);
            }
            
            if (j > 0)
                currentMin = min(currentMin, grid[i][j - 1]);
            
            if (j < N - 1)
                currentMin = min(currentMin, grid[i][j + 1]);
            
            // Check if this position maximizes the minimum
            if (currentMin > maxMin) {
                maxMin = currentMin;
                maxMinPos.clear();
                maxMinPos.push_back({i + 1, j + 1});
            } else if (currentMin == maxMin) {
                maxMinPos.push_back({i + 1, j + 1});
            }
        }
    }
    
    // Output the positions that maximize the minimum
    for (const auto& pos : maxMinPos) {
        cout << pos.first << "#" << pos.second << endl;
    }
    
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<vector<int>> grid(N, vector<int>(N));
    vector<pair<int, int>> maxMinPos;
    int maxMin = 0;
    
    // Read the grid and find the maximum minimum amount
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            char c;
            cin >> grid[i][j] >> c;
        }
    }
    
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            int currentMin = grid[i][j];
            
            // Check the 8 neighbors
            if (i > 0) {
                currentMin = min(currentMin, grid[i - 1][j]);
                if (j > 0)
                    currentMin = min(currentMin, grid[i - 1][j - 1]);
                if (j < N - 1)
                    currentMin = min(currentMin, grid[i - 1][j + 1]);
            }
            
            if (i < N - 1) {
                currentMin = min(currentMin, grid[i + 1][j]);
                if (j > 0)
                    currentMin = min(currentMin, grid[i + 1][j - 1]);
                if (j < N - 1)
                    currentMin = min(currentMin, grid[i + 1][j + 1]);
            }
            
            if (j > 0)
                currentMin = min(currentMin, grid[i][j - 1]);
            
            if (j < N - 1)
                currentMin = min(currentMin, grid[i][j + 1]);
            
            // Check if this position maximizes the minimum
            if (currentMin > maxMin) {
                maxMin = currentMin;
                maxMinPos.clear();
                maxMinPos.push_back({i + 1, j + 1});
            } else if (currentMin == maxMin) {
                maxMinPos.push_back({i + 1, j + 1});
            }
        }
    }
    
    // Output the positions that maximize the minimum
    for (const auto& pos : maxMinPos) {
        cout << pos.first << "#" << pos.second << endl;
    }
    
    return 0;
}
