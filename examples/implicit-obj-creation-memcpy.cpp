alignas(T) unsigned char 
buff2[sizeof(T)];
std::memcpy(buff2, buff1,
            sizeof(buff2));
T* ptr = std::launder((T*)buff);