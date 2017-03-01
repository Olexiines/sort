#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
    float temp;
    float b [10] = {1, 5, 9, 4, 3, 7, 3.2, -3.6, 7.3, -12.76};
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (b[j] > b[j+1])
            {
                temp = b[j];
                b[j] = b[j+1];
                b[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < 9; i++)
   {
       printf ("%.2f ", b[i]);
   }
   printf ("\n");
}
