const { Board, Led } = require("johnny-five");
const board = new Board();

board.on("ready", () => {
  // Create an Led on pin 13
  const led = new Led(13);
  // Blink every half second
  led.blink(500);
});
