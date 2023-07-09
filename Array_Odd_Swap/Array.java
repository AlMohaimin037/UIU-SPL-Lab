package Array_Odd_Swap;

import java.util.Scanner;

public class Array {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        float[] arr = new float[12];

        for(int i=0; i<12; i++){
            arr[i] = in.nextFloat();
        }
        System.out.println("The arrays are: ");
        for(int i=0; i<12; i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println();
        System.out.println("After swapping: ");

        for(int i=1; i<12; i+=2){
            if(i>=11){
                break;
            } else {
                if(i%2 == (i+2)%2){
                    float temp = arr[i];
                    arr[i]=arr[i+2];
                    arr[i+2] = temp;
                    i+=2;
                }
            }

        }

        System.out.println("The arrays are: ");
        for(int i=0; i<12; i++){
            System.out.print(arr[i]+" ");
        }
    }
}
