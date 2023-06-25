int sum(int a, int b);
void printstar(int n){
	printf("_______________________________________________________________________________________________________________________________\n");
	int i;
	printf("Enter the star:");
	scanf("%d", &n);
	for(i=0;i<n;i++){
		printf("%c\n", '*');
	}
}
int main(){
	int a,b,n;
	printf("a:");
	scanf("%d", &a);
	printf("b:");
	scanf("%d", &b);
	int c;
	c=a+b;
	printf("%d + %d = %d\n", a, b, c);
	printstar(n);
	return 0;
}
int sum(int a, int b){
	return a+b;
}
