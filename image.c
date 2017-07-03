#include <stdio.h>
#include <stdlib.h>
#include<math.h>

void main()
{
int i,n,largest,lowest;
int *a,*b,*c;

printf("Enter matrix Dimension...\n");
scanf("%d", &n);
n=n*n;

a = (int *) malloc(n*sizeof(int));
b = (int *) malloc(n*sizeof(int));
c =( int *) malloc(n*sizeof(int));

printf("Enter Elements of First Image Pixel\n");
for(i=0;i<n;i++)
{
scanf("%d",a+i);
}

printf("Enter Elements of Second Image Pixel\n");
for(i=0;i<n;i++)
{
scanf("%d",b+i);
}

for(i=0;i<n;i++)
{
*(c+i) = (*(a+i) + *(b+i))/2;
}

printf("Average Image Pixel is\n");
for(i=0;i<n;i++)
{
printf("%d\n",*(c+i));
}

largest = c[0];
lowest = c[0];
for (i = 1; i < n; i++)
   {
        if (largest < c[i])
            largest = c[i];
        if (lowest > c[i])
            lowest = c[i];
    }
int div1 = (float)255/largest;
printf("Normalize Image Pixels\n");
for(i=0;i<n;i++){
        if(lowest<255) {
            if(*(c+i)>255/2) {
                printf("%d\n",(*(c+i))/div1);
            } else{
                printf("%d\n",(*(c+i))*div1);
            }
        }
    else {
            float div2 = lowest/(float)255;
            div2 = round(div2)+0.5;
            int result = ((*(c+i))/div2);

            printf("%d\n",result);
    }
}
}

