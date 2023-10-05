#include <stdio.h>
#include <string.h>
int main(int argc,char* argv[]){
char name[20],address[20];
int age;
printf("Please enter your name: ");
scanf("%[^\n]s",name);


printf("Please enter your age: ");
scanf("%d",&age);
getchar();

printf("Please enter your address: ");
scanf("%[^\n]s",address);

printf("\n|\t**** Personal information ****\n|\n");
printf("| Name: %s\n",name);
printf("| Age: %d\n",age);
printf("| Address: %s",address);
printf("\n|\n|\t*******************************\n");
	return 0;
}
