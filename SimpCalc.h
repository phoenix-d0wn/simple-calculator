//SimpCalc.h
class SimpCalc{
    double ans;
    double t1;
    double t2;

public:
    virtual void add(double a, double b)=0;
    virtual void sub(double a, double b)=0;
    virtual void mult(double a, double b)=0;
    virtual void div(double a, double b)=0;
};