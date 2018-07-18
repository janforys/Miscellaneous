function odliczanie() <!-- To jest plik js (javascript), w ktorym umieszczona jest funkcja wykonujaca sie przy załadowaniu strony. Pokazuje ona aktualna date i czas. Wykonuje sie lokanie czyli na naszym komputerze -->
	{
	
		var dzisiaj = new Date();
		
		var dzien = dzisiaj.getDate();
		var miesiac = dzisiaj.getMonth()+1; 
		var rok = dzisiaj.getFullYear();
		
		var godzina = dzisiaj.getHours();
			if(godzina<10) godzina = "0"+godzina;
		var minuta = dzisiaj.getMinutes();
			if(minuta<10) minuta = "0"+minuta;
		var sekunda = dzisiaj.getSeconds();
			if(sekunda<10) sekunda = "0"+sekunda;
		
		document.getElementById("zegar").innerHTML = dzien+"/"+miesiac+"/"+
		rok+" | "+godzina+":"+minuta+":"+sekunda;
		
		setTimeout("odliczanie()",1000);
		
	}