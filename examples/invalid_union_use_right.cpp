struct color{
  uint8_t red(){
    return as_int>>24;
  }

  void red(uint8_t value){
      auto* as_bytes = 
            reinterpret_cast<unsigned char*>(&as_int);
      as_bytes[3] = value;
  }

  uint32_t as_int;
};
