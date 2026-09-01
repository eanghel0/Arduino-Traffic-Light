int red = 9;
int yellow = 8;
int green = 7;

void setup(){
  pinMode ( red, OUTPUT );
  pinMode ( yellow, OUTPUT );
  pinMode ( green, OUTPUT );
 
}

void loop(){
   digitalWrite ( red, HIGH );
   digitalWrite ( yellow, LOW );
   digitalWrite ( green, LOW );
   delay(2000);

   digitalWrite ( red, LOW );
   digitalWrite ( yellow, HIGH );
   digitalWrite ( green, LOW );
   delay(2000);

   digitalWrite ( red, LOW );
   digitalWrite ( yellow, LOW );
   digitalWrite ( green, HIGH );
   delay(2000);
   
}
