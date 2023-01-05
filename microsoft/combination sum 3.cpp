class Solution {
    void solve(vector<vector<int>> &ans,vector<int> temp,int n,int k,int num){
        if(n==0 and k==0){
            ans.push_back(temp);
            return;
        }
        if(k<0)return;
        if(num>9)return;
        temp.push_back(num);
        solve(ans,temp,n-num,k-1,num+1);
        temp.pop_back();
        solve(ans,temp,n,k,num+1);
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> temp;
        solve(ans,temp,n,k,1);
        return ans;
    }
};
