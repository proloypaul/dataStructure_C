#include<stdio.h>
#include<string.h>
struct typeStored
{
    int num1;
    int num2;
    char name[20];
    int arr[4];
};
struct typeStored s = {5, 7, "Utsha", {4, 6, 2, 4}};
int main(){
    
    struct  typeStored *p = &s;
    // s1.num2 = 6;
    // s1.num1 = 8;
    char fName[15], lName[15];
    // printf("Hellow World!");
    int result;
    // result = s1->num1 + s1->num2;
    // printf("result of sum: %d \n", result);
    printf("data one %d or data two %d and data three %s four %d \n", p->num1, p->num2, p->name, p->arr[1]);
    // printf("Enter your firstName: ");
    // scanf("%s", fName);
    // printf("Enter your lastname: ");
    // scanf("%s", lName);
    // printf("Hey, I got your Full Name: %s %s", fName , lName);
    return 0;

};