#include<stdio.h>
int main(){
    char fName[15], lName[15];
    // printf("Hellow World!");
    int num1=4, num2=6, result;
    result = num1 + num2;
    printf("result of sum: %d", result);
    printf("Enter your firstName: ");
    scanf("%s", fName);
    printf("Enter your lastname: ");
    scanf("%s", lName);
    printf("Hey, I got your Full Name: %s %s", fName , lName);
    return 0;

};