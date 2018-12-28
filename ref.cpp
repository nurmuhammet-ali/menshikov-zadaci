#include "./includes.cpp"

/*
*   Matrix
*/
void matrixWithCin()
{
    int count, K;

    cout << "N: ";
    cin >> count;

    int matrisa[count * count];

    for (int i = 0; i < pow(count, 2); i++)
    {
        cout << "matrisa[" << i << "] = ";
        cin >> matrisa[i];
    }

    for (int i = 0; i < (count * count); i++)
    {
        cout << matrisa[i] << " ";
        
        if (i != 0 && (i + 1) % count == 0)
        {
            cout << "\n";
        }
    }
}

void matrisa()
{
    int n,m;

    n = get("Sutunleyin oyjukleri: ");
    m = get("Setirleyin oyjukleri: ");

    for (int i = 1; i < pow(n, 2); i++)
    {
        cout << i << " "; 
        if (i % m == 0)
        {
            cout << "\n";
        }
    }
}

/* 
*   Tak sany tapmak
*/
void takSan(int sandan, int sana)
{ 
    int limiter = 0;

    for (int i = sandan; i <= sana; i++)
    {
        for (int j = 1; j <= (i / 2); j++)
        {
            if (i % j == 0)
            {
                limiter++;
            }
        }

        if (limiter == 1)
        {
            cout << i << " ";
        }

        limiter = 0;
    }
}

/*
*   Factorial
*/
int Factorial(int f)
{
    int solve() {
        int p = f, the = 1;
        for (int i = 1; i <= p; i++)
        {
            the *= i;
            cout << the << " ";
        }
        return the;
    }

    solve(5);
}


/*
* File read and write
*/
void fileRead()
{
    // One way
    FILE *in = fopen("2b.in","r");
    FILE *out = fopen("2b.out","w");

    fscanf(in,"%d",&n);

    // Second way
    ifstream oka("textc.txt");
    ofstream yaz("yaz.txt");
    
    int a; 
    int b;
    oka >> a;
    cout << a << endl;

    cin >> b;
    yaz << b;

    oka.close();
    yaz.close();
}
