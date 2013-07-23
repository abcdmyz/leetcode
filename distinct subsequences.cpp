class Solution {
public:
    int numDistinct(string S, string T) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
        int lens=S.length();
        int lent=T.length();
        
        if ( lens==0 )
            return 0;
        if ( lent==0 )
            return 1;
        
        int f[100][100];
        memset(f,0,sizeof(f));

        
        if ( S[0]==T[0] )
            f[0][0]=1;
        for ( int i=1; i<lens; i++ )
        {
            if ( S[i]==T[0] )
            {
                f[i][0]=f[i-1][0]+1;
            }
            else
            {
                f[i][0]=f[i-1][0];
            }
        }
        
        for ( int i=1; i<lens; i++ )
        {
            for ( int j=lent-1; j>=1; j--  )
            {

                if ( T[j]==S[i] )
                {
                    f[i][j]=f[i-1][j]+f[i-1][j-1];
                }
                else
                {
                    f[i][j]=f[i-1][j];
                }
            }
        } 
        
        return f[lens-1][lent-1];
    }
};
