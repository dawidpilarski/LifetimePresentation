struct container : containerInterface{
  // some implementation
  
  ~container{
    m_.lock();
    // perform cleanup
    m_.unlock();
  }
  
private:
  std::mutex m_;
  //...
};