class Solution {
public:
    int sumofdigits(int n){
        int sum=0;
        while(n>0){
            int lastdigit=n%10;
            sum+=lastdigit;
            n=n/10;
        }
        return sum;
    }
    int smallestIndex(vector<int>& nums) {
        int ans=INT_MAX;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int sum=sumofdigits(nums[i]);
            if(sum==i) ans=min(ans,sum);
        }
        return (ans==INT_MAX)?-1:ans;
    }
};