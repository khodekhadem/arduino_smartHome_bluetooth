// توضیحان رو بخون این در مورد بلوتوثه
//hello its a test to push and pull requests :)
String readString ;
String dd ;

int relay [5] = {0,8,9,10,11};
/* int relay1 = 8 ;
int relay2 = 9 ;
int relay3 = 10 ;
int relay4 = 11 ;
*/
int buttonState [5] ;
/* 
int buttonState_1 ;
int buttonState_2 ;
int buttonState_3 ;
int buttonState_4 ;
*/
int relay_state [5]; 
/* 
int relay_state_1 ;
int relay_state_2 ;
int relay_state_3 ;
int relay_state_4 ;
*/
int pre_relay_state [5] ;
/* 
int pre_relay_state_1 ;
int pre_relay_state_2 ;
int pre_relay_state_3 ;
int pre_relay_state_4 ;
*/
 
 int buttton_pin [5] = {00,7,6,5,4};
/* 
int buttton_pin_1 = 7 ;
int buttton_pin_2 = 6 ;
int buttton_pin_3 = 5 ;
int buttton_pin_4 = 4 ;*/
//-------------------------------------------------
void setup() {
  pinMode(relay[1] , OUTPUT); 
  pinMode(relay[2] , OUTPUT); 
  pinMode(relay[3] , OUTPUT); 
  pinMode(relay[4] , OUTPUT); 
  pinMode(buttton_pin [1] , INPUT); 
  pinMode(buttton_pin [2] , INPUT); 
  pinMode(buttton_pin [3] , INPUT); 
  pinMode(buttton_pin [4] , INPUT); 
  Serial.begin(9600);
  Serial.println("serial-delimit-21"); 
}
//--------------------------------------------------
void loop() { 
  
 dd =  bluestring();

        if(dd == "1"){
            relay_state [1] = change(relay_state [1]);
        }
    else if (dd == "2") {
        relay_state [2] = change(relay_state [2]);
    }
    else if (dd == "3") {
        relay_state [3] = change(relay_state [3]);
    }
    else if (dd == "4") {
        relay_state [4] = change(relay_state [4]);
    }
   
        /* if (dd == "on1") {
            relay_state [1] = 1;
        }
    else if (dd == "on2") {
        relay_state [2] = 1;
    }
    else if (dd == "on3") {
        relay_state [3] = 1;
    }
    else if (dd == "on3") {
        relay_state [3] = 1;
    }
    else if (dd == "on4") {
        relay_state [4] = 1;
    }
 //----------------------
        else if (dd == "off1") {
            relay_state [1] = 0;
        }
        else if (dd == "off2") {
            relay_state [2] = 0;
        }
        else if (dd == "off3") {
            relay_state [3] = 0;
        }
        else if (dd == "off3") {
        relay_state [3] = 0;
        }
        else if (dd == "off4") {
            relay_state [4] = 0;
        }
 //-----------------------------------------------------       
           */
           else if (dd == "vaz"){
       for (int i = 1 ; i<5 ; i++){
           Serial.print("relay_state ");
           Serial.print(i);
           Serial.print("==>>");
           Serial.println(relay_state [i]);
           delay(150);
           }
       }
                                    /*
                                        else if (dd == "vaz") {
                                            Serial.print("relay_state [1]");
                                                Serial.println(relay_state [1]);
                                                delay(100);
                                            Serial.print("relay_state [2]");
                                                Serial.println(relay_state [2]);
                                                delay(100);
                                            Serial.print("relay_state [3]");
                                                Serial.println(relay_state [3]);
                                                delay(100);
                                            Serial.print("relay_state [4]");
                                                Serial.println(relay_state [4]);
                                                delay(100);

                                        }*/


/* 
        if (dd == "on"){
            relay_state [1] = 1;
        }
            else if (dd == "off"){
                relay_state [1] = 0 ;
            }
            else if (dd == "vaz"){
                Serial.println(relay_state [1]);
            }
*/


buttonState[1] = digitalRead(buttton_pin [1]);
        if (buttonState[1] ==  HIGH){
            while (buttonState[1] == HIGH) {
            delay(20) ;
            buttonState[1] = digitalRead(buttton_pin [1]);
            }
            relay_state [1] = change(relay_state [1]);                 /* if( relay_state [1] == 1){
                                                                    relay_state [1] = 0 ;
                                                                    }
                                                                    else{
                                                                    relay_state [1] = 1 ;
                                                                    }  */      
        }

//buttonState[2] = digitalRead(buttton_pin [2]);
//        if (buttonState[2] ==  HIGH){
//            while (buttonState[2] == HIGH) {
//            delay(20) ;
//            buttonState[2] = digitalRead(buttton_pin [2]);
//            }
//            relay_state [2] = change(relay_state [2]);                  /* if( relay_state [2] == 1){
//                                                                    relay_state [2] = 0 ;
//                                                                    }
//                                                                    else{
//                                                                    relay_state [2] = 1 ;
//                                                                    }  */     
//        }
//
//buttonState[3] = digitalRead(buttton_pin [3]);
//        if (buttonState[3] ==  HIGH){
//            while (buttonState[3] == HIGH) {
//            delay(20) ;
//            buttonState[3] = digitalRead(buttton_pin [3]);
//            }
//            relay_state [3] = change(relay_state [3]) ;/* if( relay_state [3] == 1){
//                                                    relay_state [3] = 0 ;
//                                                    }
//                                                    else{
//                                                    relay_state [3] = 1 ;
//                                                    }  */     
//        }
//
//buttonState[4] = digitalRead(buttton_pin [4]);
//        if (buttonState[4] ==  HIGH){
//            while (buttonState[4] == HIGH) {
//            delay(20) ;
//            buttonState[4] = digitalRead(buttton_pin [4]);
//            }
//            relay_state [4] = change(relay_state [4]);/*if( relay_state [4] == 1){
//                                                    relay_state [4] = 0 ;
//                                                    }
//                                                    else{
//                                                    relay_state [4] = 1 ;
//                                                    }*/       
//        }
//
//
//
     

        

 pre_relay_state [1] = chek_with_pre(pre_relay_state [1],relay_state [1] , relay[1]);                                    /* 
                                if(pre_relay_state [1] != relay_state [1]){             

                                        if (relay_state [1] == 1){
                                            pre_relay_state [1] = relay_state [1] ;
                                            Serial.println("vaze rele 1");
                                            Serial.println(relay_state [1]);
                                            digitalWrite(relay[1], HIGH);
                                        }
                                        else if (relay_state [1] == 0){
                                            pre_relay_state [1] = relay_state [1] ;
                                            Serial.println("vaze rele 1");
                                            Serial.println(relay_state [1]);
                                            digitalWrite (relay[1], LOW);
                                        }
                                    delay(500);
                                } */
pre_relay_state [2]= chek_with_pre(pre_relay_state [2],relay_state [2],relay[2]);
    /* if(pre_relay_state [2] != relay_state [2]){             

            if (relay_state [2] == 1){
                pre_relay_state [2] = relay_state [2] ;
                Serial.println("vaze rele 2");
                Serial.println(relay_state [2]);
                digitalWrite(relay[2], HIGH);
            }
            else if (relay_state [2] == 0){
                pre_relay_state [2] = relay_state [2] ;
                Serial.println("vaze rele 2");
                Serial.println(relay_state [2]);
                digitalWrite (relay[2], LOW);
            }
        delay(500);
    }
*/
pre_relay_state [3]= chek_with_pre(pre_relay_state [3] , relay_state [3] , relay[3]);
  /*   if(pre_relay_state [3] != relay_state [3]){             

            if (relay_state [3] == 1){
                pre_relay_state [3] = relay_state [3] ;
                Serial.println("vaze rele 3");
                Serial.println(relay_state [3]);
                digitalWrite(relay[3], HIGH);
            }
            else if (relay_state [3] == 0){
                pre_relay_state [3] = relay_state [3] ;
                Serial.println("vaze rele 3");
                Serial.println(relay_state [3]);
                digitalWrite (relay[3], LOW);
            }
        delay(500);
    }
*/
pre_relay_state [4]= chek_with_pre( pre_relay_state [4] , relay_state [4] , relay[4] );
  /*  if(pre_relay_state [4] != relay_state [4]){             

            if (relay_state [4] == 1){
                pre_relay_state [4] = relay_state [4] ;
                Serial.println("vaze rele 4");
                Serial.println(relay_state [4]);
                digitalWrite(relay[4], HIGH);
            }
            else if (relay_state [4] == 0){
                pre_relay_state [4] = relay_state [4] ;
                Serial.println("vaze rele 4");
                Serial.println(relay_state [4]);
                digitalWrite (relay[4], LOW);
            }
        delay(500);
    }*/ 
}       
//---------------------------------------------------
String bluestring (){
  //این تابع متن رو به صورت استرین ذخیره میکنه و توی 
  //آخر تابع اون رو ریترن (برگردوندن) میکنه ولی فعلا 
  //پورت سریال جدایی نداره و باید بلوتوث رو به 0 و 1 
  //وصل کرد
  readString="";
  while (Serial.available()) {
    delay(10);  

    char c = Serial.read();
    if (c == ',') {
      break;
    }  
    readString += c;
  } 

  if (readString.length() >0) {
   
   /* if (readString == "kosar"){
      Serial.println("salllllllllaaaaam");
      }
      if(readString == "mamad"){
        digitalWrite(led , HIGH);
        }
        if (readString == "fateme"){
          digitalWrite(led , LOW);
          }
    //readString="";*/ 
  }
  return readString ; 
}
//______________________________________________________
int change (int a ){
if(a == 1){
    a = 0 ;
}
else { 
    a = 1 ;
}

return a ;
}
//__________________________________________________________--
int chek_with_pre (int pre_relay_state_11 , int relay_state_11 , int relay11 ){

if(pre_relay_state_11 != relay_state_11){             

            if (relay_state_11 == 1){
                pre_relay_state_11 = relay_state_11 ;
                Serial.print("vaze rele ");
                Serial.print(relay11-7);//منهای هفت برا اینه که اسم رله مثلا 3 عه ولی اسم پایه 10 
                Serial.print("==>>");
                Serial.println( relay_state_11 );
                digitalWrite(relay11, HIGH);//ممکنه این جا به مشکل بوخوره چون رله11 رو ممکنه بگه نمیشناسه اون موقع بد بختی دیگه
            }
            else if (relay_state_11 == 0){
                pre_relay_state_11 = relay_state_11 ;
                Serial.print("vaze rele ");
                Serial.print(relay11-7); //منهای هفت برا اینه که اسم رله مثلا 3 عه ولی اسم پایه 10 
                Serial.print("==>>");
                Serial.println(relay_state_11);
                digitalWrite (relay11, LOW);//ممکنه این جا به مشکل بوخوره چون رله11 رو ممکنه بگه نمیشناسه اون موقع بد بختی دیگه
            }
        delay(500);
     return pre_relay_state_11 ;
    }
}
void nemidonam (){
for (int i = 1 ; i < 5 ; i++){
buttonState[i] = digitalRead(buttton_pin [i]);
        if (buttonState[i] ==  HIGH){
            while (buttonState[i] == HIGH) {
            delay(20) ;
            buttonState[i] = digitalRead(buttton_pin [i]);
            }
            relay_state [i] = change(relay_state [i]);     /*if( relay_state [4] == 1){
                                                            relay_state [4] = 0 ;
                                                            }
                                                            else{
                                                            relay_state [4] = 1 ;
                                                            }*/       
        }

}


}

