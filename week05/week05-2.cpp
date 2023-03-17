#include<stdio.h>

int main()
{
    bool isPalindrome(int x)
    {
        int r=0;
        while(x>0)
        {
            r = r*10 + x%10;
                printf("x:%d r:%d\n");
        }
        x = x/10;
        if(r==x2)
            return true;
        else
            return false;
    }
}
