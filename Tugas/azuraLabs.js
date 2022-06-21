//Judul : Mengurutkan Data
/*
    Author : Rajendra Nohan
    Untuk menjalankan install nodejs terlebih dahulu lalu gunakan node (namafile) atau bisa
    menggunakan metode lain untuk mentest  program di bawah ini.
*/

function insertionSort(arr, n) 
{ 
    let i, j; 
    for (i = 1; i < n; i++)
    { 
        keyHarga = arr[i]['harga']; 
        keyRating = arr[i]['rating']; 
        keyLikes = arr[i]['likes']; 
        keyObject = arr[i];
        j = i - 1; 
        while (j >= 0 && ( arr[j]['harga'] > keyHarga || ( arr[j]['harga'] == keyHarga && arr[j]['rating'] > keyRating) || ( arr[j]['harga'] == keyHarga && arr[j]['rating'] == keyRating && arr[j]['likes'] > keyLikes ) ) ){
            
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        }
        arr[j + 1] = keyObject; 

    } 
} 
   
function printArray(arr, n) 
{ 
    let i; 
    console.log("|No|\tNama \t\t|\tHarga \t|\t Rating  \t|\t Likes \t|");
    for (i = 0; i < n; i++){
        arr[i]['nama'].length > 6 ? console.log("|" + (i+1) +" |\t" + arr[i]['nama'] + " \t|\t" + arr[i]['harga'] + "\t|\t   "+  arr[i]['rating'] + "    \t|\t"+ arr[i]['likes']+"\t|") : console.log("|" + (i+1) +" |\t" + arr[i]['nama'] + " \t\t|\t" + arr[i]['harga'] + "\t|\t   "+  arr[i]['rating'] + "    \t|\t"+ arr[i]['likes']+"\t|");
    }
} 
   
    let arr = [
        {
            "nama" : "Indomie",
            "harga" : 3000,
            "rating" : 5,
            "likes" : 150
        },
        {
            "nama" : "Laptop",
            "harga" : 4000000,
            "rating" : 4.5,
            "likes" : 123
        },
        {
            "nama" : "Aqua",
            "harga" : 3000,
            "rating" : 4,
            "likes" : 250
        },
        {
            "nama" : "SmartTV",
            "harga" : 4000000,
            "rating" : 4.5,
            "likes" : 42
        },
        {
            "nama" : "Headphone",
            "harga" : 4000000,
            "rating" : 3.5,
            "likes" : 90
        },
        {
            "nama" : "Very Smart TV",
            "harga" : 4000000,
            "rating" : 3.5,
            "likes" : 87
        }
    ]; 
    let n = arr.length; 
    console.log("Before Sorting :");
    printArray(arr, n); 
    console.log();
    console.log("After Sorting :");
    insertionSort(arr, n); 
    printArray(arr, n);