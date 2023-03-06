#include <static_vector.hpp>
static_vector::static_vector()
{
    num_elements = 0;
    memory_size = 0;
    memory = nullptr;
}
static_vector::static_vector(int max_elements)
{
    throw std::runtime_error("Not implemented");
}
static_vector::~static_vector()
{
}
int static_vector::capacity() const
{
    throw std::runtime_error("Not implemented");
}
int static_vector::size() const
{
    throw std::runtime_error("Not implemented");
}
int &static_vector::at(int pos)
{
    throw std::runtime_error("Not implemented");
}
int &static_vector::operator[](int pos)
{
    throw std::runtime_error("Not implemented");
}
void static_vector::push_back(const int &value)
{
    throw std::runtime_error("Not implemented");
}
void static_vector::pop_back()
{
    throw std::runtime_error("Not implemented");
}
int &static_vector::back()
{
    throw std::runtime_error("Not implemented");
}
void static_vector::reserve(int max_elements)
{
    throw std::runtime_error("Not implemented");
}
void static_vector::shrink_to_fit()
{
    throw std::runtime_error("Not implemented");
}