
#include <iostream>

int main() {
    int a = 0;
    
    //Espressioni primarie 
    std::cout << "\t1)\tEspressioni primarie\t" << '\n';
    std::cout << "\t-4\t"  << '\n';
    std::cout << "\tnome di variabile\t" << '\n';
    std::cout << "\tc\t" << '\n';
    
    //Espressioni di suffisso 
    std::cout << "\t2)\tEspressioni di suffisso\t" << '\n';
    std::cout << "\t expr++\t" << "\tincremento\t" << '\n';
    std::cout << "\t expr--\t" << "\tdecremento\t" << '\n';
    std::cout << "\t expr()\t" << "\tchiamata a funzione\t" << '\n';
    std::cout << "\t expr[]\t" << "\tutilizzo degli array\t" << '\n';
    
    //Espressioni di prefisso 
    std::cout << "\t3)\tEspressioni di prefisso\t" << '\n';
    std::cout << "\t ++expr\t" << "\tincremento\t" << '\n';
    std::cout << "\t --expr\t" << "\tdecremento\t" << '\n';
    std::cout << "\t !expr\t" << "\tnegazione logica\t" << '\n';
    std::cout << "\t +expr\t" << "\toperatore di valore\t" << '\n';
    std::cout << "\t -expr\t" << "\toperatore di negazione\t" << '\n';
    std::cout << "\t ()expr\t" << "\toperatore di casting\t" << '\n';
   std::cout << "\t sizeof(expr)\t" << "\toperatore di dimensione\t" << '\n';
   std::cout << "\t~expr\t" << "\toperatore di valore\t" << '\n';
   
   
    return 0;
}
