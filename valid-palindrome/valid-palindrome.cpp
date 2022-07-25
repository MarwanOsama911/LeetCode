class Solution {
public:
    bool isPalindrome(string s) {
        auto it = std::remove_if(s.begin(), s.end(), [](char const& c) {
			return !std::isalnum(c);
			});
		s.erase(it, s.end());
		auto sLength = s.size();
		for (size_t i = 0; i < sLength; i++)
		{
			if (std::tolower(s[i]) == std::tolower(s[sLength - 1 - i]))
				continue;
			else
				return false;
		}
		return true;
    }
};