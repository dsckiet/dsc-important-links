// Ques: Count the number of subset with a given sum in array
// I/P : arr[] , sum
// O/P : 3



int subsetSum(int arr[],int sum,int n){
    
    //Top-Down table
    int t[n+1][sum+1];
    
    //Base Condition
    for(int i=0;i<n+1;i++){
      for(int j=0;j<sum+1;j++){
        if( i == 0 ){
            t[i][j] = 0;
        }
        if( j == 0 ){
            t[i][j] = 1;
        }
      }
    }
    
    //Choice Condition
    for(int i=1;i<n+1;i++){
      for(int j=1;j<sum+1;j++){
          
          if(arr[i-1] <= j){
              t[i][j] = t[i-1][j-arr[i-1]] + t[i-1][j]; // OR change to + because we have to count all the subsets.
          }else{
              t[i][j] = t[i-1][j];
          }    
          
      }
    }  
    
    return t[n][sum];
}


int main(){
//...
}
