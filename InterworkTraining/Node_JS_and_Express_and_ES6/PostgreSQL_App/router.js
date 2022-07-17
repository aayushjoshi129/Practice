const { Router } = require("express");
const controller = require('./Controller')

const router = Router();

router.get("/",controller.getAllStudents);
router.post("/",controller.addStudent);
router.get("/:roll_no",controller.getStudentByRoll);
router.delete("/:roll_no",controller.deleteStudent);
router.put("/:roll_no",controller.updateStudent);

module.exports = router;