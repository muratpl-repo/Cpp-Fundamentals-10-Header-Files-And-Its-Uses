#include <iostream>
#include "Hayvan.h"

using namespace std;

int main()
{
    Hayvan hayvan1;
    hayvan1.isim = "Mevlut";
    hayvan1.sinif = "Kusgiller";
    hayvan1.tur = "Muhabbet Kusu";
    hayvan1.yas = 1;


    hayvan1.ozellikleriniSoyle();
    return 0;
}
