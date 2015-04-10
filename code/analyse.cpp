#include <iostream>
#include "analyse.h"

using namespace std;

class Analyse{
private:
	char* filepath;

public:	
	Bouteille(char* path){
	   filepath=path;
	}
	
	
	char* getfilename() const{return filepath;}
	
	int compilation(){return 0}
	int synthese(){return 0}
	int getnetlist(){return 0}


};

#endif
