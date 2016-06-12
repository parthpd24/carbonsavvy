#pragma once

class ElectricFoot
{
public:
	struct
	{
		int coalkWh;
		int natGaskWh;
		int hydEleckWh;
		int oilkWh;
	} elecVars; //The default values 

	struct
	{
		float coalFoot;
		float natGasFoot;
		float hydElecFoot;
		float oilFoot;
		float elecFoot;

	} elecFoot;

	int CalcElectricFootprint(float coalFoot, float natGasFoot, float hydElecFoot, float oilFoot);
	float CalcCoalFootprint(int coalkWh);
	float CalcNatGasFootPrint(int natGaskWh);
	float CalcHydElecFootPrint(int hydEleckWh);
	float CalcOilFootprint(int oilkWh);

};

class TransportFoot
{
public:
	struct
	{
		int gasmileage;
		int miles_per_year;
		int transport_foot;
	} transVar;

	float Transportation_Footprint(int gasmileage, int miles_per_year);
};

class DietFoot
{
public:
	int dietChoice;
	float dietFoot;

	float Diet_Footprint(DietFoot Diet);

};


