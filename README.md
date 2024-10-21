# Metoda Newtona-Raphsona

## Opis zadania

**Metoda Newtona-Raphsona** (zwaną również metodą stycznych) zaimplementowana w języku **C**, służy do znajdowania pierwiastka stopnia `n` z liczby `w`. Metoda Newtona-Raphsona pozwala na szybkie przybliżenie wartości pierwiastka poprzez iteracyjne ulepszanie wyników.

Program będzie składał się z **trzech funkcji pomocniczych** oraz funkcji `main`:

1. **blisko(g, gprim)** — funkcja sprawdzająca, czy aktualne przybliżenie jest wystarczająco dokładne.
2. **lepszy(n, w, g)** — funkcja wyliczająca następne, lepsze przybliżenie pierwiastka.
3. **pierwiastek(n, w, g)** — funkcja wyliczająca pierwiastek stopnia `n` z liczby `w` za pomocą metody Newtona-Raphsona, zaczynając od początkowego przybliżenia `g`.

### Zasady działania metody Newtona-Raphsona

1. **Iteracyjna poprawa przybliżenia**:
   - Aby znaleźć pierwiastek stopnia `n` z liczby `w`, metoda Newtona-Raphsona wylicza kolejne przybliżenia, wykorzystując funkcję i jej pochodną. 
   
2. **Warunek zatrzymania**:
   - Proces iteracyjny kontynuowany jest do momentu, aż różnica między kolejnymi przybliżeniami będzie mniejsza od zadanej wartości tolerancji \( \epsilon \).
