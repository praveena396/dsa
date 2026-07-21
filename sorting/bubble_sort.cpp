#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
        int n = nums.size();

        for (int pass = 0; pass < n - 1; pass++) {
            int i = 0;
            int maxi = i;
            bool didSwap = false;
            for (int j = i + 1; j < n - pass; j++) {
                if (nums[j] < nums[i]) {
                    maxi = i;
                    swap(nums[j], nums[maxi]);
                    didSwap = true;
                }
                i++;
            }
            if (!didSwap) {
                break;
            }
        }
        return nums;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {7, 4, 1, 5, 3};

    cout << "Before Using Bubble Sort: " << endl;
    for (int num : nums) cout << num << " ";
    cout << endl;

    nums = solution.bubbleSort(nums);

    cout << "Array After Using Bubble Sort: " << endl;
    for (int num : nums) cout << num << " ";
    cout << endl;
    return 0;
}