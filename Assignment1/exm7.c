#include <stdio.h>
#include <string.h>
struct students{
	char name[100];
	int grade;
};
int main(int argc,char* argv[]){
	struct students stu[10];

	strcpy(stu[0].name,"Moaid");
	stu[0].grade = 100;
	strcpy(stu[1].name,"Turky");
	stu[1].grade = 94;	
	strcpy(stu[2].name,"Faris");
	stu[2].grade = 99;
	strcpy(stu[3].name,"Ahmed");
	stu[3].grade = 86;
	strcpy(stu[4].name,"Talal");
	stu[4].grade = 81;
	strcpy(stu[5].name,"Mohmmed");
	stu[5].grade = 75;
	strcpy(stu[6].name,"Abdullah");
	stu[6].grade = 87;
	strcpy(stu[7].name,"Bander");
	stu[7].grade = 69;
	strcpy(stu[8].name,"Eyad");
	stu[8].grade = 53;
	strcpy(stu[9].name,"Ali");
	stu[9].grade = 74;
	for(int i = 0; i < 10 ; i++){
	printf("Student %d name: %s\t grade: %d\n",i+1,stu[i].name,stu[i].grade);
	}
	return 0;
}
