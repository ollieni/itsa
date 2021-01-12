#include<stdio.h>

int main()
{
	int num;
	scanf("%d",&num);
	while(num!=0)
    {
		double nSum=0,Sum=0;
		if(num>700)
		{
		    Sum+=(num-700)*5.63;
		    nSum+=(num-700)*4.5;
		    num=700;
        }
		if(num>500)
        {
            Sum+=(num-500)*4.97;
            nSum+=(num-500)*4.01;
            num=500;
        }
		if(num>330)
        {
            Sum+=(num-330)*4.39;
            nSum+=(num-330)*3.61;
            num=330;
        }
		if(num>120)
        {
            Sum+=(num-120)*3.02;
            nSum+=(num-120)*2.68;
            num=120;
        }
		if(num>0)
        {
            Sum+=num*2.1;
            nSum+=num*2.1;
            num=0;
        }
		printf("Summer months:%.2f\n",Sum);
		printf("Non-Summer months:%.2f\n",nSum);
    }
	return 0;
}
