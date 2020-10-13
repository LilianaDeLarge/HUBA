#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main()
{
	int mass[10];
	int i=0, chis,sum_o=0,zero=0,mnoj_o=1,sum_p=0;
	while(i!=10)
	{ 
		scanf("%i",&chis);
		mass[i]=chis;
			if(mass[i]>0)
				sum_p+=mass[i];
			else if (mass[i]<0)
			{
				mnoj_o*=mass[i];
				sum_o+=mass[i];
			}
			else 
			 	zero++;
		i++;
	}
	printf("Summ poloj= %i\nMnoj otric= %i\nKolvo zero= %i\nSred arifm= %f",sum_p,mnoj_o,zero,float(sum_p+sum_o)/10);
	
}
