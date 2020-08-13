const int FRENTEE = 12;
const int FRENTED = 11;

 
int byteEntrada = 0;
 
void setup(){
  Serial.begin(9600); // Em alguns casos poderá ser alterado o valor
  pinMode(FRENTEE,OUTPUT);
  pinMode(FRENTED,OUTPUT);

 
  digitalWrite(FRENTEE,LOW);
  digitalWrite(FRENTED,LOW);
  
}
 
 
 
void loop(){
    if(Serial.available()>0){
    byteEntrada = Serial.read();
    
    //IR PARA FRENTE
   // Poderia ser adicionado somente o comando após o else if porém quis dar a possibiidade de encerrar o comando antes dos 300 ms
      if(byteEntrada == '0'){
        digitalWrite(FRENTED,LOW);
      }else if(byteEntrada == '1'){   
       digitalWrite(FRENTED,HIGH);
       digitalWrite(FRENTEE,HIGH);     
       digitalWrite(FRENTED,LOW);
       digitalWrite(FRENTEE,LOW);
            
      }
      
    //GIRAR A DIREITA  
   // Poderia ser adicionado somente o comando após o else if porém quis dar a possibiidade de encerrar o comando antes dos 300 ms   
      if(byteEntrada == '2'){
        digitalWrite(FRENTED,LOW);
      }else if(byteEntrada == '3'){   
        digitalWrite(FRENTED,HIGH);
        delay(300);
        digitalWrite(FRENTED,LOW);    
        
        
      }
      
   //GIRAR A ESQUERDA   
   // Poderia ser adicionado somente o comando após o else if porém quis dar a possibiidade de encerrar o comando antes dos 300 ms 
      if(byteEntrada == '4'){
        digitalWrite(FRENTEE,LOW);
      }else if(byteEntrada == '5'){  
        digitalWrite(FRENTEE,HIGH);
        delay(300);
        digitalWrite(FRENTEE,LOW); 
            
      }
  }
}
