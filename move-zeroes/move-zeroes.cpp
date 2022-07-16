class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int length= nums.size();
        if (length == 1)
            return;
        
        int* zeroPtr = nullptr;

		for (size_t i = 0; i < nums.size(); i++)
		{

			if (nums[i] == 0 && zeroPtr == nullptr)
			{
				zeroPtr = &nums[i];
				continue;
			}

			if (nums[i] != 0 && zeroPtr != nullptr)
			{
				*zeroPtr = nums[i];
				zeroPtr++;
				nums[i] = 0;
			}
        }
    }
};