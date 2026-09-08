class Solution {
public:
    int countCommas(int n) {
        if(n<1000) return 0;
        int ans=0;
        for(int i=1000;i<=n;i++){
            if(i==100000) ans+=1;
            else{
                string str=to_string(i);
            int x=str.length();
            // cout<<x<<" ";
            ans+=x/3;
            // cout<<ans<<endl;
            }
        }
        return ans;
    }
};