#include <iostream>
#include <ctime>
#include <unistd.h>
using namespace std; 

int fill_array(int *array, int SIZE){

    srand(time(NULL));

    for(int i = 0; i<SIZE; i++){
        //usleep(10000);
        array[i] = 1+ random() % 100;
    }


}

int print_array(int *array, int SIZE){

    for(int i = 0; i<SIZE; i++){
        cout<<array[i]<<" ";
    }

    cout<<endl;

}

int bubble_sort(int *array, int SIZE){

    for(int left = 0; left<SIZE; left++){
        for(int right = 0; right<SIZE-1; right++){
            if(array[left]<array[right]){
                int temp = array[left];
                array[left] = array[right];
                array[right] = temp;


            }
        } 
    }


}

int main(){

    srand(time(NULL));

    
    const int SIZE = 10;
    int array_1[SIZE];
    int array_2[SIZE];

    fill_array(array_1, SIZE);
    print_array(array_1, SIZE);
    bubble_sort(array_1, SIZE);

    fill_array(array_2, SIZE);
    print_array(array_2, SIZE);
    bubble_sort(array_2, SIZE);



    int result[SIZE * 2];
    int left = 0; 
    int right = 0;
    int k = 0;

    while(left<SIZE && right<SIZE){

        if(array_1[left]<array_2[right]){

            result[k++] = array_1[left++];
        }

        else{

            result[k++] = array_2[right++];
        }
    }

    while(left<SIZE){

        result[k++] = array_1[left++];
    }

    while(right<SIZE){

        result[k++] = array_2[right++];

    }

    for(int i=0; i<SIZE*2; i++ ){
        cout<<result[i]<< " ";
    }






}