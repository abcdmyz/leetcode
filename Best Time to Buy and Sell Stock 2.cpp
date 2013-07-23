class Solution {
public:
    int maxProfit(vector<int> &prices) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
        if ( prices.size()==0 )
            return 0;

        int sum=0;
        
        for ( int i=1; i<prices.size(); i++ )
        {
            if ( prices[i]-prices[i-1]>0 )
                sum += prices[i]-prices[i-1];
        }
 
        
        return sum;
    }
};
