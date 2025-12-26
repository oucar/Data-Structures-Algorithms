class Student {
  constructor(firstName, lastName, year) {
    this.firstName = firstName;
    this.lastName = lastName;
    this.grade = year;
  }

  fullName() {
    return `Your full name is ${this.firstName} ${this.lastName}.`;
  }
}

let studentOnur = new Student("Onur", "Ucar", 4);
studentOnur.fullName();
