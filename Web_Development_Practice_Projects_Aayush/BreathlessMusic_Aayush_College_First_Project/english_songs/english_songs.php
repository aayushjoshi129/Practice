<!doctype html>
<html lang="en">
  <head>
    <!-- Required meta tags -->
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <!-- <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/4.5.2/css/bootstrap.min.css"> -->
    <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.5.1/jquery.min.js"></script>
    <script src="https://cdnjs.cloudflare.com/ajax/libs/popper.js/1.16.0/umd/popper.min.js"></script>
    <script src="https://maxcdn.bootstrapcdn.com/bootstrap/4.5.2/js/bootstrap.min.js"></script>
    <link href="assets/css/bootstrap-responsive.css" rel="stylesheet">

    <!-- Bootstrap CSS -->
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.0.0-beta2/dist/js/bootstrap.bundle.min.js" integrity="sha384-b5kHyXgcpbZJO/tY9Ul7kGkf1S0CWuKcCD38l8YkeH8z8QjE0GmW1gYU5S9FOnJ0" crossorigin="anonymous"></script>
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.0.0-beta2/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-BmbxuPwQa2lc/FVzBcNJ7UAyJxM6wuqIj61tLrc4wSX0szH/Ev+nYRRuWlolflfl" crossorigin="anonymous">
    
    <title>English Songs</title>
    <style>
.navbar-bg
{
    background-color: rgb(43, 40, 40) !important;
}
.carousel-inner a
{
  text-decoration: none !important;
  color: rgb(196, 196, 111);
}
.navbar-brand-color
{
    color:white !important;
    text-decoration: none !important;
}
.hov-a:hover
{
    background-color: rgb(201, 156, 156) !important;
    border-radius: 4px;
    color: black !important;
}
.span-col
{
  color: white !important;
  background-color: white !important;
  border-radius: 4px;
  height: 25px;
  width: 32px;
}
.container
{
  border: 2px solid black;
  margin-left:4px;
  margin-top: 2px;
  width: 100%;
  height: 150px;
  float: left;
}
.list-group
{
  margin-top: 1px;
  margin-bottom: 1px;
}
/* .list-song
{
  display:flex;
} */

.foot{
  margin-top: 1px !important;
}
/* .lists{
  display: inline;
  margin: 2px 100px;
  padding-bottom: 80px;
  border: 2px solid red;
} */

    </style>

  </head>
  <body>

    <!-- Navigation Bar Starts Here -->

    <nav class="navbar navbar-bg navbar-expand-lg navbar-light bg-light fixed-top">
        <div class="container-fluid">
          <a class="navbar-brand navbar-brand-color" href="#" style="border: 2px solid rgb(94, 73, 73); border-radius: 8px;">Breathless Music</a>
          <button class="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#navbarSupportedContent" aria-controls="navbarSupportedContent" aria-expanded="false" aria-label="Toggle navigation">
            <span class="navbar-toggler-icon span-col" ></span>
          </button>
          <div class="collapse navbar-collapse" id="navbarSupportedContent">
            <ul class="navbar-nav me-auto mb-2 mb-lg-0">
              <li class="nav-item">
                <a class="nav-link active navbar-brand-color hov-a" aria-current="page" href="../index.php">Home</a>
              </li>

              <li class="nav-item">
                <a class="nav-link navbar-brand-color hov-a" href="#about">About</a>
              </li>
              <li class="nav-item">
                <a class="nav-link navbar-brand-color hov-a" href="../registration.php">Register Now</a>
              </li>
              <!-- <li class="nav-item dropdown">
                <a class="nav-link dropdown-toggle navbar-brand-color hov-a" href="#" id="navbarDropdown" role="button" data-bs-toggle="dropdown" aria-expanded="false">
                  Dropdown
                </a>
                <ul class="dropdown-menu navbar-brand-color navbar-bg drop-hov" aria-labelledby="navbarDropdown">
                  <li><a class="dropdown-item drop-hov navbar-brand-color hov-a" href="#">Action</a></li>
                  <li><a class="dropdown-item drop-hov navbar-brand-color hov-a" href="#">Another action</a></li>
                  <li><hr class="dropdown-divider"></li>
                  <li><a class="dropdown-item drop-hov navbar-brand-color hov-a" href="#">Something else here</a></li>
                </ul>
              </li> -->
              <li class="nav-item">
                <a class="nav-link navbar-brand-color hov-a" href="../login.php" tabindex="-1" aria-disabled="true">Login</a>
              </li>
              <li class="nav-item">
                <a class="nav-link navbar-brand-color hov-a" href="../feedback.php" tabindex="-1" aria-disabled="true">Feedback</a>
                </li>
            </ul>
            <form class="d-flex">
              <input class="form-control me-2" id='searchbar' type="search" onkeyup="search_song()" placeholder="Search" aria-label="Search">
              <button class="btn btn-outline-success navbar-brand-color" type="submit">Search</button>
            </form>
          </div>
        </div>
      </nav>

    <!-- Navigation Bar Ends Here -->

