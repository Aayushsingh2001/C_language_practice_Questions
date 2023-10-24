/* convert celcius into farenheit using c language*/
/**********************/
#include <stdio.h>
void main()
{
    float celcius, farenheit;
    printf("Enter celcius value: ");
    scanf("%f", &celcius);
    farenheit = (celcius * 9 / 5) + 32;
    printf("%.2f celcius = %.2f farenheit", celcius, farenheit);
    return 0;
}                     