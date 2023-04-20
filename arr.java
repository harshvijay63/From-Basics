public class arr {
    public static void  main(String[] args) {
        int [] arr={5,2,3,5,5};
        int target=20;
        int left = 0, right = 0, currentSum = 0;
        while (right < arr.length) {
            currentSum = currentSum + arr[right];
            while (currentSum > target) {
                currentSum = currentSum-arr[left];
                left++;
            }
            if (currentSum == target) {
                System.out.println("Subarray found: [" + left + ", " + right + "]");
                return;
            }
            right++;
        }
        System.out.println("Subarray with given sum not found.");
    }
}







