#include <iostream>

using namespace std;

/*
 
                                            F = (18*C) + 320 / 10
                                         
                                            C/100 = (F-32)/180      Denkleminden sadeleştirilerek türetilmiştir.
 
 */
class convert
{
    double Celcius;
    
public:
    void set(double _C)
    {
        Celcius = _C;
    }
    double hesapla(void)
    {
        double F = ((18 * Celcius) + 320) / 10;
        
        return F;
    }
    void goster(double Fahrenheit)
    {
        cout << "\n\n\t\t" << Celcius << " Celcius -------> " << Fahrenheit << " Fahrenheit" << endl;
    }
};

int main()
{
    setlocale(LC_ALL, "Turkish");
    
    convert cevir;
    double C;
    
    cout << "\n\nCelcius cinsinden sıcaklık girin: ";
    cin >> C;
    
    cevir.set(C);
    cevir.goster(cevir.hesapla());
    
    return main();
}
