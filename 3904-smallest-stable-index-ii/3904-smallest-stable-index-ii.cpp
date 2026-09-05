class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int>maxArr;
        vector<int>minArr;
        int n=nums.size();
        int maxEle=0;
        for(int i=0;i<n;i++){
            maxEle=max(maxEle,nums[i]);
            maxArr.push_back(maxEle);
        }
        int minEle=INT_MAX;
        reverse(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            minEle=min(minEle,nums[i]);
            minArr.push_back(minEle);
        }
        reverse(minArr.begin(),minArr.end());
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
           int tempAns=maxArr[i]-minArr[i];
           if(tempAns<=k) ans=min(ans,i);
        }
        return (ans==INT_MAX)?-1:ans;
    }
};