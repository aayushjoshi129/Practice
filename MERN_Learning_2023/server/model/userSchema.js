const mongoose = require('mongoose');
var bcrypt = require('bcryptjs');
const jwt = require('jsonwebtoken');

const userSchema = new mongoose.Schema({
    name:{
        type: String,
        required: true
    },
    email:{
        type: String,
        required: true
    },
    phone:{
        type: Number,
        required: true
    },
    work:{
        type: String,
        required: true
    },
    password:{
        type: String,
        required: true
    },
    cpassword:{
        type: String,
        required: true
    }
    ,
    date:{
        type: Date,
    }
    ,
    tokens:[
        {
            token:{
        type: String,
        required: true
    }
}]
})




// Hashing the Password
userSchema.pre('save', async function(next){
    if(this.isModified('password')){
        this.password = await bcrypt.hash(this.password,12);
        this.cpassword = await bcrypt.hash(this.cpassword,12);
    }
    next();
})

// Generating Token
userSchema.methods.generateAuthToken = async function() {
    try{
        let tokenGenerated = jwt.sign({_id:this._id},process.env.SECRET_KEY);
        this.tokens = this.tokens.concat({token:tokenGenerated});
        await this.save();
        return tokenGenerated;
    }
    catch(err){
        console.log(err);
    }
}


const User = mongoose.model('USER',userSchema);

module.exports = User;