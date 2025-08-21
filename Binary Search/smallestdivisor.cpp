 // Brute Force approach
        
        // int n=nums.size();
        // int divisor=INT_MAX;
        // sort(nums.begin(),nums.end());
        // int t=nums[n-1];
        // int final_sum=INT_MAX;
        // for(int i=1;i<=t;i++){
        //     int sum=0;
        //     for(int j=0;j<n;j++){
        //         int temp=ceil((double)nums[j]/i);
        //         sum+=temp;
        //     }
        //     final_sum=min(sum,final_sum);
        //     if(final_sum<=threshold){
        //         divisor=min(i,divisor);
        //         break;
        //     }
        // }
        // return divisor;