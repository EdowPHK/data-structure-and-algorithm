#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> hashmap;
        int max_len = 0;
        int left = 0;
        for (int i = 0; i < s.size(); i++){
            char c = s[i];

            if (hashmap.find(c) != hashmap.end() && hashmap[c] >= left){
                left = hashmap[c] + 1;
            }

            hashmap[c] = i;
            max_len = max(i - left + 1, max_len);
            
        }
        return max_len;
    }
};