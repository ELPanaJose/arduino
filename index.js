const { Board, Led } = require('johnny-five');

let myBoard,led,led2,led3;

myBoard = new Board()

myBoard.on('ready', function() {
  led = new Led(13);
  led.strobe(3000);

  led2 = new Led(5);
  led2.strobe(2000);

  led3 = new Led(7);
  led3.strobe(1000)

});

myBoard.on('error',function(err){
  console.log(err);
});
