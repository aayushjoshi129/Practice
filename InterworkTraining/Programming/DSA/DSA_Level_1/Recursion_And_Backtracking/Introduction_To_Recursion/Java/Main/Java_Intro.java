import java.util.ArrayList;

public class Java_Intro {

    public static void main(String[] args) {

        // String str = "hello";
        // System.out.println(str);
        // // char ch = str.charAt(0);
        // for (int i = 0; i < str.length(); i++) {
        //     char ch = str.charAt(i);
        //     System.out.println(ch);
        // }
        // String ss = str.substring(1, 3);    // It prints from first index to (given-1)
        // System.out.println(ss);

        ArrayList<Integer> list = new ArrayList<>();
        list.add(10);
        list.add(20);
        list.add(30);
        list.add(40);
        System.out.println(list+"-> "+list.size());

        // for(int val : list){
        //     System.out.println(val);
        // }

        for(int i=0;i<list.size();i++){
            int val = list.get(i);
            System.out.println(val);
        }

        list.set(2,300);
        System.out.println(list+"-> "+list.size());
        list.add(2,3000);
        System.out.println(list+"-> "+list.size());

    }

}