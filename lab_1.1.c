#include <stdio.h>
#include <stdlib.h>

//--------------------------------------------2,3-------------------
int main()
{
    printf("Bardzo\n");
    printf("dlugi\n");
    printf("napis\n");
    printf("\\"); //wypisaie backslash
    return 0;
}
//--------------------------------------------4---------------------
int main()
{
    int a;
    printf("podaj int'a: ");
    scanf("%d",&a);
    printf("twoja liczba to:%d",a);
    return 0;
}

//--------------------------------------------5---------------------
int main()
{
    double a;
    printf("podaj wymierna: ");
    scanf("%lf",&a);
    printf("twoja liczba to:%.2lf",a); //2 miejsca po przecinku
    return 0;
}
//--------------------------------------------6---------------------
int main()
{
    int a,b,c;
    printf("podaj 3 liczby: ");
    scanf("%d%d%d",&a,&b,&c);
     printf("twoje liczby to:%d\n%d\n%d",a,b,c);
    return 0;
}
//--------------------------------------------7---------------------
printf("twoje liczba to:%d",a+1); //2*x
//--------------------------------------------8---------------------
    int a,b,c;
    printf("podaj 3 liczby: ");
    scanf("%d%d%d",&a,&b,&c);
    double avg=(double)(a+b+c)/3;
     printf("twoje liczby to:%lf",avg);//(float)(x)+y+z/3) lub x+y+z/3.
    return 0;
//--------------------------------------------9---------------------
printf("%lf",sqrt(a)); // lub printf("%lf",pow(a,0.5)); //1./2
//--------------------------------------------10--------------------
 printf("%lf",fabs(a));   //abs dla intow, fabs dla niewymiernych
//--------------------------------------------11--------------------
printf("%.2lf",a);
//--------------------------------------------12--------------------


