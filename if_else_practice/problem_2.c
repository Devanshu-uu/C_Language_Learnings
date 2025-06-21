#include<stdio.h>

int main(){
    
    float income;
    printf("Enter Your Income: ");
    scanf("%f",&income);

    if (income>=10){
        printf("Your Tax is %.2f",(30.0/100)*income);


    }
    else if (income>=5)
    {
        printf("Your Tax is %.2f" ,(20.0/100)*income);
    }
    else if (income>=2.5)
    {
        printf("Your Tax is %.2f", (5.0/100)*income);
    }
    else{
        printf("Your Tax is 0" );
    }
    
    return 0;
}