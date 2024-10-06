#include <stdio.h>
#define max 5
int q[max];
int f = -1;
int r = -1;
void insert();
void delete();
void display();
void peek();

void main()
{
    int ch;
    printf("1.Insert \n 2.Delete \n 3.Display \n 4.Peek \n 5.End \n");
    do
    {
        printf("Enter choice \n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert();
            break;
        case 2:
            delete ();
            break;
        case 3:
            display();
            break;
        case 4:
            peek();
            break;
        case 5:
            printf("Program ended \n");
            break;
        }
    } while (ch != 5);
}

void insert()
{
    int val;
    printf("Enter element : \n");
    scanf("%d", &val);
    if ((f == 0 && r == max - 1) || (r == f - 1))
    {
        printf("Queue is full \n");
    }
    else if (f == -1 && r == -1)
    {
        f = 0;
        r = 0;
        q[r] = val;
    }
    else if (r == max - 1 && f != 0)
    {
        r = 0;
        q[r] = val;
    }
    else
    {
        r++;
        q[r] = val;
    }
}

void display()
{
    int i;
    if (r == -1 && f == -1)
    {
        printf("Queue is empty \n");
    }
    else if (f <= r)
    {
        for (i = f; i <= r; i++)
        {
            printf("%d \t", q[i]);
        }
    }
    else
    {
        for (i = f; i <= max - 1; i++)
        {
            printf("%d \t", q[i]);
        }
        for (i = 0; i <= r; i++)
        {
            printf("%d \t", q[i]);
        }
    }
    printf("\n");
}

void delete()
{
    if (f == -1 && r == -1)
    {
        printf("Queue is empty \n");
    }
    else if (f == r)
    {
        f = -1;
        r = -1;
    }
    else if (f == max - 1)
    {
        f = 0;
    }
    else
    {
        f++;
    }
}

void peek()
{
    if (r == -1 && f == -1)
    {
        printf("Queue is empty \n");
    }
    else
    {
        printf("Topmost element is %d \n", q[r]);
    }
}
