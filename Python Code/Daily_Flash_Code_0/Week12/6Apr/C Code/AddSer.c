#include<stdio.h>
#include<math.h>
//double pow(double,double);
int fact(int x){
int fa=1;
for(int i=1;i<=x;i++)
        fa*=i;
return fa;
}

void main(){
int x,y;
printf("Enter X and Y:");
scanf("%d%d",&x,&y);

int le;
printf("Enter Length of series:");
scanf("%d",&le);

int add=0;
for(int i=1;i<=le;i++){
	x=fact(i);
	printf("X=%d",x);
	add+=(pow((x+y),i)+x);
	printf("Add=%d\n",add);
}
printf("%d\n",add);
}

