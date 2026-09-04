function fc(temp, unit) {
  if (unit === 'C' || unit === 'c') {
        const fahrenheit = Math.round((temp * 9 / 5) + 32);
        console.log(`${temp}C is equal to ${fahrenheit}F`);
  } else if (unit === 'F' || unit === 'f') {
        const celsius = (temp - 32) * 5 / 9;
        console.log(`${temp}F is equal to ${celsius}C`);
  } else {
        console.log("Invalid unit entered!");
  }
}

fc(100, 'C');
fc(32, 'F');
fc(25, 'X');