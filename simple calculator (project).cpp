#include<iostream>
#include<math.h>
using namespace std;
int main()
{ 
int choice;
	//simple calculator
	cout<<"\t****************SIMPLE CALCULATOR******************\t\n";
	
	//Choose the choices given below to perform operation 
	
	cout<<"01. To perform Arithmetic operation\n";
	cout<<"02. To Find Largest Number among Three numbers\n";
	cout<<"03. To Find Average of N numbers\n";
	cout<<"04. To check whether the number is even or odd.\n";
	cout<<"05. To find whether the number is prime or not.\n";
	cout<<"06. To find the factorial of a number.\n";
	cout<<"07. To find roots of the equation and determine the nature of roots\n";
	cout<<"08. To find Cube root of a number\n";
	cout<<"09. To find Square root of a number\n";
	cout<<"10. To find Sine value of x (where x in the range of -1 to 1 in radians)\n";
	cout<<"11. To find Cosine value of x (where x in the range of -1 to 1 in radians)\n";
	cout<<"12. To find Tangent value of x (where x in the range of -1 to 1 in radians)\n";
	cout<<"13. To find Hyperbolic Sine of x\n";
	cout<<"14. To find Hyperbolic Cosine of x\n";
	cout<<"15. To find Hyperbolic Tangent of x\n";
	cout<<"16. To find logarithmic function of x\n";
	cout<<"17. To find logarithmic function to the base 10\n";
	cout<<"18. To find x to the power y\n";
	cout<<"19. Exit\n";
	
	
	while(1){
	
	//Enter the choice
	cout<<"Enter the choice to perform the operation: ";
	cin>>choice;
	
	//switch statement
	switch(choice){
		case 1:
			int choices,a,b;
			cout<<"Enter the first number: ";
			cin>>a;
			cout<<"Enter the second number: ";
			cin>>b;
			cout<<"Enter the choice to perform specific arithmetic operation: ";
			cin>>choices;
			//to choose the specific arithmetic operation
			switch(choices){
				int sum,sub,mul,div,mod;
				case 1:
				 sum=a+b;
					cout<<"The addition of "<<a<<" and "<<b<<" is: "<<sum<<"\n";
					break;
				case 2:
					 sub=a-b;
					cout<<"The Subtraction of "<<a<<" and "<<b<<" is: "<<sub<<"\n";
					break;
				case 3:
					mul=a*b;
					cout<<"The Product of "<<a<<" and "<<b<<" is: "<<mul<<"\n";
					break;
				case 4:
					 div=a+b;
					cout<<"The addition of "<<a<<" and "<<b<<" is: "<<div<<"\n";
					break;
				case 5:
					mod=a%b;
					cout<<"The Modulo of "<<a<<" and "<<b<<" is: "<<mod<<"\n";
				default:
					cout<<"Invalid Entry\n";
					
			}
			break;
		
		case 2:
			//Largest among three
			int c,d,e;
			cout<<"Enter the First number: ";
			cin>>c;
			cout<<"Enter the Second number: ";
			cin>>d;
			cout<<"Enter the Third number: ";
			cin>>e;
			if(c>d && c>e){
				cout<<c<<" is greatest among Three\n";
			}
			else if(d>c && d>e){
				cout<<d<<" is greatest among Three\n";
			}
			else{
				cout<<e<<" is greatest among Three\n";
			}
			break;
			
		
		//Find average of n numbers;
		case 3:
			int n,sum,arr[100];
			float avg;
			sum=0;
			cout<<"Enter the count of numbers: ";
			cin>>n;
			
			for(int i=1;i<=n;i++){
				cout<<"Enter the "<<i<<" number: ";
				cin>>arr[i];
			}
			for(int i=1;i<=n;i++){
						sum=sum+arr[i];
			}
			avg=float(sum)/n;
			cout<<"Average of Entered "<<n<<" number is: "<<avg<<"\n";
			
			break;
			
			//Even odd 
			case 4:
			int f;
			cout<<"Enter the number to check whether it is even or odd: ";
			cin>>f;
			if(f%2==0){
				cout<<f<<" is Even number\n";
			}
			else{
				cout<<f<<" is Odd number\n";
			}
			break;
			
			//Prime number
			case 5:
				int p;
				cout<<"Enter the number to check: ";
				cin>>p;
				int flag;
				flag=0;
				if(p==0 || p==1){
					flag=1;
				}
				for(int i=2;i<=p/2;i++){
					if(p%i==0){
						flag=1;
						break;
					}
				}
				if(flag==0){
					cout<<p<<" is a prime number\n";
				}
				else{
					cout<<p<<" is a non prime number\n";
				}
				break;
              
              //factorial
              case 6:
              	int fact, fa;
              	fact=1;
              	cout<<"Enter a number to find the factorial of a number: ";
              	cin>>fa;
              	for(int i=1;i<=fa;i++)
              	{
              		fact=fact*i;
				  }
				  cout<<"Factorial is : "<<fact<<"\n";
				  break;
				  
				  // roots and its nature
			  case 7:
				  	int fi, se, th;
    cout << "Enter coefficients a, b and c: ";
    cin >> fi >> se >> th;

    int dis;
	dis = (se * se) - (4 * fi * th); // Discriminant

    if (dis > 0) {
        // Two distinct real roots
        int r1 = (-se + sqrt(d)) / (2 * fi);
        int r2 = (-se - sqrt(d)) / (2 * fi);
        cout << "Roots are real and different.\n";
        cout << "Root 1 = " << r1 << endl;
        cout << "Root 2 = " << r2 << endl;
    }
    else if (dis == 0) {
        // Two equal real roots
        int r = -se / (2 * fi);
        cout << "Roots are real and equal.\n";
        cout << "Root = " << r << endl;
    }
    else {
        // Complex roots
        int real = -se/ (2 * fi);
        int imag = sqrt(-dis) / (2 * fi);
        cout << "Roots are complex and imaginary.\n";
        cout << "Root 1 = " << real << " + " << imag << "i\n";
        cout << "Root 2 = " << real << " - " << imag << "i\n";
    }

	break;
	  
	  //cube root
	       case 8:
	       	int cube;
	       	cout<<"Enter a number to find the cube root of: ";
	       	cin>>cube;
	       	int cu;
	       	cu=cbrt(cube);
	       	cout<<"Cube root is = "<<cu<<"\n";
	       	break;
	       	
	       	
	       	//square root
	       	case 9:
	       			int sqr;
	       	cout<<"Enter a number to find the square root of: ";
	       	cin>>sqr;
	       	int sq;
	       	sqr=sqrt(sqr);
	       	cout<<"square root is = "<<sq<<"\n";
	       	break;
	       	
	       	//sine value of x
	       	case 10:
	       		int x;
	       		cout<<"Enter the value to know the sine value: ";
	       		cin>>x;
	       		int si;
	       		si=sin(x);
	       		cout<<"The sine value of "<<x<<" is: "<<si<<"\n";
	       		break;
	       	
			   //cosine value of x	
	       	case 11:
	       	int y;
	       		cout<<"Enter the value to know the cosine value: ";
	       		cin>>y;
	       		int ce;
	       		ce=cos(x);
	       		cout<<"The cosine value of "<<y<<" is: "<<ce<<"\n";
	       		break;
	       		
	       	// tangent value of x	
	       	case 12:
	       		int t;
	       		cout<<"Enter the value to know the tangent value: ";
	       		cin>>t;
	       		int ta;
	       		ta=tan(x);
	       		cout<<"The tangent value of "<<t<<" is: "<<ta<<"\n";
	       		break;
	       		//sine hyperbolic value
	       	case 13:
	       		int hs;
	       		cout<<"Enter the value to know the hyperbolic sine value: ";
	       		cin>>hs;
	       		int hsi;
	       		hsi=sinh(x);
	       		cout<<"The hyperbolic sine value of "<<hs<<" is: "<<hsi<<"\n";
	       		break;
	       		
	       		
	       		//cosine hyperbolic value
	       	case 14:
	       		int hc;
	       		cout<<"Enter the value to know the hyperbolic cosine value: ";
	       		cin>>hc;
	       		int hce;
	       		hce=cosh(x);
	       		cout<<"The hyperbolic cosine value of "<<hc<<" is: "<<hce<<"\n";
	       		break;
	       	
	       	//hyperbolic tangent value
	       	case 15:
	       		int ht;
	       		cout<<"Enter the value to know the hyperbolic tangent value: ";
	       		cin>>ht;
	       		int hht;
	       		hht=tanh(x);
	       		cout<<"The hyperbolic tangent value of "<<ht<<" is: "<<hht<<"\n";
	       		break;
	       	
	       	//logarithmic function of x
	       	case 16:
	       		
	       	float lo;
	       	cout<<"Enter the value to know its logarithmic function: ";
	       	cin>>lo;
	       	float logo;
	       	logo=log(lo);
	       	cout<<"The logarithmic function of "<<lo<<" is: "<<logo<<"\n";
	       	break;
	       	
	       	//logarithmic function to the base 10
	       	case 17:
	       	float loten;
	       	cout<<"Enter the value to know its logarithmic function to the base 10: ";
	       	cin>>loten;
	       	float logon;
	       	logon=log10(lo);
	       	cout<<"The logarithmic function to the base 10 of "<<loten<<" is: "<<logon<<"\n";
	       	break;
	       	
	       	
	       	//x to the power y
	       	case 18:
	       	int power1,power2;
			   cout<<"Enter the value of x and y to know x to the power y: ";
			   cin>>power1>>power2;	
			   int po;
			   po=pow(power1,power2);
			   cout<<"The power of "<<power1<<" to the "<<power2<<" is: "<<po<<"\n";
			   break;
			   
			case 19:
				exit(0);
				break;
				
			default:
				cout<<"Invalid entry\n";
	       	
		}
	
		}
		return 0;
            
}


