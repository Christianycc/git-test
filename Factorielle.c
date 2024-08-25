#include <stdio.h>

int main()
{
int n;
float f , i ;
printf("Veuillez saisir un nombre n:");
scanf("%d",&n);
if(n<0)
printf("veuillez entrer un nombre positif");
else
if (n==0)
printf("La factorielle est :1");
else{
	f=1  ;
	for (i=1;i<=n;i++)
	f = f * i;
	printf("La factorielle de %d est:%.2f",n,f);
}
    return 0;
}
