 #include<stdio.h>
// Program Number 1
 int main(){
    int age;
     printf("Enter Your age : ");
     scanf("%d",&age);
    switch(age){
         case 0:
         printf("You are not born yet !!!\n");
         break;
        case 12:
         printf("Your age is 12 Now.");
         break;
         case 18:
         printf("Your age is 18 Now.");
         break;
         case 25:
         printf("Your age is 25 Now.");
         break;
         default:
        printf("Bhai maan gya Bade ho gye\n");
         break;
     }
     return 0;
 }


// Program Number 2
#include<stdio.h>

int main(){
    char character;
    printf("Enter Any Character : ");
    scanf("%c",&character);
    switch(character){
        case 'a':
        printf("You Entered Char A \n");
        break;
        case 'b':
        printf("You Entered Char B \n");
        break;
        case 'c':
        printf("You Entered Char C \n");
        break;
        case 'm':
        printf("You Entered Char M \n");
        break;
        case 'y':
        printf("You Entered Char Y \n");
        break;
        case 'z':
        printf("You Entered Char Z \n");
        break;
        
        default:
        printf("Case me nhi hai so No output\n");
        break;
    }
    return 0;
}
