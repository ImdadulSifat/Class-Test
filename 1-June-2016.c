#include<stdio.h>
main()
{
    int i,j,x=6,y=5;
    for(i=6;i<10;++i)
    {
        for(j=5;j<i;++j)
        {
            x+=(i+j-1);
            printf("%d\n",x);
            x=++x+x++;
        }
        y=y+x;
    }
    printf("%d %d\n",x,y);
}
