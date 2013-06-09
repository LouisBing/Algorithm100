// #include <iostream>
// using namespace std;
// 
// int continumax(char *outputstr,char *intputstr)
// {
// 	int maxLength=0, finalStar;
// 	int locLength, locStar;
// 
// 	for(int i=0;intputstr[i];i++)
// 	{
// 		//ÊÇ>= <= ²»ÊÇ> <
// 		if(intputstr[i]>='0' && intputstr[i]<='9')
// 		{
// 			locStar = i;
// 			locLength = 0;
// 			while(intputstr[i] && intputstr[i]>='0' && intputstr[i]<='9')
// 			{
// 				locLength++;
// 				i++;
// 			}
// 			if (locLength>maxLength)
// 			{
// 				finalStar = locStar;
// 				maxLength = locLength;
// 			}
// 		}
// 	}
// 
// 	for (int i=0; i<maxLength; i++)
// 	{
// 		outputstr[i] = intputstr[finalStar+i];
// 	}
// 	outputstr[maxLength]=0;
// 	return maxLength;
// 
// }
// int main()
// {
// 	char instr[] = "25123456789abcd12345ed1ss123456789";
// 	char outstr[50];
// 
// 	int len = continumax(outstr, instr);
// 	cout << len << endl;
// 	cout << outstr << endl;
// 
// 	getchar();
// }