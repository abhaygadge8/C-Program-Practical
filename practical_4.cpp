// Function Overloading
#include <iostream>
using namespace std;
typedef struct 
{
    float m[3][3];
} Sq_Matrix;

typedef struct 
{
    float l[1][3];
} Row_Matrix;

typedef struct 
{
    float n[3][1];
} Col_Matrix;

void Multiply(const Sq_Matrix &, const Sq_Matrix &, Sq_Matrix &);



Col_Matrix operator* (const Sq_Matrix &, const Col_Matrix & );



void Multiply(const Row_Matrix &, const Sq_Matrix &, Row_Matrix &);
void Multiply(const Col_Matrix &, const Row_Matrix &, Sq_Matrix &);
void Multiply(const Row_Matrix &, const Col_Matrix &, float &);
Sq_Matrix operator + (const Sq_Matrix & , const Sq_Matrix & );

void operator << (ostream & , Col_Matrix &);




int main() 
{
    Sq_Matrix A, B, D;
    Col_Matrix P, Q;
    Row_Matrix X, Y;
    float u;
    int i, j;
    cout<< "Please enter the values in the 3 by 3 matrix A row-wise"<<endl;
    for(i = 0; i<3; i++)
	{
        for(j=0; j<3; j++)
		{
        cin>>A.m[i][j];
		}
    }
    
   /* cout<< "Please enter the values in the 3 by 3 matrix B row-wise"<<endl;
    for(i = 0; i<3; i++)
	{
        	for(j=0; j<3; j++)
		{
        		cin>>B.m[i][j];
		}
    	}

	D = A + B;// D = operator +(A, B);
	
	for(i = 0; i<3; i++)
	{
        	for(j=0; j<3; j++)
		{
        		cout<< D.m[i][j]<<"  " ;
		}
		cout<<endl;
    	}

*/

    
     cout<< "Please enter the values in the 3 by 1 matrix P row-wise"<<endl;
    for(i = 0; i<3; i++)
	{
        
        cin>>P.n[i][0];
    }
    
    Q = A * P ;// Q= operator*(A, P);
    
    cout<< Q;
    
    
    
    
    
    // Multiply(A,B,C);
    
   
    
    return 0;
}

void operator << (ostream & COUT, Col_Matrix & R)
{
    cout<< "A*P ="<<endl;
    for(int i = 0; i<3; i++)
    {
        COUT<<R.n[i][0]<<" ";
        COUT<<endl;
    }
}













Sq_Matrix operator + (const Sq_Matrix & A, const Sq_Matrix & B )
{
    Sq_Matrix C;
    for(int i=0; i< 3; i++)
    {
        for(int j=0; j< 3; j++)
        {
            C.m[i][j]= A.m[i][j] + B.m[i][j];
        }
    }
    return C;
}

void Multiply(const Sq_Matrix & D,const  Sq_Matrix & E, Sq_Matrix & F)
{
   int i, j, k;
   for(i=0; i< 3; i++)
   {
       for(j=0; j< 3; j++)
       {
           F.m[i][j]=0;
           for(k=0; k< 3; k++)
           {
               F.m[i][j] = F.m[i][j] + (D.m[i][k] * E.m[k][j]);
           }
       }
   }

}




Col_Matrix operator * (const Sq_Matrix & D, const  Col_Matrix & R )
{
   Col_Matrix S;
   int i, j, k;
   for(i=0; i< 3; i++)
   {
        S.n[i][0]=0;
        for(k=0; k< 3; k++)
        {
            S.n[i][0] = S.n[i][0] + (D.m[i][k] * R.n[k][0]);
        }
   }
   return S; 
}


void Multiply(const Row_Matrix & Z, const Sq_Matrix & D, Row_Matrix & W)
{
   int i, j, k;
   for(j=0; j< 3; j++)
    {
        W.l[1][j]=0;
        for(k=0; k< 3; k++)
        {
            W.l[0][j] = W.l[0][j] + (Z.l[0][k] * D.m[k][j]);
        }
    }
}


void Multiply(const Col_Matrix & R, const Row_Matrix & Z, Sq_Matrix & D)
{
    int i, j;
   for(i=0; i< 3; i++)
   {
       for(j=0; j< 3; j++)
       {
           D.m[i][j] = R.n[i][0] * Z.l[0][j];
       }
   }

    
}

void Multiply(const Row_Matrix & Z,const  Col_Matrix & R, float & t)
{
    int k;
        t=0;
           for(k=0; k< 3; k++)
           {
               t = t + (Z.l[0][k] * R.n[k][0]);
           }

}
