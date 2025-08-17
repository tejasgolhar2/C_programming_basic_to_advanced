#include<stdio.h>

int main()
{

    int n=1, nmax;
    printf("Enter maximum range: ");
    scanf("%d", &nmax);
    while(n<nmax+1)
    {
        int count = 0;
        for(int i=1; i<=n; i++)
        {
    
            if(n%i == 0 )
            {
                if(count>2)
                {
                    break;
                }
            
                count += 1;
            }

        }
        if(count == 2)
        {
            printf("%d\n", n);
        }
        n+=1;
    }
    return 0;
}

