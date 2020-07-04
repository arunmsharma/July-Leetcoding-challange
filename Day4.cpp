class Solution {
public:
    long long dp[1700]={0};
    Solution(){
        // int dp[1700]={0};
        dp[0]=1;
        // i=1;
        long long next2=2,next3=3,next5=5;
        long long nextugly;
        long long i2=0,i3=0,i5=0;
        for(int i=1;i<1691;i++){
            nextugly=min(next2,min(next3,next5));
            dp[i]=nextugly;
            if(nextugly==next2){
                i2=i2+1;
                next2=2*dp[i2];
            }
            if(nextugly==next3){
                i3=i3+1;
                next3=3*dp[i3];
            }
            if(nextugly==next5){
                i5=i5+1;
                next5=5*dp[i5];
            }
        }
    }
    int nthUglyNumber(int n) {
      return dp[n-1];
    }
};
