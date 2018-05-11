#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "code.h"
   void codificare(char message_c[250], char keyboard1_c[],char keyboard2_c[],char keyboard3_c[], char encoded_text[250])
{
    int displacement;
    int a;
    int b;
    int length;


displacement = strchr(keyboard2_c,message_c[0]) - strchr(keyboard2_c,'a');
printf("\nDisplacement is: %d\n",displacement);
strcpy(encoded_text,message_c);

length = strlen(encoded_text);

for(b = 2; b < length; b++){
    if (encoded_text[b] == ' '){
            encoded_text[b] = ' ';
    }
    if else{

        for(a = 0; a < strlen(keyboard1_c); a++){
            if (encoded_text[b] == keyboard1_c[a]){
                if (a + displacement >= 10){
                    encoded_text[b] = keyboard1_c[a + displacement - 10];
                    break;
                }
                        else if (a + displacement < 0){
                            encoded_text[b] = keyboard1_c[a + displacement + 10];
                            break;
                        }
                                else encoded_text[b] = keyboard1_c[a + displacement];
                                break;

            }

        }

    }
     if else{

        for(a = 0; a < strlen(keyboard2_c); a++){
            if (encoded_text[b] == keyboard2_c[a]){
                if (a + displacement >= 9){
                    encoded_text[b] = keyboard2_c[a + displacement - 9];
                    break;
                }
                        else if (a + displacement < 0){
                            encoded_text[b] = keyboard2_c[a + displacement + 9];
                            break;
                        }
                                else encoded_text[b] = keyboard2_c[a + displacement];
                                break;

            }

        }

    }
     else{

        for(a = 0; a < strlen(keyboard3_c); a++){
            if (encoded_text[b] == keyboard3_c[a]){
                if (a + displacement >= 7){
                    encoded_text[b] = keyboard3_c[a + displacement - 7];
                    break;
                }
                        else if (a + displacement < 0){
                            encoded_text[b] = keyboard3_c[a + displacement + 7];
                            break;
                        }
                                else encoded_text[b] = keyboard3_c[a + displacement];
                                break;

            }

        }

    }
}

}
