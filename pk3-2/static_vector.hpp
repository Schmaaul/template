#pragma once
#include <stdexcept>
class static_vector {
public:
    static_vector();
    static_vector(int max_elements);
    ~static_vector();
    int capacity() const;
    int size() const;
    int& at(int pos);
    int& operator[](int pos);
    void push_back(const int& value);
    void pop_back();
    int& back();
    void reserve(int max_elements);
    void shrink_to_fit();
public:
    int num_elements;
    int memory_size;
    int* memory;
};