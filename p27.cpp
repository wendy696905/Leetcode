#include <iostream>
#include <vector>
using namespace std;

/*
    Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.

    Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:

    - Change the array nums such that the first k elements of nums contain the elements which are not equal to val. The remaining elements of nums are not important as well as the size of nums.
    - Return k.
*/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0, fast = 0, slow = 0;
        while (fast < nums.size()){
            if (nums[fast] != val){
                nums[slow] = nums[fast];
                slow++;
                k++;
            }
            fast++;
        }
        return k;
    }
};

int main(){
    vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 2;
    cout << Solution().removeElement(nums, val) << endl;
    for (auto i: nums){
        cout << i << " ";
    }
    cout << endl;
}
