class Solution {
public:
    vector<int> getRow(int rowIndex) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
       
              vector<int> row1(100);
        vector<int> row2(100);
        
        row1.clear();
        row1.push_back(1);
        
        if ( rowIndex==0 )
            return row1;
        
        for ( int i=0; i<=rowIndex; i++ )
        {
            row2.clear();
            row2.push_back(1);
            
            for ( int j=0; j<i-1; j++ )
            {
                row2.push_back(row1[j]+row1[j+1]);
            }
            
            row2.push_back(1);
            
            row1.clear();
            row1=row2;
        }
        
        return row1;
    }
};
