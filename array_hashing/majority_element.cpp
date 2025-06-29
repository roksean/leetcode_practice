#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate;
        int count = 0;

        for (int num: nums){
            if (count == 0){
                candidate = num;
            }
            count += (num == candidate) ? 1 : -1;
        }
        return candidate;
   }
};
