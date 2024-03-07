#include<stdio.h>
int main ()
{
int n;
printf("Enter ARRAY Size:");
scanf("%d",&n);

int array[n];
int flag=0;
printf("Enter ARRAY:");
for(int i=0;i<n;i++)
{
    scanf("%d",&array[i]);
}

int value;
printf("Enter search value:");
scanf("%d",&value);

for(int i=0;i<n;i++)
{
    if(array[i]==value)
    {
        flag=1;
    }
}

if(flag==1)
{
    printf("value found");
}
else
{
    printf("Value not found");
}

return 0;
}
