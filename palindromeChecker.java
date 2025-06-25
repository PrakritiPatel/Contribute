import java.util.Scanner;

public class palindromeChecker{

    public static boolean ReversingStringGroup(String originalString){
        boolean isPalindrome = false;
        String reverseString = "";
        
        String normalizedString = originalString.trim().replaceAll("\\s+", " ");  // splits the string even if there is multiple consecutive spaces.
        String[] words = normalizedString.split(" ");
        for(int i= words.length -1 ; i>=0 ; i--){
            reverseString += words[i];
            if(i > 0){
                reverseString += " ";
            }
        }
        if(originalString.equalsIgnoreCase(reverseString)){
            isPalindrome = true;
        }
        return isPalindrome;
    }
    public static void main(String[] args){
        
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter your disired String : ");
        String originalString = sc.nextLine();
        
        String reversedString = "";

        // Reversing a string using for loop.
        for(int i = originalString.length()-1; i>=0; i--){
            reversedString += originalString.charAt(i);
        }
        if(reversedString.equalsIgnoreCase(originalString)){
            System.out.println("The entered String : "+originalString+" is a palindrome!..");
        }
        else{
            System.out.println("The entered String : "+originalString+" is not a palindrome!.");
        }

        if(ReversingStringGroup(originalString)){
            System.out.println(originalString+" is a palindrome");
        }else{
            System.out.println(originalString+" is not a palindrome!..");
        }
    }
    
}