class Solution {
    public String replaceWords(List<String> dictionary, String sentence) {
        Set<String> set = new HashSet<>(dictionary);
        String[] words = sentence.split("\\s+");
        StringBuilder result = new StringBuilder();
        for(String word : words){
            String pre = "";
            for(int i=1;i<=word.length();i++){
                pre = word.substring(0,i);
                if(set.contains(pre)){
                    break;
                }
            }
            if(result.length()>0){
                result.append(" ");
            }
            result.append(pre);
        }
        return result.toString();
    }
}