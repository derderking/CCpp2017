#include <stdio.h>
#include <time.h>
#include <math.h>
/*int pd(int n)
{
	for(int i=2;i<=sqrt(n);i++)                    //此程序用来打表 
	{
		if(n%i==0)
		return 0;
	}
	return 1;
}


int main(int argc, char** argv) 
{
	int a[1000];
	int tot=0;
	printf("a[0]=2\n");
	for(int i=3;i<1000;i++)
	{
		if(pd(i))
		{
			a[tot++]=i;
			printf("a[%d]=%d;\n",tot,i);
		}
	}
	return 0;
}  */
int main()
{
	clock_t t1=clock();
	int a[500];
	a[0]=2;
	a[1]=3;
	a[2]=5;
	a[3]=7;
	a[4]=11;
	a[5]=13;
	a[6]=17;
	a[7]=19;
	a[8]=23;
	a[9]=29;
	a[10]=31;
	a[11]=37;
	a[12]=41;
	a[13]=43;
	a[14]=47;
	a[15]=53;
	a[16]=59;
	a[17]=61;
	a[18]=67;
	a[19]=71;
	a[20]=73;
	a[21]=79;
	a[22]=83;
	a[23]=89;
	a[24]=97;
	a[25]=101;
	a[26]=103;
	a[27]=107;
	a[28]=109;
	a[29]=113;
	a[30]=127;
	a[31]=131;
	a[32]=137;
	a[33]=139;
	a[34]=149;
	a[35]=151;
	a[36]=157;
	a[37]=163;
	a[38]=167;
	a[39]=173;
	a[40]=179;
	a[41]=181;
	a[42]=191;
	a[43]=193;
	a[44]=197;
	a[45]=199;
	a[46]=211;
	a[47]=223;
	a[48]=227;
	a[49]=229;
	a[50]=233;
	a[51]=239;
	a[52]=241;
	a[53]=251;
	a[54]=257;
	a[55]=263;
	a[56]=269;
	a[57]=271;
	a[58]=277;
	a[59]=281;
	a[60]=283;
	a[61]=293;
	a[62]=307;
	a[63]=311;
	a[64]=313;
	a[65]=317;
	a[66]=331;
	a[67]=337;
	a[68]=347;
	a[69]=349;
	a[70]=353;
	a[71]=359;
	a[72]=367;
	a[73]=373;
	a[74]=379;
	a[75]=383;
	a[76]=389;
	a[77]=397;
	a[78]=401;
	a[79]=409;
	a[80]=419;
	a[81]=421;
	a[82]=431;
	a[83]=433;
	a[84]=439;
	a[85]=443;
	a[86]=449;
	a[87]=457;
	a[88]=461;
	a[89]=463;
	a[90]=467;
	a[91]=479;
	a[92]=487;
	a[93]=491;
	a[94]=499;
	a[95]=503;
	a[96]=509;
	a[97]=521;
	a[98]=523;
	a[99]=541;
	a[100]=547;
	a[101]=557;
	a[102]=563;
	a[103]=569;
	a[104]=571;
	a[105]=577;
	a[106]=587;
	a[107]=593;
	a[108]=599;
	a[109]=601;
	a[110]=607;
	a[111]=613;
	a[112]=617;
	a[113]=619;
	a[114]=631;
	a[115]=641;
	a[116]=643;
	a[117]=647;
	a[118]=653;
	a[119]=659;
	a[120]=661;
	a[121]=673;
	a[122]=677;
	a[123]=683;
	a[124]=691;
	a[125]=701;
	a[126]=709;
	a[127]=719;
	a[128]=727;
	a[129]=733;
	a[130]=739;
	a[131]=743;
	a[132]=751;
	a[133]=757;
	a[134]=761;
	a[135]=769;
	a[136]=773;
	a[137]=787;
	a[138]=797;
	a[139]=809;
	a[140]=811;
	a[141]=821;
	a[142]=823;
	a[143]=827;
	a[144]=829;
	a[145]=839;
	a[146]=853;
	a[147]=857;
	a[148]=859;
	a[149]=863;
	a[150]=877;
	a[151]=881;
	a[152]=883;
	a[153]=887;
	a[154]=907;
	a[155]=911;
	a[156]=919;
	a[157]=929;
	a[158]=937;
	a[159]=941;
	a[160]=947;
	a[161]=953;
	a[162]=967;
	a[163]=971;
	a[164]=977;
	a[165]=983;
	a[166]=991;
	a[167]=997;
	for(int i=0;i<168;i++)
		printf("%d ",a[i]);
	clock_t t2=clock();
	printf("\nrunning this program costs %d milliseconds\n",t2-t1);
	return 0;
}
