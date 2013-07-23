class Solution {
public:
    int minimumTotal(vector<vector<int> > &triangle) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
        if ( triangle.size()==0 )
            return 0;
        
        int r1[200];
        int r2[200];
        
        
        r1[0]=triangle[0][0];
        
        
        for ( int i=1; i<triangle.size(); i++ )
        {
            r2[0] = r1[0]+triangle[i][0];
            r2[i] = r1[i-1]+triangle[i][i];
              
            
            for ( int j=1; j<triangle[i].size()-1; j++ )
            {
                if ( r1[j-1]+triangle[i][j] < r1[j]+triangle[i][j] )
                    r2[j] = r1[j-1]+triangle[i][j];
                else
                    r2[j] = r1[j]+triangle[i][j];
            }
            
            
            for ( int j=0; j<i+1; j++ )
                r1[j]=r2[j];
        }
        
        
        int min = r1[0];
        
        for ( int i=0; i<triangle.size(); i++ )
        {
            if ( r1[i]<min )
                min = r1[i];
        }
        
        return min;
        
    }
};
