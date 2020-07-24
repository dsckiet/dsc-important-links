// Ques: is given array divide into two subset and those two subsets have equal sum?
// I/P : arr[]
// O/P : T/F
// Approach : check half sum by subset sum in array, if present, then other subset also has same sum(arr_sum/2) 



bool subsetSum(int arr[],int SUM,int n){
    
    //Top-down table
    bool t[n+1][SUM+1];
    
    //Base Condition
    for(int i=0;i<n+1;i++){
      for(int j=0;j<SUM+1;j++){
          if( i == 0 ){
            t[i][j] = false;
          }
          if( j == 0 ){
            t[i][j] = true;
          }
      }
    }
    
    //Choice Condition
    for(int i=1;i<n+1;i++){
      for(int j=1;j<SUM+1;j++){
      
          if( arr[i-1] <= j ){
              t[i][j] = t[i-1][j-arr[i-1]] || t[i-1][j];
          }else{
              t[i][j] = t[i-1][j];
          }
          
      }
    }
    
    return t[n][SUM];
}


int main(){
//... arr sum should be even to divide into two subset
  
  int arr_sum = 0;
  for(int i=0;i<n;i++){
      arr_sum += arr[i];
  }    
  
  if(arr_sum%2!=0){
     return false;
  }else{
     return subsetSum(arr,sum/2,n);
  }
  
}
