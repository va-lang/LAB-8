//C++ program for the above approach
#include <iostream>
using namespace std;
 
// Class of Lower Triangular Matrix
class LTMatrix {
 
private:
    // Size of Matrix
    int n;
 
    // Pointer
    int* A;
 
    // Stores the count of non-zero
    // elements
    int tot;
 
public:
    // Constructor
    LTMatrix(int N)
    {
        this->n = N;
        tot = N * (N + 1) / 2;
        A = new int[N * (N + 1) / 2];
    }
 
    // Destructor
    ~LTMatrix() { delete[] A; }
 
    // Function to display array
    void Display(bool row = true);
 
    
 

 
    // Function to find size of array
    int getN() { return n; }
};
 

void LinearIdx(int i, int j){
    int B[8];
    int I;

    string LTMatrix [] = new string[(N * (N +1)) / 2];
      
    

    int A[i][j]={{0,0},{1,0},{2,0},{2,1},{2,2},{3,0},{3,1},{3,2}};

    for (int i = 0; i < LTMatrix.GetLength(0); i++){

        for(int j = 0; j < LTMatrix.GetLength(1); j++){

            I = (N* i) + j – ((i *(i+1) / 2)
            B[I]=A[i][j];
        
            array[I]=matrix[i,j]
            cout<< B[I] << endl;
        }
    }

}

void Inverse(int i, int j){
    int B[8];
    int I;

    int A[i][j] ={{0,0},{1,0},{2,0},{2,1},{2,2},{3,0},{3,1},{3,2}};

    B[I]=A[i][j];

    while(i<j){
        
        int temp=B[i];
        B[i]=B[j];
        B[j]= temp;
        i++;
        i--;
    }
    for(int i=0; i<8;i++){
        for(int j=0; j<8; j++){
            cout<<A[i][j]<< endl;
        }
    }

}

 

 
// Driver Code
int main()
{
    // Size of row or column
    // of square matrix
    int N = 4;
 
   
   
 
    return 0;
}
