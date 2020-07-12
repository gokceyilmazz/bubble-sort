#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int arr[],int n){
int i,j,gecici;

for(i=1 ; i<n ; i++){
    for(j=0 ; j<n-i ; j++){
        if(arr[j]>arr[j+1]){
            gecici=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=gecici;
        }

    }
}

}

int main()
{
   int array[]={34,54,12,0,4,56,123,5};
   int n=sizeof(array)/sizeof(array[0]);
   int k;
  printf("Siralanmamis hali:\n");
   for(k=0 ; k<n ; k++){
    printf("%d, ",array[k]);

   }
printf("\n");
   bubbleSort(array,n);
   printf("Siralanmis hali:\n");
   for(k=0 ; k<n ; k++){
    printf("%d, ",array[k]);
   }

    return 0;
}
