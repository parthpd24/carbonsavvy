// carbSav_Sim.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Windows.h"
#include "Algo.h"

using namespace std;

int elecFoot(int electricFootprint);
int transFoot(int transportationFootprint);
int dietFoot(int dietFootprint);

int main()
{
	int run_Func; //Used to run the various functions
	int electricFootprint = 0;
	int transportFootprint = 0;
	int dietFootprint = 0;

	system("Color A");
	std::cout << "Welcome to our Simulation for calculating your Carbon Footprint." << std::endl << std::endl;
	Sleep(1000);

	std::cout << "The purpose of this simulation is to demonstrate the algorithms we have developed to find a person's carbon footprint." << std::endl << std::endl;
	Sleep(1000);

	std::cout << "We will ask you a small series of questions to help you find your carbon footprint." << std::endl << std::endl;
	Sleep(1000);

	std::cout << "We will begin with the Electric Carbon Footprint Simulator." << std::endl << std::endl;

	Sleep(3000);

	run_Func = elecFoot(electricFootprint);

	std::cout << "We will now test your Transportation Carbon Footprint." << std::endl << std::endl;

	run_Func = transFoot(transportFootprint);

	std::cout << "We will now test your Diet Carbon Footprint." << std::endl << std::endl;

	run_Func = dietFoot(dietFootprint);

	std::cout << "Your total Carbon Footprint is..." << std::endl << std::endl;
	Sleep(2000);
	std::cout << electricFootprint + transportFootprint + dietFootprint << "!" << std::endl << std::endl;

}

int elecFoot(int electricFootprint)
{
	ElectricFoot ElectricFoot; //Initialize Electric Carbon Class and Call Functions

	/*-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=STARTING PHRASES=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-*/

	system("CLS");
	std::cout << "Welcome to the Simulation for your Electric Carbon Footprint" << std::endl << std::endl;
	Sleep(1000);
	std::cout << "We will calculate your Electric Carbon Footprint using this simulation." << std::endl << std::endl;
	Sleep(1000);

	/*-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-USER INPUT-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-*/

	// Coal Usage
	std::cout << "First, enter your Kilowatt Hours per Year for your coal usage." << endl;
	std::cin >> ElectricFoot.elecVars.coalkWh;

	ElectricFoot.elecFoot.coalFoot = ElectricFoot.CalcCoalFootprint(ElectricFoot.elecVars.coalkWh);

	// Natural Gas Usage
	std::cout << "Next, enter your Kilowatt Hours per Year for your natural gas usage." << endl;
	std::cin >> ElectricFoot.elecVars.natGaskWh;

	ElectricFoot.elecFoot.natGasFoot = ElectricFoot.CalcNatGasFootPrint(ElectricFoot.elecVars.natGaskWh);

	// Hydroelectricity Usage
	std::cout << "Now, enter your Kilowatt Hours per Year for your hydroelectricity usage." << endl;
	std::cin >> ElectricFoot.elecVars.hydEleckWh;

	ElectricFoot.elecFoot.hydElecFoot = ElectricFoot.CalcHydElecFootPrint(ElectricFoot.elecVars.hydEleckWh);

	// Oil Usage

	std::cout << "Finally, enter your Kilowatt Hours per Year for your oil usage." << endl;
	std::cin >> ElectricFoot.elecVars.oilkWh;

	ElectricFoot.elecFoot.oilFoot = ElectricFoot.CalcOilFootprint(ElectricFoot.elecVars.oilkWh);

	/*-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=CARBON FOOTPRINT=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-*/

	std::cout << "Calculating your Electric Carbon Footprint.";
	Sleep(1000);
	std::cout << ".";
	Sleep(1000);
	std::cout << ".";
	Sleep(1000);
	std::cout << ".";
	Sleep(1000);
	cout << std::endl;

	//Run Total Function
	ElectricFoot.elecFoot.elecFoot = ElectricFoot.CalcElectricFootprint(ElectricFoot.elecFoot.coalFoot, ElectricFoot.elecFoot.natGasFoot, ElectricFoot.elecFoot.hydElecFoot, ElectricFoot.elecFoot.oilFoot);

	std::cout << "Your Electric Carbon Footprint is..." << endl;
	std::cout << ElectricFoot.elecFoot.elecFoot << "!" << endl;

	Sleep(4000);

	return 0;
}

int transFoot(int transportationFootprint)
{
	TransportFoot TransportFoot; //Initialize Transportion Carbon Footprint Class and Call Functions

	/*-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=STARTING PHRASES=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-*/

	system("CLS");
	std::cout << "Welcome to the Simulation for your Transportation Carbon Footprint" << std::endl << std::endl;
	Sleep(1000);
	std::cout << "We will calculate your Transportation Carbon Footprint using this simulation." << std::endl << std::endl;
	Sleep(1000);

	/*-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-USER INPUT-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-*/

	// Total Gas Mileage
	std::cout << "First enter your Total Gas Mileage." << endl;
	std::cin >> TransportFoot.transVar.gasmileage;

	// Miles per Year
	std::cout << "Next, enter the average amount of miles you travel per year." << endl;
	std::cin >> TransportFoot.transVar.miles_per_year;

	/*-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=CARBON FOOTPRINT=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-*/

	std::cout << "Calculating your Transportation Carbon Footprint.";
	Sleep(1000);
	std::cout << ".";
	Sleep(1000);
	std::cout << ".";
	Sleep(1000);
	std::cout << ".";
	Sleep(1000);
	cout << std::endl;

	//Run Total Function
	TransportFoot.transVar.transport_foot = TransportFoot.Transportation_Footprint(TransportFoot.transVar.gasmileage, TransportFoot.transVar.miles_per_year);

	std::cout << "Your Transportation Carbon Footprint is..." << endl;
	std::cout << TransportFoot.transVar.transport_foot << "!" << endl;

	Sleep(4000);

	return 0;
}

int dietFoot(int dietFootprint)
{
	DietFoot CurrDiet; //Initialize Diet Carbon Footprint Class and Call Functions
	int dietChoice = -99;

	/*-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=STARTING PHRASES=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-*/

	system("CLS");
	std::cout << "Welcome to the Simulation for your Diet Carbon Footprint" << std::endl << std::endl;
	Sleep(1000);
	std::cout << "We will calculate your Diet Carbon Footprint using this simulation." << std::endl << std::endl;
	Sleep(1000);

	/*-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-USER INPUT-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-*/

	// Diet User Input
	std::cout << "Please enter your choice of diet." << endl;
	std::cout << "Type '0' for Vegan, '1' for Vegetarian, or '2' for Non-Vegetarian." << endl;
	std::cin >> dietChoice;

	/*-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=CARBON FOOTPRINT=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-*/

	std::cout << "Calculating your Transportation Carbon Footprint.";
	Sleep(1000);
	std::cout << ".";
	Sleep(1000);
	std::cout << ".";
	Sleep(1000);
	std::cout << ".";
	Sleep(1000);
	cout << std::endl;

	//Run Total Function
	CurrDiet.dietFoot = CurrDiet.Diet_Footprint(CurrDiet);

	std::cout << "Your Diet Carbon Footprint is..." << endl;
	std::cout << dietFoot << "!" << endl;

	Sleep(4000);

	return 0;
}