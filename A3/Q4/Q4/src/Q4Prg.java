/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Marco
 */
 class Q4Prg {
    public static void main (String[] args){
        /*implicit*/
        double t1 = 6.0;
        double r1;
        int t2 = 3;
        r1 = t1 * t2;//converted to double
        System.out.println("r1 is " + r1);
        
        /*Widening*/
        byte b1 = 127;
        short s1 = (short)b1;
        int i1 = (int)s1;
        long l1 = (long)i1;
        float f1 = (float)l1;
        double d1 = (double)f1;
        //d1=f1=l1=i1=s1=b1;
       System.out.println("byte type: " + b1 + "\nwidening to short type: " + s1 
                            +"\nwidening to integer type: " + i1 +"\nwidening to long type: " + l1 
                            +"\nwidening to float type: " + f1 +"\nwidening to double type: " + d1);
        
        /*Narrowing*/
        d1 = -32769.11111111;
        f1 = (float)d1;
        l1 = (long)f1;
        i1 = (int)l1;
        s1 = (short)i1;
        b1 = (byte)s1;
        System.out.println("\ndouble type: " + String.format("%.9f",d1) +"\nnarrowing to float type: " + String.format("%.7f",f1) 
                            + "\nnarrowing to long type: " + l1 +"\nnarrowing to integer type: " + i1 
                            + "\nnarrowing to short type: " + s1 + "\nnarrowing to byte type: " + b1);
        
        
        /*char to number: compatibility ends before short and byte*/
        char a = 'a';
        d1 = a;
        f1 = a;
        l1 = a;
        i1 = a;
        /*s1 = a;
        b1 = a;*/
        System.out.println( "char to numerical:"+
                            "\ncast to integer type: " + i1 +"\ncast to long type: " + l1 
                            +"\ncast to float type: " + f1 +"\ncast to double type: " + d1);
        
        /*number to char: incompatible at all*/
        /*char b, c, d, e, f, g;
        b = d1; //double
        c = f1; //float
        d = l1; //long
        e = i1; //int
        f = s1; //short
        g = b1; //byte
        */
        /*boolean to char and number: Incompatible*/
        boolean bool_value = true;
        /*d1 = bool_value;
        f1 = bool_value;
        l1 = bool_value;
        i1 = bool_value;
        s1 = bool_value;
        b1 = bool_value;
        a = bool_value
       */
        
        /*char or number to boolean: Incompatible*/
      /*  bool_value = d1; //double
        bool_value = f1; //float
        bool_value = l1; //long
        bool_value = i1; //int
        bool_value = s1; //short
        bool_value= b1; //byte
        bool_value = a; //char
       */
    }
}
