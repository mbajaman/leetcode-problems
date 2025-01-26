using namespace std;

#include <iostream>
#include "RomanToInteger_13.cpp"
#include "LongestCommonPrefix_14.cpp"

void problemMap(int id) {
    switch (id) {
        case 13:
            RomanToInteger_13().run();
            break;
        case 14:
            LongestCommonPrefix_14().run();
            break;
        case -1:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Problem not found" << endl;
            break;
    }
}

int main() {
   int runId = 0;
   while (runId != -1) {
      cout << "Enter the problem number to run (or -1 to exit): ";
      cin >> runId;
      problemMap(runId);
   }
   return 0;
}

