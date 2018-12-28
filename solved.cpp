#include "./funcs.cpp"

void b_1()
{
ifstream in("expr.in");
ofstream out("expr.out");

int  n;
long x[30];
long s;
unsigned int a[2]={1,-1};
bool buf[30];
char c[2]={'+','-'};
bool found=0;

void expr( int begin, int summa)
{
    if (begin==n)
    {
        if ( summa == s ) {
            cout<<x[0];
            for (int i=1;i<n;i++)
            cout<<c[buf[i]]<<x[i];
            cout<<endl; 
            found=1;}
    return;
    }
    for (int i=0;i<2;i++)
        expr(begin+1, summa+a[i]*x[begin]),buf[begin]=i;
}
int main()
{
    cin>>n>>s;
    for (int i=0;i<n;i++)
    cin>>x[i];

    expr(1, x[0]);
    if (found==0) cout<<"no solution";
    in.close();
    out.close();
    return 0;
}

}

void menshikow_12_a()
{
    long long n, sum, a[20000];
    cin >> a[0];
    cin >> a[1];
    cin >> a[2];
    cin >> n;


    for (int i = 0; i < n; i++)
    {
        sum = a[i] + a[i+1] + a[i+2];
        a[i+3] = sum % 10;
    }
    
    cout << a[n-1];
}

void menshikow_11_a()
{
    int first, n, a, b;
    first = num.get("A1: ");
    n = num.get("N: ");
    vector<int> v;

    // If first val is 0, then others will be zero
    if (first == 0) {
        cout << 0 << "\n";
        return 0;
    }
    v.push_back(first);
    for (int i = 1; i < n; i++) {
        a = pow(v[i - 1], 2);
        a = a % 10000;
        v.push_back(a);
    }

    /* Otherway, more short
        for (int i = 2; i < n; i++)
        {
            first = (first*first*first*first) % 10000;
        }
        cout << first;
    */

    cout << v.back();
}

void menshikow_8_a()
{
    int n, a, b = 1;
    n = num.get("N: ");
    vector<int> v;

    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ";
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++) {
        if (b >= v[i]) {
            b += v[i];
        } else {
            break;
        }
    }

    cout << b;
}

void menshikow_7_a()
{
    int n;
    n = num.get("N: ");

    void solved(int left_num, int left_den, int right_num, int right_den, int n){
        if (left_den + right_den > n) return;
        solved(left_num, left_den, right_num+left_num, right_den+left_den, n);
    
        cout << left_num+right_num << "/" << right_den+left_den << endl;
    
        solved(right_num+left_num, right_den+left_den, right_num, right_den, n);
    }

    solved(0, 1, 1, 1, n);
}

void menshikow_6_a()
{
    int n,d = 0;
    n = num.get("N: ");
    
    int a[n*n];

    if (n != 1) {
        for (int i = 0; i < pow(n,2); i++)
        {
            cout << "a[" << i << "] = ";
            cin >> a[i];
        }
    } else {
        for (int i = 0; i < 2; i++)
        {
            cout << "a[" << i << "] = ";
            cin >> a[i];
        }
    }

    for (int i = 0; i < (n*n); i++)
    {
        d = a[i] - a[i + 1];
    }

    cout << d;
}

void menshikow_5_a()
{
    int m,n;
    ifstream in("data/friendly.in");
    ofstream out("data/friendly.out");

void has_friend(int san)
{
    int sum = 0, sum2 = 0;

    for (int i = 1; i <= (san/2); i++)
    {
        if (san % i == 0)
        {
            sum += i;
        }
    }

    for (int i = 1; i <= (sum/2); i++)
    {
        if (sum % i == 0)
        {
            sum2 += i;
        }
    }

    if (san == sum2 && san != sum)
    {
        out << san << " ";
    }
}

int main()
{
    in >> m >> n;
    for (int i = m; i < n; i++)
    {
        has_friend(i);
    }
    return 0;
}
}

void menshikow_4_a() 
{
   int m,n;

bool perfect_number(int san)
{
    int sum = 0, sum2 = 0;

    for (int i = 1; i <= (san/2); i++)
    {
        if (san % i == 0)
        {
            sum += i;
        }
    }

    if (san == sum)
    {
        return true;
    }

    return false;
}

int main()
{
    vector<int> v;
    ifstream in("data/perfect.in");
    ofstream out("data/perfect.out");

    in >> m;
    in >> n;

    for (int i = m; i <= n; i++)
    {
        if (perfect_number(i))
        {
            v.push_back(i);
        }
    }

    if (v.empty())
    {
        out << "Absent";
    } else {
        for (int i = 0; i < v.size(); i++)
        {
            out << v.at(i) << "\n";
        }
    }
}

void menshikow_3_a()
{
    ifstream in("data/pfactor.in");
    ofstream out("data/pfactor.out");

    in >> n;
    in.close();

    while (n > 0) {
        while (n % k == 0) {
            n /= k;
            out << k << "*";
        }
        k++;
        if (k >= n) break;
    }
    out << n;
}

void menshikow_2_a()
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