<!-- Carousal Starts Here -->

<div id="carouselExampleCaptions" class="carousel slide" data-bs-ride="carousel">
    <div class="carousel-indicators">
      <button type="button" data-bs-target="#carouselExampleCaptions" data-bs-slide-to="0" class="active" aria-current="true" aria-label="Slide 1"></button>
      <button type="button" data-bs-target="#carouselExampleCaptions" data-bs-slide-to="1" aria-label="Slide 2"></button>
      <button type="button" data-bs-target="#carouselExampleCaptions" data-bs-slide-to="2" aria-label="Slide 3"></button>
    </div>
    <div class="carousel-inner">
      <div class="carousel-item active">
        <img src="../navjeet.jpg" class="d-block w-100" alt="...">
        <!-- <img src="https://source.unsplash.com/1100x400/?bollywood" class="d-block w-100" alt="..."> -->
        <div class="carousel-caption d-none d-md-block" style="font-weight: bolder; font-size: 50px; color: rgb(233, 233, 147);">
          <h2><a href="https://www.mr-jatt.im/Navjeet-top-songs.html">Navjeet Trending </a></h2>
          <p><a href="https://www.youtube.com/watch?v=1XEKIl2Z74I">Viah De Vaade </a></p>
        </div>
      </div>
      <div class="carousel-item">
        <!-- <img src="https://source.unsplash.com/1100x400/?dance" class="d-block w-100" alt="..."> -->
        <img src="../diljit.jpg" class="d-block w-100" alt="...">
        <div class="carousel-caption d-none d-md-block" style="font-weight: bolder; font-size: 50px; color: rgb(233, 233, 147);">
          <h2><a href="https://www.mr-jatt.im/artist/Diljit-Dosanjh.html"> Diljit Dosanjh </a></h2>
          <p><a href="https://www.mr-jatt.im/punjabi-music/album/489789/G-O-A-T-Diljit-Dosanjh-mp3-song.html">G.O.A.T - Trending Worldwide  </a></p>
        </div>
      </div>
      <div class="carousel-item">
        <img src="../shawn.jpg" class="d-block w-100" alt="...">
        <div class="carousel-caption d-none d-md-block" style="font-weight: bolder; font-size: 50px; color: rgb(233, 233, 147);">
          <h2><a href="https://www.youtube.com/user/qzMendShawqz">Shawn Mendes </a></h2>
          <p><a href="https://www.youtube.com/watch?v=lY2yjAdbvdQ">Treat You Better </a></p>
        </div>
      </div>
    </div>
    <button class="carousel-control-prev" type="button" data-bs-target="#carouselExampleCaptions"  data-bs-slide="prev">
      <span class="carousel-control-prev-icon" aria-hidden="true"></span>
      <span class="visually-hidden">Previous</span>
    </button>
    <button class="carousel-control-next" type="button" data-bs-target="#carouselExampleCaptions"  data-bs-slide="next">
      <span class="carousel-control-next-icon" aria-hidden="true"></span>
      <span class="visually-hidden">Next</span>
    </button>
  </div>

  <!-- Carousal Ends Here -->

  <!--Below Carousal Starts Here-->

  <nav class="nav nav-pills nav-fill navbar-bg" style="margin-top:1px ;">
    <a class="nav-link navbar-brand-color hov-a" aria-current="page" href="../index.php">Latest Releases</a>
    <a class="nav-link navbar-brand-color hov-a" href="../punjabi_hits/punjabi_hits.php">Punjabi Hits</a>
    <a class="nav-link navbar-brand-color hov-a" href="../bollywood_hits/bollywood_hits.php">Bollywood Hits</a>
    <a class="nav-link navbar-brand-color hov-a active" href="#" tabindex="-1" aria-disabled="true">English Songs</a>
  </nav>

  <!--Below Carousal Ends Here-->

  <!-- Div For Songs Starts Here-->

  <!-- <div class="container">
    <ul>
      <li class="lists">list 1</li>
      <li class="lists">list 2</li>
      <li class="lists">list 3</li>
      <li class="lists">list 4</li>
      <li class="lists">list 5</li>
    </ul>
  </div> -->

  <!--Media Query starts Here-->


  <ul class="list-group list-group-flush list-song songs">
    <li class="list-group-item navbar-bg navbar-brand-color  songs"><img src="eng_thumb1.jpg" style="height: 60px; width: 50px; border-radius: 30px;" > <a href="#" id= "mySong1" class="navbar-brand-color">Enrique Iglesias - Tonight (I m Lovin You)</a>  
    <audio id="mySong" controls preload="auto" style="float: right;">
      <source src="Tonight (I m Lovin You) (Official Music Video).mp3" type="audio/mpeg">
    </audio>
    <script>

      var mySong = document.getElementById("mySong");
      var mySong1 = document.getElementById("mySong1");
      mySong1.onclick = function(){
        mySong.play();
      }
      mySong1.ondblclick = function(){
        mySong.pause();
      }

    </script>
    <!-- <iframe width="420" height="345" src=""> -->
      <!-- <iframe style="border-radius: 20px;" width="180" height="180" src="https://www.youtube.com/embed/cl0a3i2wFcc" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe> -->
    <!-- </iframe> -->
  </li>
    <li class="list-group-item navbar-bg navbar-brand-color songs" >
      <img src="eng_thumb2.jpg" style="height: 60px; width: 50px; border-radius: 30px;" >
      <audio controls preload="auto" style="float: right;" src="I m an Albatraoz - AronChupa.mp3" type="audio/mpeg"></audio><a href="#" class="navbar-brand-color">AronChupa - I m an Albatraoz<!-- <embed src="G.O.A.T - Diljit Dosanjh.mp3" type="audio/mp3"> --></a> </li>
    <li class="list-group-item navbar-bg navbar-brand-color songs"><img src="eng_thumb3.jpg" style="height: 60px; width: 50px; border-radius: 30px;" > <audio controls preload="auto" style="float: right;" src="Enrique Iglesias - Heart Attack.mp3" type="audio/mpeg"></audio><a href="#" class="navbar-brand-color">Enrique Iglesias - Heart Attack</a></li>
    <li class="list-group-item navbar-bg navbar-brand-color songs"><img src="eng_thumb4.jpg" style="height: 60px; width: 50px; border-radius: 30px;" > <audio controls preload="auto" style="float: right;" src="Enrique Iglesias - Why Not Me.mp3" type="audio/mpeg"></audio><a href="#" class="navbar-brand-color">Enrique Iglesias - Why Not Me</a></li>
    <li class="list-group-item navbar-bg navbar-brand-color songs"><img src="eng_thumb5.jpg" style="height: 60px; width: 50px; border-radius: 30px;" > <audio controls preload="auto" style="float: right;" src="One Day At A Time.mp3" type="audio/mpeg"></audio><a href="#" class="navbar-brand-color">Enrique Iglesias - One Day At a Time</a></li>
  </ul>


    <!-- Script Starts To Stop And Play Song  -->

    <script>
      
      document.addEventListener('play', function(e){
    var audios = document.getElementsByTagName('audio');
    for(var i = 0, len = audios.length; i < len;i++){
        if(audios[i] != e.target){
            audios[i].pause();
        }
    }
  }, true);
  
    </script>
  
    <!-- Script Ends To Stop And Play Song  -->

      <!-- Search Functionality Starts Here -->

