#include <stdio.h>

int main()
{
    float core_1;
    float core_2;
    float core_3;
    printf("Enter Core 1 Marks: ");
    scanf("%f", &core_1);
    printf("Enter Core 2 Marks: ");
    scanf("%f", &core_2);
    printf("Enter Core 3 Marks: ");
    scanf("%f", &core_3);

    float percent;
    percent = (core_1 + core_2 + core_3) / 3;

    if (core_1<33 || core_2<33 || core_3<33 )
    printf("You are fail. Ft- You not scored minimun 33 marks in individual subject");
    
    else if (percent>=40){
    printf("You Are passed ");
    }

    else{
    printf("You Are failed. Ft- Not Scored 40 precent total");
    }

    return 0;
}