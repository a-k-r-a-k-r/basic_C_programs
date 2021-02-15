/*
    Program: C program to print all the comments present in another C program to the standard output
    Author : akr
    GitHub : a-k-r-a-k-r
*/

#include <stdio.h>
#include <stdlib.h>

//Defining global variables
FILE *fp ;

//function to deal with multi-line comments
void multi_line_comment(){
 char d,e;
    while((d=fgetc(fp))!=EOF){
        if(d!='*'){     //print the character till the closing character for comment is found
            printf("%c",d);
        }            
        else if(d=='*'){    //if the "*" is found, check whether the next character is "/"
            e=fgetc(fp);  
            if(e=='/'){
                return;
            }            
        }
   }
}



//function to deal with single line comments
void single_line_comment(){
    char d;
    while((d=fgetc(fp))!=EOF){
    printf("%c",d);
        if(d=='\n'){            
            return; 
        }         
    }
}


//function to check for comment possibility
void check_for_comment(char c){
    char d;

    if( c == '/'){      //all comments in C program will start with a "/"
        if((d=fgetc(fp))=='*'){     //multi-line comments will have "*" as the next character
            printf("/*");
            multi_line_comment(); 
            printf("*/\n");
        }
        else if( d == '/'){     //single line comments will have "/" as the next character
            printf("//");
            single_line_comment();
        }
        else{       //if it is something else that starts with "/", then ignore it
            return;
        }
    }
    else{       //if "/" is not found, then just move on
        return;
    }        
}


//main function
int main(){
    char c;
    fp = fopen ("code.c","r");      // open the c program file

    while((c=fgetc(fp))!=EOF)      //search the file, until the End Of File(EOF) is reached 
        check_for_comment(c);  

    fclose(fp);     //close the file pointer once the EOF is reached
    return 0;
}