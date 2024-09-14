#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int _max = 0;
        int count = 0;
        int max_count = 0;
        for(int i = 0; i < nums.size(); ++i) {
            if(nums[i] > _max) {
                _max = nums[i];
                count = 0;
                max_count = 0;
            }
            if(nums[i] == _max) count++;
            else count = 0;
            max_count = max(max_count, count);
        }
        return max_count;
    }
};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    Solution sol;
    vector<int> nums;
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        nums.push_back(num);
    }
    
    int result = sol.longestSubarray(nums);
    cout << result << endl;
    
    return 0;
}
