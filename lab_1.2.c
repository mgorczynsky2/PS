//instrukcje warunkowe
//--------------------------------------1------------------------------------
    int a;
    printf("podaj liczbe: ");
    scanf("%d",&a);
    if(a>=0)
    {
        printf("%d",a);
        return 0;
    }
    printf("%d",-a);
    return 0;

 if(a>=0)
 {
        printf("1");
 }
 else if(a==0)
 {
   printf("0")
 }
 else (x<0)
 {
    printf("-1");
 }
return 0;


//--------------------------------------2------------------------------------
  int a,b;
    printf("podaj liczbe: ");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("maksimum liczb %d i %d wynosi:%d",a,b,a);
    }
    else
    {
        printf("maksimum liczb %d i %d wynosi:%d",a,b,b);
    }
    return 0;
//--------------------------------------3------------------------------------
    int a,b,c;
    printf("podaj liczbe: ");
    scanf("%d%d%d",&a,&b,&c);
    if((a>=b) && (a>=c))
    {
        printf("%d",a);
    }
    else if(b>=c)
    {
        printf("%d",b);
    }
    else
    {
        printf("%d",c);
    }
    return 0;
//--------------------------------------4------------------------------------
    int a,b,c;
    printf("podaj liczbe: ");
    scanf("%d%d%d",&a,&b,&c);
    if((a>=c && a<=b) || (a>=b && a<=c))
    {
        printf("%d",a);
    }
    else if((b>=c && b<=a) || (b>=a && b<=c))
    {
        printf("%d",b);
    }
    else
    {
        printf("%d",c);
    }
    return 0;
//--------------------------------------6------------------------------------
int main()
{
    int a,b,c,d,e,f;
    int w;
    int wx,wy;
    printf("podaj liczbe: ");
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    w = a*e-b*d;
    wx=c*e-b*f;
    wy=a*f-c*d;
    if(w!=0)
    {
        float x,y;
        x=wx/w;
        y=wy/w;
        printf("X to:%lf a y to:%lf",x,y);
    }
    else if(wx==0 && wy==0)
        {
            printf("nieoznaczony");
        }
    else
        {
            printf("sprzeczny");
        }
}
//--------------------------------------7------------------------------------
#include <math.h>
int main()
{
    int a,b,c;
    printf("podaj liczbe: ");
    scanf("%d%d%d",&a,&b,&c);
     printf("Zdefiniowales rownanie:");
    if(a==1)
    {
        printf("x^2");
    }
    else if(a==-1)
    {
         printf("-x^2");
    }
    else
    {
        printf("%dx^2",a);
    }
    if(b==1)
    {
         printf("+x");
    }
    else if(b==-1)
    {
         printf("-x");
    }
    else if(b<0)
    {
        printf("-%dx",b);
    }
    else if(b>0)
    {
        printf("+%dx",b);
    }
    if(c>0)
    {
        printf("+%d",c);
    }
    else if(c<0)
    {
        printf("-%d",c);
    }
    int delta = b*b-(4*a*c);
    float x1 = (-sqrt(delta)-b)/2*a;
    float x2 = (-sqrt(delta)+b)/2*a;
    printf("\ndelta wynosi %d",delta);
    if(delta>0)
    {
        printf("\nWyniki to:x1=%lf, x2=%lf",x1,x2);
    }
    else if(delta==0)
    {
        printf("\nWynik to:x=%lf",x2);
    }
    else
    {
        printf("\nbrak rozwiazan, bo delta<0");
    }
}
