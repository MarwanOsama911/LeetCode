class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       int strsLength = strs.size();
		int firstItem = strs[0].size();

		std::string result;
		char current;

		for (int i = 0; i < firstItem; i++) {
			current = strs[0][i];
			for (int j = 0; j < strsLength; j++) {
				if (strs[j][i] != current) {
					return result;
				}
			}
			result += current;

		}

		return result;
    }
};