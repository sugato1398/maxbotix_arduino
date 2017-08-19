void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(A0,INPUT);
}
int median(int a[],int n)
{
  int temp;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n-i-1;j++)
    {
      if (a[j]>a[j+1])
      {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
        
      }
    }
  }
  return a[n/2];
}
void loop() {
  int n,sum=0;
  int arr[10];
 // Serial.println(n);
  for(int i=0;i<10;i++)
  arr[i]=analogRead(A0);
  n=median(arr,10);
  Serial.println(n);
  sum=0;
  // put your main code here, to run repeatedly:

}
