void main()
{
    int x,y,i;
    printf("Enter 2 Numbers:");
    scanf("%d%d",&x,&y);
    for(i=1;i<=x*y;i++)
    {
        if (i%x==0 && i%y==0)
        {
            printf("LCM is:%d",i);
            break;
        }
    }
getch();
}
