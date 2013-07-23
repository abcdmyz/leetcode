class Solution {
public:
    int longestConsecutive(vector<int> &num) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
        map<int, int> m;
        int max=1;
        
        for ( int i=0; i<num.size(); i++ )
        {
            int tmp=num[i];
            
            if ( m[tmp]!=0 )
                continue;
            
            m[tmp] = m[tmp-1] + m[tmp+1] +1;
            
            if ( m[tmp-1] != 0 )
            {
                m[tmp - m[tmp-1]] = m[tmp];
            }
            
            if ( m[num[i]+1] != 0 )
            {
                m[tmp + m[tmp+1]] = m[tmp];
            }
            
            if ( m[tmp]>max )
                max = m[tmp];
        }
        
        return max;
    }
};
