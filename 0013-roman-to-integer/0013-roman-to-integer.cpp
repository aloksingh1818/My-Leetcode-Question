#include <unordered_map>
#include <string>

class Solution {
public:
    int romanToInt(std::string s) {
        // Map to hold the values of Roman numerals
        std::unordered_map<char, int> romanValue = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        
        int total = 0; // Total value of the Roman numeral
        int prevValue = 0; // Previous value to check for subtraction

        // Iterate through each character in the string
        for (char c : s) {
            int currentValue = romanValue[c]; // Get the current value

            // If the current value is greater than the previous value, we have a case of subtraction
            if (currentValue > prevValue) {
                total += currentValue - 2 * prevValue; // Subtract twice the previous value (it was added once before)
            } else {
                total += currentValue; // Otherwise, just add the current value
            }

            prevValue = currentValue; // Update previous value to current
        }

        return total; // Return the computed total
    }
};
