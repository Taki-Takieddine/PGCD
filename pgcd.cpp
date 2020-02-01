#include<stdio.h>
main()

{
	int a,b,r;
	
		printf("Donner la premier valeur: ");
		scanf("%d",&a);
		printf("Donner la deuxieme valeur: ");
		scanf("%d",&b);

	while(b!=0);
	{
		r=a%b;
		a=b;
		b=r;
	}
	printf("Le pgcd est: %d\n",a);
}

