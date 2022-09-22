#include <stdio.h>
int max(int,int[]);

int main(){ 
    int i,n;
    printf("Enter the value of n(total numbers) :");
    scanf("%d",&n);

    int num[n];
    printf("Enter the numbers : \n");
    for (i=0; i<n; i++)
    scanf("%d",&num[i]);

    printf("The greatest number of this array is : %d ", max(n,num));


return 0; 
}

int max(int x, int a[]){

   int max_no=a[0];

   for (int i=1; i<x; i++){
    max_no=max_no>a[i]?max_no:a[i]; 
   }    
   return max_no;
}