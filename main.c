#include <stdio.h>
#include <stdlib.h>

int fact(int x)
{
    if(x==0)
        return 1;
    else
        return x*fact(x-1);
}
int main(int argc, char*argv[1])
{
if(argc!=2)
{
    fprintf(stderr, "USAGE: %S <entier>\n", argv[0]);
    return 1;
}
int x=fact(argv[1]);
    fprintf(stderr, "Le factoriel de %d est %d\n",x,fact(x));
    return 0;
}
