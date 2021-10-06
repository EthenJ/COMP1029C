#include <stdio.h>
#include <math.h>

int main()
{
    double pi = 0.0, term, places;
    int k = 1;

    do
    {
        term = (4 * pow(-1.0, k + 1)) / (2 * k - 1);
        pi += term;
        k++;
    } while (abs(term) > pow(0.1, 8));

    printf("%.20f", pi);
}