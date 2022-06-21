//Judul : Kalkulator Sederhana
/*
    Author : Rajendra Nohan
    Untuk menjalankan install nodejs terlebih dahulu lalu gunakan node (namafile) atau bisa
    menggunakan metode lain untuk mentest  program di bawah ini.
*/

function kalkulator(input) {
    data =  input.split(" ");

    //Convert data split to new type data
    opreand1 = parseInt(data[0]);
    operator = data[1];
    opreand2 = parseInt(data[2]);

    if(opreand1>1000000 || opreand2>1000000){
        return "error";
    }

    if(operator == "+"){
        return opreand1+opreand2;
    }else if(operator == "-"){
        return opreand1-opreand2;
    }else if(operator == "*"){
        return opreand1*opreand2;
    }else if(operator == "/"){
        return opreand1/opreand2;
    }else{
        return "error";
    }
}
console.log(kalkulator("13 + 187"));
console.log(kalkulator("134 - 11"));
console.log(kalkulator("8 * 7"));
console.log(kalkulator("16 / 4"));
console.log(kalkulator("1000000 / 2000000"));
