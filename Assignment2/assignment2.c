#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char* argv[]){

    unsigned long long int  number = 0 , temp , counter1 , counter2, armstrongnum = 0, remainder , sum , n , mul;
    while(armstrongnum <= 25){
        temp = number;
        counter1 = 0;
        sum = 0;
        mul = 1;
        while (temp != 0 ){
            temp /= 10;
            counter1 ++;
        }
        counter2 = counter1;
        temp = number;
        while (temp != 0 ){

            remainder=temp%10;
            /// start of C code (use GCC)
            while(counter2 != 0){
                //printf("loop 4\n");
                mul*= remainder;
                counter2--;
            }
            sum += mul;
            temp = temp / 10;
            counter2 = counter1;
            mul = 1;
        }
        if (sum == number){
            printf("%llu is an Armstrong number.\n", number);
            armstrongnum ++;
            }
        number++;

    }

    return 0;
}