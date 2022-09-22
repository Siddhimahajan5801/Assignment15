#include <stdio.h>

 int dup_value(int *a, int size){
    int i;
    for(i=0; i<size-1; i++){
            if(a[i]==a[i+1])
            return a[i];
    }
    return 0;    
}

int main(){ 
    int n;
    printf("Enter the total number of elements in the array : ");
    scanf("%d",&n);

  int num[n],i; 

  printf("Enter the numbers : ");
for ( i=0 ; i<n; i++){
    scanf("%d",&num[i]);
}

//First occurance of adjacent duplicate values in the array
int dup; 
dup=dup_value(num, n);
printf("The value of adjacent duplicate element is (first occurance): %d ", dup);


return 0;
}

