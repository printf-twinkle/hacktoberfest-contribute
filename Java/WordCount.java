import java.util.HashMap;
import java.util.Map;

public class WordCount{
    public static void main(String[] args) {
        String sentence = "learning java is fun and java is powerful";

        String[] words = sentence.split("\\s");

        HashMap<String,Integer> map = new HashMap<>();

        for(int i = 0;i<words.length;i++){

            if(!map.containsKey(words[i])){
                map.put(words[i], 1);
            }

            else{
                map.put(words[i],map.get(words[i])+1);
            }
        }

        for(Map.Entry<String,Integer> word : map.entrySet()){
            String s = (String)word.getKey();
            int count = (int)word.getValue();

            System.out.println(s + "-" + count);
        }
    }
}