const getAllStudents = "Select * from students";
const getStudentByRoll = "Select * from students where roll_no=$1";
const addStudent= "Insert into students values ($1,$2,$3)";
const exists = "Select * from students where roll_no=$1";
const deleteStudent = "delete from students where roll_no=$1";
const updateStudent = "update students set s_name=$1 , course_id=$2 where roll_no=$3";

module.exports = {
    getAllStudents,
    getStudentByRoll,
    exists,
    addStudent,
    deleteStudent,
    updateStudent,
};