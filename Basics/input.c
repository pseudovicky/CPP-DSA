#include<stdio.h>
int main() {
    
    char fname[50] ;
    printf("Enter your first name: ");
    scanf("%s", fname);
    char lname[50];
    printf("Enter your last name: ");
    scanf("%s", lname);
    printf("Your full name is: %s %s\n", fname, lname);
    
    return 0;
}