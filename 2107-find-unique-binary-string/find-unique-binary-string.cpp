class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        string res;

        for(int i = 0;i<nums.size();i++){
            int x = stoi(nums[i],0,2);
            if(i!=x){
                res = bitset<16>(i).to_string().substr(16-n);
                break;
            }
        }
        if(res == ""){
            int x = stoi(nums[n-1],0,2);
            x++;
            res = bitset<16>(x).to_string().substr(16-n); 
        }
        return res;
    }
};