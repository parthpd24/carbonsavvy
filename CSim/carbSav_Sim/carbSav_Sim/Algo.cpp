#include "StdAfx.h"
#include <stdio.h>
#include "Algo.h"


	/*-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=ELECTRICITY FOOTPRINT FUNCTIONS=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-*/

int ElectricFoot::CalcElectricFootprint(float coalFoot, float natGasFoot, float hydElecFoot, float oilFoot) //Final Equation for electricity carbon footprint
{
	int FinalElecFootprint = 0;
	float TotalElecFootprint = coalFoot + natGasFoot + hydElecFoot + oilFoot;

	FinalElecFootprint = TotalElecFootprint;
	return FinalElecFootprint;
}

float ElectricFoot::CalcCoalFootprint(int coalkWh) //Convert Coal KiloWatt Hours into Carbon Data
{
	float coalOutput = coalkWh * 1945.00464 * 0.2552;

	return coalOutput;
}
float ElectricFoot::CalcNatGasFootPrint(int natGaskWh) //Convert Natural Gas KiloWatt Hours into Carbon Data
{
	float natGasOutput = natGaskWh * 0.003715182 * 0.2001;

	return natGasOutput;
}
float ElectricFoot::CalcHydElecFootPrint(int hydEleckWh) //Convert Hydroelectricity KiloWatt Hours into Carbon Data
{
	float hydElecOutput = hydEleckWh * 0.000011 * 0.0005;

	return hydElecOutput;
}
float ElectricFoot::CalcOilFootprint(int oilkWh) //Convert Oil KiloWatt Hours into Carbon Data
{
	float oilOutput = oilkWh * 0.0026 * 0.008759688;

	return oilOutput;
}

	/*-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=TRANSPORTATION FOOTPRINT FUNCTIONS=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-*/

float TransportFoot::Transportation_Footprint(int gasmileage, int miles_per_year) 
{
	float gVar = 1/gasmileage;
	float GoalYear = gVar*miles_per_year;

	int Footprint_Transport = GoalYear * 0.00878;

	return Footprint_Transport;
}

	/*-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=DIET FOOTPRINT FUNCTIONS=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-*/

float DietFoot::Diet_Footprint(DietFoot Diet)
{
	int DietFootprint = 0;

	switch (Diet.dietChoice)
	{
		case 0: //Vegan
			DietFootprint = 3000; //1.5 Tons
			break;
		case 1: //Vegetarian
			DietFootprint = 3400; //1.7 Tons
			break;
		case 2: //Non-Vegetarian
			DietFootprint = 5000; //2.5 Tons
			break;
		default:
			DietFootprint = 0;
			break;
	}

	return DietFootprint;
}