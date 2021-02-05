#include <iostream>
#include <cmath>




double pesos_converter(int pesos, double& dollars1) {
    dollars1 += pesos * 1.78;

    std::cout << pesos << " Pesos in dollars is " << dollars1 << " dollars." << "\n";
    return dollars1;
}

double reais_converter(int reais, double& dollars2) {
    dollars2 += reais * 2.38;
    std::cout << reais << " Reais in dollars is " << dollars2 << " dollars." << "\n";
    return dollars2;
}

double soles_converter(int soles, double& dollars3) {
    dollars3 += soles * 4.5;

    std::cout << soles << " Soles in dollars is " << dollars3 << " dollars." << "\n";
    return dollars3;
}

void total_dollar_print(double dollars1, double dollars2, double dollars3)
{
    double total_dollars = dollars1 + dollars2 + dollars3;

    std::cout << "Your total dollars is " << total_dollars << "!" << std::endl;
}

int main() {

    int pesos, reais, soles;
    double dollars1 = 0;
    double dollars2 = 0;
    double dollars3 = 0;



    std::cout << "Enter number of Columbian Pesos: ";

    std::cin >> pesos;

    //pesos to USD 2.14

    std::cout << "Enter number of Brazilian Reais: ";

    std::cin >> reais;

    //reais to USD 1.78

    std::cout << "Enter number of Peruvian Soles: ";

    std::cin >> soles;
    //soles to USD 4.5

    pesos_converter(pesos, dollars1);
    reais_converter(reais, dollars2);
    soles_converter(soles, dollars3);

    /* std::cout << "You have\n";
     std::cout << pesos_converter(pesos) + reais_converter(reais) + soles_converter(soles) << " dollars!" << std::endl;
   */
    total_dollar_print(dollars1, dollars2, dollars3);

}