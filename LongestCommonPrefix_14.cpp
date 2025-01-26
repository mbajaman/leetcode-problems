using namespace std;

#include <iostream>
#include <string>
#include <vector>

class LongestCommonPrefix_14 {
public:
    void run() {
        cout << "Problem 14: Longest Common Prefix" << endl;
        vector<string> strs = {"flower", "flow", "flight"};
        cout << "Longest common prefix: " << longestCommonPrefix(strs) << endl;
    }

    string longestCommonPrefix(vector<string>& strs) {
        
        if (strs.size() == 1) {
            return strs[0];
        }

        if (strs.size() == 0) {
            return "";
        }

        string prefix = strs[0];
        
        // Compare prefix with each string in the array
        for (int i = 1; i < strs.size(); i++) {
            while (strs[i].substr(0, prefix.length()) != prefix) {
                prefix = prefix.substr(0, prefix.length() - 1);
                if (prefix.empty()) {
                    return "";
                }
            }
        }
        
        return prefix;
    }
};