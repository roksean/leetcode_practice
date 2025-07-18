#include <algorithm>
#include <string>
#include <vector>


using namespace std;


class Solution {
public:
    vector<vector<string> > groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>  anagrams; 

        for (string word: strs) {
            string copy = word;
            sort(word.begin(), word.end());
            anagrams[word].push_back(copy); 
        }

        vector<vector<string>> result;
        for (auto& pair : anagrams) {
            result.push_back(pair.second);
        }
        return result;
    }
};