<script>

    // JavaScript code
    function search_song() {
      let input = document.getElementById('searchbar').value
      input=input.toLowerCase();
      let x = document.getElementsByClassName('songs');
      
      for (i = 0; i < x.length; i++) {
        if (!x[i].innerHTML.toLowerCase().includes(input)) {
          x[i].style.display="none";
        }
        else {
          x[i].style.display="list-item";				
        }
      }
    }


</script>

<!-- Search Functionality Ends Here -->



<div class="about navbar-brand-color navbar-bg" id="about" >
  <div class="col-lg-4">
   <img src="about_justin.jpg" alt="Justin Bieber" class="rounded-circle">
    <h2>Justin Bieber</h2>
    <p>
      The ‘Baby’ hitmaker, Justin Bieber is a Canadian singer and songwriter. Having achieved fame at a mere age of fourteen, Bieber has released four studio albums and twenty-nine singles. One of the world’s best-selling music artists, Bieber has been listed multiple times on Forbes’ list of ‘Top Ten Most Powerful Celebrities in the World’. The three-time Grammy Award-nominated pop star's fourth studio Purpose sold an estimate of 100 million records, making it his most successful album as of 2016. While endorsing various brands like Calvin Klein and Adidas, Bieber is an active supporter of Pencils of Promise, an organization focussed on providing education in developing countries. Apart from this, he is also associated with animal welfare and helps in raising funds for PETA.

