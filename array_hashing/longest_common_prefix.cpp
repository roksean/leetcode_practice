#include <vector>
#include <string>


using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        for (size_t i = 0; i < strs[0].size(); i++){
            char curr = strs[0][i];
            for (size_t j = 1; j < strs.size(); j++) {
                if (i > strs[j].size() || strs[j][i] != curr){
                    return strs[0].substr(0,i);
                }
            }
        }
        return strs[0];
    }
};
