#include <stdio.h>

typedef struct book{
	char name[20];
	int year;
}Book;

int main(){
	Book b[4];
	for (int i =0; i<4; i++){
		scanf("%s %d", b[i].name, &b[i].year);}
	for (int i = 0; i<4; i++){
		printf("Name: %s, Published Year: %d\n", 
				b[i].name, b[i].year);}
return 0;
}
