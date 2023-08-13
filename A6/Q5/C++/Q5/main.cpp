#include <iostream>

using namespace std;



class ComplexNum{
    private:
        float real = 0.0;
        float imag = 0.0;
    public:
        ComplexNum();
        ComplexNum(float, float);
        void setReal(float);
        void setImag(float);
        float getReal();
        float getImag();
        void add(ComplexNum*, ComplexNum);
        void subtract(ComplexNum*, ComplexNum);
        void mult(ComplexNum*, ComplexNum);
        void div(ComplexNum*, ComplexNum);
        ~ComplexNum();
};
    ComplexNum::ComplexNum(){}
    ComplexNum::ComplexNum(float r, float i){
        setReal(r);
        setImag(i);
    }
    void ComplexNum::setReal(float r){
        real = r;
    }
    void ComplexNum::setImag(float i){
        imag = i;
    }
    float ComplexNum::getReal(){
        return real;
    }
    float ComplexNum::getImag(){
        return imag;
    }
    void ComplexNum::add(ComplexNum* result, ComplexNum c2){

        result->setReal(this->getReal() + c2.getReal());
        result->setImag(this->getImag() + c2.getImag());

    }
    void ComplexNum::subtract(ComplexNum* result, ComplexNum c2){

        result->setReal(this->getReal() - c2.getReal());
        result->setImag(this->getImag() - c2.getImag());

    }
    void ComplexNum::mult(ComplexNum* result, ComplexNum c2){

        result->setReal(this->getReal() * c2.getReal() + (-1) * this->getImag() * c2.getImag());
        result->setImag(this->getReal() * c2.getImag() + this->getImag() * c2.getReal());

    }
    void ComplexNum::div(ComplexNum* result, ComplexNum c2){

        result->setReal((this->getReal() * c2.getReal() + this->getImag() * c2.getImag()) / (c2.getReal() * c2.getReal() + c2.getImag() * c2.getImag()) );
        result->setImag( (this->getImag() * c2.getReal() - this->getReal() * c2.getImag() )/ (c2.getReal() * c2.getReal() + c2.getImag() * c2.getImag()) );

    }
    ComplexNum::~ComplexNum(){

    }

int main()
{
    float a = 3.2, b = 5.4, c = 7.6, d = 9.7;
    ComplexNum first(a,b);
    ComplexNum second(c,d);
    ComplexNum result;
    first.add(&result, second);//Adding first complex number to the second. Result stored in result variable.
    cout << "Result of addition is "<< result.getReal() << "+(" << result.getImag() << ")i" << endl;
    first.subtract(&result, second);//Subtracting first complex number and the second. Result stored in result variable.
    cout << "Result of subtraction is "<< result.getReal() << "+(" << result.getImag() << ")i" << endl;
    first.mult(&result, second);//Multiplying first complex number by the second. Result stored in result variable.
    cout << "Result of multiplication is "<< result.getReal() << "+(" << result.getImag() << ")i" << endl;
    first.div(&result, second);//Dividing first complex number by the second. Result stored in result variable.
    cout << "Result of division is "<< result.getReal() << "+(" << result.getImag() << ")i" << endl;
    ComplexNum myComp1 (2.0,3.0);
    ComplexNum myComp2 (a+b,c+d);
    cout << "myComp1 is "<< myComp1.getReal() << "+(" << myComp1.getImag() << ")i" << endl;
    cout << "myComp2 is "<< myComp2.getReal() << "+(" << myComp2.getImag() << ")i" << endl;
    return 0;
}
