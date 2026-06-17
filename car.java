import java.util.Scanner;
public class CarNumber{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.class);
        System.out.print("Enter the car no:");
        String input=sc.next();
        try{
            int carNumber=Integer.parseInt(input);
            if(carNumber < 1000 || carNumber > 9999){
                System.out.println(carNumber + " is not a valid car number");
            }
            else{
                int temp=carNumber;
                int sum=0;
                while (temp>0){
                    sum+=temp%10;
                    temp/=10;
                }
                if(sum%3==0||sum%5==0||sum%7==0){
                    System.out.println("lucky number");
                }
                else{
                    System.out.println("it not lucky number");
                }
            }
        }
        catch(NumberFormatException e){
            System.out.println(input + " is not a valid car number");
        }
    }
}
