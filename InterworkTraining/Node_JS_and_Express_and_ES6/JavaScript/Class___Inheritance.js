// Class is a BluePrint and object is real world entity.

class Employee{
    constructor(getName,getSalary,getLocation,getExperience){
        this.name = getName;
        this.salary = getSalary;
        this.location = getLocation;
        this.experience = getExperience;
    }
    slogan(){
        return `I am ${this.name} and this company is the best.`;
    }
    joiningYear(){
        return `I have joined this company in ${2022-this.experience}.`
    }

    // Static Function = Which can be used without creating an object
    static add(a,b){
        return a+b;
    }
}


class Programmer extends Employee{
    constructor(getName,getSalary,getLocation,getExperience,getLanguage,getGithubUserName){

        // Super Basically calls the Parent Constructor which is inherited as parent
        super(getName,getSalary,getLocation,getExperience);

        this.language = getLanguage;
        this.githubUserName = getGithubUserName;
    }

    favLang(){
        if(this.language == "Python"){
            return "Favourite Language is Python";
        }else{
            return "Favourite Language is JavaScript";
        }
    }

    static multiply(a,b){
        return a*b;
    }
}

// Creating an Object of Employee Class as e1
// e1 = new Employee("Nitin",40000,"Faridabad",17);

// console.log(e1);
// console.log(e1.slogan());
// console.log(e1.joiningYear());

// Calling a Static Function
// console.log(Employee.add(3,5));

// Creating an Object of Programmer class which is inhereted from Employee Class
Rohan = new Programmer("Rohan",50000,"Gurugram",6,"HTML","Rohan@HexBis");
console.log(Rohan);
console.log(Rohan.favLang());
console.log(Rohan.slogan());
console.log(Programmer.multiply(3,5));
console.log(Programmer.add(3,5));