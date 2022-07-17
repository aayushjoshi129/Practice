// Callback Function --> Function taking another function as an parameter is known as Calback function

const students = [
    {name:"Aayush",subject:"Javascript"},
    {name:"Harry",subject:"PCMB"}
]

function enrollStudent(student,Callback){
    setTimeout(() => {
        students.push(student);
        console.log("Student Enrolled Successfully");
        Callback();
    }, 3000);
}

function getStudents(){
    setTimeout(() => {
        let str="";
        students.forEach(function(student){
            str+=`<li>${student.name}</li>`
        })
        document.getElementById("studentsList").innerHTML = str;
    }, 1000);
}

let newStudent = {name:"Johny",subject:"Python"};

enrollStudent(newStudent,getStudents);
// getStudents();