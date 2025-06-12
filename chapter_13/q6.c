#include<stdio.h>
#include<math.h>

int main()
{
    int arr[] = {-6,-12,8,13,11,6,2,-6,-9,-10,11,10,9,2};
    int len= sizeof(arr)/sizeof(arr[0]);
    float mean, sd=0;
    int sum=0;
    for (int i=0; i<=len-1; i++)
    {
        sum += arr[i];
    }
    mean = (float)sum/len;
    for (int i = 0; i < len; i++)
    {
        sd+= (arr[i]-mean)*(arr[i]-mean);
    }
    sd = sqrt(sd/len);

    printf("Mean of the given array is %f and standered deviation of the given array is %f", mean, sd);
    
}