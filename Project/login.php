<?php
session_start();
?>

<!doctype html>
<html lang="en">
  <head>
    <!-- Required meta tags -->
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">

    <!-- Bootstrap CSS -->
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/4.0.0/css/bootstrap.min.css" integrity="sha384-Gn5384xqQ1aoWXA+058RXPxPg6fy4IWvTNh0E263XmFcJlSAwiGgFAW/dAiS6JXm" crossorigin="anonymous">

    <title>Login</title>
   
  </head>
  <body>

<?php

include 'Connection.php';

if(isset($_POST['submit']))
{
    $email=$_POST['email'];
    $password=$_POST['password'];

    $email_search = "select * from registration where email='$email'";
    $query = mysqli_query($con,$email_search);
    

    $emailcount = mysqli_num_rows($query);

    if($emailcount)
    {
        $email_pass = mysqli_fetch_assoc($query);
        $db_pass = $email_pass['password'];
        $_SESSION['email'] = $email_pass['email'];
        $pass_decode = password_verify($password,$db_pass);

        if($pass_decode)
        {
            if(isset($_POST['remember']))
            {
                setcookie('emailcookie',$email,time()+86400);
                setcookie('passwordcookie',$password,time()+86400);
                header('location:index.php');
                ?>
                <script>
                document.getElementById("login").onclick("login").innerHTML("index.php") = "New text!";
                </script>

            <?php
            }
            else
            {
                header('location:index.php');
                
            }
            echo "login Successfull";
            ?>
            <!-- <script>
                location.replace("index.php");
            </script> -->
            <?php
        }
        else
        {
            echo "Passwords Doesn't Match ";
        }
    }
        else
        {
        echo "Invalid Email";
        }


}


?>

      <h1> Welcome to <a href="index.php">Breathless Music</a> </h1>
<form action="<?php echo htmlentities($_SERVER['PHP_SELF']); ?>" method="POST">
    <div class="container">    
        <div id="loginbox" style="margin-top:50px;" class="mainbox col-md-6 col-md-offset-3 col-sm-8 col-sm-offset-2">                    
            <div class="panel panel-info" >
                    <div class="panel-heading">
                        <div class="panel-title">Login</div>
                    </div>     
    
                    <div style="padding-top:30px" class="panel-body" >
    
                        <div style="display:none" id="login-alert" class="alert alert-danger col-sm-12"></div>
                            
                        <form id="loginform" class="form-horizontal" role="form">
                                    
                            <div style="margin-bottom: 25px" class="input-group">
                                        <span class="input-group-addon"><i class="glyphicon glyphicon-user"></i></span>
                                        <input id="login-username" type="email" class="form-control" name="email" value="<?php if(isset($_COOKIE['emailcookie'])) { echo $_COOKIE["emailcookie"]; } ?>" placeholder="username or email">                                        
                                    </div>
                                
                            <div style="margin-bottom: 25px" class="input-group">
                                        <span class="input-group-addon"><i class="glyphicon glyphicon-lock"></i></span>
                                        <input id="login-password" type="password" class="form-control" name="password" placeholder="password" value ="<?php if(isset($_COOKIE['passwordcookie'])) { echo $_COOKIE["passwordcookie"]; } ?>">
                                    </div>
                                    
    
                                
                            <div class="input-group">
                                      <div class="checkbox">
                                        <label>
                                          <input id="login-remember" type="checkbox" name="remember" value="1"> Remember me
                                        </label>
                                      </div>
                                    </div>

                                    <div style="float:right; font-size: 80%; position: relative; top:-10px"><a href="#">Forgot password?</a></div>
    
    
                                <div style="margin-top:10px" class="form-group">
                                    <!-- Button -->
    
                                    <div class="col-sm-12 controls">
                                      <button name='submit' id="btn-login" href="#" class="btn btn-success">Login  </button>
                                      <a id="btn-fblogin" href="#" class="btn btn-primary">Login with Facebook</a>
    
                                    </div>
                                </div>
    
    
                                <div class="form-group">
                                    <div class="col-md-12 control">
                                        <div style="border-top: 1px solid#888; padding-top:15px; font-size:85%" >
                                            Don't have an account! 
                                        <a href="registration.php" onClick="$('#loginbox').hide(); $('#signupbox').show()">
                                            Sign Up <a href="https://bbbootstrap.com"></a>
                                        </a>
                                        </div>
                                    </div>
                                </div>    
                            </form>     
    
    
    
                        </div>                     
                    </div>  
        </div>




</form>    
    </body>
</html>