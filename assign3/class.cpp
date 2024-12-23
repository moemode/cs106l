
#include <cstddef>
template <typename T>
Vec<T>::Vec() : Vec(1) {}

template <typename T>
Vec<T>::Vec(int n) : size_(0), capacity(n), data_(new T[n]) {}

template <typename T>
Vec<T>::~Vec() {
    delete[] data_;
}

template <typename T>
T Vec<T>::get(uint64_t index) const {
    if (index >= size_) {
        throw std::out_of_range("Index out of range");
    }
    return data_[index];
}

template <typename T>
void Vec<T>::push_back(const T& value) {
    if (size_ == capacity) {
        resize(capacity * 2);
    }
    data_[size_++] = value;
}

template<typename T>
std::size_t Vec<T>::getSize() const {
    return size_;
}
template<typename T>
void Vec<T>::setCapacity(uint64_t value) {
    if (value < size_) {
        throw std::invalid_argument("New capacity must be at least size");
    }
    resize(value);
}


template <typename T>
void Vec<T>::resize(uint64_t new_capacity) {
    T* new_data = new T[new_capacity];
    std::copy(data_, data_ + size_, new_data);
    delete[] data_;
    data_ = new_data;
    capacity = new_capacity;
}
