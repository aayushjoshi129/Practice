const http = require('http');

const hostname = '127.0.0.1';
const port = 3000;

const server = http.createServer((req, res) => {
  res.statusCode = 200;
  res.setHeader('Content-Type', 'text/html');
  res.end(`<!DOCTYPE html>
  <html lang="en">
  <head>
      <meta charset="UTF-8">
      <meta http-equiv="X-UA-Compatible" content="IE=edge">
      <meta name="viewport" content="width=device-width, initial-scale=1.0">
      <title>NAVIGATION BAR</title>
  </head>
  <style>
   a {
          text-decoration: none;
          /* margin: 0; */
      font-size: 25px;
      font-family: italic;
      color: white;
      margin: 5px 20px;
          }
  li :hover
  {
      color:red;
  }
      .nav {
          background-color: black;
          border-radius: 15px;
      }
      .nav ul {
          overflow:auto;
      }
      .nav li {
          float: left;
          list-style-type:none;
           }
      .search {
          color: white;
          float: right;
          padding: 8px 36px;
      }
      #search
      {
          border-radius: 12px;
          width: 170px;
      }
  </style>
  <body>
     <header> <nav class="nav">
      <ul>
          <li><strong><a href="https://www.youtube.com">Youtube</a></strong></li>
          <li><strong><a href="https://www.google.com"> Google</a></strong></li>
          <li><strong><a href="https://www.hdyaar.com">HDYaar</a></strong></li>
          <li><strong><a href="https://www.facebook.com">Facebook</a></strong></li>
          <li><strong><a href="https://www.instagram.com">Instagram</a></strong></li>
          <div class="search">
              <input type="text" name="search" id="search" placeholder="Type Your Keyword Here">
          </div>
      </ul>
      </nav>
  </header>
  </body>
  </html>`);
});

server.listen(port, hostname, () => {
  console.log(`Server running at http://${hostname}:${port}/`);
});