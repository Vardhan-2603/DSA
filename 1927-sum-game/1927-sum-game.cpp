class Solution {
public:
    bool sumGame(string num) {
        int leftSum=0,rightSum=0,leftQMark=0,rightQMark=0;
        int n=num.length();
        for(int i=0;i<n;i++){
            if(num[i]=='?'){
                if(i<n/2){
                    leftQMark++;
                }else{
                    rightQMark++;
                }
            }else{
               if(i<n/2){
                  leftSum+=num[i]-'0';
                }else{
                  rightSum+=num[i]-'0';
                }
            }
        }
        int totalQMark=leftQMark+rightQMark;
        if(totalQMark%2==1) return true;
        int Right=2*rightSum+9*rightQMark;
        int Left=2*leftSum+9*leftQMark;
        return (Right==Left)?false:true;
    }
};