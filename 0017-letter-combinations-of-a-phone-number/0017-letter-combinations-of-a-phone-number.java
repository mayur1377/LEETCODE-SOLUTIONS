class Solution {
    List<String> mapping =  new ArrayList<>(List.of("","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"));
    List<String> ans = new ArrayList<>();
    void genrateComination(String digits,String letters,int idx)
    {
        if(digits.length() == letters.length()){
            ans.add(letters);
            return;
        }
        String currDigit = mapping.get(digits.charAt(idx)-'0');
        for(int i=0;i<currDigit.length();++i)
            genrateComination(digits,letters+currDigit.charAt(i),idx+1);
        

    }
    public List<String> letterCombinations(String digits) {
        if (digits.length() == 0)
            return ans;
        genrateComination(digits,"",0);
        return ans;
    }
}