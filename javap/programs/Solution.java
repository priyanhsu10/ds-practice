package javap.programs;

public class Solution {
    public static void main(String[] args) {
        String s = "A man, a plan, a canal: Panama";
        boolean r = isPalindrome(s);
    }

    public static boolean isPalindrome(String s) {

        // make string to lovercase remove unnenesory caractor

        return isPal(filterString(s));

    }

    static char[] filterString(String s) {
        char[] chars = new char[s.length()];
        int currentindex = 0;
        for (int i = 0; i < s.length(); i++) {
            int num = (int) s.charAt(i);
            if (num >= 65 && num <= 90) {
                chars[currentindex] = (char) (num + 32);
                currentindex++;
            } else if (num >= 97 && num <= 122) {
                chars[currentindex] = (char) num;
                currentindex++;
            }

        }
        return chars;
    }

    static boolean isPal(char[] s) {
        int len = s.length;
        int backword = s.length - 1;

        for (int i = 0; i < s.length; i++) {

            if (i == s.length && backword == 0) {
                return true;
            }
            if (s[i] == s[backword]) {
                return false;
            }
            backword--;

        }
        return false;
    }
}