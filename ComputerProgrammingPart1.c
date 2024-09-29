/*
- Fortran, Basic, Pascal, C
- C++, Visual Basic, Java, C#, Perl, PHP, Python, Ruby
- 3 tasks of writing Program:
  1. What is to be done?
  2. Using Think & Logic build Algorithm
  3. Do coding using any Programming Language
- IDE-> Integrated Development Environment
- Function of C-> printf(), scanf(), getchar()
- Header File-> stdio.h
- 1 byte = 8 bit
- For int data type -> 4 byte space needs
- int -> 2^32 = 4294967296
*/

/*//Chapter:1->1
#include <stdio.h>

int main()
{
    printf("Hello World"); //Statement

    return 0;
}*/

/*//2
#include <stdio.h>

int main()
{
    printf("I love my country, Bangladesh"); //Statement

    return 0;
}*/

/*//Chapter:2->3
#include <stdio.h>

int main()
{
    int a;
    int b;
    int sum;

    a = 50;
    b = 60;

    sum = a + b;

    printf("Sum is %d", sum); //Statement

    return 0;
}*/

/*//4
#include <stdio.h>

int main()
{
    int a, b, sum;

    a = 50;
    b = 60;

    sum = a + b;

    printf("Sum is %d", sum); //Statement

    return 0;
}*/

/*//5
#include <stdio.h>

int main()
{
    int a = 50, b = 60, sum;

    sum = a + b;

    printf("Sum is %d", sum); //Statement

    return 0;
}*/

/*//6
#include <stdio.h>

int main()
{
    int x, y;

    x = 1;
    y = x;
    x = 2;

    printf("%d", y);

    return 0;
}*/

/*//7
#include <stdio.h>

int main()
{
    int a = 50, b = 60, sum;

    sum = a + b;

    printf("%d + %d = %d", a, b, sum); //Statement

    return 0;
}*/

/*//8
#include <stdio.h>

int main()
{
    int a = 50.45, b = 60, sum;

    sum = a + b;

    printf("%d + %d = %d", a, b, sum);

    return 0;
}*/

/*//9
#include <stdio.h>

int main()
{
    int n;
    double x;

    x = 10.5;
    n = (int)x;

    printf("Value of n is %d\n", n);

    printf("Value of x is %lf\n", x);

    return 0;
}*/

/*//10
#include <stdio.h>

int main()
{
    int a;

    a = 1000;
    printf("Value of a is %d\n", a);

    a = -21000;
    printf("Value of a is %d\n", a);

    a = 10000000;
    printf("Value of a is %d\n", a);

    a = -10000000;
    printf("Value of a is %d\n", a);

    a = 100020004000503;
    printf("Value of a is %d\n", a);

    a = -4325987632;
    printf("Value of a is %d", a);

    return 0;
}*/

/*//11
#include <stdio.h>

int main()
{
    double a, b, sum;

    a = 9.5;
    b = 8.743;

    sum = a + b;

    printf("Sum is: %lf\n", sum);
    printf("Sum is: %0.2lf\n", sum);

    return 0;
}*/

/*//12
#include <stdio.h>

int main()
{
    int a, b, sum;

    scanf("%d", &a);
    scanf("%d", &b);

    sum = a + b;

    printf("Sum is: %d\n", sum);

    return 0;
}*/

/*//13
#include <stdio.h>

int main()
{
    int a, b, sum;

    scanf("%d %d", &a, &b);

    sum = a + b;

    printf("Sum is: %d\n", sum);

    return 0;
}*/

/*//14
#include <stdio.h>

int main()
{
    double a, b, sum;

    scanf("%lf %lf", &a, &b);

    sum = a + b;

    printf("Sum is: %0.2lf\n", sum);

    return 0;
}*/

/*//15
#include <stdio.h>

int main()
{
     char ch;

     printf("Enter the first letter of your name: ");

     scanf("%c", &ch);

     printf("The first letter of your name is: %c\n", ch);

     return 0;
}*/

/*//16
#include <stdio.h>

int main()
{
    char ch;

    printf("Enter the first letter of your name: ");
    ch = getchar();
    printf("The first letter of your name is: %c\n", ch);

    return 0;
}*/

