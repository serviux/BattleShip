


#include <iostream>
#include "Ocean.h"


int main()
{
	Ocean* PlayerOcean;
	PlayerOcean = new Ocean(20);
	PlayerOcean->GenerateOcean();
	PlayerOcean->DisplayOcean(5, 5);


}
