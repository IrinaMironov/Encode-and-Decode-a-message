#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "code.h"
void decodificare(char message_d[250],char keyboard1_d[],char keyboard2_d[],char keyboard3_d[],char decoded_text[250])
{
    int length;
    int i;
    int j;
    int displacement;

displacement = strchr(keyboard2_d,message_d[0]) - strchr(keyboard2_d,'a');
printf("\ndisplacement is: %d",displacement);

length = strlen(message_d);
for(i = 0; i < length; i++){
    if (message_d[i] == ' '){
        decoded_text[i]=' ';
        }

                    for(j = 0; j < strlen(keyboard1_d); j++){
                        if (message_d[i] == keyboard1_d[j]){
                            if (j - displacement >= 10){
                                decoded_text[i] = keyboard1_d[j - displacement - 10];
                                }
                                else if (j - displacement < 0){
                                        decoded_text[i] = keyboard1_d[j - displacement + 10];
                                        }
                                    else decoded_text[i] = keyboard1_d[j - displacement];
                            }

                          }

                            for(j = 0; j < strlen(keyboard2_d); j++){
                        if (message_d[i] == keyboard2_d[j]){
                            if (j - displacement >= 9){
                                decoded_text[i] = keyboard2_d[j - displacement - 9];
                                }
                                else if (j - displacement < 0){
                                        decoded_text[i] = keyboard2_d[j - displacement + 9];
                                        }
                                    else decoded_text[i] = keyboard2_d[j - displacement];

                     }
      }

            for(j = 0; j < strlen(keyboard3_d); j++){
                        if (message_d[i] == keyboard3_d[j]){
                            if (j - displacement >= 7){
                                decoded_text[i] = keyboard3_d[j - displacement - 7];
                                }
                                else if (j - displacement < 0){
                                        decoded_text[i] = keyboard3_d[j - displacement + 7];
                                        }
                                    else decoded_text[i] = keyboard3_d[j - displacement];

      }


}
}
}
