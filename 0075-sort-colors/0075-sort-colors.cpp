class Solution {
public:
    void sortColors(vector<int>& v) {
        int low=0,high=v.size()-1,mid=0;
        while(mid<=high){
            if(v[mid]==2){
                int temp=v[mid];
                v[mid]=v[high];
                v[high]=temp;
                high--;
            }
            else if(v[mid]==0){
                int temp=v[mid];
                v[mid]=v[low];
                v[low]=temp;
                mid++;
                low++;
            }
            else{
                mid++;
            }
        }
        return ;
        
    }
};