
using namespace std;

#include <unordered_map>
#include <string>

class RomanToInteger_13 {
public:
    void run() {
        romanToInt("MCMXCIV");
    }

    int romanToInt(string s) {
        int result = 0;
        unordered_map<char, int> map;

        // Create a map of romanSymbols
        map['I'] = 1;
        map['V'] = 5;
        map['X'] = 10;
        map['L'] = 50;
        map['C'] = 100;
        map['D'] = 500;
        map['M'] = 1000;

        int n = s.size();

        // Go through the string provided
        for (int i = 0; i < n; i++) {
            if (i < n - 1 && map[s[i]] < map[s[i+1]]) {
                result += map[s[i+1]] - map[s[i]];
                i++;
            }
            else {
                result += map[s[i]];
            }
        }

        cout << result << endl;
        return result;
    }
};