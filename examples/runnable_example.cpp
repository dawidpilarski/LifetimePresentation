runnable* d = new Derived;
thread th1([d]{d->execute()});
thread th2([d]{delete d;});