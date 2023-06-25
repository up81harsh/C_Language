#include <stdio.h>
int main(){
	char ch;
	int a,n,i,j;
	printf("Y for using the Program:\nN for not using the Program:\nEnter = ");
	scanf("%c", &ch);
	while(1){
		switch(ch){
		case 'Y':
			printf("\n");
			printf("Enter 1 for Triangular Pattern:\n");
			printf("Enter 2 for Reversed Triangular Pattern:\n");
			printf("Enter 3 for EXIT the Program\n");
			scanf("%d", &a);
			switch (a){
				case 1:
					printf("Enter the Number of Rows:");
					scanf("%d", &n);
					for(i=1;i<=n;i++){
						for(j=1;j<=i;j++){
							printf("* ");
						}
						printf("\n");	
					}
				break;
				case 2:
					printf("Enter the Number of Rows:");
					scanf("%d", &n);
					for(i=n;i>=1;--i){
						for(j=1;j<=i;j++){
							printf("* ");
						}
						printf("\n");	
					}
				break;
				case 3:
				printf("Thank You For Using Our Program\n(^_^)\n");
				goto end;
				default:
				printf("Wrong Choice!!!!!\nRetry!!!\n");
				break;	
			}
			break;
		case 'N':
		printf("\n");
		printf("Thank You For Using Our Program\nHave a Nice Day\n(^_^)(^_^)(^_^)\n");
		goto end;
		default:
		printf("Wrong Choice!!!!!");
		goto end;		
	}
	}
	
	end:
	return 0;
}
