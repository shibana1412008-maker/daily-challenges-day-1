#include<stdio.h>
int main(){
	int s,l,bre,ba,h,r;
	scanf("%d%d%d%d%d%d",&s,&l,&bre,&ba,&h,&r);
	printf("area of square :%d\n",s*s);
	printf("area of rectangle :%d\n",l*bre);
	printf("area of triangle:%d\n",1/2*ba*h);
	printf("area of circle :%d\n",3.14*r*r);
	return 0;
}
