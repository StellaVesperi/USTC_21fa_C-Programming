#include<stdio.h>
int main()
{int x,y;
 printf("������һ����-1000000��1000000֮�������\n");
 scanf("%d",&x);
 y=x%15;
 if (x<-1000000||x>1000000){
 	printf("not in range\n");
 }
 else if (y<=1e-10){
 	printf("YES");
 }
 else printf("NO");
 return 0;
}

