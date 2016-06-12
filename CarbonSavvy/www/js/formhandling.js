namefunc(form) {
    sessvars.myObj.name = form.name.value;
}

nameoutput() {
    document.getElementById(nameplace).innerHTML = "Hi there, " + sessvars.myObj.name + "!";
}

registerInfo(form) {
    sessvars.myObj.kwh = form.kwh.value;
    sessvars.myObj.zipcode = form.zipcode.value;
    sessvars.myObj.mileage = form.mileage.value;
    sessvars.myObj.miles = form.miles.value;
    for (var i = 0; i < document.getElementsByName('radio').length; i++) {
        if(document.getElementsByName('radio')[i].checked) {
            sessvars.myObj.diet = document.getElementsByName('radio')[i].value;
        }
    }
}

// Getter functions

returnkwh() {
    return sessvars.myObj.kwh;
}

returnzipcode() {
    return sessvars.myObj.zipcode;
}

returnmileage() {
    return sessvars.myObj.mileage;
}

returndiet() {
    return sessvars.myObj.diet;
}

returnname() {
    return sessvars.myObj.name;
}

returnmiles() {
    return sessvars.myObj.miles;
}

function Transportation_Footprint(sessvars.myObj.mileage, sessvars.Obj.miles) {
    var g = 1/sessvars.myObj.mileage;
    var GalYear = g*sessvars.Obj.miles;
    var Footprint_Transport = GoalYear(0.00878);
    return Footprint_Transport;

}

function CalcElectricFootprint(sessvars.myObj.kwh) //Final Equation for electricity carbon footprint
{
    var FinalElecFootprint = 0;
    var ElecEmissionFactor = 496.3659508;

    FinalElecFootprint = ElecEmissionFactor * sessvars.myObj.kwh;
    return FinalElecFootprint;
}

    /*-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=DIET FOOTPRINT FUNCTIONS=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-*/

function Diet_Footprint(sessvars.myObj.diet)
{
    var DietFootprint = 0;

    switch (Diet.dietChoice)
    {
        case 0: //Vegan
            DietFootprint = 1360.78; //1.5 Tons
            break;
        case 1: //Vegetarian
            DietFootprint = 1542.21; //1.7 Tons
            break;
        case 2: //Non-Vegetarian
            DietFootprint = 2267.96; //2.5 Tons
            break;
        default:
            DietFootprint = 0;
            break;
    }

    return DietFootprint;
}

function FinalFootprint()
{
    var foot = CalcElectricFootprint() + Transportation_Footprint() + DietFootprint();
    return foot;
}

function FinalFootprintEmbed() 
{
    document.getElementById("footprint").innerHTML = FinalFootprint() + "killograms of CO2 per year.";
}

var PrafulsLoveForTya = true;

