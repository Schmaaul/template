#include <static_vector.hpp>
#include <iostream>
int main()
{
    static_vector a;
    try
    {
        a = static_vector(10);
        std::cout << "Capacity sollte 10 liefern. Liefert " << a.capacity() << "!" << std::endl;
        std::cout << "Size sollte 0 liefern. Liefert " << a.size() << "!" << std::endl;
    }
    catch (std::runtime_error &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "Füge Elemente an: [3, 4]" << std::endl;
    try
    {
        a.push_back(3);
        a.push_back(4);
        std::cout << "Letztes Element sollte 4 sein. Liefert " << a.back() << "!" << std::endl;
    }
    catch (std::runtime_error &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "Entferne letztes Element" << std::endl;
    try
    {
        a.pop_back();
        std::cout << "Back sollte 3 liefern. Liefert " << a.back() << "!" << std::endl;
    }
    catch (std::runtime_error &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "Füge Elemente ein: [1, 2, 3, 4, 5]" << std::endl;
    try
    {
        a.push_back(1);
        a.push_back(2);
        a.push_back(3);
        a.push_back(4);
        a.push_back(5);
        std::cout << "Element an Position 0 sollte 3 sein. Liefert " << a.at(0) << "!" << std::endl;
        std::cout << "Size sollte 6 liefern. Liefert " << a.size() << "!" << std::endl;
    }
    catch (std::runtime_error &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "Verkleinere Vektor auf die Anzahl der Elemente" << std::endl;
    try
    {
        a.shrink_to_fit();
        std::cout << "Capacity sollte 6 liefern. Liefert " << a.capacity() << "!" << std::endl;
    }
    catch (std::runtime_error &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "Versuche push_back. Erwarte Exception." << std::endl;
    try
    {
        a.push_back(0);
        std::cout << "Keine Exception erhalten." << std::endl;
    }
    catch (...)
    {
        std::cout << "Exception erhalten." << std::endl;
    }
    std::cout << "Erweitere maximale Größe auf 12 Elemente" << std::endl;
    try
    {
        a.reserve(12);
        std::cout << "Capacity sollte 12 liefern. Liefert " << a.capacity() << "!" << std::endl;
    }
    catch (std::runtime_error &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "Versuche push_back. Keine Exception erwartet." << std::endl;
    try
    {
        a.push_back(0);
        std::cout << "Keine Exception erhalten." << std::endl;
    }
    catch (...)
    {
        std::cout << "Exception erhalten." << std::endl;
    }
    return 0;
}