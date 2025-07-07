#include <stdio.h>

int positive_integers=0;

int count(int a[],int n ){

  for (int i = 0; i < n; i++)

  {
    if (a[i]>0)
    {
        positive_integers++;
    }
    
  }
  return positive_integers;
  
}

int main(){
    int arr[]={1,-2,-3,4,5,-6,7,-8,9,10};

    printf("The no of positive intergers are %d \n", count(arr,10));
    


    return 0;
}