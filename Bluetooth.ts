this._bluetoothSerial.available()
.then((number: any) => {
    this._bluetoothSerial.read()
    .then((data: any) => {
      if (data[0] == "D" && data[16] == "F") {
        this.measure1 = parseFloat(data[1]+data[2]+data[3]+data[4]+data[5]);
        this.measure2 = parseFloat(data[6]+data[7]+data[8]+data[9]+data[10]);
        this.measure3 = parseFloat(data[11]+data[12]+data[13]+data[14]+data[15]);

        this._bluetoothSerial.clear();
      }
    });
});