/*//17
#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Please enter a number: ");
    scanf("%d", &num1);

    printf("Please enter another number: ");
    scanf("%d", &num2);

    printf("%d + %d = %d\n", num1, num2, num1+num2);
    printf("%d - %d = %d\n", num1, num2, num1-num2);
    printf("%d * %d = %d\n", num1, num2, num1*num2);
    printf("%d / %d = %d\n", num1, num2, num1/num2);

    return 0;
}*/

/*//18
#include <stdio.h>

int main()
{
    int num1, num2, value;
    char sign;

    printf("Please enter a number: ");
    scanf("%d", &num1);

    printf("Please enter another number: ");
    scanf("%d", &num2);

    value = num1 + num2;
    sign = '+';
    printf("%d %c %d = %d\n", num1, sign, num2, value);

    value = num1 - num2;
    sign = '-';
    printf("%d %c %d = %d\n", num1, sign, num2, value);

    value = num1 * num2;
    sign = '*';
    printf("%d %c %d = %d\n", num1, sign, num2, value);

    value = num1 / num2;
    sign = '/';
    printf("%d %c %d = %d\n", num1, sign, num2, value);

    return 0;
}*/

/*//Chapter:3->19
#include <stdio.h>

int main()
{
    int n;

    n = 10;

    if(n >= 0){
        printf("The number is positive\n");
    }
    else{
        printf("The number is negative");
    }

    return 0;
}*/

/*//20
#include <stdio.h>

int main()
{
    int n;
    n = 10;

    if(n < 0){
        printf("The number is negative\n");
    }
    else{
        printf("The number is positive\n");
    }

    return 0;
}*/

/*//21
#include <stdio.h>

int main()
{
    int n = 10;

    if(n < 0)
    {
        printf("The number is negative\n");
    }
    else if(n > 0)
    {
        printf("The number is positive\n");
    }
    else if(n = 0)
    {
        printf("The number is zero!\n");
    }

    return 0;
}*/

/*//22
#include <stdio.h>

int main()
{
    int n = 10;

    if(n < 0)
    {
        printf("The number is negative\n");
    }
    else if(n > 0)
    {
        printf("The number is positive\n");
    }
    else
    {
        printf("The number is zero!\n");
    }

    return 0;
}*/

/*//23
#include <stdio.h>

int main()
{
    int number = 12;

    if(number > 10)
    {
        printf("The number is greater than ten\n");
    }

    return 0;
}*/

/*//24
#include <stdio.h>

int main()
{
    int n = 10;

    if(n < 30)
    {
        printf("n is less than 30.\n");
    }
    else if(n < 50)
    {
        printf("n is less than 50.\n");
    }

    return 0;
}*/

/*//25
#include <stdio.h>

int main()
{
    int n = 10;

    if(n < 30)
    {
        printf("n is less than 30.\n");
    }
    if(n < 50)
    {
        printf("n is less than 50.\n");
    }

    return 0;
}*/

/*//26
#include <stdio.h>

int main()
{
    int number = 5, remainder;

    remainder = number % 2;

    if(remainder == 0)
    {
        printf("The number is even\n");
    }
    else
    {
        printf("The number is odd\n");
    }

    return 0;
}*/

/*//27
#include <stdio.h>

int main()
{
    int number = 9;

    if(number % 2 == 0)
    {
        printf("The number is even\n");
    }
    else
    {
        printf("The number is odd\n");
    }

    return 0;
}*/

/*//28
#include <stdio.h>

int main()
{
    char ch = 'F';

    if(ch == 'a')
    {
        printf("%c is lower case\n", ch);
    }
    else if(ch == 'A')
    {
        printf("%c is upper case\n", ch);
    }
    else if(ch == 'b')
    {
        printf("%c is lower case\n", ch);
    }
    else if(ch == 'B')
    {
        printf("%c is upper case\n", ch);
    }
    else if(ch == 'c')
    {
        printf("%c is lower case\n", ch);
    }
    else if(ch == 'C')
    {
        printf("%c is upper case\n", ch);
    }
    else if(ch == 'd')
    {
        printf("%c is lower case\n", ch);
    }
    else if(ch == 'D')
    {
        printf("%c is upper case\n", ch);
    }
    else if(ch == 'e')
    {
        printf("%c is lower case\n", ch);
    }
    else if(ch == 'E')
    {
        printf("%c is upper case\n", ch);
    }
    else if(ch == 'f')
    {
        printf("%c is lower case\n", ch);
    }
    else if(ch == 'F')
    {
        printf("%c is upper case\n", ch);
    }
//to be continued..

    return 0;
}*/

