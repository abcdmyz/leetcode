class Solution {
public:
    vector<vector<int> > generate(int numRows) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
        
        vector<vector<int>> pascal;
        pascal.clear();
        
        if ( numRows==0 )
            return pascal;
        
        vector<int> row1(100);
        vector<int> row2(100);
        
        row1.clear();
        row1.push_back(1);
        pascal.push_back(row1);
        
        for ( int i=1; i<numRows; i++ )
        {
            row2.clear();
            row2.push_back(1);
            
            for ( int j=0; j<i-1; j++ )
            {
                row2.push_back(row1[j]+row1[j+1]);
            }
            
            row2.push_back(1);
            pascal.push_back(row2);
            
            row1.clear();
            row1=row2;
        }
        
        return pascal;
    }
};
