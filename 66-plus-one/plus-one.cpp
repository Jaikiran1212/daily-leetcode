#include <vector>

class Solution {
public:
    std::vector<int> plusOne(std::vector<int>& digits) {
        int n = digits.size();
        
        // Traverse the vector from right to left
        for (int i = n - 1; i >= 0; --i) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits; // No further carry needed
            }
            // If the digit is 9, it becomes 0 and carry continues
            digits[i] = 0;
        }
        
        // If all digits were 9 (e.g., 999 -> 000), insert 1 at the beginning (-> 1000)
        digits.insert(digits.begin(), 1);
        return digits;
    }
};