/*//29
#include <stdio.h>

int main()
{
    char ch = 'W';

    if(ch >= 'a' && ch <= 'z')
    {
        printf("%c is lower case\n", ch);
    }
    if(ch >= 'A' && ch <= 'Z')
    {
        printf("%c is upper case\n", ch);
    }

    return 0;
}*/

/*//30
#include <stdio.h>

int main()
{
    char ch = 'k';

    if(ch >= 'a' && ch <= 'z')
    {
        printf("%c is lower case\n", ch);
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
        printf("%c is upper case\n", ch);
    }

    return 0;
}*/

/*//31
#include <stdio.h>

int main()
{
    int num = 5;

    if(num >= 1 || num <= 10)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }

    return 0;
}*/

/*//32
#include <stdio.h>

int main()
{
    char ch;

    ch = getchar();

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' )
    {
        printf("%c is vowel\n", ch);
    }
    else
    {
        printf("%c is consonant\n", ch);
    }

    return 0;
}*/

/*//Chapter:4->33
#include <stdio.h>

int main()
{
    printf("1\n");
    printf("2\n");
    printf("3\n");
    printf("4\n");
    printf("5\n");
    printf("6\n");
    printf("7\n");
    printf("8\n");
    printf("9\n");
    printf("10\n");

    return 0;
}*/

/*//34
#include <stdio.h>

int main()
{
    printf("1\n2\n3\n4\n5\n6\n7\n8\n9\n10\n");

    return 0;
}*/

/*//35
#include <stdio.h>

int main()
{
    int n = 1;

    printf("%d\n", n);
    n = n + 1;

    printf("%d\n", n);
    n = n + 1;

    printf("%d\n", n);
    n = n + 1;

    printf("%d\n", n);
    n = n + 1;

    printf("%d\n", n);
    n = n + 1;

    printf("%d\n", n);
    n = n + 1;

    printf("%d\n", n);
    n = n + 1;

    printf("%d\n", n);
    n = n + 1;

    printf("%d\n", n);
    n = n + 1;

    printf("%d\n", n);
    n = n + 1;
    return 0;
}*/

/*//36
#include <stdio.h>

int main()
{
    int n = 1;

    printf("%d\n", n++);
    printf("%d\n", n++);
    printf("%d\n", n++);
    printf("%d\n", n++);
    printf("%d\n", n++);
    printf("%d\n", n++);
    printf("%d\n", n++);
    printf("%d\n", n++);
    printf("%d\n", n++);
    printf("%d\n", n++);
    return 0;
}*/

/*//37
#include <stdio.h>

int main()
{
    int n = 1;

    while(n <= 10)
    {
        printf("%d\n", n);
        n++;
    }

    return 0;
}*/

/*//38
#include <stdio.h>

int main()
{
    int n = 1;

    while(n <= 10)
    {
        printf("%d\n", n);
    }
    n++;
    return 0;
}*/

/*//39
#include <stdio.h>

int main()
{
    int n = 1;

    while(n <= 100)
    {
        printf("%d\n", n);
        n++;

        if(n > 10)
        {
            break;
        }
    }

    return 0;
}*/

/*//40
#include <stdio.h>

int main()
{
    int n = 0;

    while (n < 10)//0,1,2,3,4,5,6,7,8,9,10
    {
        n = n + 1;//1,2,3,4,5,6,7,8,9,10

        if (n % 2 == 0)//1,2,3,4,5,6,7,8,9,10->2,4,6,8,10
        {
            continue;
        }
        printf("%d\n", n);
    }

    return 0;
}*/

/*//41
#include <stdio.h>

int main()
{
    int n = 5, i = 1;

    while (i <= 10)
    {
        printf("%d x %d = %d\n", n, i, n*i);
        i = i + 1;
    }

    return 0;
}*/

/*//42
#include <stdio.h>

int main()
{
    int n = 10, i;

    for(i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n*i);
    }

    return 0;
}*/

