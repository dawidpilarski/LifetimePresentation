struct runnable{
void execute(){
  run();
  lock_guard lck(m_);
  done = true;
  cv_.notify_one();
}
~runnable(){
  unique_lock<mutex> lck(m_);
  cv.wait(lck,
          [this]{return done_;});
}
private:
  virtual void run()=0;
  condition_variable cv_;
  bool done_=false;
  mutex m_;
};
