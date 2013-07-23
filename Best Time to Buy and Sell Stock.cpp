class Solution {
public:
    int maxProfit(vector<int> &prices) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
        int max=0;
        int min=0;
        
        for ( int i=1; i<prices.size(); i++ )
        {
            if ( prices[i]<prices[min] )
            {
                min=i;
            }
            
            if ( prices[i]-prices[min] > max )
            {
                max = prices[i]-prices[min];
            }
        }
        
        return max;
    }
};
