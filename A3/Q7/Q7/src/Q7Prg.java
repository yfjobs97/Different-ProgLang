
public class Q7Prg {
    public static void main(String[] args) {
        int i1 = 50, i2 = 30, i3 = 90;
        boolean b1 = true, b2 = true, b3 = false;
        if(b3 || b2 && b1 && !b3){
            System.out.println("Test for OR,AND and !");
        }
        if(i1 != i2 || i3 >= i2 ){
            System.out.println("Test for greater than or less than.");
        }
        i1 = i3++ + --i2 % rtnum() - 3 * (2 + 1);
        System.out.println(i1);
    }
    public static int rtnum(){
        return 6;
    }
    
}
