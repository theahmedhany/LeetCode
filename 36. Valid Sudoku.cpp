// 36. Valid Sudoku : https://leetcode.com/problems/valid-sudoku/description/

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<int>> rows(9);
        vector<set<int>> cols(9);

        int blocks[3][3][10] = {0};

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') {
                    continue;
                }

                int current = board[i][j] - '0';

                if (rows[i].count(current) || cols[j].count(current) ||
                    blocks[i / 3][j / 3][current] != 0) {
                    return false;
                }

                rows[i].insert(current);
                cols[j].insert(current);
                blocks[i / 3][j / 3][current] = current;
            }
        }

        return true;
    }
};