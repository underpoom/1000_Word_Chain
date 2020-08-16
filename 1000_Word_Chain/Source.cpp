
#include <iostream>
#include <string.h>

using namespace std;

int main()
{

    int i1;
    int i2;
    int x = 0;
    int dif;
    cin >> i1;
    cin >> i2;
    char a[30002], b[30002];
    scanf("%s", a);

    for (int j = 1; j < i2; j++)
    {
        dif = 0;
        scanf("%s", b);
        for (int i = 0; i < i1; i++)
        {
            if (a[i] != b[i])
            {
                dif++;
            }
                
        }
        if (dif > 2) {
            if (x == 0)
            {
                x = 1;
            }


        }
        else
        {
            if (x == 0)
            {
                strcpy(a, b);
            }
               

        }
    }
    printf("%s", a);


}