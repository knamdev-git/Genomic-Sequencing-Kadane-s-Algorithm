#include <stdio.h>
int max (int a , int b ){
    
    if (a > b){
        return a;
        
    }
    else if(b>a){
        return b;
    }
    else{ 
        return 1;
    }
}
int main()
{
    int n = 5 ;
    int arr[] = {1,2,3,-2,5};
    
    int maxm = arr[0];
    int calculate ;
    
    for (int i = 1 ; i < n ; i++){
        calculate = arr[i] + arr[i-1];
        arr[i] = max(calculate,arr[i]);
        maxm = max(arr[i],maxm);    
    }
    printf("%d",maxm);
    return 0;
}
