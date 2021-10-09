const trigger = document.querySelector('#trigger');
const modalWrapper = document.querySelector('.modal__wrapper');
const closeBtn = document.querySelector('.close');

trigger.addEventListener('click', function () {
    openModal();
});

closeBtn.addEventListener('click', function () {
    closeModal();
});

modalWrapper.addEventListener('click', function (e) {
    if (e.target !== this) return;
    closeModal();
});

document.addEventListener('keydown', function (e) {
    if (e.key === 'Escape') {
        closeModal();
    }
})

function openModal() {
    modalWrapper.classList.add('active');
}
function closeModal() {
    modalWrapper.classList.remove('active');
}

function showContent() {
    var y = document.getElementById("demo");
    if (y.style.display === "block") {
      y.style.display = "none";
    } else {
      y.style.display = "block";
    }
    var x = document.getElementById("myForm").elements.length -1;
    var fname = document.getElementsByTagName("input")[0].value;
    var lname = document.getElementsByTagName("input")[1].value;
    var dob = document.getElementsByTagName("input")[2].value;
    var address = document.getElementsByTagName("input")[3].value;
    document.getElementById("demo").innerHTML += " There are " + x + " elements in the form." + "<br>";
    document.getElementById("demo").innerHTML += " First Name is " + fname + "<br>";
    document.getElementById("demo").innerHTML += " Last Name is " + lname + "<br>";
    document.getElementById("demo").innerHTML += " Date Of Birth is " + dob + "<br>";
    document.getElementById("demo").innerHTML += " Address is " + address + "<br>";

}

function validate() {
    var fname = document.forms["RegForm"]["fname"];
    var lname = document.forms["RegForm"]["lname"];
    var dob = document.forms["RegForm"]["dob"];
    var address = document.forms["RegForm"]["address"];

    if (fname.value == "") {
        window.alert("Please enter your name.");
        fname.focus();
        return false;
    }

    if (lname.value == "") {
        window.alert("Please enter your address.");
        lname.focus();
        return false;
    }

    if (dob.value == "") {
        window.alert(
            "Please enter a valid e-mail address.");
        dob.focus();
        return false;
    }

    if (address.value == "") {
        window.alert(
            "Please enter your telephone number.");
        address.focus();
        return false;
    }

    return true;
}