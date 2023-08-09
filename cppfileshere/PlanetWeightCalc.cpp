#include <iostream>

int main() {
  
  double earthWeight;
  double extraTerraWeight;
  int planetNumber;

  std::cout << "Input Earth weight in KG: ";
  std::cin >> earthWeight;

  std::cout << "\nMercury - 1\nVenus - 2\nMars - 3\nJupiter - 4\nSaturn - 5\nUranus - 6\nNeptune - 7\nInput planet number: ";
  std::cin >> planetNumber;
  
  switch (planetNumber) {
    case 1 :
      extraTerraWeight = earthWeight * 0.38;
      break;
    case 2 :
      extraTerraWeight = earthWeight * 0.91;
      break;
    case 3 :
      extraTerraWeight = earthWeight * 0.38;
      break;
    case 4 :
      extraTerraWeight = earthWeight * 2.34; 
      break;
    case 5 :
      extraTerraWeight = earthWeight * 1.06;
      break;
    case 6 :
      extraTerraWeight = earthWeight * 0.92;
      break;
    case 7 :
      extraTerraWeight = earthWeight * 1.19;
      break;
    default :
      extraTerraWeight = 0;
      break;
  }

  if (extraTerraWeight == 0) {
    std::cout << "Invalid planet number\n";
  } else {
    std::cout << "Extra terrestrial weight = " << extraTerraWeight << "kg.\n";
  }
  
}