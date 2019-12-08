#include<stdio.h>
void main()
{
    char y[4],r[10];int i,j,d;
    printf("Enter the year you want to convert to Roman Numerical:");
    gets(y);
    d = y[0] - 48;
    i = 0;
    //for thousand place//   
    while (i<d)
    {
        r[i] = 'M';
        i++;
    }
    //hundred's place//
    d = y[1] - 48;
    if (d<4)
    {
        j = 0;
        while (j<d)
        {
            r[i] = 'C';
            j++;
            i++;
        }
    }
    if (d==4)
    {
        r[i] = 'C';
        i++;
        r[i] = 'D';
        i++;
    }
    
    if (d>=5)
    {
        if ((d-5)<4)
        {
             r[i] = 'D';
             i++;
            j = 0;
            while (j<(d-5))
            {
                r[i] = 'C';
                i++;
                j++;
            }
        }
        else
        {
            r[i] = 'C';
            i++;
            r[i] = 'M';
            i++;
        }
    }
    //for tenths place//
    d = y[2] - 48;
    if (d<4)
    {
        j = 0;
        while (j<d)
        {
            r[i] = 'X';
            i++;
            j++;
        }
    }
    if (d==4)
    {
        r[i] = 'X';
        i++;
        r[i] = 'L';
        i++;
    }
    if (d>=5)
    {
        if ((d-5)<4)
        {
            r[i] = 'L';
            i++;
            j = 0;
            while (j<(d-5))
            {
                r[i] = 'X';
                i++;
                j++;
            }
        }
        else
        {
            r[i] = 'X';
            i++;
            r[i] = 'C';
            i++;
        }
    }
    //one's place//
    d = y[3] - 48;
    if (d<4)
    {
        j = 0;
        while (j<d)
        {
            r[i] = 'I';
            i++;
            j++;
        }
    }
    if (d == 4)
    {
        r[i] = 'I';
        i++;
        r[i] = 'V';
        i++;
    }
    if (d>=5)
    {
        if ((d-5)<4)
        {
            r[i] = 'V';
            i++;
            j = 0;
            while (j<(d-5))
            {
                r[i] = 'I';
                i++;
                j++;
            }
        }
        else
        {
            r[i] = 'I';
            i++;
            r[i] = 'X';
            i++;
        }
        
    }
    printf("The enetered number in roman is:");
    puts(r);
    
    
}