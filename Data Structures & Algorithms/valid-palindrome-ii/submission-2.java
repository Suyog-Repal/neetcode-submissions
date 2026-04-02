class Solution {
    private boolean isPalindrome(String s){
        int n = s.length(); 
        int l = 0; 
        int r = n-1; 
        while(l<r){
            while(l<r && !Character.isLetterOrDigit(s.charAt(l))) l++; 
            while(l<r && !Character.isLetterOrDigit(s.charAt(r))) r--; 
            if(s.charAt(l)!= s.charAt(r)) return false; 
            l++; 
            r--; 
        }
        return true; 
    }

    public boolean validPalindrome(String s) {
        if(isPalindrome(s)) return true; 
        int n = s.length(); 
        for(int i =0; i<n; i++){
           String newStr = s.substring(0, i) + s.substring(i+1); 
           if(isPalindrome(newStr)) return true; 
        }
        return false; 
    }
}