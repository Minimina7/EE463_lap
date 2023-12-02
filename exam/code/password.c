// Moaid Abdullah Aljabri
// 2035724

#include <stdio.h>

int main (int argc, char* argv[]){

    char letter[] = "abcdefghijklmnopqrstuvwxyz"; // array of all letters in english
    int l1; // letter 1
    int l2; // letter 2
    int l3; // letter 3
    int l4; // letter 4

    for(l1 = 0; l1 < 26; l1++){ // for loop for the first letter to go from a to z
    for(l2 = 0; l2 < 26; l2++){ // second for loop for the second letter to go from a to z
        if(l2 == l1 || l2 == l3 || l2 == l4 ){ 
            // if letter 2 is the same as any letter it will skip the next iteration
            continue;
        }
    for(l3 = 0; l3 < 26; l3++){ // third for loop for the third letter to go from a to z
        if(l3 == l1 || l3 == l2 || l3 == l4 ){
            // if letter 3 is the same as any letter it will skip the next iteration
            continue;
        }
    for(l4 = 0; l4 < 26; l4++){ // forth for loop for the forth letter to go from a to z
        if(l4 == l1 || l4 == l2 || l4 == l3 ){
            // if letter 4 is the same as any letter it will skip the next iteration
            continue;
        }
        // print the result inside loop 4
        printf("%c%c%c%c\n",letter[l1],letter[l2],letter[l3],letter[l4]);
    }
    }
    }
    }



    return 0;
}