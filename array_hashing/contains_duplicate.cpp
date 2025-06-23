#include <unordered_set>
#include <vector>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       unordered_set<int> check_duplicates;

	   for (size_t i = 0; i < nums.size(); i++){
		    if (check_duplicates.find(nums[i]) != check_duplicates.end()){
				return true;
			}
			check_duplicates.insert(nums[i]);
	   }
	   return false;
    }
};
