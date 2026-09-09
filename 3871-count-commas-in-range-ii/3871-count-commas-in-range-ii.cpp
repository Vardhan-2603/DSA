#define ll long long
class Solution {
public:

    long long countCommas(long long n) {
        ll result=0;

        ll camma=1;
        ll lower=1000;
        while(lower<=n){
            ll upper=lower*1000-1;
            if(upper>n) upper=n;

            ll countNumbers=upper-lower+1;
            result+=countNumbers*camma;

            lower*=1000;
            camma++;
        }
        return result;
    }
};