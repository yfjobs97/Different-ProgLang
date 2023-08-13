g1 = 5;
def sub1():
    s1 = 7;
    print('From sub1: global variable g1 is {0}, and local vaiable s1 is {1}.'.format(g1,s1));
    def sub2():
        s2 = 13;
        print('From sub2: global variable g1 is {0}, the non-local vaiable s1 is {1}, and the local variable s2 is {2}.'.format(g1,s1,s2));
        def sub3():
            s3 = 19;
            print('From sub3: global variable g1 is {0}, the non-local vaiable s1 is {1}, non-local variable s2 is {2}, and the local variable s3 is {3}.'.format(g1,s1,s2,s3));
        sub3();
    sub2();
sub1();

