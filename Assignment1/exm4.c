#include <stdio.h>
int main(int argc,char* argv){
int month;
printf("Please enter a number between 1-12: ");
scanf("%d",&month);
while (month > 12 || month < 1){
	printf("You entered wrong number please try again:");
	scanf("%d",&month);
}
printf("The month is: ");
switch(month){
	case 1:
	printf("January\n");
	break;
	case 2:
        printf("February\n");
	break;
	case 3:
        printf("March\n");
	break;
	case 4:
        printf("April\n");
	break;
	case 5:
        printf("May\n");
	break;
	case 6:
        printf("June\n");
	break;
	case 7:
	printf("July\n");
	break;
	case 8:
        printf("August\n");
	break;
	case 9:
        printf("September\n");
	break;
	case 10:
        printf("October\n");
	break;
	case 11:
        printf("November\n");
	break;
	default:
        printf("December\n");
	break;
}

	return 0;
}
