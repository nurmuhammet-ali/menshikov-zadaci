#include "./funcs.cpp"

void menshikow_1_a()
{
    int m,n, we = 0;
    vector<int> v;

    ifstream oka("data/primes.in");
    ofstream yaz("data/primes.out");
    
    oka >> m;
    oka >> n;
    
    oka.close();

    for (int i = m; i <= n; i++)
    {
        for (int j = 1; j <= (i/2); j++)
        {
            if (i % j == 0)
            {
                we++;
            }
        }

        if (we == 1)
        {
            v.push_back(i);
        }
        we = 0;
    }

    if (!v.empty())
    {
        for (int i = 0; i < v.size(); i++)
        {
            yaz << v[i] << " ";
        }
    } else {
        cout << "Absent";
    }
}

int main()
{
    menshikow_1_a();
    
    return 0;
}
