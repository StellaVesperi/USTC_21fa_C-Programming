#include<stdio.h>
#include<math.h>
int main()
{float a,b,c,d,p,S;
printf("����a b c:"); 
scanf("%f%f%f",&a,&b,&c);
p=(a+b+c)/2;
p=p*(p-a)*(p-b)*(p-c); 
S=sqrt(fabs(p)); 
if(a+b<=c||c+b<=a||c+a<=b) 
	printf("DATA ERROR!");
else if(a==b&&b==c)
	printf("�ȱ������Σ�S=%f",S);
else if((a==b&&b!=c) ||(c==b&&b!=a)||(a==c&&b!=c))
	printf("���������Σ�S=%f",S); 
else if((fabs(b*b-c*c-a*a)<1e-5)||(fabs(c*c-b*b-a*a)<1e-5)||(fabs(a*a-c*c-b*b)<1e-5))
	printf("ֱ�������Σ�S=%f",S);
else printf("���������Σ�S=%f",S);  
return 0;}

