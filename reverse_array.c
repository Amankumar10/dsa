#include<stdio.h>



// 324,32123,31223,2312,

void arrRev(int arr[]){
    int temp;


for (int i = 0; i < 4/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[3-i];

       arr[3-i] = temp;
    }
    
};



void arrtra(int arr[]){


for(int i=0; i < 4; i++){

    printf("%d ", arr[i]);
}

}






int main()
{

int arr[] ={2,3,4,56};




size_t n = sizeof(arr);



printf("%d",n);


// before rev
//   printf("Before reversing the array\n");

// arrtra(arr);

// arrRev(arr);

// //after rev
// printf("\nAfter reversing the array\n");


// arrtra(arr);

return 0;
}