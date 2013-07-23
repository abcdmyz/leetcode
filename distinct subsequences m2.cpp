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
        
        int f[100];
        memset(f,0,sizeof(f));

        //if ( S[0]==T[0] )
           // f[0]=1;
        
        for ( int i=0; i<lens; i++ )
        {
            for ( int j=lent; j>=1; j--  )
            {

                if ( T[j]==S[i] )
                {
                    f[j]=f[j]+f[j-1];
                }
            }
            if ( S[i]==T[0] )
                f[0]++;
        } 
        
        return f[lent-1];
    }
};
