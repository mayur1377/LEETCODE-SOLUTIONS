class Solution {
    public boolean canPlaceFlowers(int[] flowerbed, int n) {
        int[] temp = new int[flowerbed.length + 2];
        if (n == 0) return true;
        temp[0] = 0;
        temp[temp.length - 1] = 0;
        // System.arraycopy(flowerbed, 0, temp, 1, flowerbed.length);
        for(int i=0 ; i<flowerbed.length ; i++)
        {
            temp[i+1]=flowerbed[i];
        }
        for (int i = 1; i <= temp.length - 2; i++) {
            if (temp[i - 1] == 0 && temp[i] == 0 && temp[i + 1] == 0) {
                n--;
                if (n == 0) return true;
                temp[i] = 1;
            }
        }
        
        return false;
    }
}
