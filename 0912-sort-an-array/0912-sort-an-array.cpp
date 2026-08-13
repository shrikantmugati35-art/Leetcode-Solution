class Solution {
public:
    void margesort(const vector<int>& a, const vector<int>& b, vector<int>& res){
    int i=0,j=0,k=0;
    while(i<a.size() && j< b.size()){
        if(a[i]<b[j]) res[k++]=a[i++];
        else res[k++]=b[j++];
    }
    if(i==a.size()) {
        while(j<b.size()) res[k++]=b[j++];
    }
    if(j==b.size()){    
        while(i<a.size()) res[k++]=a[i++];
    }
}
    void  marge(vector<int>&v){
        int n= v.size();
        if(n<=1) return;
        int n1=n/2;
        int n2=n-n/2;
        vector<int>v1(n1) ,v2(n2);
        for(int i=0;i<n1;i++){
            v1[i]=v[i];
        }
         for(int i=0;i<n2;i++){
            v2[i]=v[i+n1];
        }
        marge(v1);
        marge(v2);
        margesort(v1,v2,v);

    }
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>v=nums;
        marge(v);
        return v; 
    }
};