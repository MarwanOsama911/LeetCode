class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::map<int, int> savedNums;
		int length = nums.size();
		int targetResult = 0;
		for (size_t i = 0; i < length; i++)
		{
			targetResult = target - nums[i];
			if (savedNums.count(targetResult))
			{
				return std::vector<int>{ savedNums[targetResult], (int)i};
			}
			else
			{
				savedNums.insert(std::pair<int, int>(nums[i], i));
			}
		}
		return std::vector<int>{};
    }
};