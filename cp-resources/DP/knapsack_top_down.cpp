//Iteration version of knapsack with memoization is called TOP-DOWN knapsack. (A Real DP)

//...Headers

int dp[n+1][w+1];

//Knapsack recursive/memoize -> knapsack top-down
int knapsack(int wt[],int val[],int w,int n){
    
    //Base Condition
    for(int i=0;i<n+1;i++){
      for(int j=0;j<w+1;j++){
          if( i==0 || j==0 ){
              dp[i][j] = 0;
          }
      }
   }
   
   //Choice Condition
   for(int i=1;i<n+1;i++){
     for(int j=1;j<n+1;j++){
     
        if( wt[i-1] <= j ){
            dp[i][j] = max( val[i-1]+dp[i-1][j-wt[i-1]], dp[i-1][j] );
        }else{
            dp[i][j] = dp[i-1][j];
        }
        
     }
   }   
   
}

int main(){
//...
}
