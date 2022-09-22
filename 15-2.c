#include <stdio.h>
int min(int,int[]);

int main(){ 
    int i,n;
    printf("Enter the value of n(total numbers) :");
    scanf("%d",&n);

    int num[n];
    printf("Enter the numbers : \n");
    for (i=0; i<n; i++)
    scanf("%d",&num[i]);

    printf("The smallest number of this array is : %d ", min(n,num));


return 0; 
}

int min(int x, int a[]){

   int min_no=a[0];

   for (int i=1; i<x; i++){
    min_no=min_no<a[i]?min_no:a[i]; 
   }    
   return min_no;
}