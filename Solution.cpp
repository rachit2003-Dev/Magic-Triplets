class Solution{
	public:
	int countTriplets(vector<int>nums){
	    int a=0,i,j;
	    int n=nums.size();
	    for(i=1;i<=n-2;i++){
	        int l=0,m=0;
	        for(j=i-1;j>=0;j--){
	            if(nums[j]<nums[i])
	            l++;
	        }
	        for(j=i+1;j<n;j++){
	            if(nums[j]>nums[i])
	            m++;
	        }
	        a=a+(l*m);
	    }
	    return a;
	    // Code here.
	}
};
