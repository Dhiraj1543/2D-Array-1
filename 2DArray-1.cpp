// Q.no 1 Write a program to store 10 at every index of a 2D matrix with 5 rows and 5 columns.
#include <iostream>
using namespace std;
int main()
{
    int matrix[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            matrix[i][j] = 10;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// Q.no:-2  Write a program to add two matrices and save the result in one of the given matrices.
#include<iostream>
using namespace std;
int main()
{
    int a[2][3]={{1,2,3},{4,5,6}};
    int b[2][3]={{8,5,1},{7,8,9}};

    for (int i = 0; i <2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            b[i][j]=a[i][j]+b[i][j];
        }
    }
    // Filling
       for (int i = 0; i <2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
}

// Q.no 3. Given a matrix ‘A’ of dimension n x m and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the
//rectangle from (l1,r1) to (l2, r2).
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no of rows";
    cin>>n;
    int m;
    cout<<"Enter the no of columns";
    cin>>m;
    int arr[n][m];
    for (int i = 0; i <=n-1; i++)
    {
        for (int j = 0; j<=m-1; j++)
        {
             cin>>arr[i][j];
        }
    }
    int x1,y1,x2,y2;
    cout<<"Enter the first co-ordinate:";
    cin>>x1>>y1;
    cout<<"Enter the second co-ordinate:";
    cin>>x2>>y2;
    int sum=0;
    for (int i = x1; i <=x2; i++)
    {
        for (int j= y1; j <=y2; j++)
        {
            sum+=arr[i][j];
        }
    }
    cout<<sum;
}

// Q no 4 Write a C++ program to find the largest element of a given 2D array of integers.
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no of rows:";
    cin>>n;
    int m;
    cout<<"Enter the no of columns:";
    cin>>m;
    int arr[n][m];
    for (int i = 0; i <=n-1; i++)
    {
        for (int j = 0; j<=m-1; j++)
        {
             cin>>arr[i][j];
        }
    }
    int max=INT_MIN;
     for (int i = 0; i <=n-1; i++)
    {
        for (int j = 0; j<=m-1; j++)
        {
            if(max<arr[i][j])
            {
                max=arr[i][j];
            }
        }
    }
    cout<<max;
}

//Q.no 5 Write a program to print the row number having the maximum sum in a given matrix.
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cout << "Enter the no of rows";
    cin >> n;
    int m;
    cout << "Enter the no of columns";
    cin >> m;
    int arr[n][m];
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= m - 1; j++)
        {
            cin >> arr[i][j];
        }
    }
    int maxsum = INT_MIN;
    int maxrow=-1;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += arr[i][j];
        }
        if(sum>maxsum)
        {
            maxsum=sum;
            maxrow=i;
        }
    }
    cout << maxrow;
}


//Q,no 6 Write a function which accepts a 2D array of integers and its size as arguments and displays the
//elements of middle row and the elements of middle column.
#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter the no of rows and coumns :";
    cin>>m;
    int arr[m][m];
    for (int i = 0; i <=m-1; i++)
    {
        for (int j = 0; j<=m-1; j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<endl;
    cout << "The elements of the middle row and middle column are as follows :"<<endl;

    for (int i = 0; i <=m-1; i++)
    {
        for (int j = 0; j<=m-1; j++)
        {
            if (i==m/2 or j==m/2)
            {
                cout<<arr[i][j]<<" ";

            } else cout<<" "<<" ";

        }
        cout<<endl;
    }
}


