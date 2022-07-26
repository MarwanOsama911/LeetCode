class Solution {
public:
    int myAtoi(string s) 
    {
		long result = 0;
		int length = s.size();
		bool isNegtive = false;
		int index = 0;
		while (index < length && s[index] == ' ')
			index++;

		if (index == length)
			return 0;

		isNegtive = s[index] == '-';
		index = isNegtive || s[index] == '+' ? index + 1 : index;

		while (index < length && isDigit(s[index]))
        {
            result = 10 * result + s[index++] - '0';
            if (result<INT_MIN || result > INT_MAX)
    		    return isNegtive ? INT_MIN : INT_MAX;
        }

        
		

		return isNegtive ? -result : result;
	}

	bool isDigit(char& ch)
	{
		return ch >= '0' && ch <= '9';
	}
};