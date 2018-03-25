#include<stdio.h>

main(){
int a[]={1,2,3,
	    4,5,6,
	    7,8,9};


int i,j,temp;
for(i=0;i<3;i++)
for(j=0;j<3;j++){
if(i<j){
temp=*(a+j+3*i);
*(a+i*3+j)=*(a+i+3*j);
*(a+i+3*j)=temp;
}
}

for(i=0;i<9;i++)
printf("%d ",a[i]);
printf("\n ");



}


