<!doctype html>
<html lang="en">
  <head>
    <!-- Required meta tags -->
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">

    <!-- Bootstrap CSS -->
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.0.0-beta2/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-BmbxuPwQa2lc/FVzBcNJ7UAyJxM6wuqIj61tLrc4wSX0szH/Ev+nYRRuWlolflfl" crossorigin="anonymous">

    <title>Feedback Form</title>

    <style>    
    * {    
      box-sizing: border-box;    
    }    
        
    input[type=text], select, textarea {    
      width: 100%;    
      padding: 12px;    
      border: 1px solid rgb(70, 68, 68);    
      border-radius: 4px;    
      resize: vertical;    
    }    
    input[type=email], select, textarea {    
      width: 100%;    
      padding: 12px;    
      border: 1px solid rgb(70, 68, 68);    
      border-radius: 4px;    
      resize: vertical;    
    }    
        
    label {    
      padding: 12px 12px 12px 0;    
      display: inline-block;    
    }    
        
    input[type=submit] {    
      background-color: rgb(37, 116, 161);    
      color: white;    
      padding: 12px 20px;    
      border: none;    
      border-radius: 4px;    
      cursor: pointer;    
      float: right;    
    }    
        
    input[type=submit]:hover {    
      background-color: #45a049;    
    }    
        
    .container {    
      border-radius: 5px;    
      background-color: #f2f2f2;    
      padding: 20px;    
    }    
        
    .col-25 {    
      float: left;    
      width: 25%;    
      margin-top: 6px;    
    }    
        
    .col-75 {    
      float: left;    
      width: 75%;    
      margin-top: 6px;    
    }    
        
    /* Clear floats after the columns */    
    .row:after {    
      content: "";    
      display: table;    
      clear: both;    
    }    
        
    /* Responsive layout - when the screen is less than 600px wide, make the two columns stack on top of each other instead of next to each other */    
    </style>

  </head>
  <body>       
    <h2>FEEDBACK FORM</h2>    
    <div class="container">    
      <form action ="" method = "POST">    
        <div class="row">    
          <div class="col-25">    
            <label for="fname">First Name</label>    
          </div>    
          <div class="col-75">    
            <input type="text" id="fname" name="firstname" placeholder="Your name.." required>    
          </div>    
        </div>    
        <div class="row">    
          <div class="col-25">    
            <label for="lname">Last Name</label>    
          </div>    
          <div class="col-75">    
            <input type="text" id="lname" name="lastname" placeholder="Your last name.." required>    
          </div>    
        </div>    
        <div class="row">    
            <div class="col-25">    
              <label for="email">Mail Id</label>    
            </div>    
            <div class="col-75">    
              <input type="email" id="email" name="mailid" placeholder="Your mail id.." required>    
            </div>    
          </div>    
        <div class="row">    
          <div class="col-25">    
            <label for="country">Country</label>    
          </div>    
          <div class="col-75">    
            <select id="country" name="country">    
                <option value="none">Select Country</option>    
              <option value="australia">Australia</option>    
              <option value="canada">Canada</option>    
              <option value="usa">USA</option>    
              <option value="russia">Russia</option>    
              <option value="japan">Japan</option>    
              <option value="india">India</option>    
              <option value="china">China</option>    
            </select>    
          </div>    
        </div>    
        <div class="row">    
          <div class="col-25">    
            <label for="feed_back">Feedback</label>    
          </div>    
          <div class="col-75">    
            <textarea id="subject" name="feedback" placeholder="Write something.." style="height:200px"></textarea>    
          </div>    
        </div>    
        <div class="row">    
          <input type="submit" value="Submit" name="submit">    
        </div>    
      </form>    </div>

    </body>    
  </html>
    


<?php

include 'Connection.php';


if(isset($_POST['submit']))
{
  $First_Name = $_POST['firstname'];
  $Last_Name = $_POST['lastname'];
  $Email = $_POST['mailid'];
  $Country = $_POST['country'];
  $Feedback = $_POST['feedback'];

  $insertquery = "insert into feedback(F_Name,L_Name,Mail_id,Country,Feedback) values ('$First_Name','$Last_Name','$Email','$Country','$Feedback')";

 $res = mysqli_query($con,$insertquery);

 if($res)

 {
   ?>
   <script>alert ("Data Inserted Properly");
  </script>
   <?php
 }
 else
 {
  ?>
  <script>alert ("Data not Inserted Properly");
</script>
  <?php
 }
}


?>