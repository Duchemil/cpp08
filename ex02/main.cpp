#include "MutantStack.hpp"

int main()
{
    std::cout << "------------------STACK---------------\n";


    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::stack<int> s(mstack);

    std::cout << "------------------LIST----------------\n";

    std::list<int> list;
    list.push_back(5);
    list.push_back(17);
    std::cout << list.back() << std::endl;
    list.pop_back();
    std::cout << list.size() << std::endl;
    list.push_back(3);
    list.push_back(5);
    list.push_back(737);
    list.push_back(0);
    std::list<int>::iterator it2 = list.begin();
    std::list<int>::iterator ite2 = list.end();
    ++it2;
    --it2;
    while (it2 != ite2)
    {
        std::cout << *it2 << std::endl;
        ++it2;
    }
    std::list<int> s2(list);

    std::cout << "------------------BASE STACK (NON-ITERABLE)----------------\n";

    // Utilisation de std::stack de base
    std::stack<int> baseStack;
    baseStack.push(5);
    baseStack.push(17);
    baseStack.push(3);
    baseStack.push(5);
    baseStack.push(737);
    baseStack.push(0);

    // Tentative d'itération sur std::stack de base (ne fonctionne pas)
    // std::stack<int>::iterator it3 = baseStack.begin(); // Erreur : std::stack n'a pas de méthode begin()
    // std::stack<int>::iterator ite3 = baseStack.end(); // Erreur : std::stack n'a pas de méthode end()

    // Pour montrer que std::stack n'est pas itérable, nous devons dépiler les éléments
    while (!baseStack.empty())
    {
        std::cout << baseStack.top() << std::endl;
        baseStack.pop();
    }

    return 0;
}
