#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

  int matriz [4] [5] = {{1, 5, 9, 13, 17}, {2, 6, 10, 14, 18}, {3,7, 11, 15, 19},{4, 8, 12, 16, 20}};

  for ( int i=0; i<4; i++ ) {

    for ( int j=0; j<5; j++ ){

        cout << matriz [i] [j] << " ";

    }

    cout << "\n";

  }

      return 0;
      getch();
}
