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
    else{

        for(a = 0; a < strlen(keyboard_c); a++){
            if (encoded_text[b] == keyboard_c[a]){
                if (a + displacement >= 26){
                    encoded_text[b] = keyboard_c[a + displacement - 26];
                    break;
                }
                        else if (a + displacement < 0){
                            encoded_text[b] = keyboard_c[a + displacement + 26];
                            break;
                        }
                                else encoded_text[b] = keyboard_c[a + displacement];
                                break;

            }

        }

    }
}

}
