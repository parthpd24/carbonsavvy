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