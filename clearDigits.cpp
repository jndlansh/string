class Solution {
public:
    string clearDigits(string s) {
        int l=s.length();
        for(int i=0;i<l;i++){
            if(s[i]-'0'>=0 && s[i]-'0'<= 9){
                if(i!=0){
                    s.erase(i-1,2);
                    l=l-2;
                    i=i-2;
                }
                else{
                    s.erase(i,2);
                    l--;
                    i--;
                }
            }
        }
        return s;
    }
};
