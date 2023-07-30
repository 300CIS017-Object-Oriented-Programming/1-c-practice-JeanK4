/*Actividad 1
Jean Karlo Buitrago Orozco
Código: 8972318
Programación Orientada a Objetos*/

//Ejercicio 1

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int solve = a + b + c;
    cout << solve << endl;
    return 0;
}

//Ejercicio 2

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    if(n == 1)
        cout << "one" << endl;
    else if(n == 2)
        cout << "two" << endl;
    else if(n == 3)
        cout << "three" << endl;
    else if(n == 4)
        cout << "four" << endl;
    else if(n == 5)
        cout << "five" << endl;
    else if(n == 6)
        cout << "six" << endl;
    else if(n == 7)
        cout << "seven" << endl;
    else if(n == 8)
        cout << "eight" << endl;
    else if(n == 9)
        cout << "nine" << endl;
    else
        cout << "Greater than 9" << endl;
    return 0;    
}

//Ejercicio 3

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    for(int i = a; i <= b; i++){
        if(i == 1)
            cout << "one" << endl;
        else if(i == 2)
            cout << "two" << endl;
        else if(i == 3)
            cout << "three" << endl;
        else if(i == 4)
            cout << "four" << endl;
        else if(i == 5)
            cout << "five" << endl;
        else if(i == 6)
            cout << "six" << endl;
        else if(i == 7)
            cout << "seven" << endl;
        else if(i == 8)
            cout << "eight" << endl;
        else if(i == 9)
            cout << "nine" << endl;
        else{
            if(i % 2 == 0)
                cout << "even" << endl;
            else
                cout << "odd" << endl;
        } 
    }
    return 0;
}

//Ejercicio 4

#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d){
    int max = a;
    int arreglo[3] = {b, c, d};
    for(int i = 0; i < 3; i++){
        if(max < arreglo[i])
            max = arreglo[i];
    }
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

//Ejercicio 5

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int num, numeros[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &num);
        numeros[i] = num;
    }
    for(int i = 0; i < n; i++){
        if(i < n-1){
            printf("%d ", numeros[n-1-i]);
        }
        else{
            printf("%d\n", numeros[n-1-i]);
        }
    }
    return 0;
}

//Ejercicio 6

#include <iostream>
#include <string>
using namespace std;

int main(){
    string a, b,aux;
    cin >> a;
    cin >> b;
    int a1 = a.size(), a2 = b.size();
    printf("%d %d\n", a1, a2);
    cout << a << b << endl;
    aux = a;
    a[0] = b[0];
    b[0] = aux[0];
    cout << a << " " << b << endl;
    return 0;
}

//Ejercicio 7

#include <iostream>
#include <sstream>
using namespace std;

class Student{
    private:
        string nombre;
        string apellido;
        int edad;
        int estandar;
    public:
        /****************
        * Constructoras *
        ****************/
        Student();
        
        /****************
        * MODIFICADORAS *
        ****************/
        void set_age(int edad);
        void set_standard(int estandard);
        void set_first_name(string nombre);
        void set_last_name(string apellido);
        
        /***************
        * ANALIZADORAS *
        ***************/
        int get_age();
        int get_standard();
        string get_first_name();
        string get_last_name();
        string to_string();
};

Student::Student(){
}

void Student::set_age(int age){
    edad = age;
}

void Student::set_standard(int standard){
    estandar = standard;
}

void Student::set_first_name(string first_name){
    nombre = first_name;
}

void Student::set_last_name(string last_name){
    apellido = last_name;
}

int Student::get_age(){
    return edad;
}

int Student::get_standard(){
    return estandar;
}

string Student::get_first_name(){
    return nombre;
}

string Student::get_last_name(){
    return apellido;
}

string Student::to_string(){
    stringstream ss;
    ss << edad << "," << nombre << "," << apellido << "," << estandar;
    return ss.str();
}

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
