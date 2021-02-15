/*
    Program: C program to print whether the entered line is a comment in C language
    Author : akr
    GitHub : a-k-r-a-k-r
*/


#include<stdio.h>

void main(){
    char text[30];
    int i = 0;

    printf("Enter a line of code: ");
    gets(text);

    if(text[0] == '/'){     //since every comments in C language starts with a "/"
        if(text[1] == '/'){     //checking for single-line comments
            printf("This is a single line comment\n");
        } 
        else if(text[1] == '*'){    //checking for multi-line comments
            for(i = 2; i <= 30; i++){
                if(text[i] == '*' && text[i + 1] == '/'){   //multi-line comments ends with "*/"
                    printf("This is a multi-line comment\n");
                    break;      //break the loop if the comment ends
                }
                else{
                    continue;   //continue until the end of comment ( */ ) is found
                }
            }
        }
    }
    else{
        printf("This is not a Comment\n");      //if it is not a comment
    }
}