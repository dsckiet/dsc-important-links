//Memoize or storing the values of last calculated compuations to reduce the same calculations that is what DP do, change recursive to its memoized version.

//...Headers

int dp[n+1,w+1];
memset(dp,-1,sizeof(dp)); //initialize all array elements to -1

//Knapsack Memoization
int knapsack(int wt[],int val[], int w, int n){
    
    //Base Condition
    if( n==0 || w==0 ){
        return 0;
    }
    if( dp[n][w] != -1 ){
        return dp[n][w];
    }
    
    //Choice Condition
    if( wt[n-1] <= w ){
        dp[n][w] = max( val[n-1]+knapsack(wt,val,w-wt[n-1],n-1), knapsack(wt,val,w,n-1) );
    }else{
        dp[n][w] = knapsack(wt,val,w,n-1);
    }    

}

int main(){
//...
}
