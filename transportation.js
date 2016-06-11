//Initializing emmision factors and percentages
var gasmileage = 0;
var miles_per_year = 0;

function Transportation_Footprint(gasmileage, miles_per_year) {
	var g = 1/gasmileage;
	var GalYear = g*miles_per_year;
	var Footprint_Transport = GoalYear(0.00878);
	return Footprint_Transport;

}