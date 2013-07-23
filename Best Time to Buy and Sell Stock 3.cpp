class Solution {
public:
    int maxProfit(vector<int> &prices) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
        if ( prices.size()==0 )
            return 0;
        
        vector<int> first(prices.size());
        vector<int> second(prices.size());
        
        int min=0;
        first[0]=0;
        
        for ( int i=1; i<prices.size(); i++ )
        {
            if ( prices[i]<prices[min] )
            {
                min = i;
            }
            if ( prices[i]-prices[min] > first[i-1] )
            {
                first[i] = prices[i]-prices[min];
            }
            else
            {
                first[i] = first[i-1];
            }
        }
        
        second[prices.size()-1] = 0;
        int max = prices.size()-1;
        int result = 0;
        
        for ( int i = prices.size()-2; i>=0; i-- )
        {
            if ( prices[i]>prices[max] )
            {
                max = i;
            }
            if ( prices[max]-prices[i] > second[i+1] )
            {
                second[i] = prices[max]-prices[i];
            }
            else
            {
                second[i] = second[i+1];
            }
            
            if ( first[i]+second[i] > result )
                result = first[i]+second[i];
        }
        
        return result;
    }
};
