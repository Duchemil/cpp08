#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <iterator>
#include <exception>
#include <vector>
#include <ctime>

class Span
{
    private:
        unsigned int N;
        std::vector<int> numbers;

    public:
        Span();
        Span(unsigned int N);
        Span(Span const &other);
        Span &operator=(Span const &other);
        ~Span();

        void addNumber(unsigned int number);
        void addNumbers(std::vector<int>::iterator being, std::vector<int>::iterator end);
        int shortestSpan();
        int longestSpan();
};


#endif
