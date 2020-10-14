#include <iostream>
#include <stdio.h>
#include <math.h>

main()
{
int i,f,n=1;
printf("Vvedite chiclo: ");
scanf("%d",&f);
printf("Vvedite stepen: ");
scanf("%d",&i);
while(i!=0)
{
i--;
n*=f;
}
printf("\nChislo v stepeni= %d\n",n);
}


