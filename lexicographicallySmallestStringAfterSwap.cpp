class Solution {
public:
    string getSmallestString(string s) {
        //int j=1;
        for(int i=0;i<s.size()-1;i++){
            int temp=0;
            if((s[i]%2==0 && s[i+1]%2==0)||(s[i]%2!=0 && s[i+1]%2!=0)){
                if(s[i]>s[i+1]){
                    temp=s[i+1];
                    s[i+1]=s[i];
                    s[i]=temp;
                    break;
                }
                //j++;
            }
        }
        return s;
    }
};
