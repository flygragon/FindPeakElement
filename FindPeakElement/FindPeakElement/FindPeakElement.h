#pragma once
#include<vector>

class FindPeakElement {
public:
	int findPeakElement(std::vector<int>& nums) {
		for (int i = 1, len = nums.size(); i <len; i++)
			if (nums[i] <nums[i - 1])
				return i - 1;
		return nums.size() - 1;
	}
};
