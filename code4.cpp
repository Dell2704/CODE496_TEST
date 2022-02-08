#include <iostream> //cout
#include <cmath> //use pow&sqrt
#include <fstream>
using namespace std;


//global variable
int i, j;
int i_c,j_c;
//const int nx = 31;
//const int ny = 31;
//const int dx = 1;
//const int dy = 1;

//double phi[nx][ny];


ofstream myfileO;
ifstream myfileI;


// void initialize(){ // void = not return variable
//   for(int i=0 ; i<=nx-1;i++){
//     for(int j = 0; j<=ny-1;j++){
//       phi[i][j]=0.0;
//     }
//   }
// }

// void visualize(){
//   for(int i=0 ; i<=nx-1;i++){
//     for(int j = 0; j<=ny-1;j++){
//       cout<<phi[i][j]<<" ";
//     }
//     cout << "\n";
//   }
  
// }

// void set_phi(){
//   double radius = 10.;
//   i_c=(nx-1)/2;
//   j_c=(ny-1)/2;
//   for(int i = 0 ; i<=nx-1;i++){
//     for(int j = 0; j<=ny-1;j++){

//       if(sqrt(pow(dx*(i-i_c),2)+pow(dy*(j-j_c),2))<radius){
// 	phi[i][j] = 1.;
//       }
//       else{
// 	phi[i][j] = 0.;
//       }
//     }
//   }

// }

// void save_restartfile(){
//   myfileO.open("file.dat");
//   for(int i = 0 ; i<=nx-1;i++){
//     for(int j = 0; j<=ny-1;j++){
//       myfileO << phi[i][j] << " " ;
//     }
//     myfileO << "\n";
//   }
//   myfileO.close();
  
// }
// void read_restartfile(){
//   myfileI.open("file.dat");
//   for(int i = 0 ; i<=nx-1;i++){
//     for(int j = 0; j<=ny-1;j++){
//       myfileI >> phi[i][j] ;
//     }
//   }
//   myfileI.close();
  
// }
// void summation(int a, int b){
//   int c;
//   c = a+b;
//   cout << "a + b " << c << "\n";
// }
// void test(int nx, int ny,  double phi[], double phi2D[][]){
//   phi[0] = phi[1] + phi[2];
//   nx = nx + 1;
// }
// void test(int nx, double *p){ // pass pointer variable
//   for(int i = 0; i<nx ; i++){
//     cout << "p[" << i << "] = " << p[i] << "\n";
//   }
// }

void test2D(int nx, int ny, double **p){

  for(int i = 0 ; i<nx;i++){
    for(int j = 0; j<ny;j++){
      cout << p[i][j] << "\n";
    }
  }
}


int main(){
  const int nx = 10;
  const int ny = 10;

  double **phi; // pointer to pointer
  phi = (double **) malloc (nx*sizeof(double)); // <= phi is a pointer to 1D array of pointer , the array is nx long
  for(int i = 0; i<nx; i++){
    phi[i] = (double *) malloc (ny*sizeof(double));
  }
  test2D(nx, ny, phi);



  
  // const int nx = 10;
  // ///double phi[nx];

  // //phi is a pointer that stores the address of phi[0];

  // double *phi;
  // phi = (double *) malloc (nx*sizeof(double)); // malloc = memory allocation
  // for(int i = 0; i<nx ; i++){
  //   phi[i] = double(i);
  // }
  // test(nx,phi);




  

  // int a = 10;
  // cout << "a = " << a << "\n"; // content

  // cout << "&a = " << &a << "\n"; // referencing
  // //&a = 0x7ffdf438c6c4 0x = hexadecimal  
  // //7 f f d f 4 3 8 c 6 c 4 = address a = 10 , b = 11 , c = 12
  // int array[10]; // int = 4 bytes , double = 8 bytes
  // for(int i = 0; i < 10; i++){
  //   array[i] = i;
  //   cout << "array[" << i << "] = " << array[i] << ", stored at "<< &array[i] << "\n";
  // }
  // int *p; // declare pointer : can stores address
  // p = &a ;
  // cout << "p = " << p << "\n";
  // cout << "*p = "<< *p << "\n"; // * can shows content of *... address
  // cout << "&p = "<< &p << "\n";



  
  // const int nx = 10;
  // const int ny = 10;
  // double phi[nx];
  // for(int i=0;i < nx;i++){
  //   phi[i]=double(i);
  //   cout << "phi[" << i << "] = " << phi[i] << "\n";
  // }
  // cout << "\n";
  // //test(nx, phi);
  // cout <<"phi[0] = " << phi[0] << "\n";
  // cout << "nx = "<<nx<<"\n";
  // double phi2D[nx][ny];
  // test(nx, ny, phi, phi2D);
  // // //global variable
  // // int i, j;
  // int i_c,j_c;
  // const int nx = 31;
  // const int ny = 31;
  // const int dx = 1;
  // const int dy = 1;

  // double phi[nx][ny];


  // ofstream myfileO;
  // ifstream myfileI;
  
  // //initialize();
  // //set_phi();
  // //visualize();
  // //save_restartfile();
  // //read_restartfile();
  // //visualize();
  // summation(nx,ny);

}

