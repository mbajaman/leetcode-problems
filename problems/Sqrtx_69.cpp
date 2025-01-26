using namespace std;
#include <iostream>

class Sqrtx_69 {
public:
    void run() {
        cout << "Problem 69: Sqrt(x)" << endl;
        int x = 4;
        int result = mySqrt(x);
        cout << "Result: " << result << endl;
    }

    int mySqrt(int x) {
        if (x == 0) return 0;

        // binary search to find the square root
        int left = 1, right = x;
        int result = 0;

        cout << "Finding square root of " << x << endl;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            cout << "Current range: [" << left << ", " << right << "], mid = " << mid;
            
            if (mid <= x / mid) {
                result = mid;
                left = mid + 1;
                cout << " -> mid*mid <= x, updating result to " << result << endl;
            } else {
                right = mid - 1;
                cout << " -> mid*mid > x, reducing right bound" << endl;
            }
        }
        return result;
    }
};

