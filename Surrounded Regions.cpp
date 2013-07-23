class Solution {
public:

    int n,m;
    
    void dfs( int i, int j, vector<vector<char>> &board )
    {
        if ( i>=0 && i<n && j>=0 && j<m && board[i][j]=='O' )
        {
            board[i][j]='+';
            dfs(i-1,j, board);
            dfs(i+1,j, board);
            dfs(i,j-1, board);
            dfs(i,j+1, board);
        }
    }
    
    void solve(vector<vector<char>> &board) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
        n = board.size();

        if ( n==0 )
            return;
        m = board[0].size();

        
        /*
        for ( int i=0; i<m; i++ )
        {
            dfs(0,i, board);
            dfs(n-1,i, board);
        }
        
        for ( int i=0; i<n; i++ )
        {
            dfs(i,0, board);
            dfs(i,m-1, board);
        }
        
        for ( int i=0; i<n; i++ )
        {
            for ( int j=0; j<m; j++ )
            {
                if ( board[i][j]=='O' )
                    board[i][j]='X';
                else if ( board[i][j]=='+' )
                    board[i][j]='O';
            }
        }
        */
    }
};
