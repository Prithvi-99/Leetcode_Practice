class Solution {
public:
    bool checkOnesSegment(string s) {
        bool flag = true;
        for(int i = 0;i<s.size();i++){
            if(i!=0){
                if(s[i]=='1' && flag == true){
                    flag = false;
                }else if(s[i]=='1' && s[i-1]=='0' && flag == false){
                    return false;
                }
            }else{
                if(s[i]=='1' && flag==true){
                    flag = false;
                }
            }
        }
        return true;
    }
};