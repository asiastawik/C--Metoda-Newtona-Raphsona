#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double lepszy (double w, double g)
{
    return 0.5*(g + w/g);
}

int blisko (double g, double gprim) //tu moze byc deklaracja E, codeblocks jest sprytnexd, ale lepiej zrobic jak nizej
{
    double E=0.1;
    return fabs (g - gprim)< E;  //fabs zwraca wartosc bezwzgledna liczby zmiennoprzecinkowej, przekazanej jako argument
}

double pierwiastek (double w, double g) //glowna funkcja
{
    double gprim;
    gprim = lepszy (w, g);

    if (blisko (g, gprim)) //jesli jest na tyle blisko do rozwiazania to zwroc gprim
        return gprim; //zwraca do wyniku w main

    else
        return pierwiastek (w, gprim);
}

int main (void)
{
    double w, g, wynik;
    printf("Podaj liczbe ktora chcesz spierwiastkowac ");
    scanf("%lf", &w); //w double jest %lf w scanf
    //w = 2.; mozna tez tak wpisac wartosc

    g = 1.; //g to pierwsze przyblizenie wartosci pierwiastka, jesli nie ma zadnych wskazowek co do wartosci pierwiastka
    //to warto wystartowac z 1
    wynik = sqrtf(w);
    printf ("%f \n ", wynik); //tu sprawdzamy swoja przyblizona wersje

    wynik = pierwiastek (w, g);
    printf("Pierwiastek kwadratowy z liczby %f wynosi %f \n", w, wynik ); //tu dokladna wersja w zaleznosci od doboru

return 0;
}
