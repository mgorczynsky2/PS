/----------------------------------------------1.4.1---------------------------------------------
  int main()
{
    int n,m;
    printf("podaj liczby n i m: ");
    scanf("%d%d",&n,&m);
    int i;
    for (i=n;i<m;i=i+n) //(i=1;n*i<m;i++)
    {
        printf("%d ",i);
    }
}
/----------------------------------------------1.4.2---------------------------------------------
int n,m;
    printf("podaj liczby n i m: ");
    scanf("%d%d",&n,&m);
    int i;
    for (i=1;i<=m;i++)
    {
        printf("%d ",n*i);
    }
}
/----------------------------------------------1.4.3---------------------------------------------
   int n,m,k;
    printf("podaj liczby n,m,k: ");
    scanf("%d%d%d",&n,&m,&k);
    int i;
    for (i=m-m%n+n;i<k;i=i+n) //i=m/n*n+n
    {
        printf("%d ",i);
 /----------------------------------------------1.4.4---------------------------------------------
   int main()
{
    int n;
    printf("podaj liczby n: ");
    scanf("%d",&n);
    int s=1;
    int i;
    for (i=2;i<=n;i++)
    {
     s=s*i;
    }
     printf("%d!=%d",n,s);
}
/----------------------------------------------1.4.5---------------------------------------------
      int main()
{
    int n;
    printf("podaj liczby n: ");
    scanf("%d",&n);
    int s;
    int i;
    for (i=1;i<=n;i++)
    {
    s=s+i*i;
    }
     printf("%d",s);
}
/----------------------------------------------1.4.6---------------------------------------------
   int n;
    printf("podaj liczby n: ");
    scanf("%d",&n);
    int s=1;
    int i;
    for(i=2;i<=n;i=i+2)
    {
        s=s*i;
    }
     printf("%d",s);
 /----------------------------------------------1.4.8---------------------------------------------
`    int n;
    printf("podaj liczby n: ");
    scanf("%d",&n);
    int pierwsza,druga,temp;
    pierwsza=1;
    druga=1;
    for(int i=1;i<=n;i++)
    {
        temp=pierwsza;
        pierwsza=druga;
        druga=druga+temp;
    }
     printf("%d",temp);
}
