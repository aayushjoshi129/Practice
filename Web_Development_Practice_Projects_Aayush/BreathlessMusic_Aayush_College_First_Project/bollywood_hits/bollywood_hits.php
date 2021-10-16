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
    
    <title>Song Website</title>
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
              <input class="form-control me-2" id="searchbar" type="search" onkeyup='search_song()' placeholder="Search" aria-label="Search">
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
    <a class="nav-link navbar-brand-color hov-a active" href="#">Bollywood Hits</a>
    <a class="nav-link navbar-brand-color hov-a" href="../english_songs/english_songs.php" tabindex="-1" aria-disabled="true">English Songs</a>
  </nav>

  <!--Below Carousal Ends Here-->

  <!-- List For Songs Starts Here-->



  <ul class="list-group list-group-flush list-song songs">
        <li class="list-group-item navbar-bg navbar-brand-color songs"><img src="bolly_thumb1.jpg" style="height: 60px; width: 50px; border-radius: 30px;" > <a href="#" id= "mySong1" class="navbar-brand-color">Vibhor Parashar - Pyar Naal</a>  
        <audio id="mySong" controls preload="auto" style="float: right;">
          <source src="Pyar Naal.mp3" type="audio/mpeg">
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
          <img src="bolly_thumb2.jpg" style="height: 60px; width: 50px; border-radius: 30px;" >
          <audio controls preload="auto" style="float: right;" src="Phir Chala.mp3" type="audio/mpeg"></audio><a href="#" class="navbar-brand-color">Ginny Weds Sunny - Phir Chala <!-- <embed src="G.O.A.T - Diljit Dosanjh.mp3" type="audio/mp3"> --></a> </li>
        <li class="list-group-item navbar-bg navbar-brand-color songs"><img src="bolly_thumb3.jpg" style="height: 60px; width: 50px; border-radius: 30px;" > <audio controls preload="auto" style="float: right;" src="Teri Choriyaan Chhalaang.mp3" type="audio/mpeg"></audio><a href="#" class="navbar-brand-color">Chhalaang - Teri Choriyaan</a></li>
        <li class="list-group-item navbar-bg navbar-brand-color songs"><img src="bolly_thumb4.jpg" style="height: 60px; width: 50px; border-radius: 30px;" > <audio controls preload="auto" style="float: right;" src="Hai Dil Ye Mera.mp3" type="audio/mpeg"></audio><a href="#" class="navbar-brand-color">Hate Story 4 - Hai Dil Yeh Mera</a></li>
        <li class="list-group-item navbar-bg navbar-brand-color songs"><img src="bolly_thumb5.jpg" style="height: 60px; width: 50px; border-radius: 30px;" > <audio controls preload="auto" style="float: right;" src="Kinna Sona.mp3" type="audio/mpeg"></audio><a href="#" class="navbar-brand-color">Bhaag Johny - Kinna Sohna</a></li>
  </ul>

<!-- List For Songs Ends Here-->

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
   <img src="about_atif.jpg" alt="Atif Aslam" class="rounded-circle">
    <h2>Atif Aslam</h2>
    <p>
      Atif Aslam is a Pakistani pop singer. He was born in Wazirabad and educated in Lahore and Rawalpindi. He is widely recognized in South Asia and has given several hit songs such as Aadat, Woh Lamhe, Tere Bin, Pehli Nazar Mein, Tera Hone Laga Hoon, Tu Jaane Na and Meri Kahani. He is best known for his powerful vocal belting technique.

Early Life

Atif Aslam was born in Wazirabad, Pakistan. His kindergarten started in Model Town, Lahore at Kimberley Hall School. His first stage manifestation was in a fancy dress show at his school when he was in 1st grade, where he performed as Imran Khan (former captain of the Pakistani Cricket Team). Since then cricket was a passion for him. At that time he did not listen to any particular kind of songs.
    </p>
    <p><a class="btn btn-secondary" href="https://en.wikipedia.org/wiki/Atif_Aslam">View details »</a></p>
  </div>
  
  <div class="col-lg-4">
   
    <img src="about_jubin.jpg" alt="Jubin Nautiyal" class="rounded-circle">
  
    <h2>Jubin Nautiyal</h2>
    <p>
      Jubin Nautiyal is an Indian playback singer. He showed interest in music from a very young age and by the time he turned 18, he was a well known singer in his hometown, Dehradun. He debuted in Bollywood with `Ek Mulakaat` from the film Sonali Cable (2014).

He is better known for songs like Meherbaani (The Shaukeens), Zindagi Kuch To Bata (Bajrangi Bhaijaan), Kaabil Hoon (Kaabil), The Humma Song (Ok Jaanu), Bawra Mann (Jolly LLB 2), Ik Vaari Aa (Raabta), Socha Hai (Baadshaho), Lo Safar (Baaghi 2), Akh Lad Jaave (Loveyatri), and Tujhe Kitna Chahne Lage HUm (Kabir Singh).

Jubin was awarded `Upcoming Male Vocalist of the Year at 8th Mirchi Music Awards (2016) for `Zindagi Kuch to Bata from Bajrangi Bhaijaan.
    </p>
    <p><a class="btn btn-secondary" href="https://en.wikipedia.org/wiki/Jubin_Nautiyal">View details »</a></p>
  </div>
  
  <div class="col-lg-4">
  <img src="about_monali.jpg" alt="Monali Thakur" class="rounded-circle">
  
    <h2>Monali Thakur</h2>
    <p>
      Monali Thakur is an Indian playback singer, born in Kolkata. She belongs to a musical family, with her father being the famous Bengali singer, Shakti Thakur. Monali was a participant on the singing reality show, Indian Idol 2 and later, rose to fame with the super hit song, Zara Zara Touch Me (Race). In 2013, she won the Filmfare Award for Best Female Playback Singer for her song Sawaar Loon (Lootera). She won the National Film Award for Best Female Playback Singer for the song "Moh Moh Ke Dhaage" from the film Dum Laga Ke Haisha (2015). Thakur has also released her singles, "Tamanna" (2018), "Shy Mora Saiyaan" (2018), "O Re Naseeba" (2019), "Pani Pani Re" (2019), "Dugga Elo" (2019) and her latest single is "Dil Ka Fitoor" released in June 2020. Monali married Maik Richter, a restaurateur based in Switzerland, in 2017 but made the marriage public only in June 2020.
    </p>
      <p><a class="btn btn-secondary" href="https://en.wikipedia.org/wiki/Monali_Thakur">View details »</a></p>
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