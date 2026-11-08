class Solution {
public:
    int search(vector<int>& nums, int target) {

        int mid = nums.size() / 2;

        if (nums[mid] == target) {
            return mid;
        }

        if (nums[mid] < target) {
            for (int a = mid + 1; a < nums.size(); a++) {
                if (nums[a] == target) {
                    return a;
                }
            }
        }
        else {
            for (int a = mid - 1; a >= 0; a--) {
                if (nums[a] == target) {
                    return a;
                }
            }
        }

        return -1;
    }
};