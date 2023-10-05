#include <stdio.h>
int main(int argc,char* argv[]){
int num[2];
int min, max, avg;
printf("Please enter 3 numbers:");
scanf("%d %d %d",&num[0],&num[1],&num[2]);
min = num[0];
max = num[0];
for (int i = 0; i < 3;i++){
if (max < num[i]){
	max = num[i];
}
if (min > num[i]){
	min = num[i];
}
}
avg = (num[0] + num[1] + num[2]) / 3;
printf("The maximum number is: %d\n",max);
printf("The minimum number is: %d\n",min);
printf("The average is: %d\n",avg);

return 0;
}
