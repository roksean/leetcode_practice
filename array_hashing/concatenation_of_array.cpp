#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
		vector<int> ans;

		for (size_t i = 0; i < nums.size() * 2; i++){
			ans.push_back(nums[i % nums.size()]);			
		}
		return ans;
    }
};
