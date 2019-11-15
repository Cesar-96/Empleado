
#include <iostream>

using namespace std;



class Empleado
{
private:
    string nombre;
    string apellido;
    //double salario;
public:
    double salario;
    Empleado(string nombre_, string apellido_, double salario_)
    {
        nombre = nombre_;
        apellido = apellido_;
        salario = salario_;
    }
    string getnombre();
    string getApellido();
    double getSalario();
    double sueldoAnual();
    double descuento();
    double descuentoAnual();
};

string Empleado::getnombre()
{
    return nombre;
}

string Empleado::getApellido()
{
    return apellido;
}

double Empleado::getSalario()
{
    if (salario>=0)
        return salario;
    else
        return 0;
}
double Empleado::sueldoAnual()
{
    double nuevosalario;
    nuevosalario =12*salario;
    return nuevosalario;
}

double Empleado::descuento()
{
        int diezpc =0;
        diezpc = salario *1.10;
        diezpc = diezpc - salario;
        return diezpc;
}

double Empleado::descuentoAnual()
{
    int diezpc2 =0;
    diezpc2 = salario *1.10;
    diezpc2 = diezpc2 - salario;
    return (salario*12)-(diezpc2*12);
}

int main()
{
    Empleado p1("pablo","yucra",10);
    Empleado p2("Cesar","Ccolqque",100);
    cout<< p1.getnombre()<<endl;
    cout<<p1.getSalario()<<endl;
    cout << p1.sueldoAnual()<<endl;
    cout<<p1.descuento()<<endl;
    cout<<p1.descuentoAnual();
}
