// Ques : Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.
// Input: [-2,1,-3,4,-1,2,1,-5,4],
// Output: 6
// Explanation: [4,-1,2,1] has the largest sum = 6. 
// Approach : Kadane's Algorithm


//..Headers

int maxSubArraySum(int ar[],int n){

    int max_cur=0,max_so_far=INT_MIN;
    
    for(int i=0;i<n;i++){
        mx_cur = mx_cur + ar[i];
      
        if(mx_so_far < mx_cur){ // OR mx_so_far = max(max_so_far,mx_cur);
            mx_so_far = mx_cur;
        }
        
        if(mx_cur<0){
            mx_cur = 0;
        }
   }
   
    return mx_so_far;
}

int main(){
//...
}
