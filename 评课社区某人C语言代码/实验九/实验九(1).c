#include<stdio.h>
#include<stdlib.h>
void main() {
	FILE *fp;
	int total_book=0,book;
	float total_cost=0.0,cost;
	if((fp=fopen("book.dat","r"))==NULL){
	 	printf("book file can��t open��");
		exit(0); 
	} 
	while(feof(fp)==0){
		fseek(fp,24L,1);
		fscanf(fp,"%d%f\n",&book,&cost);
		total_book+=book;
		total_cost+=cost*book; 
	} 
	printf("total books=%d\n",total_book);
	printf("total cost=%f\n",total_cost);
	fclose(fp);
}

