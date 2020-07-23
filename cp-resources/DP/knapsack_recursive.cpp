//Given weight array and a value to find out maximum elements in the given value.

//...Headers


//Knapsack Recursive
int knapsack(int wt[],int val[],int w,int n){
    //Base Condition
    if(n==0 || w==0){
        return 0;
    }
    
    //Choice function
    if(wt[n-1] <= w){
        return max( val[n-1]+knapsack(wt,val,w-wt[n-1],n-1) , knapsack(wt,val,w,n-1) );
    }else{
        return knapsack(wt,val,w,n-1);
    }    
}


int main(){
//....
}
