// Poniżej znajduje się przykładowy kod programu, który oblicza wartości ciągu danego wzorem rekurencyjnym. Jako przykład, używamy ciągu Fibonacciego, który jest określony przez następujący wzór rekurencyjny:

// F(0) = 0
// F(1) = 1
// F(n) = F(n-1) + F(n-2) dla n > 1
// Kod programu:

#include <iostream>

int fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    std::cout << "Podaj liczbe elementow ciagu: ";
    std::cin >> n;
    
    for(int i = 0; i < n; i++) {
        std::cout << "Element " << (i + 1) << " ciagu to: " << fibonacci(i) << "\n";
    }
    
    return 0;
}
// W tym programie mamy funkcję fibonacci, która oblicza n-ty wyraz ciągu Fibonacciego. Funkcja jest rekurencyjna, co oznacza, 
// że wywołuje sama siebie w celu obliczenia kolejnych wyrazów ciągu.

// W funkcji main użytkownik jest proszony o podanie liczby n, która określa, ile wyrazów ciągu chcemy wygenerować. Następnie, 
// dla każdej liczby od 0 do n-1, obliczany jest odpowiedni wyraz ciągu Fibonacciego i wyświetlany na ekranie.

// Proszę zauważyć, że powyższy kod jest nieefektywny dla dużych wartości n, ponieważ wielokrotnie oblicza te same wyrazy ciągu. 
// Problem ten można rozwiązać za pomocą techniki memoizacji, która polega na zapisywaniu już obliczonych wyrazów ciągu w celu ich 
// późniejszego wykorzystania. Jeśli jednak chodzi o zrozumienie rekurencji i wzorów rekurencyjnych, powyższy kod jest dobrym punktem wyjścia.