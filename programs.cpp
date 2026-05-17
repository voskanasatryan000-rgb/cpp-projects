// ============================================================
// C++ Programs Collection
// Applied Mathematics & Informatics
// ============================================================


// ============================================================
// PROGRAM 1: Employees (Struct & Arrays)
// Find employees who have children
// ============================================================

/*
#include <iostream>
using namespace std;

struct employees {
    char surname[30];
    char name[30];
    bool married;
    int children;
};

int main() {
    employees x[30];
    int n;
    cout << "n="; cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "name: ";    cin >> x[i].name;
        cout << "surname: "; cin >> x[i].surname;
        cout << "married (yes=1, no=0): "; cin >> x[i].married;
        if (x[i].married) {
            cout << "children: "; cin >> x[i].children;
        } else {
            x[i].children = 0;
        }
    }

    // Print employees who have children
    for (int i = 0; i < n; i++) {
        if (x[i].children > 0) {
            cout << x[i].name << " " << x[i].surname << endl;
        }
    }

    return 0;
}
*/


// ============================================================
// PROGRAM 2: Zangvac (Square Matrix with Friend Function)
// Count elements in range [a, b] on the upper triangle
// ============================================================

/*
#include <iostream>
#include <math.h>
using namespace std;

class zangvac {
private:
    double a;
    double x[10][10];
public:
    zangvac() {
        cin >> a;
        int i, j;
        for (i = 0; i < a; i++) {
            for (j = 0; j < a; j++) {
                cin >> x[i][j];
            }
        }
    }

    friend int funkcia(zangvac ob);

    ~zangvac() {
        cout << "destructor" << endl;
    }
};

int funkcia(zangvac ob) {
    int i, j, k = 0;
    for (i = 0; i < ob.a; i++) {
        for (j = 0; j < ob.a; j++) {
            if (((i + j) % 2 == 1) && (i + j >= ob.a - 1)) {
                k++;
            }
        }
    }
    cout << k << endl;
    return k;
}

int main() {
    zangvac ob;
    funkcia(ob);
    return 0;
}
*/


// ============================================================
// PROGRAM 3: Matric (Matrix with Friend Function nor)
// Count elements in each row that are in range [a, b]
// ============================================================

/*
#include <iostream>
using namespace std;

class matric {
private:
    int n, m;
    int x[20][20];
public:
    matric();
    ~matric();
    friend void nor(matric ob, int a, int b);
};

matric::matric() {
    cout << "constructor" << endl;
    cout << "m="; cin >> m;
    cout << "n="; cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> x[i][j];
}

matric::~matric() {
    cout << "destructor" << endl;
}

void nor(matric ob, int a, int b) {
    int y[20];
    for (int i = 0; i < ob.n; i++) {
        int q = 0;
        for (int j = 0; j < ob.m; j++) {
            if (ob.x[i][j] >= a && ob.x[i][j] <= b)
                q++;
        }
        y[i] = q;
    }
    for (int i = 0; i < ob.n; i++)
        cout << y[i] << " " << endl;
}

int main() {
    matric ob;
    int a, b;
    cout << "a="; cin >> a;
    cout << "b="; cin >> b;
    nor(ob, a, b);
    return 0;
}
*/


// ============================================================
// PROGRAM 4: Inheritance (Base & Derived)
// Product of array elements using inheritance
// ============================================================

/*
#include <iostream>
#include <cmath>
using namespace std;

class base {
protected:
    int n;
    int x[30];
public:
    void mutq() {
        cout << "n="; cin >> n;
        for (int i = 0; i < n; i++)
            cin >> x[i];
    }
};

class Derived : public base {
public:
    int artadryal() {
        int p = 1;
        for (int i = 0; i < n; i++)
            p *= x[i];
        return p;
    }
};

int main() {
    Derived ob;
    int p;
    ob.mutq();
    cout << "p=" << ob.artadryal() << endl;
    return 0;
}
*/
