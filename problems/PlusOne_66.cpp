using namespace std;
#include <iostream>
#include <vector>
class PlusOne_66 {
public:
    void run() {
        cout << "Problem 66: Plus One" << endl;
        vector<int> digits = {9};
        vector<int> result = plusOne(digits);
        for (int i = 0; i < result.size(); i++) {
            cout << result[i] << " ";
        }
        cout << endl;
    }

    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