Often considered to be a global phenomenon, Bieber has toured around the world with chartbusters like ‘Boyfriend’, ‘What Do You Mean?’, and ‘Sorry’ to his credit.
    </p>
    <p><a class="btn btn-secondary" href="https://en.wikipedia.org/wiki/Justin_Bieber">View details »</a></p>
  </div>
  
  <div class="col-lg-4">
   
    <img src="about_shawn.jpg" alt="Shawn Mendes" class="rounded-circle">
  
    <h2>Shawn Mendes</h2>
    <p>
      Canadian pop-heartthrob Shawn Mendes opens up about his life and takes us along a wild ride from doing sold-out arenas to working on new music to just chilling with his family and his girlfriend Camila Cabello.

The documentary opens with Mendes in the shower unable to speak cause of the strain on his vocal cords. Straight up this sets the tone of the film, where Shawn is trying to just be real and raw as he tells his life story to the world. This coming-of-age documentary takes us back to when Shawn started out by making vines in his bedroom, to his first concert at 15-years old, to him touring and doing 105 sold-out shows in cities across the globe.
    </p>
    <p><a class="btn btn-secondary" href="https://en.wikipedia.org/wiki/Shawn_Mendes">View details »</a></p>
  </div>
  
  <div class="col-lg-4">
  <img src="about_eminem.jpg" alt="Arijit_Singh" class="rounded-circle">
  
    <h2>Eminem</h2>
    <p>
      Eminem, born Marshall Bruce Mathers III, on October 17, 1972, in St. Joseph, Missouri, USA, is an American rapper, vocalist, soundtrack lyricist, author, and actor. He has been a part of popular hip pop bands like D12 and Bad Meets Evil. Eminem has sold nearly 170 million albums which ranks him as one of the world’s best-selling artists of all time. He has also written few books like Angry Blonde and The Way I Am. His movies include 8 Mile, The Wash, and 50 Cent: The New Breed.
    </p>
      <p><a class="btn btn-secondary" href="https://en.wikipedia.org/wiki/Eminem">View details »</a></p>
  </div>
  </div>



<!--Footer Starts Here-->

<div class="card text-center navbar-brand-color navbar-bg ">

  <div class="card-body navbar-bg">
    <h5 class="card-title">All Copyright Reserved</h5>
    <p class="card-text">About Creators : Aayush , Aditya , Anjali</p>
    <a href="../contact.php" class="btn btn-primary ">Contact Us</a>
  </div>
</div>

<!--Footer Ends Here-->
  </body>
</html>