/*//43
#include <stdio.h>

int main()
{
    int n = 5, i = 1;

    for( ; ; )
    {
        if (i > 10)
        {
            break;
        }

        printf("%d x %d = %d\n", n, i, n*i);
        i = i + 1;
    }

    return 0;
}*/

/*//44
#include <stdio.h>

int main()
{
    int m = 0, n = 5, i;

    for(i = 1; i <= 10; i++)
    {
        m = m + n;
        printf("%d x %d = %d\n", n, i, m);
    }

    return 0;
}*/

/*//45
#include <stdio.h>

int main()
{
    int n, i;

    for(n = 1; n <= 20; n = n + 1){
         for(i = 1; i <= 10; i = i + 1){
            printf("%d x %d = %d\n", n, i, n*i);
         }
    }

    return 0;
}*/

/*//46
#include <stdio.h>

int main()
{
    int n, i, m;

    for(n = 1; n <= 20; n = n + 1)
    {
        for(i = 1; i <= 10; i = i + 1)
        {
            m = m + i;
            printf("%d x %d = %d\n", n, i, m);
        }
    }

    return 0;
}*/

/*//47
#include <stdio.h>

int main()
{
    int n, m, i, j;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &m);

        for(j = 10; j <= m; j++)
        {
            if(j % 11 == 0)
            {
                continue;
            }
            printf("%d\n", j);
        }
    }

    return 0;
}*/

/*//48
#include <stdio.h>

int main()
{
    int m, n, o;

    for(m = 1; m <= 3; m++)
    {
        for(n = 1; n <= 3; n++)
        {
            for(o = 1; o <= 3; o++)
            {
                printf("%d, %d, %d\n", m, n, o);
            }
        }
    }

    return 0;
}*/

/*//49
#include <stdio.h>

int main()
{
    int m, n, o;

    for(m = 1; m <= 3; m++)
    {
        for(n = 1; n <= 3 && n != m; n++)
        {
            for(o = 1; o <= 3 && o != m && o != n; o++)
            {
                printf("%d, %d, %d\n", m, n, o);
            }
        }
    }

    return 0;
}*/

/*//50
#include <stdio.h>

int main()
{
    int m, n, o;

    for(m = 1; m <= 3; m++)
    {
        for(n = 1; n <= 3; n++)
        {
            if(n != m)
            {
                for(o = 1; o <= 3; o++)
                {
                    if(o != n && o != m)
                    {
                        printf("%d, %d, %d\n", m, n, o);
                    }
                }
            }
        }
    }

    return 0;
}*/

/*//51
#include <stdio.h>

int main()
{
    int m, n, o;

    for(m = 1; m <= 3; m++)
    {
        for(n = 1; n <= 3; n++)
        {
            for(o = 1; o <= 3; o++)
            {
                if(n != m && o != n && o != m)
                {
                    printf("%d, %d, %d\n", m, n, o);
                }
            }
        }
    }

    return 0;
}*/

/*//Chapter:5->52
#include <stdio.h>

int main()
{
    double x, y, x_plus_y, x_minus_y;

    printf("Enter the value of x + y: ");
    scanf("%lf", &x_plus_y);

    printf("Enter the value of x - y: ");
    scanf("%lf", &x_minus_y);

    x = (x_plus_y + x_minus_y) / 2;
    y = (x_plus_y - x_minus_y) / 2;

    printf("x = %0.2lf, y = %0.2lf\n", x, y);

    return 0;
}*/

/*//53
#include <stdio.h>

int main()
{
    double a1, a2, b1, b2, c1, c2, x, y;

    printf("a1 = ");
    scanf("%lf", &a1);

    printf("a2 = ");
    scanf("%lf", &a2);

    printf("b1 = ");
    scanf("%lf", &b1);

    printf("b2 = ");
    scanf("%lf", &b2);

    printf("c1 = ");
    scanf("%lf", &c1);

    printf("c2 = ");
    scanf("%lf", &c2);

    x = (b2 * c1 - b1 * c2) / (a1 * b2 - a2 * b1);
    y = (a1 * c2 - a2 * c1) / (a1 * b2 - a2 * b1);

    printf("x = %0.2lf, y = %0.2lf\n", x, y);

    return 0;
}*/

