#include <stdio.h>
void frequency(int size, int *a){
    int i,j,visited= -1;;
    int fr[size];
    for( i=0; i<size; i++){
          int count=1;

        for(j=i+1; j<size; j++){
            if(a[i]==a[j]){
             count++;
             fr[j]=visited;
            }
         }
         if (fr[i]!=visited)
         fr[i]=count;
       }

       for (i=0; i<size; i++){
        if (fr[i]!=visited)
       printf("The frequency of %d is : %d \n", a[i],fr[i]);
       }
}


int main(){ 

    int n;
    printf("Enter the total number of elements in the array : ");
    scanf("%d",&n);

    int arr[n],i; 

    printf("Enter the numbers : ");
      for ( i=0 ; i<n; i++){
    scanf("%d",&arr[i]);
} 
   frequency(n, arr);
return 0; 
}