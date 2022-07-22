class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        auto length = matrix.size();

		for (size_t i = 0; i < length; i++)
		{
			for (size_t j = i; j < length; j++)
			{
				int temp = matrix[i][j];
				matrix[i][j] = matrix[j][i];
				matrix[j][i] = temp;
			}
		}

		for (size_t i = 0; i < length; i++)
		{
			for (size_t j = 0; j < length / 2; j++)
			{
				int temp = matrix[i][j];
				matrix[i][j] = matrix[i][length - 1 - j];
				matrix[i][length - 1 - j] = temp;
			}
		}
    }
};