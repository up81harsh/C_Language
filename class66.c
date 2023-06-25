#include <stdio.h>
struct car{
	char name[30];
	int seats;
	float price;
};
int main(){
	struct car mycar;
	printf("Enter Car Name:");
	gets(mycar.name);
	printf("Enter Number of Seats in Car:");
	scanf("%d", &mycar.seats);
	printf("Enter Car Price:");
	scanf("%f", &mycar.price);
	printf("\t\xdb\xdb\xdb\xdb Details Is: \xdb\xdb\xdb\xdb\n");
	printf("Name=%s\nSeats=%d\nPrice=Rs %.2f\n", mycar.name, mycar.seats, mycar.price);
}
