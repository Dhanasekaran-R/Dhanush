#include <stdio.h>
int main(){
    int a,b,result,choice;
    printf("Enter 2 numbers : ");
    scanf("%d%d",&a,&b);
    printf("The choices are 1.Add 2.Sub 3.Mul 4.Div");
    printf("Enter your choice");
    scanf("%d",&choice);

    switch (choice){
        case 1:
        result=a+b;
        printf("The add of %d and %d is %d",a,b,result);
        break;

        case 2:
        result=a-b;
        printf("The sub of %d and %d is %d",a,b,result);
        break;

        case 3:
        result=a*b;
        printf("The mul of %d and %d is %d",a,b,result);
        break;

        case 4:
        result=a/b;
        printf("The div of %d and %d is %d",a,b,result);
        break;    
    }
    return 0;

}