#include <stdio.h>
int main(){
	int account;
	char name[30];
	double balance;
	
	FILE *ptrf;
	if(( ptrf = fopen("clients.dat", "w") ) == NULL){
		printf("File could not be opened\n");
	}
	else{
		printf("Enter the account name and balance.\n");
		printf("Enter EOF to end input.\n");
		printf("? ");
		scanf("%d%s%lf", &account, name, &balance);
		fprintf(ptrf,"%d %s %lf", account, name, balance);
	}
	while(!feof(ptrf)){
		fprintf(ptrf, "%d %s %.2f\n", account, name, balance);
		printf("Enter the values\n ");
		scanf("%d%s%lf", &account, name, &balance);
		fclose(ptrf);	
	}

}	
	
