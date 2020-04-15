import java.util.;
import java.io.;
class Main {
  public static boolean prime(int input){
      for (int i = 2; i < input;i++){
      if(input % i == 0){
        return false;
      }
    }
    return true;
  }
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    int input = in.nextInt();
    System.out.println("Prime number: " + prime(input));
  }
}
