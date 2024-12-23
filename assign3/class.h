#include <cstddef>
#include <cstdint>
#include <stdexcept>
#include <algorithm>

template <typename T>
class Vec {
public:
    Vec();
    Vec(int n);
    ~Vec();
    T get(uint64_t index) const;
    void push_back(const T& value);
    std::size_t getSize() const;
private:
    std::size_t size_;
    uint64_t capacity;
    T* data_;
    void resize(uint64_t new_capacity);
    void setCapacity(uint64_t new_capacity);
};

#include "class.cpp"