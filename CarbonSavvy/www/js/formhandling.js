namefunc(form) {
    var name = form.name.value;
    window.location.href = "hello.html";
}

nameoutput() {
    document.getElementById(nameplace).innerHTML = "Hi there, " + name + "!";
}