/*//54
#include <stdio.h>

int main()
{
    double a1, a2, b1, b2, c1, c2, d, x, y;

    printf("a1 = ");
    scanf("%lf", &a1);

    printf("a2 = ");
    scanf("%lf", &a2);

    printf("b1 = ");
    scanf("%lf", &b1);

    printf("b2 = ");
    scanf("%lf", &b2);

    printf("c1 = ");
    scanf("%lf", &c1);

    printf("c2 = ");
    scanf("%lf", &c2);

    d = a1 * b2 - a2 * b1;

    if((int) d == 0)
    {
        printf("Value of x and y cannot be determined.\n");
    }
    else
    {
        x = (b2 * c1 - b1 * c2) / d;
        y = (a1 * c2 - a2 * c1) / d;
    }

    printf("x = %0.2lf, y = %0.2lf\n", x, y);

    return 0;
}*/

/*//55
#include <stdio.h>

int main()
{
    double loan_amount, interest_rate, number_of_years, total_amount, monthly_amount;

    printf("Enter the loan amount: ");
    scanf("%lf", &loan_amount);

    printf("Enter the interest rate: ");
    scanf("%lf", &interest_rate);

    printf("Number of years: ");
    scanf("%lf", &number_of_years);

    total_amount = loan_amount + loan_amount * interest_rate * number_of_years / 100.00;
    monthly_amount = total_amount / (number_of_years * 12);

    printf("Total amount: %0.2lf\n", total_amount);
    printf("Monthly amount: %0.2lf\n", monthly_amount);

    return 0;
}*/

/*//56
#include <stdio.h>

int main()
{
    int n, sum;

    scanf("%d", &n);
    sum = (n * (n + 1)) / 2;

    printf("Summation is %d\n",sum);

    return 0;
}*/

/*//57
#include <stdio.h>

int main()
{
    int i, n, sum;

    scanf("%d", &n);

    for(i = 1, sum = 0; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("Summation is %d\n", sum);

    return 0;
}*/

/*//58
#include <stdio.h>

int main()
{
    double celsius, farenheit;

    printf("Enter the temperature in celsius: ");
    scanf("%lf", &celsius);

    farenheit = 1.8 * celsius + 32;

    printf("Temperature in farenheit is: %lf\n", farenheit);
    return 0;
}*/

/*//59
#include <stdio.h>

int main()
{
    double celsius, farenheit;

    printf("Enter the temperature in farenheit: ");
    scanf("%lf", &farenheit);

    celsius = (farenheit - 32) / 1.8;

    printf("Temperature in celsius is: %lf\n", celsius);
    return 0;
}*/

/*//60
#include <stdio.h>

int main()
{
    int a, b, x, gcd;

    scanf("%d %d", &a, &b);

    if(a < b)
    {
        x = a;
    }
    else
    {
        x = b;
    }

    for(; x >= 1; x--)
    {
        if(a % x == 0 && b % x == 0)
        {
            gcd = x;
            break;
        }
    }

    printf("GCD is %d\n", gcd);

    return 0;
}*/

/*//61
#include <stdio.h>

int main()
{
    int a, b, t, x, gcd;

    scanf("%d %d", &a, &b);

    if(a == 0) gcd = a;
    else if(b == 0) gcd = b;
    else
    {
        while(b != 0)
        {
            t = b;
            b = a % b;
            a = t;
        }
        gcd = a;
    }

    printf("GCD is %d\n", gcd);

    return 0;
}*/

/*//62
#include <stdio.h>

int main()
{
    int ft_marks, st_marks, final_marks;
    double total_marks;

    ft_marks = 80;
    st_marks = 74;
    final_marks = 97;

    total_marks = ft_marks / 4.0 + st_marks / 4.0 + final_marks / 2.0;
    printf("%0.0lf\n", total_marks);

    return 0;
}*/

/*//63
#include <stdio.h>

int main()
{
    int ft_marks_1, st_marks_1, final_marks_1, ft_marks_2,
        st_marks_2, final_marks_2, final_marks_3, st_marks_3, final_marks_3;

    return 0;
}*/

