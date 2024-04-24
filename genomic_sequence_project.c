/*
 * Genomic Sequencing using Kadane's Algorithm
 * This program takes a genomic sequence as input and finds the maximum sum subsequence using Kadane's Algorithm.
 * Input: Genomic sequence (A, C, G, T)
 * Output: Maximum sum of a subsequence
 */
#include <stdio.h>

// Function to find the maximum of two integers
int max (int a , int b ){
    int maxm ;
    
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
// Function to find the maximum sum subarray using Kadane's Algorithm

int maxSubArray (int nums[], int n){
     int maxm = nums[0]; 
    
    for (int i = 1 ; i < n ; i++){
        nums[i] = max(nums[i],nums[i]+nums[i-1]);
        maxm = max(nums[i],maxm); // Stores the maximum sum of a subsequence
    }
    
    printf("\nContiguous maximum sum is %d",maxm); 

}
// Function to convert nucleotide characters to numerical values

int convertToValue(char c) {
    switch(c) {
        case 'A':
        case 'a':
            return 1;
        case 'C':
        case 'c':
            return 2;
        case 'G':
        case 'g':
            return 3;
        case 'T':
        case 't':
            return 4;
        default:
            return 0; // Return 0 for unknown characters
    }
}

int main() {

    int n = 12 ;
    char Sequence[n];
    int num_sequence[n];
    
    printf("\nEnter Genomic Sequence");
    for (int i = 0 ; i < n ; i++){
        scanf ("%c ",&Sequence[i]);
    }
    
    for (int i = 0 ; i < n ; i++){
        num_sequence[i] = convertToValue(Sequence[i]);
    }
    int max_sum = maxSubArray(num_sequence,n);
    printf("\nMaximum sum of a subsequence : %d\n",max_sum);
       return 0;
}

