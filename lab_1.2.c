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
