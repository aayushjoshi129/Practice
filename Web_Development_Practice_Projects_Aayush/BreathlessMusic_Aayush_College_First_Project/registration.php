<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Registration</title>
    <link href="//maxcdn.bootstrapcdn.com/bootstrap/4.1.1/css/bootstrap.min.css" rel="stylesheet" id="bootstrap-css">
    <script src="//maxcdn.bootstrapcdn.com/bootstrap/4.1.1/js/bootstrap.min.js"></script>
    <script src="//cdnjs.cloudflare.com/ajax/libs/jquery/3.2.1/jquery.min.js"></script>
    <!------ Include the above in your HEAD tag ---------->

<style>
    .divider-text {
    position: relative;
    text-align: center;
    margin-top: 15px;
    margin-bottom: 15px;
}
.divider-text span {
    padding: 7px;
    font-size: 12px;
    position: relative;   
    z-index: 2;
}
.divider-text:after {
    content: "";
    position: absolute;
    width: 100%;
    border-bottom: 1px solid #ddd;
    top: 55%;
    left: 0;
    z-index: 1;
}

.btn-facebook {
    background-color: #405D9D;
    color: #fff;
}
.btn-twitter {
    background-color: #42AEEC;
    color: #fff;
}
</style>
</head>
<body>
    
<?php

include "Connection.php";

if(isset($_POST['submit'])){
    $username = mysqli_real_escape_string($con,$_POST['name']);
    $email = mysqli_real_escape_string($con,$_POST['email']);
    $mobile = mysqli_real_escape_string($con,$_POST['mobile']);
    $password = mysqli_real_escape_string($con,$_POST['password']);
    $cpassword = mysqli_real_escape_string($con,$_POST['cpassword']);
    $pass = password_hash($password,PASSWORD_BCRYPT);
    $cpass = password_hash($cpassword,PASSWORD_BCRYPT);

    $emailquery = " select * from registration where email='$email' ";
    $query = mysqli_query($con , $emailquery);

    $emailcount = mysqli_num_rows($query);

    if($emailcount>0)
    {
        echo "Email Already Exists";
    }
        else
    {
        if($password === $cpassword)
        {
            $insertquery = "insert into registration (name,email,mobile,password,cpassword) values ('$username','$email','$mobile','$pass','$cpass')";

            $iquery = mysqli_query($con,$insertquery);

            if($iquery)
            {
                    ?>
                    <script>
                    alert ("Data Inserted Successfully");
                    </script>
                <?php
                }
                else
                {
                    ?>
                     <script>
                    alert ("Data not Inserted");
                    </script>
                    <?php
            }
                
        }
    
    else
        {
            echo "Password Not Matched";
        }
    }
}
    ?>

    <link href="//maxcdn.bootstrapcdn.com/bootstrap/4.0.0/css/bootstrap.min.css" rel="stylesheet" id="bootstrap-css">
    <script src="//maxcdn.bootstrapcdn.com/bootstrap/4.0.0/js/bootstrap.min.js"></script>
    <script src="//cdnjs.cloudflare.com/ajax/libs/jquery/3.2.1/jquery.min.js"></script>
    <!------ Include the above in your HEAD tag ---------->
    
    <link rel="stylesheet" href="https://use.fontawesome.com/releases/v5.0.8/css/all.css">
    
    
    <div class="container">
    
    <div class="card bg-light">
    <article class="card-body mx-auto" style="max-width: 400px;">
        <h4 class="card-title mt-3 text-center">Create Account</h4>
        <p class="text-center">Get started with your free account</p>
        <p>
            <!-- <a href="" class="btn btn-block btn-twitter"> <i class="fab fa-twitter"></i>   Login via Twitter</a> -->
            <a href="" class="btn btn-block btn-facebook"> <i class="fab fa-google"></i>   Login via Google</a>
            <a href="" class="btn btn-block btn-facebook"> <i class="fab fa-facebook-f"></i>   Login via Facebook</a>
        </p>
        <p class="divider-text">
            <span class="bg-light">OR</span>
        </p>
    <form action="" method="POST">
        <div class="form-group input-group">
            <div class="input-group-prepend">
                <span class="input-group-text"> <i class="fa fa-user"></i> </span>
             </div>
            <input name="name" class="form-control" placeholder="Full name" type="text" required>
        </div> <!-- form-group// -->
        <div class="form-group input-group">
            <div class="input-group-prepend">
                <span class="input-group-text"> <i class="fa fa-envelope"></i> </span>
             </div>
            <input name="email" class="form-control" placeholder="Email address" type="email" required>
        </div> <!-- form-group// -->
        <div class="form-group input-group">
            <div class="input-group-prepend">
                <span class="input-group-text"> <i class="fa fa-phone"></i> </span>
            </div>
            <select class="custom-select" style="max-width: 80px;">
                <option selected="">+91</option>
                <option value="1">+92</option>
                <option value="2">+1</option>
                <option value="3">+192</option>
            </select>
            <input name="mobile" class="form-control" placeholder="Phone number" type="text" required>
        </div> <!-- form-group// -->

        <div class="form-group input-group">
            <div class="input-group-prepend">
                <span class="input-group-text"> <i class="fa fa-lock"></i> </span>
            </div>
            <input name="password" class="form-control" placeholder="Create password" type="password" required>
        </div> <!-- form-group// -->
        <div class="form-group input-group">
            <div class="input-group-prepend">
                <span class="input-group-text"> <i class="fa fa-lock"></i> </span>
            </div>
            <input class="form-control" placeholder="Repeat password" type="password" name="cpassword" required>
        </div> <!-- form-group// -->                                      
        <div class="form-group">
            <button type="submit" class="btn btn-primary btn-block" name="submit"> Create Account  </button>
        </div> <!-- form-group// -->      
        <p class="text-center">Have an account? <a href="login.html">Log In</a> </p>                                                                 
    </form>
    </article>
    </div> <!-- card.// -->
    
    </div> 
    <!--container end.//-->
    
</body>
</html>