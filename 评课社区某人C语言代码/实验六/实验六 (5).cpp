/*#include<stdio.h>  
int yue(int m,int n){
	int i,yes;
	for(i=1;i<m+1&&i<n+1;i++)
		if(m%i==0&&n%i==0)
			yes=i;
	return yes;
} 
int bei(int m,int n,int yue){
	return m*n/yue;
}
main(){
	int m,n,yueshu; 
	printf("����m,n��");
	scanf("%d%d",&m,&n);
	yueshu=yue(m,n); 
	printf("���Լ��Ϊ%d����С������Ϊ%d",yueshu,bei(m,n,yueshu));
}*/
#include<stdio.h> 
int yueshu,beishu; 
void yue(int m,int n){
	int i;
	for(i=1;i<m+1&&i<n+1;i++)
		if(m%i==0&&n%i==0)
			yueshu=i;
} 
void bei(int m,int n){
	beishu=m*n/yueshu; 
}
main(){
	int m,n; 
	printf("����m,n��");
	scanf("%d%d",&m,&n);
	yue(m,n);bei(m,n); 
	printf("���Լ��Ϊ%d����С������Ϊ%d",yueshu,beishu);
}
