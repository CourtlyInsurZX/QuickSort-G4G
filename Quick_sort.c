#include <stdio.h>

void print_ij(int i, int j, int size)
{
    int AuxIJ;
    printf("\t");
    for(AuxIJ = 0; AuxIJ < size; AuxIJ++)
    {
        if(AuxIJ== i && AuxIJ==j)
        {
            printf(" (ij)\t");
        }
        else if(AuxIJ == i)
        {
            printf(" (i)\t");
        }
        else if(AuxIJ == j)
        {
            printf(" (j)\t");
        }
        else
        {
            printf(" \t");
        }
    }
    printf("\n");
}

void ImprimePivote(int i, int j, int size)
{
    int AuxPiv;
    printf("\t");
    for(AuxPiv = 0; AuxPiv < size; AuxPiv++)
    {
        if(AuxPiv == i)
        {
            printf("(i+1)\t");
        }
        else if(AuxPiv == j)
        {
            printf("(high)\t");
        }
        else
        {
            printf("\t");
        }
    }
    printf("\n");
}



void quickSort(int arr[], int low, int high, int pivoteaux)
{
    if (low < high)
    {  
        int pi = partition(arr, low, high, pivoteaux);
        quickSort(arr, low, pi - 1, pivoteaux);
        quickSort(arr, pi + 1, high, pivoteaux);
    }
}

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void printArray(int arr[])
{
    int n = sizeof(arr)-1;
    int i;
        for (i=0; i < n; i++)
        {
             printf("|%d|\t", arr[i]);
        }
    printf("\n\n");
} 



// ----- FUNCIÓN PRINCIPAL ----- 
int main()
{
    int arr[] = {10, 80, 30, 90, 40, 50, 70};
    int n = (sizeof(arr)/sizeof(arr[0])) - 1;
    int pivoteaux = arr[n];
    printf("\t\tARREGLO DESORDENADO:\n\n\t");
    
    printArray(arr);
    printf("----------------------------Quick Sort----------------------------\n\n");
    quickSort(arr, 0, n, pivoteaux);
    printf("\t\tARREGLO ORDENADO:\n\n\t");
    printArray(arr);
    
    
    return 0;
}

