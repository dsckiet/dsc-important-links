// Ques: Divide into two subset such that we got the minimum difference between sum of two subset elements.
// I/P : arr[]
// O/P : int (1)
// Approach : S1+S2 = Range(sum) => We have to minimise S2-S1 => Range-2S1


//..Headers

int subsetSum(int arr[],int sum,int n){
    
    //2-D matrix
    bool t[n+1][sum+1];
    
    //Base Condition
    for(int i=0;i<n+1;i++){
      for(int j=0;j<sum+1;j++){
          if(i==0){
            t[i][j] = false;
          }
          if(j==0){
            t[i][j] = true;
          }
      }
    }
    
    //Choice Condition
    for(int i=1;i<n+1;i++){
      for(int j=1;j<sum+1;j++){
          
          if(arr[i-1] <= j){
            t[i][j] = t[i-1][j-arr[i-1]] || t[i-1][j];
          }else{
            t[i][j] = t[i-1][j];
          }  
        
     }
   }
   
   int diff = INT_MAX;
   
   for(int j=sum/2; j>=0; j--){
      if(t[n][j] == true){
          diff = sum-2*j;
          break;
      }
   }   
   
   return diff;
    
}

int main(){
//...
}
