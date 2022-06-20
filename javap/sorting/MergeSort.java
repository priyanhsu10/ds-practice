package javap.sorting;

public class MergeSort {

    public static void main(String[] args) {

        int[] arr = { 1, 4, 56, 8, 9, 2, 43 };
        int h, l;
        l = 0;
        h = arr.length - 1;
        int[] result = getSorted(l, h, arr);
    }

    private static int[] getSorted(int l, int h, int[] arr) {

        if (l < h) {

            int m = (h + l) / 2;
            getSorted(l, m, arr);
            getSorted(m + 1, h, arr);
            return merge(arr, l, h, m);
        }

        return null;
    }

    private static int[] merge(int[] arr, int l, int h, int m) {

        int[] c = new int[h + l];
        int j = m;
        int k = 0;
        while (l <= m && j <= h) {

            if (arr[l] <= arr[j]) {
                c[k++] = arr[l++];
            } else {
                c[k++] = arr[j++];
            }

        }
        for (; j <= h; j++) {
            c[k++] = arr[j++];

        }
        for (; l <= m; l++) {
            c[k++] = arr[l++];
        }
        return c;

    }

}