/*//64
#include <stdio.h>

int main()
{
    int my_ara[10];

    printf("%d\n", my_ara[0]);
    printf("%d\n", my_ara[9]);

    return 0;
}*/

/*//65
#include <stdio.h>

int main()
{
    int my_arr[10]= {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};

    printf("%d\n", my_arr[0]);
    printf("%d\n", my_arr[9]);

    return 0;
}*/

/*//66
#include <stdio.h>

int main()
{
    int my_arr[10] = {5, 10, 15, 20};

    printf("%d, %d\n", my_arr[0], my_arr[9]);

    return 0;
}*/

/*/67
#include <stdio.h>

int main()
{
    int arr[4] = {5, 10, 15, 20};

    arr[0] = 100;
    arr[2] = 200;
    arr[3] = 300;

    printf("%d, %d, %d, %d\n", arr[0], arr[1], arr[2], arr[3]);

    return 0;
}*/

/*//68
#include <stdio.h>

int main()
{
    int numbers[5] = {10, 20, 30, 40, 50};
    printf("First element: %d\n", numbers[0]);
    printf("Third element: %d\n", numbers[2]);

    return 0;
}*/

/*/69
#include <stdio.h>

int main()
{
    int ara[5] = {6, 7, 4, 6, 9};

    printf("%d\n", ara[-1]);
    printf("%d\n", ara[5]);
    printf("%d\n", ara[100]);

    return 0;
}*/

/*//70
#include <stdio.h>

int main()
{
    int ara[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i;

    for(i = 0; i < 10; i++)
    {
        printf("%dth element is: %d\n", i+1, ara[i]);
    }

    return 0;
}*/

/*//71
#include <stdio.h>

int main()
{
    int ara[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i;

    for(i = 9; i >= 0; i--)
    {
        printf("%dth element is: %d\n", i+1, ara[i]);
    }

    return 0;
}*/

//72
#include <stdio.h>

int main()
{
    int ara[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int ara2[10];
    int i,j;

    for(i = 0, j = 9; i < 10; i++, j--)
    {
        ara2[j] = ara[i];
    }

    for(i = 0; i < 10; i++)
    {
        ara[i] = ara2[i];
    }

    for(i = 0; i < 10; i++)
    {
        printf("%d\n", ara[i]);
    }

    return 0;
}

/*/73
#include <stdio.h>

int main()
{
    int ara[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i, j, temp;

    for(i = 0, j = 9; i < 10; i++, j--)
    {
        temp = ara[j];
        ara[j] = ara[i];
        ara[i] = temp;
    }

    for(i = 0; i < 10; i++)
    {
        printf("%d\n", ara[i]);
    }

    return 0;
}

//74
#include <stdio.h>

int main()
{
    int ft_marks[40] = {83, 86, 97, 95, 93, 95, 86, 52, 49, 41, 42, 47, 90,
                        59, 63, 86, 40, 46, 92, 56, 51, 48, 67, 49, 42, 90, 42, 83, 47, 95, 69,
                        82, 82, 58, 69, 67, 53, 56, 71, 62
                       },
                       st_marks[40] = {86, 97, 95, 93, 95, 86, 52, 49, 41, 42, 47, 90, 59, 63,
                                       86, 40, 46, 92, 56, 51, 48, 67, 49, 42, 90, 42, 83, 47, 95, 69, 82, 82,
                                       58, 69, 67, 53, 56, 71, 62, 49
                                      },
                                      final_marks[40] = {87, 64, 91, 43, 89, 66, 58, 73, 99, 81, 100, 64, 55,
                                                         69, 85, 81, 80, 67, 88, 71, 62, 78, 58, 66, 98, 75, 86, 90, 80, 85, 100,
                                                         64, 55, 69, 85, 81, 80, 67, 88, 71
                                                        };

    int i;
    double total_marks[40];

    for(i = 0; i < 40; i++)
    {
        total_marks[i] = ft_marks[i] / 4.0 + st_marks[i] /
                         4.0 + final_marks[i] / 2.0;
    }

    for(i = 1; i <= 40; i++)
    {
        printf("Roll NO: %d\tTotal Marks: %0.0lf\n", i, total_marks[i-1]);
    }

    return 0;
}
*/






/*
#include <stdio.h>

int main()
{


    return 0;
}
*/














