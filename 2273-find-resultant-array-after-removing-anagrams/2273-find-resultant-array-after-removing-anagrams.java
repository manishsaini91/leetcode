class Solution {
    public List<String> removeAnagrams(String[] wordss) {
        List<String> anss = new ArrayList<>();
        int i=0;
        boolean flag = false;
        while(i<wordss.length-1) {
            if(areAnagram(wordss[i].toCharArray(),wordss[i+1].toCharArray()) && !flag) {
                anss.add(wordss[i]);
                flag = true;
                i++;
            }
            else if(areAnagram(wordss[i].toCharArray(),wordss[i+1].toCharArray()) && flag) {
                flag = true;
                i++;
            }
            else if(!areAnagram(wordss[i].toCharArray(),wordss[i+1].toCharArray()) && flag) {
                flag = false;
                i++;
            }
            else {
                anss.add(wordss[i]);
                i++;
            }
        }
        if(!anss.isEmpty() && areAnagram(anss.get(anss.size()-1).toCharArray(),wordss[wordss.length-1].toCharArray())) {
            return anss;
        }
        else {
            anss.add(wordss[wordss.length-1]);
            return anss;
        }
        // return anss;
    }
    boolean areAnagram(char[] str1, char[] str2)
    {
        int n1 = str1.length;
        int n2 = str2.length;

        if (n1 != n2)
            return false;
 
        Arrays.sort(str1);
        Arrays.sort(str2);
 
        for (int i = 0; i < n1; i++)
            if (str1[i] != str2[i])
                return false;
 
        return true;
    }
}