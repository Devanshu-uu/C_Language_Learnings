#include<stdio.h>

int main(){
    float marks;
    printf("Enter Your Marks: ");
    scanf("%f" , &marks);

    if(marks>=90){
        printf("Your Grade is A \n Congratulations!!");
        
    }
    
    else if (marks>=80){
        printf("Your Grade is B \n Congratulations!!");
        
    }
    else if (marks>=70){
        printf("Your Grade is C \n Congratulations!!");
        
    }
    else if (marks>=60){
        printf("Your Grade is D \n Congratulations!!");
        
    }
    else if (marks>=50){
        printf("Your Grade is E \n Congratulations!!");
        
    }

    else{
        printf("Your are fail!!");
    }
    
    
    return 0;
}