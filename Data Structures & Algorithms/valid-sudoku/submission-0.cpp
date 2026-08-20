class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        // Check rows
        for (int i = 0; i < 9; i++) {
            unordered_map<char, int> freq;

            for (int j = 0; j < 9; j++) {
                char c = board[i][j];

                if (c == '.') {
                    continue;
                }

                freq[c]++;

                if (freq[c] > 1) {
                    return false;
                }
            }
        }


        // Check columns
        for (int j = 0; j < 9; j++) {
            unordered_map<char, int> freq;

            for (int i = 0; i < 9; i++) {
                char c = board[i][j];

                if (c == '.') {
                    continue;
                }

                freq[c]++;

                if (freq[c] > 1) {
                    return false;
                }
            }
        }


        // Check 3x3 boxes
        for (int boxRow = 0; boxRow < 3; boxRow++) {
            for (int boxCol = 0; boxCol < 3; boxCol++) {

                unordered_map<char, int> freq;

                int startRow = boxRow * 3;
                int startCol = boxCol * 3;

                for (int i = startRow; i < startRow + 3; i++) {
                    for (int j = startCol; j < startCol + 3; j++) {

                        char c = board[i][j];

                        if (c == '.') {
                            continue;
                        }

                        freq[c]++;

                        if (freq[c] > 1) {
                            return false;
                        }
                    }
                }
            }
        }

        return true;
    }
};