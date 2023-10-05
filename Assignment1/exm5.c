#include <stdio.h>
#include <stdlib.h>
int main(int argc,char* argv[]){
int hour,second;
if (argc != 2){
printf("you did't entered input in command prompt!!\n");
return 0;
}
hour = atoi(argv[1]);
second = hour * 3600;
printf("%d hours = %d seconds\n",hour,second);
	return 0;
}
