// Matrix
// SACHIN GAVALI[ Try to  best !]
#include <stdio.h>
#include <conio.h>
void dash();
void newLine();
void getMatrix();
void printMatrix();
void addMatrix();
void print2Matrix();
void subMaxtrix();
void op();
void multiMatrix();
void transposeMatrix();
void squareMatrix();
void squareMatrix(void){
    // in square matrix row or colume are equal ,MxN 
    printMatrix();
    dash();
    printf("His square matrix");
    dash();
}
void transposeMatrix(void)
{

    int d[100][100];
    int n;
    int a[100][100];

    printf(" ENTER THE NUMBER FOR ROW OR COL \n");
    dash();
    scanf("%d", &n);
    printf(" ENTER YOUR MATRIX ");
    dash();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf(" %d", &a[i][j]);
        }
        newLine();
    }
    dash();
    // Print the matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("   \t%d   ", a[i][j]);
        }
        newLine();

    }
    dash();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            d[i][j] = a[j][i];
            printf("   \t %d  ", d[i][j]);
        }
        newLine();
    }
    dash();
}

void multiMatrix(void)
{
    int n;
    int c[100][100];
    int b[100][100];
    int a[100][100];

    printf(" ENTER THE NUMBER  \n");
    dash();
    scanf("%d", &n);
    printf(" ENTER YOUR MATRIX ");
    dash();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf(" %d", &a[i][j]);
        }
        newLine();
    }
    dash();
    // Print the matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("   \t%d   ", a[i][j]);
        }
        newLine();
    }

    printf(" ENTER THE NUMBER \n");
    dash();
    scanf("%d", &n);
    printf(" ENTER YOUR 2nd MATRIX ");
    dash();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf(" %d", &b[i][j]);
        }
        newLine();
    }
    dash();
    // Print the matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("  \t%d   ", b[i][j]);
        }
        newLine();
    }
    dash();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] * b[i][j];
            printf("  \t%d   ", c[i][j]);
        }
        newLine();
    }
    dash();
}

void subMatrix(void)
{
    int n;
    int c[100][100];
    int b[100][100];
    int a[100][100];

    printf(" ENTER THE NUMBER  \n");
    dash();
    scanf("%d", &n);
    printf(" ENTER YOUR MATRIX ");
    dash();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf(" %d", &a[i][j]);
        }
        newLine();
    }
    dash();
    // Print the matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("   \t%d   ", a[i][j]);
        }
        newLine();
    }

    printf(" ENTER THE NUMBER \n");
    dash();
    scanf("%d", &n);
    printf(" ENTER YOUR 2nd MATRIX ");
    dash();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf(" %d", &b[i][j]);
        }
        newLine();
    }
    dash();
    // Print the matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("  \t%d   ", b[i][j]);
        }
        newLine();
    }
    dash();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] - b[i][j];
            printf("  \t%d   ", c[i][j]);
        }
        newLine();
    }
    dash();
}
void print2Matrix(void)
{
    int num1;
    int b[100][100];

    printf(" ENTER THE NUMBER FOR ROW OR COL \n");
    dash();
    scanf("%d", &num1);
    printf(" ENTER YOUR MATRIX ");
    dash();
    for (int i = 0; i < num1; i++)
    {
        for (int j = 0; j < num1; j++)
        {
            scanf(" %d", &b[i][j]);
        }
        newLine();
    }
    dash();
    // Print the matrix
    for (int i = 0; i < num1; i++)
    {
        for (int j = 0; j < num1; j++)
        {
            printf(" %d", b[i][j]);
        }
        newLine();
    }
}

void addMatrix(void)
{
    int add[100][100];
    int num;
    int b[100][100];

    int n;
    int a[100][100];

    printf(" ENTER THE NUMBER  \n");
    dash();
    scanf("%d", &n);
    printf(" ENTER YOUR MATRIX ");
    dash();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf(" %d", &a[i][j]);
        }
        newLine();
    }
    dash();
    // Print the matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("   \t%d   ", a[i][j]);
        }
        newLine();
    }

    printf(" ENTER THE NUMBER \n");
    dash();
    scanf("%d", &n);
    printf(" ENTER YOUR 2nd MATRIX ");
    dash();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf(" %d", &b[i][j]);
        }
        newLine();
    }
    dash();
    // Print the matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("  \t%d   ", b[i][j]);
        }
        newLine();
    }
    dash();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            add[i][j] = a[i][j] + b[i][j];
            printf("  \t%d   ", add[i][j]);
        }
        newLine();
    }
}
void printMatrix(void)
{

    int n;
    int a[100][100];

    printf(" ENTER THE NUMBER FOR ROW OR COL \n");
    dash();
    scanf("%d", &n);
    printf(" ENTER YOUR MATRIX ");
    dash();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf(" %d", &a[i][j]);
        }
        newLine();
    }
    dash();
    // Print the matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("   \t%d   ", a[i][j]);
        }
        newLine();
    }
}

void getMatrix(void)
{
    int n;
    int a[100][100];

    printf(" ENTER THE NUMBER FOR ROW OR COL ");
    dash();
    scanf("%d", &n);
    printf(" YOUR MATRIX:");
    dash();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf(" \t%d   ", &a[i][j]);
        }
        newLine();
    }
    dash();
}

void newLine(void)
{
    printf("\n");
}

void dash(void)
{
    newLine();
    for (int i = 0; i <= 8; i++)
    {
        printf("--");
    }
    newLine();
}
void main()
{
    dash();
    printf("\t TRY TO BEST ");
    dash();
    op();
}
void op(void)
{
    int choose;
    dash();
    printf(" ENTER THE NUMBER FOR OPERATION \n");
    scanf("%d",&choose);
    dash();
    switch (choose)
    {
    case 1:
    {
        printf(" YOU CHOOSE A PRINT MATRIX ");
        dash();
        printMatrix();
        dash();
        break;
    }
    case 2:
    {
        printf(" YOU CHOOSE A PRINT 2 MATRIX ");
        dash();
        printMatrix();
        print2Matrix();
        dash();
        break;
    }
    case 3:
    {
        printf(" YOU CHOOSE A  ADD MATRIX ");
        dash();
        addMatrix();
        dash();
        break;
    }
    case 4:
    {
        printf(" YOU CHOOSE A  SUBTRACTION OF MATRIX ");
        dash();
        subMatrix();
        dash();
        break;
    }
    case 5:
    {
        printf(" YOU CHOOSE A MULTIPICATION OF MATRIX ");
        dash();
        multiMatrix();
        dash();
        break;
    }
    case 6:
    {
        printf(" YOU CHOOSE A TRANSPOSE OF MATRIX ");
        dash();
        transposeMatrix();
        dash();
        break;
    }
    case 7:
    {
        printf(" YOU CHOOSE A SQUARE OFMATRIX ");
        dash();
        squareMatrix();
        dash();
        break;
    }

    default:
    {
        dash();
        printf(" YOU CHOOSE THE NUMBER UNDER 1 TO 20 ");
        dash();
    }
    }
}
