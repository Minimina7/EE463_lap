#include <stdio.h>
int main(int argc,char* argv[]){
char* gre_months[] ={
	"January",
	"February",
	"March",
	"April",
	"May",
	"June",
	"July",
	"August",
	"September",
	"October",
	"November",
	"December"
};
char* hijri_months[] ={
	"Muharram",
	"Safar",
	"Rabi-alawwal",
	"Rabi-althani",
	"Jumada-alawwal",
	"Jumada-alakher",
	"Ragab",
	"Shaban",
	"Ramadan",
	"Shwwal",
	"Dhu alqida",
	"Dhu alhijjah"
};
printf("Gregorian months:\n");
for(int i = 0;i<12;i++){
	printf("%d- %s\n",i+1,gre_months[i]);
}
printf("\nHijri months:\n");

for(int i = 0;i<12;i++){
	printf("%d- %s\n",i+1,hijri_months[i]);
	}

return 0;
}
