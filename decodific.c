#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "code.h"
void decodificare(char message_d[250], char keyboard_d[],char decoded_text[250])
{
    int length;
    int i;
    int j;
    int displacement;

displacement = strchr(keyboard_d,message_d[0]) - strchr(keyboard_d,'a');
printf("\ndisplacement is: %d",displacement);

length = strlen(message_d);
for(i = 0; i < length; i++){
    if (message_d[i] == ' '){
        decoded_text[i]=' ';
        }
                else{

                    for(j = 0; j < strlen(keyboard_d); j++){
                        if (message_d[i] == keyboard_d[j]){
                            if (j - displacement >= 26){
                                decoded_text[i] = keyboard_d[j - displacement - 26];
                                }
                                else if (j - displacement < 0){
                                        decoded_text[i] = keyboard_d[j - displacement + 26];
                                        }
                                    else decoded_text[i] = keyboard_d[j - displacement];
                            }

                          }
                     }
      }


}
