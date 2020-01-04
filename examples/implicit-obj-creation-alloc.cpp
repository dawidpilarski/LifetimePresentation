struct T{/**/};
std::allocator<T> allocator;
T* ptr = allocator.allocate(1);