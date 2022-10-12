public class KboatSDANames
{
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        String names[] = new String[10];
        System.out.println("Enter 10 names");
        
        for (int i = 0; i < names.length; i++) {
            names[i] = in.nextLine();
        }
        
        System.out.print("Enter a letter: ");
        char ch = in.next().charAt(0);
        ch = Character.toUpperCase(ch);
        
        for (int i = 0; i < names.length; i++) {
            if (Character.toUpperCase(names[i].charAt(0)) == ch) {
                System.out.println(names[i]);
            }
        }
    }
}