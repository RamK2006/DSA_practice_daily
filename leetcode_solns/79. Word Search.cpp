class Solution {
public:
    int row[4]={-1,1,0,0};
    int col[4]={0,0,-1,1};
    bool dfs_helper(int r,int c, int n, int m, vector<vector<char>>& board, string& word, int index, vector<vector<bool>>& visited){
        if(index == word.size()) return true;
        visited[r][c] = true;
        for(int i=0;i<4;i++){
            int ur= r+row[i];
            int uc= c+col[i];
            if(ur>=0 and ur<n and uc>=0 and uc<m and visited[ur][uc]==false){
                if(board[ur][uc]==word[index]){
                    if(dfs_helper(ur,uc,n,m,board,word,index+1,visited)) return true;
                }
            }
        }
        visited[r][c]=false;
        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        int s= word.size();
        char ch= word[0];
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]== ch){
                    if(dfs_helper(i,j,n,m,board, word, 1, visited)) return true;
                    //else return false;
                }
            }
        }
        return false;
    }
};


// dhuve nikal gye dimag ke, can be further optimized

// ye lo, ho gaya
class Solution {
public:
    int row[4]={-1,1,0,0};
    int col[4]={0,0,-1,1};
    bool dfs_helper(int r,int c, int n, int m, vector<vector<char>>& board, string& word, int index){
        if(index == word.size()) return true;
        char ch= board[r][c];
        board[r][c]='.';
        //visited[r][c] = true;
        for(int i=0;i<4;i++){
            int ur= r+row[i];
            int uc= c+col[i];
            if(ur>=0 and ur<n and uc>=0 and uc<m ){
                if(board[ur][uc]==word[index]){
                    if(dfs_helper(ur,uc,n,m,board,word,index+1)) return true;
                }
            }
        }
        board[r][c]=ch;
        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        int s= word.size();
        char ch= word[0];
        //vector<vector<bool>> visited(n, vector<bool>(m, false));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]== ch){
                    if(dfs_helper(i,j,n,m,board, word, 1)) return true;
                    //else return false;
                }
            }
        }
        return false;
    }
};

//must visit thrice bhai, bhot ajib hai