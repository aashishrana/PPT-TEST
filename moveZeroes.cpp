#include <iostream>
#include <vector>

using namespace std;

void moveZeroes(vector<int>& nums) {
    int n = nums.size();
    int insertPos = 0;

    // Move all non-zero elements to the beginning
    for (int i = 0; i < n; i++) {
        if (nums[i] != 0) {
            nums[insertPos++] = nums[i];
        }
    }

    // Fill the remaining positions with zeros
    while (insertPos < n) {
        nums[insertPos++] = 0;
    }
}

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};

    cout << "Original array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    moveZeroes(nums);

    cout << "Modified array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
