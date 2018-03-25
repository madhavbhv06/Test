#include<stdio.h>

main(){
	 int num=2863311530;
        int temp=0;
	int i,k=16,j=0;
	for(i=0;i<=31;i++)
	{
		if(i%2 && num&(1<<i)){//odd
			temp |= (1<<k);
			k++;
		}
		else
			if(num&(1<<i)){
				temp |=(1<<j);
		j++;
		}
	}

printf("%u\n",temp);

}


