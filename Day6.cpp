class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        vector<int>ans(n+1,0);
        for(int i=1;i<=n;i++){
            ans[i]=digits[i-1];
        }
        int prev=1;
        for(int i=n;i>=0;i--){
            int x=ans[i]+prev;
            ans[i]=x%10;
            prev=x/10;
        }
        if(ans[0]==0){
            ans.erase(ans.begin());
        }
        return ans;
    }
};
