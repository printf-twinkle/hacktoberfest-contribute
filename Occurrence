import java.util.*;

class Occurrence {
    public static void main(String args[]) {
        int i, k = 0, l, p = 0, z = 0, counter = 0, f = 0;
        String s, x = "";
        char c;
        String arr[] = new String[30];

        Scanner sc = new Scanner(System.in);
        try {
            System.out.println("Enter any sentence");
            s = sc.nextLine();
            s = s.strip();
            s = s + " ";
            l = s.length();

            for (i = 0; i < l; i++) {
                c = s.charAt(i);
                if (c == ' ') {
                    arr[p++] = x;
                    x = "";
                }

                else
                    x = x + c;
            }

            String arr2[] = new String[p];
            int count[] = new int[p];

            for (i = 0; i < p; i++) {
                for (k = 0; k < p; k++) {
                    if (arr[i].equals(arr2[k]))
                        f = 1;
                }

                if (f == 0) {
                    for (k = 0; k < p; k++) {
                        if (arr[k].equals(arr[i])) {
                            counter++;

                        }
                    }

                    arr2[z] = arr[i];
                    count[z] = counter;
                    z++;
                }
                counter = 0;
                f = 0;
            }

            for (i = 0; i < z; i++)
                System.out.println(arr2[i] + "=" + count[i]);
        }

        finally {
            sc.close();
        }

    }
}
