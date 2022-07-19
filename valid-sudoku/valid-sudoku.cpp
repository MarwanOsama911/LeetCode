class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
      std::unordered_set<std::string> seen;
		for (size_t i = 0; i < 9; i++)
		{
			for (size_t j = 0; j < 9; j++)
			{
				char currentVal = board[i][j];
				if (currentVal != '.')
				{
					if (seen.count(std::to_string(currentVal) + " found in row " + std::to_string(i)) ||
						seen.count(std::to_string(currentVal) + " found in column " + std::to_string(j)) ||
						seen.count(std::to_string(currentVal) + " found in sub box " + std::to_string((i / 3) * 3 + (j / 3))))
					{
						return false;
					}
					else {

						seen.insert(std::to_string(currentVal) + " found in row " + std::to_string(i));
						seen.insert(std::to_string(currentVal) + " found in column " + std::to_string(j));
						seen.insert(std::to_string(currentVal) + " found in sub box " + std::to_string((i / 3) * 3 + (j / 3)));
					}
				}
			}
		}
		return true;
    }
};