#include "Span.hpp"

Span::Span() : N(0) {}

Span::Span(unsigned int N) : N(N) {}

Span::Span(Span const &other)
{
	*this = other;
}

Span &Span::operator=(Span const &other)
{
	if (this != &other)
	{
		this->N = other.N;
		this->numbers = other.numbers;
	}
	return *this;
}

Span::~Span() {}

void Span::addNumber(unsigned int number)
{
	if (numbers.size() < N)
		numbers.push_back(number);
	else
		throw std::out_of_range("Container is full");
}

void Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (numbers.size() + std::distance(begin, end) <= N)
		numbers.insert(numbers.end(), begin, end);
	else
		throw std::out_of_range("Container is full");
}

int Span::shortestSpan()
{
	if (numbers.size() < 2)
		throw std::out_of_range("Not enough numbers to calculate span");
	std::vector<int> sorted = numbers;
	std::sort(sorted.begin(), sorted.end());
	int min = sorted[1] - sorted[0];
	for (size_t i = 1; i < sorted.size() - 1; i++)
	{
		if (sorted[i + 1] - sorted[i] < min)
			min = sorted[i + 1] - sorted[i];
	}
	return min;
}

int Span::longestSpan()
{
	if (numbers.size() < 2)
		throw std::out_of_range("Not enough numbers to calculate span");
	std::vector<int> sorted = numbers;
	std::sort(sorted.begin(), sorted.end());
	return sorted.back() - sorted.front();
}
