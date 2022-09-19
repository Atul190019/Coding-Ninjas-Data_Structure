class ComplexNumbers {
    // Complete this class
    int real;
    int imag;
    
    public:
    ComplexNumbers(int real ,int imag)
    {
        this->real=real;
        this->imag=imag;
    }
    
    
    void plus( ComplexNumbers c2)
    {
        int real = this->real + c2.real;       ///this is not compulsory to use as it already know about it;
        int imag = this->imag + c2.imag;
        this->real=real;
        this->imag=imag;
    }
    void multiply(ComplexNumbers c2 )
    {
        int real=(this->real*c2.real)-(this->imag*c2.imag);
        int imag=(this->real*c2.imag)+(this->imag*c2.real);
        this->real=real;
        this->imag=imag;
    }
    
    void print()
    {
        cout<<real<<" "<<"+"<<" "<<"i"<<imag<<endl;
        
    }
};
