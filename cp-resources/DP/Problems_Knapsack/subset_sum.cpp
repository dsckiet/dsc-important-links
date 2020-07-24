// Ques: Is there any subset present in array whose sum is given SUM.
// I/P : Given a array arr[] and SUM
// O/P : Yes/No


bool knapsack(int arr[],int SUM,int n){

    //Top-down table
    bool t[n+1][SUM+1];
    
    //Base Condition to initialize the table
    for(int i=0;i<n+1;i++){
      for(int j=0;j<SUM+1;j++){
          if(i==0){
            t[i][j] = false;
          }
          if(j==0){
            t[i][j] = true;
          }
      }
   }
   
   //Choice Condition to fill the table
   for(int i=1;i<n+1;i++){
    for(int j=0;j<SUM+1;j++){
        
        if( arr[i-1] <= j ){
            t[i][j] = t[i-1][j-arr[i-1]] || t[i-1][j]; // For boolean max is OR
        }else{
            t[i][j] = t[i-1][j];
        }    
    }
  }
  
  //Result is stored in last index of table
  return t[n][SUM];
 } 


int main(){
//... n is the size of arr
}
