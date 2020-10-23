#include "iostream"
#include "string"
#include "math.h"
using namespace std;
int plotnost();
int leanurov();
int rastoan();
int perimetr();
int ploskol();
int kub();
int kvadrat();
int polin();
int diametr();
int Imy();
int main()
{
    string k;
    double d, b, z, x, a, y;
    //Zadan 1
    cout << "1" << " " << "13" << " " << "49" << endl;

    //Zadan 2
    cout << "vesti znak ";  cin >> k;
    cout << "1" << k << "13" << k << "49" << endl;

    //Zadan 3
    cout << "Vesti three chisla ";  cin >> d; cin >> b; cin >> z; 
    cout << d << " " << " " << b << " " << " " << z << endl;

    //Zadan 4
    cout << "Vesti peremen ";  cin >> a;
    x = 12 * a * a + 7 * a - 12;
    cout << x << endl;
    y = 3 * x * x * x + 4 * x * x - 11 * x + 1;
    cout << y << endl;
    plotnost();
    leanurov();
    rastoan();
    perimetr();
    ploskol();
    kub();
    kvadrat();
    diametr();
    Imy();
    polin();
    system("pause");
    return 0;
}

//Zadan 1
int plotnost()
{
   double m, v;
    double p;
    cout << "Zadan1" << endl;
    cout << "massa:"; cin >> m;
    cout << "Obom:"; cin >> v;
    p = m / v;
    cout << "plotnost:" << p << endl;
    return 0;
}

//Zadan 2
int leanurov()
{
    double a, b;
    double x;
    cout << "Zadan2" << endl;
    cout << "a="; cin >> a;
    cout << "b="; cin >> b;
    x = -b / a;
    cout << x << endl;
    return 0;
}

//Zadan 3
int rastoan()
{
    double x1, x2, y1, y2;
    double r;
    cout << "Zadan3" << endl;
    cout << "x1="; cin >> x1; cout << "y1="; cin >> y1; cout << "x2="; cin >> x2; cout << "y2="; cin >> y2;
    r = sqrt((y2 - y1) * (y2 - y1) + (x2 - x1) * (x2 - x1));
    cout << r << endl;
    return 0;
}

//Zadan 4
int perimetr()
{
    double a, b, c;
    double L, d, per;
    cout << "Zadan4" << endl;
    cout << "a="; cin >> a; cout << "b="; cin >> b; cout << "c="; cin >> c;
    d = abs((b - a) / 2);
    L = sqrt(d * d + c * c);
    per = 2 * L + a + b;
    cout << per << endl;
    return 0;
}

//Zadan 5
int ploskol()
{
    double r1, r2;
    double S;
    cout << "Zadan5" << endl;
    cout << "r1="; cin >> r1; cout << "r2="; cin >> r2;
    S = 3.14 * (r2 * r2 - r1 * r1);
    cout << S << endl;
    return 0;
}

//Zadan 6
int kub()
{
    double a, ob, plos;
    cout << "Zadan6" << endl;
    cout << "dlina rebra ="; cin >> a;
    ob = a * a * a;
    plos = 6 * a * a;
    cout << ob << " " << plos << endl;
    return 0;
}


//Zadan 7
int kvadrat()
{
    double st;
    cout << "Zadan7" << endl;
    cout << "vesti stor "; cin >> st;
    cout <<"perimetr: "<< 4 * st<<endl;
    return 0;
}


//Zadan 8
int diametr()
{
    double rad;
    cout << "Zadan8" << endl;
    cout << "Radius "; cin >> rad;
    cout << "diametr: " << 2 * rad<<endl;
    return 0;
}


//Zadan 9
int Imy()
{
    string im;
    cout << "Zadan9" << endl;
    cout << "vesti imy "; cin >> im;
    cout << "Hello, " << im << "! My name is c++ ."<<endl;
    return 0;
}

//Zadan 10
int polin()
{
    int i,k,l;
    string slov;
    k = 0;
    cout << "Zadan10" << endl;
    cout << "Slovo: "; cin >> slov;
    l = slov.length();
    for (i = 0; i < (l / 2); ++i) {
        if (slov[i] != slov[l - i - 1]) {
            k=0;
        }
        else
        {
            k = k+1;
        }
    }
    if (k ==(l/2)) {
        cout << "This is polindrom!";
    }
    else {
        cout << "Sorry, this is not polindrom!";
    }
    return 0;
}
