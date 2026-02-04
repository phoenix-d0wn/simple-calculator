//SimpCalc.h
class SimpCalc{
    double ans;
    double t[10];

public:
    virtual void getCalc()=0;

    virtual void add(double a, double b)=0;
    virtual void sub(double a, double b)=0;
    virtual void mult(double a, double b)=0;
    virtual void div(double a, double b)=0;
};