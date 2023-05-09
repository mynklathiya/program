#include<stdio.h>
#include<conio.h>

main()

{

    float p,rate,time,si;
    printf("enter p amount=");
    scanf("%f",&p);

    printf("enter rate of=");
    scanf("%f",&rate);

    printf("enter time in year=");
    scanf("%f",&time);

    si=(p*time*rate)/100;

    printf("\nsimple interest=%2f",si);

    getch();

}