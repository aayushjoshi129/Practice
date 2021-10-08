    setInterval(() =>{
        d = new Date();
        htime = d.getHours();
        mtime = d.getMinutes();
        stime = d.getSeconds();
        hroration = 30*htime + mtime/2;
        mrotation = 6*mtime + stime/10;
        srotation = 6*stime;

        hour.style.transform = `rotate(${hroration}deg)`;

        minute.style.transform = `rotate(${mrotation}deg)`;

        second.style.transform = `rotate(${srotation}deg)`;

    } , 1000);