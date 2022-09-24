class Solution {
public:
    void solve(string digits,int index,string output,vector<string> &ans,string map[]){
        
        if(index>=digits.length()){
            ans.push_back(output);
            return;
        }
        int number = digits[index]-'0';
        string val = map[number];
        for(int i =0;i<val.length();i++){
            output.push_back(val[i]);
            solve(digits,index+1,output,ans,map);
//             Backtracking
            output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        string output;
        int index =0;
        string map[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        if(digits.length()==0) return ans;
        solve(digits,index,output,ans,map);
        return ans;
        
    }
};