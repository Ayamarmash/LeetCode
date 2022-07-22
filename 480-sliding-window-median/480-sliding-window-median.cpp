/*class Solution {
public:
    vector<double> medianSlidingWindow(vector<int>& nums, int k) {
        int start= 0;
        int end= k-1;
        vector<double> medians;
        if(k > nums.size()) return medians;
        if(k == nums.size())
        {
            sort(nums.begin(), nums.end());
            
            if( end%2 == 0)
            {
                medians.push_back( nums[(end)/2] );
            }
            else
            {
                double x = nums[(int)(end/2)] ;
                double y = nums[(int)((end/2)+1)] ;
                if(x == y) medians.push_back(x);
                else medians.push_back( ((x+y)/2) );
            }
            return medians;
        }
        
        //////////////////////////////////////////////
        vector<int> temp;
        temp.assign(&nums.at(start), &nums.at(end)+1);

        /*for(int i= start; i<=end; i++)
        {
            temp.push_back(nums[i]);
        }*\
        vector<int> temp2;
        while(end <= nums.size()-1)
        { 
            temp2 = temp;
            sort(temp2.begin(), temp2.end());
            if( (end+start) %2 == 0 )
            {
                medians.push_back( temp2[(temp2.size()-1)/2] );
            }
            else
            {   
                double x= temp2[ (int) ((temp2.size()-1)/2) ];
                double y= temp2[ (int) (((temp2.size()-1)/2)+1)];
                if(x == y) medians.push_back(x);
                else medians.push_back( ( x+y )/2);
            }
            if(end == nums.size()-1) break;
            else
            {
                start++;
                end++;
                temp.erase(temp.begin());
                temp.push_back(nums[end]);
            }
        }
        return medians; 
    }
};*/
class Solution {
public:
    vector<double> medianSlidingWindow(vector<int>& nums, int k) {
        
        vector<double> res;
        vector<long long> med;
        
        for(int i= 0; i<k; i++)
            med.insert(lower_bound(med.begin(),med.end(),nums[i]),nums[i]);
        if(k%2==0)
            res.push_back((double)(med[k/2]+med[k/2-1])/2 );
        else
            res.push_back((double)med[k/2]);
        
        
        for(int i=k; i<nums.size(); i++)
        {
            med.erase(lower_bound(med.begin(),med.end(),nums[i-k]));
            med.insert(lower_bound(med.begin(),med.end(),nums[i]),nums[i]);
            if(k%2==0)
                res.push_back((double)(med[k/2]+med[k/2-1])/2 );
            else
                res.push_back((double)med[k/2]);
        }
        return res;
    }
};