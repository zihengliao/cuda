#ifndef DYNAMICLIST_H
#define DYNAMICLIST_H

class DynamicList {
    private:
        int* data;  // pointer to the data
        int size;   // current number of elements
        int capacity; // maximum number of elements before resizing

        void resize(int newCapacity);   // helper function for growing the array

    public:
        DynamicList();                  // constructor
        ~DynamicList();                 // destructor

        void append(int value);         // add element to end
        void removeAt(int index);       // remove element at index
        int get(int index) const;       // get element at index
        int getSize() const;            // get current size
};

#endif