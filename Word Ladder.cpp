class Solution {
public:
    int ladderLength(string start, string end, unordered_set<string> &dict) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
     
        if ( start.compare(end)==0 )
            return 0;
     
        queue<string> transf;
        int lev1=0;
        int lev2=0;
        int step=1;
        
        while ( !transf.empty() )
            transf.pop();
            
        transf.push(start);
        lev1=1;
        
        while ( !transf.empty() )
        {
            string now = transf.front();
            transf.pop();
            lev1--;
            
            for ( int i=0; i<now.length(); i++ )
            {
                for ( int j=0; j<26; j++ )
                {
                    string temp = now;
                    temp[i] = 'a' + j;
                    
                    if ( dict.find(temp) != dict.end() )
                    {
                        transf.push(temp);
                        dict.erase(temp);
                        lev2++;
                    }
                    
                    if ( temp.compare(end)==0 )
                    {
                        return step+1;
                    }
                }
            }
            
            if ( lev1==0 )
            {
                step++;
                lev1=lev2;
                lev2=0;
            }
        }
        
        return 0;
    }
};
