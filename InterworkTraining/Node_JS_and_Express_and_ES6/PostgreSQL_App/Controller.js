const pool = require('./Connection');
const queries = require('./query');

const getAllStudents = (req, resp) => {
    pool.query(queries.getAllStudents, (err, results) => {
        if (err) throw err;
        else {
            resp.status(200).json(results.rows);
        }
    })
};

const getStudentByRoll = (req, resp) => {
    const roll_no = parseInt(req.params.roll_no);
    pool.query(queries.getStudentByRoll, [roll_no], (err, results) => {
        if (err) throw err;
        else {
            resp.status(200).json(results.rows);
        }
    })
}

const addStudent = (req, resp) => {
    const { roll_no, s_name, course_id } = req.body;

    // Check Student is present or not
    pool.query(queries.exists, [roll_no], (err, results) => {
        if (results.rowCount > 0) {
            resp.send("Student Already Exists with Same Roll Number");
        }
    })

    // Adding Student to Database
    pool.query(queries.addStudent, [roll_no, s_name, course_id], (err, results) => {
        if (err) throw err;
        else {
            resp.status(201).send("Student Created Successfully");
        }
    })
}

const deleteStudent = (req, resp) => {
    const roll_no = parseInt(req.params.roll_no);

    pool.query(queries.deleteStudent, [roll_no], (err, results) => {
        if (err) throw err;
        else if (results.rowCount < 0) {
            resp.send("Student Does Not Exist");
        }
        else {
            resp.status(202).send("Deleted Successfully");
        }
    })
}

const updateStudent = (req, resp) => {
    const roll_no = parseInt(req.params.roll_no);
    const { s_name, course_id } = req.body;
    pool.query(queries.getStudentByRoll, [roll_no], (err, results) => {
        if (err) throw err;
        else if (results.rowCount < 1) {
            resp.send("Student Does Not Exists");
        }
    })

    pool.query(queries.updateStudent, [s_name, course_id, roll_no], (err, results) => {
        if (err) throw err;
        else {
            resp.status(200).send("Updated Successfully");
        }
    })
}

module.exports = {
    getAllStudents,
    getStudentByRoll,
    addStudent,
    deleteStudent,
    updateStudent,
};
