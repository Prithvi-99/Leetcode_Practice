class Solution {
public: 
string alter0(int n){
    string s;
    char c = '0';
    for(int i =0;i<n;i++){
        s+=c;
        (c=='0'?c='1':c='0');
    }
    return s;
}
string alter1(int n){
    string s;
    char c = '1';
    for(int i =0;i<n;i++){
        s+=c;
        (c=='0'?c='1':c='0');
    }
    return s;
}
public:
    int minOperations(string s) {
        int ct1 = 0,ct2 = 0;
        string s1 = alter0(s.size());
        string s2 = alter1(s.size());

        for(int i = 0;i<s.size();i++){
            if(s[i]!=s1[i]){
                ct1++;
            }
            if(s[i]!=s2[i]){
                ct2++;
            }
        }
        return min(ct2,ct1);
        
    }
};