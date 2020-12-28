#include <iostream>

int main() {
    std::string liczba1;
    std::cout << "Witamy w konwerterze liczb binarnych na decymalna\n";
    std::string wybor;
    bool dziala = true;
    bool dziala1 = false;
    
    while (dziala == true)
    {
        
        std::cout << "Wprowadz liczbe binarna:\n";
        std::cin >> liczba1;
        std::cout << "Wprowadzona liczba wynosi:\t" + liczba1 + "\n";
        
       do
      {
            std::cout << "Czy kontynuować?\n";
            std::cin >> wybor;
            
            if (wybor=="tak")
            {
                dziala = true;
                dziala1 = true;
            }
            else if (wybor=="nie")
            {
                dziala = false;
                dziala1 = true;
            }
            else
            {
                dziala1 = false;
                std::cout << "zly wpis\n";
            }
        }
        while (dziala1 == false);
    }
}
    
    






