#include "DynamicList.h"
#include <cstring>
#include <stdexcept>

DynamicList::DynamicList() 
    : data(nullptr), size(0), capacity(4)
{
    data = new int[capacity];
}

DynamicList::~DynamicList() {
    delete[] data;
}

void DynamicList::append(int value) {
    if (size >= capacity) {
        resize(capacity * 2);
    }
    data[size++] = value;
}

void DynamicList::removeAt(int index) {
    if (index < 0 || index >= size) {
        throw std::out_of_range("Index out of range");
    }
    for (int i = index; i < size - 1; i++) {
        data[i] = data[i + 1];
    }
    size--;
}

int DynamicList::get(int index) const {
    if (index < 0 || index >= size) {
        throw std::out_of_range("Index out of range");
    }
    return data[index];
}

int DynamicList::getSize() const {
    return size;
}

void DynamicList::resize(int newCapacity) {
    // doing this instead of a for loop 
    // to iteratively move each data onto new location
    int* newData = new int[newCapacity];
    std::memcpy(newData, data, size * sizeof(int));     
    capacity = newCapacity;

    // need to remember to delete old data
    delete[] data;
    data = newData;
}