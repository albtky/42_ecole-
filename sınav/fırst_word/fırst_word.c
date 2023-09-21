
#include <stdio.h>
void print(char c)
{
    printf("%c", c);
}

int main(int c, char *v[])
{
    int ch = 0;
    int wrd = 1;
    if (c == 2)
    {
        while (v[wrd][ch] == 32 || (v[wrd][ch] <= 13 && v[wrd][ch] >= 9))
            ch++;
        while ((v[wrd][ch] <= 122 && v[wrd][ch] >= 97) || (v[wrd][ch] <= 90 && v[wrd][ch] >= 65))
        {
            if ((v[wrd][ch] <= 13 && v[wrd][ch] >= 9) && v[wrd][ch] == 32)
            {
                break;
            }
            if(v[wrd][1] != NULL)
            print(v[wrd][ch]);
            ch++;
        }
        print('\n');
    }
    else
    {
        print('\n');
    }
}