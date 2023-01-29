#include <stdio.h>
void bigO_akarN();
int main (void)
{
    bigO_akarN();
}



// Kompleksitas waktu Big O (akar n)
void bigO_akarN()
{
    int n = 10;
    int i;
    int c = 1;
    for(i=0;i*i<n;i+=c)
    {
        printf("%i\n",i);
    }
}