#include <bits/stdc++.h>
void two_suiji(int n1,int shuzu[]){
	int min,max;
	printf("������ȷ��min:");
	scanf("%d",&min);
	printf("������ȷ��max:");
	scanf("%d",&max);
	srand(time(NULL));
	for(int i=0;i<n1;i++)
		shuzu[i]=rand()%(max-min+1)+min;
}
void two_shuru(int n1,int shuzu[]){

	int temp=0;
	for(int i=0;i<n1;i++)
	{	printf("�����%d��ֵ��",i+1);
		scanf("%d",&temp);
		shuzu[i]=temp; 
	} 
}
void two_tongzhi(int n1,int shuzu[]) {
	int a;
	printf("���볣����ֵ:"); 
	scanf("%d",&a);
	for(int i=0;i<n1;i++)
		shuzu[i]=a;
}
void two_dengcha(int n1,int shuzu[]){
 	int a0,d;
	printf("��������:");
	scanf("%d",&a0);
	printf("���빫��:");
	scanf("%d",&d);
	for(int i=0;i<n1;i++) 
		shuzu[i]=a0+i*d;
} 
int four_yige(int n1,int shuzu[]){
	int weizhi,temp,j; 
	printf("������Ҫɾ�����±�:");
	scanf("%d",&weizhi); 
	for(j=weizhi;j<n1;j++)
	{	shuzu[j-1]=shuzu[j]; 
	} 
	n1=n1-1;
	return n1; 
} 
int four_yizu(int n1,int shuzu[]){
	int min,max,d,j; 
	printf("������Ҫɾ�����±��½�:");
	scanf("%d",&min);
	printf("������Ҫɾ�����±��Ͻ�:");
	scanf("%d",&max);
	d=max-min+1;
	for(j=min;j<n1;j++)
	{	shuzu[j-1]=shuzu[j+d-1]; 
	} 
	n1=n1-d;
	return n1; 
}
int four_zhi(int n1,int shuzu[]){
    int j,k,d=0,num;
    printf("������Ҫɾ����Ԫ��:");
	scanf("%d",&num);
	for(j=0;j<n1;)
	{	if(shuzu[j]==num)
		{	for(k=j;k<n1;k++)
				shuzu[k]=shuzu[k+1]; 
			d++;
		}
		else j++; 
	}
	n1=n1-d;
	return n1; 

} 
int five_charu1(int n1,int shuzu[]){ 
	int m,j,num; 
	printf("�������ڼ�λ�ĺ���:"); 
	scanf("%d",&m);
	printf("�����Ԫ��:"); 
	scanf("%d",&num);
	for(j=n1;j>m;j--)
		shuzu[j]=shuzu[j-1]; 
	shuzu[m]=num;  
	n1=n1+1;
	return n1; 
}
int five_charu2(int n1,int shuzu[]){
	int m,j,num; 
	printf("����������Ԫ��:"); 
	scanf("%d",&num);
	if(shuzu[0]<shuzu[n1-1]) 
	{	for(j=0;shuzu[j]<num;j++); 
			m=j-1; 
	}
	else
	{	for(j=0;shuzu[j]>num;j++); 
			m=j-1; 
	} 
	for(j=n1;j>m;j--)        
		shuzu[j+1]=shuzu[j]; 
	shuzu[m+1]=num;  
	n1=n1+1;
	return n1; 
}
void six_max(int n1,int shuzu[]){
	int j,max=shuzu[0];
	for(j=0;j<n1;j++)
	{	if(shuzu[j]>max)
			max=shuzu[j]; 
	}
	printf("���ֵΪ%d\n",max); 
} 
void six_min(int n1,int shuzu[]){
	int j,min=shuzu[0];
	for(j=0;j<n1;j++)
	{	if(shuzu[j]<min)
			min=shuzu[j]; 
	}
	printf("��СֵΪ%d\n",min); 
} 
float six_ave(int n1,int shuzu[]){
	int s=0,j;
	float ave;
	for(j=0;j<n1;j++)
		s=s+shuzu[j];
	ave=float(s)/n1;
	return ave; 
} 
float six_var(int n1,int shuzu[]){
 	int s,j;
	float var,ave;
	ave=six_ave(n1,shuzu); 
	for(j=0,s=0;j<n1;j++)
		s=s+(shuzu[j]-ave)*(shuzu[j]-ave);
	var=float(s)/n1;
	return var; 
}  
float six_std(int n1,int shuzu[]){
	float var,std;
    var=six_var(n1,shuzu); 
	std=sqrt(var);
	return std; 
}  
void seven_chazhao1(int n1,int shuzu[]){
	int a[n1]={0},num,k,j; 
	printf("������˳����ҵ�Ԫ��:"); 
	scanf("%d",&num);
	for(j=0,k=0;j<n1;j++)
	{	if(num==shuzu[j])
		{	a[k]=j+1;
			k++; 
		} 
	} 
	if(a[0]!=0) 
	{	printf("Ԫ��%d�����±�Ϊ��",num);
		for(j=0;a[j]!=0;j++)
			printf("%d ",a[j]); 
	}
	else printf("�޴���"); 
	putchar('\n');
} 
void seven_chazhao2(int n1,int shuzu[]){ 
	int i=0,j=n1-1,n,mid,del=0,shunxu; 
	printf("�������������");
	scanf("%d",&n); 
	if(shuzu[0]<shuzu[n1-1])
		shunxu=1; 
	else shunxu=0;
	switch(shunxu)
	{	case 1:	while(i<=j)
				{	mid=(i+j)/2;
					if(n>shuzu[mid])
						i=mid+1;
					else if(n==shuzu[mid])
					{	printf("Ԫ���ڵ�%dλ\n",mid+1); 
						return;
					}
					else j=mid-1;
				}
				printf("���޴�Ԫ��\n");  
				return; 
		case 0:while(i<=j)
				{	mid=(i+j)/2;
					if(n<shuzu[mid])
						i=mid+1;
					else if(n==shuzu[mid])
					{	printf("Ԫ���ڵ�%dλ\n",mid+1); 
						return;
					} 
					else j=mid-1;
				}
				printf("���޴�Ԫ��\n");  
				return;
	}
} 
void eight_shengxu(int n1,int shuzu[]){
	int j,del=0; 
	for(j=0;j<n1-1;j++)
		if(shuzu[j]>shuzu[j+1]) 
			del=1;
	if(del!=0)
		printf("����������\n"); 
	else  printf("������������\n"); 
}
void eight_jiangxu(int n1,int shuzu[]){
	int j,del=0; 
	for(j=0;j<n1-1;j++)
		if(shuzu[j]<shuzu[j+1])
			del=1;
	if(del!=0)
		printf("�ǽ�������\n"); 
	else  printf("���齵������\n"); 
}
void eight_quandeng(int n1,int shuzu[]){
	int j,del=0; 
	for(j=0;j<n1-1;j++)
		if(shuzu[j]!=shuzu[j+1])
			del=1;
	if(del!=0)
		printf("��ȫ������\n");
	else  printf("����Ԫ��ȫ��\n");  
}
void nine_maopao(int n1,int shuzu[]){
	int k,j,temp; 
	for(k=0;k<n1;k++)
		for(j=0;j<n1-k;j++)
			if(shuzu[j]<shuzu[j+1])
			{	temp=shuzu[j];
				shuzu[j]=shuzu[j+1];
				shuzu[j+1]=temp;
			}
} 
void nine_xuanze(int n1,int shuzu[]){
	int j,k,l,temp; 
	for(j=0;j<n1;j++)
	{	k=j;
		for(l=j+1;l<n1;l++)
			if(shuzu[l]>shuzu[k])
				k=l; 
		if(k!=j)
		{	temp=shuzu[j];
			shuzu[j]=shuzu[k];
			shuzu[k]=temp;	 
		} 
	}
} 
void nine_jiaohuan(int n1,int shuzu[]){
	int j,k,temp;
	for(j=0;j<n1-1;j++)
		for(k=j+1;k<n1;k++)
			if(shuzu[j]<shuzu[k])
			{	temp=shuzu[j];
				shuzu[j]=shuzu[k];
				shuzu[k]=temp;
			}
} 
void nine_nizhi(int n1,int shuzu[]){
	int j,temp,k;
	for(j=0,k=n1-1;j<k;j++,k--)
	{	temp=shuzu[j];
		shuzu[j]=shuzu[k];
		shuzu[k]=temp;
	}
} 
void nine_zuoxuan(int n1,int shuzu[],int zx){
	int a[n1],j;
	zx=zx%n1; 
	for(j=0;j<zx;j++) 
		a[j]=shuzu[j];
	for(j=0;j<n1;j++)
		shuzu[j]=shuzu[j+zx];	
	for(j=0;j<zx;j++)
		shuzu[n1-zx+j]=a[j]; 
} 
void nine_youxuan(int n1,int shuzu[],int yx){
	yx=yx%n1;
	nine_zuoxuan(n1,shuzu,n1-yx); 
} 
void ten_ysf(int n2){
	int n,m,a[1000]={0},c,k,pos,i;
	printf("������������:");
	scanf("%d",&n); 
	printf("��������ɱ����"); 
	scanf("%d",&m);
	
	for(i=0;i<n+1;i++)
		a[i]=0;
	i=k=0;
	for(pos=0;k<n;pos=(pos+1)%n)
	{	if(a[pos]==0)
			i++;
		if(i==m)       
		{	i=0;
			k++;
			a[pos]=k;//��k��������Ϊ��ǰpos 
		} 
	}
	printf("*****Լɪ��*****\n");
	for(i=0;i<n;i++)
		printf("%4d%c",a[i],((i+1)%n2)==0?'\n':' ');
	putchar('\n');
	printf("Ҫ����������");
	scanf("%d",&c);
	printf("�ܹ�������λΪ��");
	for(i=0;i<c;i++)             //��ʾ��Ⲣ���10�� 
		for(k=0;k<n;k++)
			if(a[k]==n-i)       //����������˳�� 
			{printf("%5d",k+1);
			break; 
			} 
	putchar('\n'); 
} 
void ten_zhishu(int n2){
	int i,j,max,d=0;
	printf("���ҷ�Χ��"); 
	scanf("%d",&max); 
	char a[max];
	for(i=0;i<max;i++)
		a[i]=1;
	for(i=2;i<=max;i++)
		if(a[i])
		{	d++;
			printf("%6d%c",i,d%n2==0?'\n':' ');
			for(j=i*2;j<=max;j+=i)
				a[j]=0; 
		} 
	putchar('\n');
	printf("%d�ڹ�������%d��\n",max,d);
} 
main(){	
	int shuzu[10000]={0};
	int i,lie; 
	int m1,m2,m3=0;//�˵��� 
	printf("*****һ���˵�*****\n"); 
	printf("0-ֱ���˳�����\n"); 
	printf("1-�����������\n"); int n1=300,n2=10; 
	printf("2-������������\n"); 
	printf("3-��ʾ��������\n");
	printf("4-ɾ������Ԫ��\n");
	printf("5-��������Ԫ��\n");
	printf("6-����ͳ����Ϣ\n");
	printf("7-����ָ��Ԫ��\n");
	printf("8-�ж��������\n");
	printf("9-��������Ԫ��\n"); int zx=0,yx=0; 
	printf("10-��������Ӧ��\n");
	printf("******************\n\n"); 
	while(1)
	{	printf("������һ���˵�����:");
		scanf("%d",&m1);
		putchar('\n');
		
		switch(m1)
		{	case 0:return 0; 
		    case 1: {	printf("���������С��"); 
						scanf("%d",&n1);
						printf("����ÿ�����Ԫ�أ�") ; 
						scanf("%d",&n2);
						putchar('\n'); 
						break;
					} 
			case 2: {	printf("****�����˵�2****\n"); 
						printf("1)��ָ����Χ��������������\n");
						printf("2)������������\n");
						printf("3)�������ͬһ��ֵ\n");
						printf("4)�Ȳ��������\n");
						printf("0)����һ���˵�\n");
						printf("******************\n"); 
						printf("����������˵�����:"); 
						scanf("%d",&m2);
						putchar('\n'); 
						switch(m2)
						{	case 0:break; 
							case 1:two_suiji(n1,shuzu);break;	
							case 2:two_shuru(n1,shuzu);break;
							case 3:two_tongzhi(n1,shuzu);break;
							case 4:two_dengcha(n1,shuzu);break;
						}	
						break;
					}				 
			case 3: {	for(i=0,lie=1;i<n1;lie++,i++)
							printf("%5d%c",shuzu[i],lie%n2==0?'\n':' '); 
						putchar('\n');
						break;
					}
			case 4: {	printf("****�����˵�4*****\n"); 
						printf("1)ɾ��ָ���±��Ԫ��\n");
						printf("2)ɾ��ָ���±������һ��\n");
						printf("3)ɾ��ָ��ֵ��Ԫ��\n");	
						printf("0)����һ���˵�\n");
						printf("******************\n"); 
						printf("����������˵�����:"); 
						scanf("%d",&m2);
						putchar('\n');
						switch(m2)
						{	case 0:break;
							case 1:n1=four_yige(n1,shuzu);break; 
							case 2:n1=four_yizu(n1,shuzu);break; 
							case 3:n1=four_zhi(n1,shuzu);break; 
						} 	
						break;
					}
			case 5: {	printf("****�����˵�5*****\n"); 
						printf("1)��ָ���±�λ�ò�����Ԫ��\n");
						printf("2)�����������в�����Ԫ��\n");
						printf("0)����һ���˵�\n");
						printf("******************\n"); 
						printf("����������˵�����:");
						scanf("%d",&m2);
						putchar('\n'); 	
						switch(m2)
						{	case 0:break;
							case 1:n1=five_charu1(n1,shuzu);break; 
							case 2:n1=five_charu2(n1,shuzu);break;
						} 	
						break;
					}
			case 6: 
					printf("****�����˵�6*****\n"); 
					printf("1)�����ֵ\n");
					printf("2)����Сֵ\n");
					printf("3)��ƽ��ֵ\n");
					printf("4)�󷽲�\n");
					printf("5)�������\n");
					printf("0)����һ���˵�\n");
					printf("******************\n"); 
					printf("����������˵�����:"); 
					scanf("%d",&m2);
					putchar('\n');
					switch(m2)
						{	case 0:break;
							case 1:six_max(n1,shuzu);break; 
							case 2:six_min(n1,shuzu);break;
							case 3:printf("ƽ��ֵΪ%.4f\n",six_ave(n1,shuzu));break;
							case 4:printf("����Ϊ%.4f\n",six_var(n1,shuzu));break;
							case 5:printf("������Ϊ%.4f\n",six_std(n1,shuzu));break;
						} 		
					break;
			case 7:
					printf("****�����˵�7*****\n"); 
					printf("1)˳�����\n");
					printf("2)�۰����\n"); 
					printf("0)����һ���˵�\n");
					printf("******************\n"); 
					printf("����������˵�����:");
					scanf("%d",&m2);
					putchar('\n'); 	
					switch(m2)
						{	case 0:break;
							case 1:seven_chazhao1(n1,shuzu);break; 
							case 2:seven_chazhao2(n1,shuzu);break;
						} 	
					break;
			case 8:
					printf("****�����˵�8*****\n"); 
					printf("1)�ж��Ƿ���������\n");
					printf("2)�ж��Ƿ�������\n");
					printf("3)�ж��Ƿ�ȫ��Ԫ�����\n");
					printf("0)����һ���˵�\n");
					printf("******************\n"); 
					printf("����������˵�����:"); 
					scanf("%d",&m2);
					putchar('\n');
					switch(m2)
						{	case 0:break;
							case 1:eight_shengxu(n1,shuzu);break; 
							case 2:eight_jiangxu(n1,shuzu);break;
							case 3:eight_quandeng(n1,shuzu);break;
						} 	 	
					break;
			case 9: 
					printf("****�����˵�9*****\n"); 
					printf("1)����\n");
					printf("2)��������\n");
					printf("3)��������\n");
					printf("4)��������\n");
					printf("0)����һ���˵�\n");
					printf("******************\n"); 
					printf("����������˵�����:");
					scanf("%d",&m2);
					putchar('\n');
					switch(m2)
						{	case 0:break;
							case 1:{printf("��1��ð������\n��2��ѡ������\n��3����������\n��0���ص�һ���˵�\n");
									printf("����������ʽ:");
									scanf("%d",&m3);
									switch(m3)
									{	case 0:break;
										case 1:nine_maopao(n1,shuzu);break; 
										case 2:nine_xuanze(n1,shuzu);break; 
										case 3:nine_jiaohuan(n1,shuzu);break; 
									} 
									break;
									}
							case 2: nine_nizhi(n1,shuzu);break;
							case 3: printf("��������λ��:");
									scanf("%d",&zx);
									nine_zuoxuan(n1,shuzu,zx);break;
							case 4: printf("��������λ��:");
									scanf("%d",&yx);
									nine_youxuan(n1,shuzu,yx);break;
						} 	
					break;
			case 10: 
					printf("****�����˵�10****\n"); 
					printf("1)Լɪ��\n");
					printf("2)ɸ��������\n");
					printf("0)����һ���˵�\n");
					printf("******************\n"); 
					printf("����������˵�����:");
					scanf("%d",&m2);
					putchar('\n'); 	
					switch(m2)
					{	case 0:break;
					    case 1:ten_ysf(n2);break;
						case 2:ten_zhishu(n2);break;
					}	
					break;
			case -1:
					printf("*****һ���˵�*****\n"); 
					printf("0-ֱ���˳�����\n"); 
					printf("1-�����������\n");
					printf("2-������������\n"); 
					printf("3-��ʾ��������\n");
					printf("4-ɾ������Ԫ��\n");
					printf("5-��������Ԫ��\n");
					printf("6-����ͳ����Ϣ\n");
					printf("7-����ָ��Ԫ��\n");
					printf("8-�ж��������\n");
					printf("9-��������Ԫ��\n");
					printf("10-��������Ӧ��\n");
					printf("******************\n\n"); 
					break; 
		} 
	}		
}
