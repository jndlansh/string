class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int sum=0;
        int j=0;
        int i=0;
        while(i<s.length()){
            while(s[i]!=t[j]){
                j++;
            }
            sum=sum+abs(i-j);
            j=0;
            i++;
        }
        return sum;
    }
};
