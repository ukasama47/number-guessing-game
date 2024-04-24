
#include <iostream>
#include <cmath>
using namespace std;

void hit(int answer[], int prediction[]) {
	int hit = 0;
  for (int i = 0; i < 4; i++) { 
	  if (answer[i] == prediction[i]) {
		  hit++;
	  }     
	}
	cout << "hit: " << hit << endl;
}
void blow(int answer[], int prediction[]) {
	int blow = 0;
  for (int i = 0; i < 4; i++) { 
    for (int j = 0; j < 4; j++) { 		
	    if (answer[i] == prediction[j] && i != j) {
		    blow++;
	    }  
	  }
  }
	cout << "blow: " << blow << endl;	
}
int main() {
  int answer = 1234;
	int ans[4];
  for (int i = 0; i < 4; i++) {
    ans[i] = (answer / (int)pow(10, i)) % 10;
	}	

	int predict;
	do {
	  cout << "予想した数を入力してください" << endl;
    cin >> predict;
	  int pred[4];
    for (int i = 0; i < 4; i++) {
      pred[i] = (predict / (int)pow(10, i)) % 10;
	  }		
    hit(ans, pred);
	  blow(ans, pred);
	} while	(predict != answer);
}
