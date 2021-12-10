#include<iostream>
using namespace std;
#include "lib.h"

float funzione (const float a[], int N){
    float max = a[0];
    for (int i=0; i<N; i++){
        if (a[i]> max ){
            max= a[i];
        }
    }return max;
}
int main () {
    int dim;
    cin>> dim;
    float vett[dim];
    for (int i=0; i<dim; i++){
        cin >> vett[i];
    }
    float max;
    max = funzione(vett, dim);
    cout << max << endl;

    return 0;
}
