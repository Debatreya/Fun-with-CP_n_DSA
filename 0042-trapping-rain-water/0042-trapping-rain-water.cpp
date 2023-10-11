class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> leftmax(n, 0);
        int left = height[0];
        for(int i = 1; i<n; i++){
            leftmax[i] = left;
            left = max(left, height[i]);
        }
        vector<int> rightmax(n, 0);
        int right = height[n-1];
        for(int i = n-2; i>=0; i--){
            rightmax[i] = right;
            right = max(right, height[i]);
        }
        // for(int i = 0; i<n; i++)
        //     cout<<"{"<<leftmax[i]<<" "<<rightmax[i]<<"}"<<endl;
        int sum = 0;
        for(int i = 0; i<n; i++){
            int min_h = min(leftmax[i], rightmax[i]);
            sum+=(min_h - height[i] > 0 ? min_h - height[i] : 0);
        }
        return sum;
    }
};