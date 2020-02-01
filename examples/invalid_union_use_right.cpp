struct color{
  uint8_t red(){
    return as_int>>24;
  }

  void red(uint8_t value){
    uint32_t r32 = static_cast<uint32_t>(red()) << (24);
    as_int ^= r32; 
    as_int |= (static_cast<uint32_t>(value) << (24));  
  }

  uint32_t as_int;
};
