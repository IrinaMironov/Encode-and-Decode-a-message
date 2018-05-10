
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "code.h"

int main()
{
char keyboard[] = "qwertyuiopasdfghjklzxcvbnm";
char message[250];
char decoded_message[250];
char encoded_message[250];
char option[50];
int encode, decode;

//try GitHub
printf(" Enter the desired option (encode or decode)");
gets(option);
printf("Your chosen option is %s", option);

encode=strcmp(option,"encode");
decode=strcmp(option,"decode");

if (encode==0){
    printf("\nEnter your message: ");
    gets(message);
   // printf("\n%s",message);

    codificare(message,keyboard,encoded_message);
    printf("\nThe encoded message:");
    puts(encoded_message);

}
else if (decode==0){
    printf("\nEnter your message: ");
    gets(message);
   // printf("\n%s",message);
    decodificare(message,keyboard,decoded_message);
    printf("\nThe decoded message: ");
    puts(decoded_message);
    }

else printf("\n Enter your option correctly! ");

return 0;
}
