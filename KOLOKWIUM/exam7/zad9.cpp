// Komunikacja pomiędzy programem (najczęściej określanym jako funkcja main) a innymi funkcjami w programie 
// może zachodzić na różne sposoby. Poniżej opisano dwa podstawowe sposoby wymiany informacji: przez argumenty i przez zwracane wartości.

// 1. Argumenty funkcji:

// Gdy wywołujesz funkcję, możesz przekazać jej jedną lub więcej wartości, które są nazywane argumentami 
// funkcji. Argumenty te są kopiami wartości, które są przekazywane do funkcji. Oznacza to, że jeśli zmienisz wartość argumentu wewnątrz funkcji, nie wpłynie to na 
//wartość oryginalną poza funkcją. Przykład:


void funkcja(int x) {
    x = 10;
}

int main() {
    int a = 5;
    funkcja(a);
    // a nadal wynosi 5
    return 0;
}
// W powyższym przykładzie, mimo że zmieniamy wartość x wewnątrz funkcji na 10, wartość a poza funkcją 
// nadal wynosi 5, ponieważ x jest tylko kopią a, a nie jej referencją.

// 2. Wartość zwracana:

// Funkcje mogą również zwracać wartość do funkcji wywołującej. Na przykład, funkcja może obliczyć wynik i 
// zwrócić go jako wartość, która jest następnie przypisywana do zmiennej lub używana w inny sposób. Przykład:

int funkcja() {
    return 10;
}

int main() {
    int a = funkcja();
    // a wynosi teraz 10
    return 0;
}
// W powyższym przykładzie, funkcja zwraca wartość 10, która jest następnie przypisywana do zmiennej a w 
// funkcji main.

// Inne metody wymiany informacji:

// Istnieją też inne metody przekazywania informacji do i z funkcji, takie jak użycie wskaźników i referencji
//  do przekazywania argumentów przez referencję (co pozwala na modyfikację oryginalnych wartości), oraz użycie zmiennych globalnych, które są dostępne dla całego programu. Jednak te metody są bardziej zaawansowane i mogą prowadzić do skomplikowanych sytuacji, jeśli nie są używane ostrożnie.