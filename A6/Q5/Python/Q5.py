class ComplexNum(object):
    def __init__(self,real=None,imag=None):
        if real is None:
            self.real = 0.0
            self.imag = 0.0
        else:
            self.real = real
            self.imag = imag
    def __add__(this, c2):
        return ComplexNum(this.real + c2.real, this.imag + c2.imag)

    def __sub__(this, c2):
        return ComplexNum(this.real - c2.real, this.imag - c2.imag)

    def __mul__(this, c2):
        return ComplexNum(this.real*c2.real - this.imag*c2.imag, this.imag*c2.real + this.real*c2.imag)

    def __truediv__(this, c2):
        return ComplexNum(((this.real * c2.real + this.imag * c2.imag) / float(this.real**2 + c2.imag**2)), ((this.imag * c2.real - this.real * c2.imag) / float(this.real**2 + c2.imag**2)))
    def __str__(this):
        return '%g + (%g)i' % (this.real, this.imag)

    def __repr__(this):
        return 'Complex' + str(this)
a = 3.2
b = 5.4
c = 7.6
d = 9.7


complex1 = ComplexNum(a,b)
complex2 = ComplexNum(c,d)
complex3 = ComplexNum(2.6,3.7)
complex4 = ComplexNum(a+b,c+d)

addResult = complex1 + complex2
subResult = complex1 - complex2
mulResult = complex1 * complex2
divResult = complex1 / complex2

print("Result of addition is",addResult)
print("Result of subtraction is",subResult)
print("Result of multiplication is",mulResult)
print("Result of division is",divResult)

print("complex3 is",complex3)
real3 = complex3.real #Extraction
imag3 = complex3.imag
print("real of complex3 is", real3)
print("imaginary of complex3 is", imag3)
print("complex4 is",complex4)
