#include <stdio.h>
int main()
{
int cha, a, i, correto;
a=0;
cha=0;
correto = 0;
scanf("%d", &cha);

for(i=0; i<5; i++)
{
    scanf("%d", &a);
    if(a==cha)
    {
    correto++;
    }
}
printf("%d", correto);

}
