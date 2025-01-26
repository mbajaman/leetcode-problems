using namespace std;

#include <iostream>
#include "problems/RomanToInteger_13.cpp"
#include "problems/LongestCommonPrefix_14.cpp"
#include "problems/LengthOfLastWord_58.cpp"
#include "problems/PlusOne_66.cpp"
#include "problems/Sqrtx_69.cpp"

void problemMap(int id) {
    switch (id) {
        case 13:
            RomanToInteger_13().run();
            break;
        case 14:
            LongestCommonPrefix_14().run();
            break;
        case 58:
            LengthOfLastWord_58().run();
            break;
        case 66:
            PlusOne_66().run();
            break;
        case 69:
            Sqrtx_69().run();
            break;
        case -1:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Problem not found" << endl;
            break;
    }
}

int main(int argc, char* argv[]) {
   int runId = 0;

   if (argc > 1) {
      runId = atoi(argv[1]);
   }
   
   while (runId != -1) {
      if (runId == 0) {
         cout << "Enter the problem number to run (or -1 to exit): ";
         cin >> runId;
      }

      problemMap(runId);
      runId = -1; // reset runId to -1 to exit the loop
   }
   return 0;
}

