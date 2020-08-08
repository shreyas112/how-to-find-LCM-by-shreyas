#include <stdio.h>
int LCM(int, int);
int main()
{
    int x,y,answer;
    printf("Enter two possitive numbers:");
    scanf("%d%d",&x,&y);
    printf("The LCM of %d and %d is %d.\n",x,y,LCM(x,y));
    answer = LCM(x,y);
}
int LCM(int x,int y)
{
    static int common =1;
    if (common % x== 0 && common % y== 0)
    {
        return common;
   }
    else
        common++;
    return LCM(x,y);

}

