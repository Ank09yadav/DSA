#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        vector<int> sorted_nums = nums; 
        sort(sorted_nums.begin(), sorted_nums.end()); 
        int max_sum = 0;
        for (size_t i = 0; i < sorted_nums.size(); i += 2) {
            max_sum += sorted_nums[i]; 
        }
        return max_sum;
    }
};

int main() {
    Solution solution;
    
    vector<int> nums1 = {1, 4, 3, 2};
    cout << "Example 1 Input: nums = [1, 4, 3, 2]" << endl;
    int result1 = solution.arrayPairSum(nums1);
    cout << "Output: " << result1 << endl; // Expected: 4
    if (result1 == 4) cout << "Test Passed!" << endl;
    else cout << "Test Failed!" << endl;
    cout << endl;

    return 0;
}
