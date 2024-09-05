class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int x=0;
        vector<vector<int>>dir(110,vector<int>(110));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                dir[i][j]=x++;
            }
        }
        int i=0,j=0;
        for(int k=0;k<commands.size();k++){
            if(commands[k]=="RIGHT") j++;
            else if(commands[k]=="LEFT") j--;
            else if(commands[k]=="DOWN") i++;
            else if(commands[k]=="UP") i--;
        }
        return dir[i][j];        
    }
};
