namefunc(form) {
    var name = form.name.value;
}

nameoutput() {
    document.getElementById(nameplace).innerHTML = "Hi there, " + name + "!";
}

registerInfo(form) {
    var kwh = form.kwh.value;
    var zipcode = form.zipcode.value;
    var mileage = form.mileage.value;
    for (var i = 0; i < document.getElementsByName('radio').length; i++) {
        if(document.getElementsByName('radio')[i].checked) {
            var diet = document.getElementsByName('radio')[i].value;
        }
    }
}

returnkwh() {
    return kwh;
}

returnzipcode() {
    return zipcode;
}

returnmileage() {
    return mileage;
}

returndiet() {
    return diet;
}

returnname() {
    return name;
}