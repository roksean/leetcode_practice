// first leetcode question starting june 20 2025
// being done in vscode w/ the vim extension
// pushed to github after if tests are passed


#include <vector>
#include <unordered_map>

class Solution {
    public:
        std::vector<int> twoSum(std::vector<int>& nums, int target) {
            std::unordered_map<int,int> map;
            
            for (size_t i = 0; i < nums.size(); i++){
                int search_val = target - nums[i];
                
                if (map.find(search_val) != map.end()){
                    return {map[search_val], static_cast<int>(i)};
                }

                map[nums[i]] = i;
			}
			return {};
		}
	};
