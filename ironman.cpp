//header file

#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>



bondaryFill(int p,int q,int r,int s)
{
	int t;
	t=getpixel(p,q);
	if(t!=s && t!=r)
	{
		putpixel(p,q,r);
		
		delay(1);
		
		bondaryFill(p+1,q,r,s);
		bondaryFill(p-1,q,r,s);
		bondaryFill(p,q+1,r,s);
		bondaryFill(p,q-1,r,s);
		
	}
}

void main()
{
	int maxx,maxy;
	int gd=DETECT,gm;
	initgraph(&gd, &gm,"C:\\TURBOC3\\BGI");
	setcolor(BLUE);
	for(int i=0;i<639;i++)
	{
		line(0+i,0,0+i,479);
	}
	setcolor(14);
	//inner structure
	line(273,68,285,65);delay(50);
	line(285,65,298,63);delay(50);
	line(298,63,306,63);delay(50);
	line(306,63,314,65);delay(50);
	line(314,65,327,66);delay(50);
	line(327,66,334,68);delay(50);
	line(334,68,328,117);delay(50);
	line(328,117,279,117);delay(50);
	line(279,117,273,68);delay(50);
	bondaryFill(306,92,4,14);
	line(283,124,324,124);delay(50);
	line(324,124,324,178);delay(50);
	line(324,178,314,180);delay(50);
	line(314,180,304,182);delay(50);
	line(304,182,294,180);delay(50);
	line(294,180,283,178);delay(50);
	line(283,178,283,124);delay(50);
	bondaryFill(305,155,4,14);
	
	//outer structure
	line(335,100,339,68);delay(50);
	line(339,68,347,71);delay(50);
	line(347,71,352,73);delay(50);
	line(352,73,357,75);delay(50);
	line(357,75,360,77);delay(50);
	line(360,77,363,79);delay(50);
	line(363,79,368,82);delay(50);
	line(368,82,371,85);delay(50);
	line(371,85,375,89);delay(50);
	line(375,89,378,93);delay(50);
	line(378,93,382,97);delay(50);
	line(382,97,385,100);delay(50);
	line(385,100,386,112);delay(50);
	line(386,112,388,122);delay(50);
	line(388,122,389,135);delay(50);
	line(389,135,389,146);delay(50);
	line(389,146,389,159);delay(50);
	line(389,159,392,162);delay(50);
	line(392,162,395,165);delay(50);
	line(395,165,397,170);delay(50);
	
	line(397,170,398,173);delay(50);
	line(398,173,399,182);delay(50);
	line(399,182,399,191);delay(50);
	line(399,191,400,197);delay(50);
	line(400,197,398,207);delay(50);
	line(398,207,396,215);delay(50);
	line(396,215,393,222);delay(50);
	line(393,222,391,229);delay(50);
	line(391,229,390,231);delay(50);
	line(390,231,388,240);delay(50);
	line(388,240,385,251);delay(50);
	line(385,251,383,260);delay(50);
	line(383,260,381,267);delay(50);
	line(381,267,379,274);delay(50);
	line(379,274,378,287);delay(50);
	line(378,287,378,301);delay(50);
	line(378,301,377,306);delay(50);
	line(377,306,376,311);delay(50);
	line(376,311,374,318);delay(50);
	line(374,318,371,325);delay(50);
	line(371,325,367,332);delay(50);
	
	line(367,332,363,336);delay(50);
	line(363,336,360,341);delay(50);
	line(360,341,346,363);delay(50);
	line(346,363,339,370);delay(50);
	line(339,370,321,359);delay(50);
	line(321,359,284,359);delay(50);
	line(284,359,263,370);delay(50);
	line(263,370,258,363);delay(50);
	line(258,363,247,347);delay(50);
	line(247,347,240,336);delay(50);
	line(240,336,232,324);delay(50);
	line(232,324,227,311);delay(50);
	line(227,311,226,292);delay(50);
	line(226,292,223,255);delay(50);
	line(223,255,218,245);delay(50);
	line(218,245,217,231);delay(50);
	line(217,231,211,217);delay(50);
	line(211,217,208,204);delay(50);
	line(208,204,207,184);delay(50);
	line(207,184,208,174);delay(50);
	//check
	line(208,174,211,165);delay(50);
	line(211,165,217,157);delay(50);
	line(217,157,220,100);delay(50);
	line(220,100,228,92);delay(50);
	line(228,92,233,86);delay(50);
	line(233,86,239,81);delay(50);
	line(239,81,245,77);delay(50);
	line(245,77,254,73);delay(50);
	line(254,73,267,67);delay(50);
	line(267,67,271,100);delay(50);
	line(271,100,250,105);delay(50);
	line(250,105,246,90);delay(50);
	line(246,90,246,106);delay(50);
	line(246,106,237,111);delay(50);
	line(237,111,231,114);delay(50);
	line(231,114,225,120);delay(50);
	line(225,120,226,136);delay(50);
	line(226,136,227,148);delay(50);
	line(227,148,227,164);delay(50);
	line(227,164,227,206);delay(50);
	line(227,206,225,215);delay(50);
	
	line(225,215,221,231);delay(50);
	line(221,231,222,244);delay(50);
	line(222,244,223,249);delay(50);
	line(223,249,254,310);delay(50);
	line(254,310,253,318);delay(50);
	line(253,318,252,325);delay(50);
	line(252,325,251,331);delay(50);
	line(251,331,263,355);delay(50);
	line(263,355,272,354);delay(50);
	line(272,354,280,351);delay(50);
	line(280,351,294,352);delay(50);
	line(294,352,296,351);delay(50);
	line(296,351,298,350);delay(50);
	line(298,350,299,349);delay(50);
	line(299,349,307,349);delay(50);
	line(307,349,312,352);delay(50);
	line(312,352,327,352);delay(50);
	line(327,352,334,355);delay(50);
	line(334,355,341,355);delay(50);
	line(341,355,355,329);delay(50);
	line(355,329,353,321);delay(50);
	
	line(353,321,353,316);delay(50);
	line(353,316,357,306);delay(50);
	line(357,306,365,291);delay(50);
	line(365,291,371,281);delay(50);
	line(371,281,375,275);delay(50);
	line(375,275,378,266);delay(50);
	line(378,266,382,254);delay(50);
	line(382,254,384,242);delay(50);
	line(384,242,386,233);delay(50);
	line(386,233,385,227);delay(50);
	line(385,227,383,218);delay(50);
	line(383,218,381,212);delay(50);
	line(381,212,380,209);delay(50);
	line(380,209,381,120);delay(50);
	line(381,120,376,116);delay(50);
	line(376,116,373,114);delay(50);
	line(373,114,367,111);delay(50);
	line(367,111,359,108);delay(50);
	line(359,108,358,92);delay(50);
	line(358,92,353,104);delay(50);
	line(353,104,335,100);delay(50);
	
	line(375,89,367,111);delay(50);
	line(396,215,381,212);delay(50);
	line(367,332,355,329);delay(50);
	line(228,92,231,114);delay(50);
	line(211,217,227,206);delay(50);
	
	bondaryFill(349,88,4,14);
	bondaryFill(255,86,4,14);
	bondaryFill(384,138,4,14);
	bondaryFill(368,300,4,14);
	bondaryFill(302,355,4,14);
	bondaryFill(216,185,4,14);
	
	//right
	line(267,371,283,363);delay(50);
	line(283,363,320,363);delay(50);
	line(320,363,334,371);delay(50);
	line(334,371,327,372);delay(50);
	line(327,372,315,373);delay(50);
	line(315,373,291,373);delay(50);
	line(291,373,280,372);delay(50);
	line(280,372,267,371);delay(50);
	
	bondaryFill(299,368,4,14);
	//checked
	line(257,321,268,339);delay(50);
	line(268,339,276,329);delay(50);
	line(276,329,330,329);delay(50);
	line(330,329,338,339);delay(50);
	line(338,339,348,321);delay(50);
	line(348,321,349,330);delay(50);
	line(349,330,340,349);delay(50);
	line(340,349,338,351);delay(50);
	line(338,351,334,349);delay(50);
	line(334,349,328,346);delay(50);
	line(328,346,312,346);delay(50);
	line(312,346,311,345);delay(50);
	line(311,345,297,345);delay(50);
	line(297,345,296,347);delay(50);
	line(296,347,280,346);delay(50);
	line(280,346,269,350);delay(50);
	line(269,350,267,351);delay(50);
	line(267,351,256,332);delay(50);
	line(256,332,257,321);delay(50);
	
	bondaryFill(301,337,14,14);
	
	//1:47
	
	//head
	line(229,123,237,117);delay(50);
	line(237,117,242,115);delay(50);
	line(242,115,245,114);delay(50);
	line(245,114,251,112);delay(50);
	line(251,112,260,110);delay(50);
	line(260,110,266,107);delay(50);
	line(266,107,272,106);delay(50);
	line(272,106,279,182);delay(50);
	line(279,182,303,189);delay(50);
	line(303,189,326,182);delay(50);
	line(326,182,334,104);delay(50);
	line(334,104,346,109);delay(50);
	line(346,109,355,112);delay(50);
	line(355,112,361,115);delay(50);
	line(361,115,367,118);delay(50);
	line(367,118,373,121);delay(50);
	line(373,121,377,124);delay(50);
	line(377,124,375,133);delay(50);
	line(375,133,374,139);delay(50);
	line(374,139,373,145);delay(50);
	line(373,145,372,151);delay(50);
	//checked
	
	line(372,151,371,159);delay(50);
	line(371,159,370,167);delay(50);
	line(370,167,369,185);delay(50);
	line(369,185,369,186);delay(50);
	line(369,186,368,207);delay(50);
	line(368,207,369,214);delay(50);
	line(369,214,370,220);delay(50);
	line(370,220,329,236);delay(50);
	line(329,236,323,238);delay(50);
	line(323,238,319,241);delay(50);
	line(319,241,313,242);delay(50);
	line(313,242,306,243);delay(50);
	line(306,243,295,243);delay(50);
	line(295,243,284,243);delay(50);
	line(284,243,277,236);delay(50);
	line(277,236,272,235);delay(50);
	line(272,235,236,221);delay(50);
	line(236,221,237,212);delay(50);
	line(237,212,238,204);delay(50);
	line(238,204,239,205);delay(50);
	//checked
	line(239,205,240,196);delay(50);
	line(240,196,239,183);delay(50);
	line(239,183,238,174);delay(50);
	line(238,174,237,165);delay(50);
	line(237,165,236,161);delay(50);
	line(236,161,235,153);delay(50);
	line(235,153,233,146);delay(50);
	line(233,146,232,136);delay(50);
	line(232,136,230,128);delay(50);
	line(230,128,229,123);delay(50);
	line(279,182,236,221);delay(50);
	line(326,182,370,220);delay(50);
	
	bondaryFill(257,167,14,14);
	bondaryFill(300,217,14,14);
	bondaryFill(352,142,14,14);
	
	//Mouth
	line(234,232,244,247);delay(50);
	line(244,247,279,255);delay(50);
	line(279,255,283,249);delay(50);
	line(283,249,301,250);delay(50);
	line(301,250,318,249);delay(50);
	line(318,249,324,256);delay(50);
	line(324,256,361,249);delay(50);
	line(361,249,370,239);delay(50);
	line(370,239,370,251);delay(50);
	line(370,251,362,280);delay(50);
	line(362,280,331,324);delay(50);
	line(331,324,276,325);delay(50);
	line(276,325,245,281);delay(50);
	line(245,281,234,248);delay(50);
	line(234,248,234,232);delay(50);
	line(279,255,276,325);delay(50);
	line(324,256,331,324);delay(50); 
	
	bondaryFill(299,290,14,14);
	bondaryFill(261,276,14,14);
	bondaryFill(344,276,14,14);
	
	//1st eye
	
	for(int v=0; v<13; v++){
	line(235,225,277,242);delay(50);
	line(277,242,280,244);delay(50);
	line(280,244,278,248);delay(50);
	line(278,248,264,248);delay(50);
	line(264,248,248,242);delay(50);
	line(248,242,235,225);delay(50); 
	
	//2nd eye
	line(370,223,324,245);delay(50);
	line(324,245,326,248);delay(50);
	line(326,248,337,247);delay(50);
	line(337,247,349,245);delay(50);
	line(349,245,355,243);delay(50);
	line(355,243,370,231);delay(50);
	line(370,231,370,223);delay(50); 
	bondaryFill(254,238,v,14);
	bondaryFill(348,240,v,14);
		
	}
	
	bondaryFill(254,238,WHITE,14);
	bondaryFill(348,240,WHITE,14);
	getch();
	
		
	
}
