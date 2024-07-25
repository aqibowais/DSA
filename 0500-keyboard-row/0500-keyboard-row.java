class Solution {
    public String[] findWords(String[] words) {
        String keyboard[] = {"asdfghjkl","zxcvbnm","qwertyuiop"};

        String res[] = new String[words.length];

        int x=0;
        for(String s:words){
            for(int j=0; j<3; j++){
                if(keyboard[j].contains(String.valueOf(s.charAt(0)).toLowerCase())){
                    boolean flag = true;
                    for(int i=0; i<s.length(); i++){
                        if(!keyboard[j].contains(String.valueOf(s.charAt(i)).toLowerCase())){
                            flag = false;
                            break;
                        }
                    }
                    if(flag) res[x++] = s;
                    else break;
                }
            }
        }
        return Arrays.copyOf(res,x);
    }
}