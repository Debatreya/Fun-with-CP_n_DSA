#include <vector>
#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        unordered_map<int, int> nums1_map, nums2_remainder_count;
        
        // Count occurrences of numbers in nums1 and remainders of numbers in nums2 after dividing by k
        for (int num : nums1) nums1_map[num]++;
        for (int num : nums2) nums2_remainder_count[num % k]++;
        
        int count = 0;
        
        // Count valid pairs (i, j)
        for (auto it = nums1_map.begin(); it != nums1_map.end(); ++it) {
    int num = it->first;
    int freq = it->second;
    
    int target_rem = (k - num % k) % k;
    count += freq * nums2_remainder_count[target_rem];
}

        
        // Consider additional valid pairs where nums2[j] * k equals nums1[i]
        for (auto it = nums1_map.begin(); it != nums1_map.end(); ++it) {
    int num = it->first;
    int freq = it->second;
    
    if (num % k == 0 && nums2_remainder_count[0] > 0) {
        count += freq;
    }
}

        
        return count;
    }
};

// Example usage
int main() {
    Solution sol;
    vector<int> nums1 = {6, 12, 18, 24};
    vector<int> nums2 = {1, 2, 3};
    int k = 3;
    int result = sol.numberOfPairs(nums1, nums2, k);
    cout << result << endl; // Output depends on the specific problem constraints
    return 0;
}
