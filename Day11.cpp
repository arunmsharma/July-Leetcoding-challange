//problem link:-https://leetcode.com/explore/featured/card/july-leetcoding-challenge/545/week-2-july-8th-july-14th/3387/
class Solution {
public:
    vector<vector<int>>ans;
    void fun(vector<int>&nums,int i,vector<int>p){
        if(i>=nums.size()){
            ans.push_back(p);
            return;
        }
        vector<int>p1;
        p1.insert(p1.end(),p.begin(),p.end());
        p1.push_back(nums[i]);
        fun(nums,i+1,p1);
        fun(nums,i+1,p);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        fun(nums,0,{});
        return ans;
    }
};
