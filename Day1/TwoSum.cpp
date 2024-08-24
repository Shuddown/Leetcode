#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indices(2);
        unordered_map<int, int> positions {};
        for (int i = 0; i < nums.size(); i++){
            positions[nums[i]] = i; 
        }

        for(int i = 0; i < nums.size(); i++){
            int num = nums[i];
            if (positions.contains(target - num) && positions[target - num] != i) {
                indices[0] = i;
                indices[1] = positions[target - num];
                break;
            }
        }
        return indices;
    }
};