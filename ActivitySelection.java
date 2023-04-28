import java.lang.reflect.Array;
import java.util.Arrays;

public class ActivitySelection {
   
    static int getMaxActivities(int[] start, int[] finish) {
        int n = start.length;
        int[] indexes = new int[n];
        for (int i = 0; i < n; i++) {
            indexes[i] = i;
        }
        







      Arrays.          (indexes, (a, b) -> finish[a] - finish[b]);
        
        int count = 0;
        int lastFinishTime = 0;
        for (int i = 0; i < n; i++) {
            int index = indexes[i];
            
            if (start[index] >= lastFinishTime) {
                count++;
                lastFinishTime = finish[index];
            }
        }
        return count;
    }
    
    
    public static void main(String[] args) {
        int[] start = {1, 3, 0, 5, 8, 5};
        int[] finish = {2, 4, 6, 7, 9, 9};
        
        int maxActivities = getMaxActivities(start, finish);
        System.out.println("The maximum number of activities that can be selected is: " + maxActivities);
    }
}
