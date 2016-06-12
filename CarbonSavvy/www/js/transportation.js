//Initializing emmision factors and percentages
var gasmileage = 0;
var miles_per_year = 0;

function Transportation_Footprint(gasmileage, miles_per_year) {
	var g = 1/gasmileage;
	var GalYear = g*miles_per_year;
	var Footprint_Transport = GoalYear(0.00878);
	return Footprint_Transport;

}

function CalcElectricFootprint( coalFoot,  natGasFoot,  hydElecFoot,  oilFoot) //Final Equation for electricity carbon footprint
{
    var FinalElecFootprint = 0;
    var TotalElecFootprint = coalFoot + natGasFoot + hydElecFoot + oilFoot;

    FinalElecFootprint = TotalElecFootprint;
    return FinalElecFootprint;
}

function CalcCoalFootprint(coalkWh) //Convert Coal KiloWatt Hours into Carbon Data
{
	var coalOutput = coalkWh * 1945.00464 * 0.2552;

    return coalOutput;
}
function CalcNatGasFootPrint(natGaskWh) //Convert Natural Gas KiloWatt Hours into Carbon Data
{
     var natGasOutput = natGaskWh * 0.003715182 * 0.2001;

    return natGasOutput;
}
function CalcHydElecFootPrint(hydEleckWh) //Convert Hydroelectricity KiloWatt Hours into Carbon Data
{
      var hydElecOutput = hydEleckWh * 0.000011 * 0.0005;

    return hydElecOutput;
}
function CalcOilFootprint(oilkWh) //Convert Oil KiloWatt Hours into Carbon Data
{
      var oilOutput = oilkWh * 0.0026 * 0.008759688;

    return oilOutput;
}

var PrafulsLoveForTya = true;

