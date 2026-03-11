class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;
        string s = "";
        while(n>0){
            string c = to_string(n&1);
            s+=(c=="0"?"1":"0");
            n = n>>1;
        }   
        reverse(s.begin(),s.end());
        return stoi(s,0,2);
    }
};