#include "./funcs.cpp"

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
    if (begin == n)
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
