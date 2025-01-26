#include "Span.hpp"

int main()
{
    std::srand(std::time(0));

    try
    {
        Span sp = Span(50);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;

        // Add multiple numbers
        std::vector<int> moreNumbers;
        moreNumbers.push_back(17);
        moreNumbers.push_back(9);
        moreNumbers.push_back(11);
        moreNumbers.push_back(6);
        moreNumbers.push_back(13);
        moreNumbers.push_back(8);
        moreNumbers.push_back(12);
        moreNumbers.push_back(10);

        sp.addNumbers(moreNumbers.begin(), moreNumbers.end());

        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;

        // Test with 10,000 numbers
        Span largeSpan(10000);
        for (int i = 0; i < 10000; ++i)
        {
            largeSpan.addNumber(std::rand());
        }

        std::cout << "Shortest span (10,000 numbers): " << largeSpan.shortestSpan() << std::endl;
        std::cout << "Longest span (10,000 numbers): " << largeSpan.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
