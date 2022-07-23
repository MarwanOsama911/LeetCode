class Solution {
public:
    void reverseString(vector<char>& s) {
        auto length = s.size();

		for (size_t j = 0; j < length / 2; j++)
		{
			int temp = s[j];
			s[j] = s[length - 1 - j];
			s[length - 1 - j] = temp;
		}
    }
};