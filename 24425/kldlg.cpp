#include <bits/stdc++.h>
using namespace std;

const int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
const int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
const string target = "letter";

char mc(char c) {
    if (c == 'g') return 'l';
    if (c == 'a') return 'e';
    if (c == 'y') return 't';
    if (c == 'Y') return 'r';
    return c;
}

bool isv(int x, int y, int n) {
    return x >= 0 && y >= 0 && x < n && y < n;
}

bool fp(vector<vector<char>>& board, int x, int y, int idx, vector<pair<int, int>>& path, int n) {
    if (idx == target.size()) return true;
    for (int d = 0; d < 8; d++) {
        int nx = x + dx[d], ny = y + dy[d];
        if (isv(nx, ny, n) && mc(board[nx][ny]) == target[idx]) {
            path.push_back({nx, ny});
            if (fp(board, nx, ny, idx + 1, path, n)) return true;
            path.pop_back();
        }
    }
    return false;
}

bool fl(const vector<vector<char>>& board, int n) {
    for (int i = 0; i < n; i++) {
        if (all_of(board[i].begin(), board[i].end(), [](char c){ return c == 'Y'; })) return true;
        bool col = true;
        for (int j = 0; j < n; j++) if (board[j][i] != 'Y') col = false;
        if (col) return true;
    }
    bool diag1 = true, diag2 = true;
    for (int i = 0; i < n; i++) {
        if (board[i][i] != 'Y') diag1 = false;
        if (board[i][n - 1 - i] != 'Y') diag2 = false;
    }
    return diag1 || diag2;
}

int main() {
    int n;
    cin >> n;
    vector<vector<char>> board(n, vector<char>(n));
    for (auto& row : board)
        for (auto& cell : row)
            cin >> cell;

    bool chg;
    do {
        chg = false;
        for (int i = 0; i < n; i++) 
            for (int j = 0; j < n; j++)
                if (mc(board[i][j]) == 'l') {
                    vector<pair<int, int>> path = {{i, j}};
                    if (fp(board, i, j, 1, path, n)) {
                        for (auto& [x, y] : path)
                            board[x][y] = 'Y';
                        chg = true;
                    }
                }
    } while (chg);

    if (fl(board, n)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
        int mic = n;
        for (int i = 0; i < n; i++) {
            int row = 0, col = 0;
            for (int j = 0; j < n; j++) {
                if (board[i][j] != 'Y') row++;
                if (board[j][i] != 'Y') col++;
            }
            mic = min({mic, row, col});
        }
        int diag1 = 0, diag2 = 0;
        for (int i = 0; i < n; i++) {
            if (board[i][i] != 'Y') diag1++;
            if (board[i][n - 1 - i] != 'Y') diag2++;
        }
        mic = min({mic, diag1, diag2});
        cout << mic << '\n';
    }
}
