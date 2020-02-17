#include <iostream>
#include <TRandom3.h>
#include <TH1F.h>
#include <TCanvas.h> 
using namespace std;
int main()
{
   TH1F histogram("histogram","height [cm];",20,100,300);
   TRandom3 generator(0);
 
   
   for (int i=0; i<160; i++) histogram.Fill(generator.Gaus(170,20));
   
   TCanvas can;
   histogram.Draw();
   can.Print("height.jpg");
}
