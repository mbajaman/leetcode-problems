using namespace std;
#include <iostream>

class LengthOfLastWord_58 {
public:
    void run() {
        cout << "Problem 58: Length of Last Word" << endl;
        string s = "   fly me   to   the moon  ";
        cout << "Length of last word: " << lengthOfLastWord(s) << endl;
    }

    int lengthOfLastWord(string s) {
        int n = s.length();
        bool counting = false;
        int count = 0;

        for (int i = n - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                counting = true;
                count++;
            }
            else if (counting) {
                break;
            }
        }
        return count;
    }
};

