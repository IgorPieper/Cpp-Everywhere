#include <ncurses.h>
#include "life.cpp"
#include "eqipment.cpp"

int skip = 0;
int skipp = 0;
int slime = 0;
int krasno = 0;
int pusto = 0;

void pages(int ph, int pw, int &vic, int &hp, int &eq, int &cloak, int &ff){

	clear();
	life(hp,vic);
	eqip(eq);
	
	start_color();
	init_pair(30, COLOR_BLACK, COLOR_WHITE);
	init_pair(31, COLOR_CYAN, COLOR_BLACK);
	init_pair(32, COLOR_BLACK, COLOR_BLUE);
	init_pair(33, COLOR_BLACK, COLOR_RED);
	init_pair(34, COLOR_BLACK, COLOR_YELLOW);
	init_pair(35, COLOR_BLACK, COLOR_GREEN);
	
	attron(A_BOLD);

//5-4
	

	if(ph==5 && pw==4){
		
		attron(COLOR_PAIR(30));mvprintw(1, 50, "Dziedziniec przed zamkiem Władcy Demonów");attroff(COLOR_PAIR(30));
		mvprintw(4, 3, "Czy tego chcę, czy nie. Sam władca demonów zlecił mi pojmanie księżniczki z przeciwległego królestwa."); move(4,2); getch();
		mvprintw(4, 3, "Zdecydowanie nie będzie to łatwe zadanie, lecz raz się żyje. Jak tego nie zrobię to i tak Mroczny Generał skróci mnie o głowę."); move(4,2);
		mvprintw(6, 6, "Gdyby to tylko była gra i mógłbym cofnąć czas..."); move(4,2); getch();
        mvprintw(1, 50, "                                                                             ");
		
		attron(COLOR_PAIR(30));mvprintw(1, 50, "Poradnik");attroff(COLOR_PAIR(30));
		mvprintw(4, 3, "Przyszedł czas na objaśnienie zasad gry                                                                                                                                      ");
		mvprintw(6, 6, "                                                                                                                                    "); move(4,2); getch();
		mvprintw(4, 3, "Twoim głównym celem jest pojmanie księżniczki znajdującej się w przeciwległym królestwie ludzi w polu oznaczonym literką M."); move(4,2); getch();
		mvprintw(4, 3, "Po drodze czeka cię wiele przygód, bla bla bla wszyscy to znamy.                                                             "); move(4,2); getch();
		mvprintw(4, 3, "Twoja postać może poruszać się w 3 kierunkach, aczkolwiek nie może się cofać więc uważaj, gdyż może być to dosyć zgubne."); move(4,2); getch();
		mvprintw(4, 3, "Monitoruj swój pasek życia i balansuj swoim ekwipunkiem a może odnajdziesz dodatkowe zakończenia.                        "); move(4,2); getch();
		mvprintw(4, 3, "Upewnij się również, że znajdziesz jakiś płaszcz zanim wejdziesz do miasta.                         "); move(4,2); getch();
		mvprintw(4, 3, "To tyle ode mnie i życzę miłej gry.                                                                                 "); move(4,2);
		
	} 
	
//4-4
	
	else if(ph==4 && pw==4){
		attron(COLOR_PAIR(30));mvprintw(1, 50, "Królewskie Ogrody");attroff(COLOR_PAIR(30));
		mvprintw(4, 3, "Czego się spodziewasz bo usłyszeniu o Królewskich Ogrodach? Pięknej roślinności z różnych zakątków krainy?"); move(4,2); getch();
		mvprintw(6, 6, "Trawników wypełnionych po brzegi mieniącymi się wszelakimi kolorami świata kwiatów?"); move(6,5); getch();
		mvprintw(8, 6, "Idealnego balansu między pięknem natury, a geniuszem architektury?"); move(8,5); getch();
		
		mvprintw(4, 3, "Tutejszy ogród jest nieco inny. Znajdziesz tu tylko rozpacz i cierpienie, każdy metr kwadratowy pełny jest smętu i cierpienia.");
		mvprintw(6, 6, "Jedynie cierniaste krzaki róż są w stanie rosnąć w takim maraźmie. Ich odnogi są tu tak powszechne, że nie znajdziesz chodnika nieporośniętego tą plagą.");
		mvprintw(8, 6, "Każdy krok tutaj stanowi mieszankę sprytu z masochizmem.           "); move(4,2); getch();
		
		while(true){
		
			mvprintw(4, 3, "> Spróbuj zerwać różę (w)                                                                                                        ");
			mvprintw(6, 3, "> Odejdź bez słowa (d)                                                                                                                                                   ");
			mvprintw(8, 3, "> Twój wybór?                                                                                                                             "); move(8,2);

			int wybory = getch();

			if (wybory=='w' || wybory=='W'){

				hp=hp-10;
				eq=1;
				mvprintw(4, 3, " Ciemnoczerwona barwa róży zlewa się z kolorem krwii płynącej z twojej ręki. Oby ten kwiat był tego warty.");
				mvprintw(6, 1, "                                                           ");
				mvprintw(8, 1, "                                                           "); move(4,2);
				life(hp,vic);
				eqip(eq);
				break;
			} else if (wybory=='d' || wybory=='D'){
				mvprintw(4, 3, "Róże miłości najchętniej przyjmują się na grobach. Niech więc żałobnicy przelewają za nie krew w imię bezsensowności.");
				mvprintw(6, 1, "                                                           ");
				mvprintw(8, 1, "                                                           "); move(4,2);
				break;
			}
		
		}
			
	}

//3-4
	
	else if(ph==3 && pw==4) {
		attron(COLOR_PAIR(30));mvprintw(1, 50, "Królewskie Ogrody 2");attroff(COLOR_PAIR(30));
		mvprintw(4, 3, "Różane ogrody ciągną się kilometrami. Tylko nieliczni są w stanie dostać się w sam środek tego bezlitosnego miejsca. ");
		mvprintw(6, 6, "Stoi tu od dawien dawna, nikt nie wie jak długo fontanna tryskająca wodą rdzawego koloru."); move(4,2); getch();
		
		mvprintw(4, 3, "Nie pierwszy raz trafiasz do tego cichego miejsca. Nawet ptakom brakuje sił by się tutaj dostać.                              ");
		mvprintw(6, 6, "Tym bardziej dziwi obecność zakapturzonej osobistości, którą dostrzegasz zza fontanny.                       "); move(4,2); getch();
		
		mvprintw(4, 3, "Siedzi na jedynej jeszcze stojącej ławie, brązowy płaszcz okrywa calutkie jego ciało. Jego wzrok skierowany jest ku glebie."); 
		mvprintw(6, 6, "                                                                                                               ");  move(4,2); getch();
		
		while(true){
		
			mvprintw(4, 3, "Czy chcesz wejść w interakcję z nieznajomym?                                                                                  ");
			mvprintw(6, 6, "> Tak (w)");
			mvprintw(8, 6, "> Nie (d)"); move(4, 2);

			int wybory = getch();

			if(wybory=='w' || wybory=='W'){
				mvprintw(4, 3, "Podchodzisz do nieznajomego zadając kilka pytań. Nie wydaje się reagować.                                          ");
				mvprintw(6, 6, "                                    ");
				mvprintw(8, 6, "                                    "); move(4, 2); getch();
				mvprintw(4, 3, "Gdy znajdujesz się wystarczająco blisko postanawiasz złapać nieznajomego za ramię."); move(4, 2); getch();
				mvprintw(4, 3, "Zanim zdąrzyłeś to zrobić, nieznajomy wybełkotał jedno zdanie, wstał i odszedł.         "); move(4, 2); getch();
				mvprintw(4, 3, "Jego słowa były przestrogą, mówiącą by pod żadnym wypadkiem nie wchodzić do labolatorium.                   "); move(4, 2);
				break;
				
			} else if (wybory=='d' || wybory=='D'){
				mvprintw(4, 3, "Ciekawość może sprowadzić tylko zgubę.                                                  ");
				mvprintw(6, 6, "                                    ");
				mvprintw(8, 6, "                                    "); move(4, 2);
				break;
			}
		
		}
	}
	
//2-4
	
	else if(ph==2 && pw==4) {
		attron(COLOR_PAIR(30));mvprintw(1, 50, "Okolice labolatorium");attroff(COLOR_PAIR(30));
		mvprintw(4, 3, "Przemierzając gęstwinę róż dostrzegasz obrys budynku. Jest tylko jedna osoba na tyle szalona by mieszkać i pracować w takim miejscu.");
		mvprintw(6, 6, "Profesor, gdyż tak wszyscy go nazywają w wyniku jednego ze swoich eksperymentów wymazał swoje imię z istnienia."); 
		mvprintw(8, 6, "Czego by nie mówiły liczne legendy, stoisz teraz przed wejściem do jego rezydencji."); move(4,2); getch();
		
		while (true){
		
			mvprintw(4, 3, "Chcesz wejść?                                                                                                                                 ");
			mvprintw(6, 6, "> Tak (w)                                                                                                            ");
			mvprintw(8, 6, "> Nie (d)                                                                                                            "); move(4, 2);

			int wybory = getch();

			if(wybory=='w' || wybory=='W'){
				mvprintw(4, 3, "Powoli podchodzisz do drzwii i ciągniesz za klamkę. Twoim oczom ukazuje się blask tak jasny, że nie jesteś w stanie dostrzec tego co znajduje się po drugiej stronie."); move(4,2); getch();
				mvprintw(4, 3, "Ciemność spowija twe oczy, upadasz i jedyne co czujesz to powoli obejmujące twe ciało ciepło                                                                          "); move(4,2);
				vic = 5;
				break;
				
			} else if (wybory=='d' || wybory=='D'){
				mvprintw(4, 3, "Ciekawość to pierszy stopień do nieba. Odchodzisz, a Diabeł wie czy nie uratowała ci ta decyzja życia.                                                                ");
				mvprintw(6, 6, "                                    ");
				mvprintw(8, 6, "                                    "); move(4, 2);
				break;
			}
		}
	}
	
//6-4
	
	else if(ph==6 && pw==4) {
		attron(COLOR_PAIR(30));mvprintw(1, 50, "Koszary");attroff(COLOR_PAIR(30));
		mvprintw(4, 3, "Kto raz przechodził nieopodal, nie zapomni już nigdy tego specyficznego miejsca. Zapach potu, wymieszany z bólem i cierpieniem. Potworne krzyki, wieczny ruch."); move(4,2); getch();
		mvprintw(4, 3, "Lecz dziś jest inaczej. W okolicy jest spokojnie. Z koszarów nie dochodzą żadne dźwięki. Ten błogi spokój przykrywać może tylko jedną klątwę.                     "); move(4,2); getch();
		
		mvprintw(4, 3, "Wszyscy rekruci musieli wyruszyć na północ, po śmierć i chwałę w bezimiennym grobie.                                                           "); move(4,2);
	}

//7-4
	
	else if(ph==7 && pw==4) {
		attron(COLOR_PAIR(30));mvprintw(1, 50, "Kuźnia");attroff(COLOR_PAIR(30));
		mvprintw(4, 3, "Przechodząc się po części miejskiej królestwa demonów, postanawiasz zajść do kuźni po lepszy rynsztunek"); move(4,2); getch();
		mvprintw(4, 3, "Kowal na twoje nieszczęście wydawał się mocno przybity. Gdy podeszłeś wystarczająco blisko, zaczął rzucać w ciebie ostrymi przedmiotami.       "); move(4,2); getch();
		mvprintw(4, 3, "Nie pamiętasz kiedy ostatni raz biegłeś tak szybko. Lokalna demoniczna ludność nie pała chyba do ciebie zbytnią sympatią.                   "); move(4,2);
	}
	
//8-4	
	
	else if(ph==8 && pw==4) {
		attron(COLOR_PAIR(30));mvprintw(1, 50, "Plac Ofiarny");attroff(COLOR_PAIR(30));
		mvprintw(4, 3, "Chowając się przed nieprzychylnymi opiniami mieszkańców zaszedłeś na plac wykorzystywany przy świeckich uroczystościach."); move(4,2); getch();
		mvprintw(4, 3, "O tej porze roku nikogo nie powinno tutaj być, lecz ku twemu zdziwieniu przebiegła obok ciebie gromada demoniontek bawiąca się w wojnę."); move(4,2); getch();
		mvprintw(4, 3, "Jedno z nich cię rozpoznało i podarowało ci swój drewniany miecz. Jego słowa o spraniu tyłków ludziom cały czas rozbrzmiewa ci w głowie.  "); move(4,2);
		eq=2;
		eqip(eq);
	}

//3-6
	
	else if(ph==3 && pw==6) {
		attron(COLOR_PAIR(30));mvprintw(1, 50, "Ciemna Polana");attroff(COLOR_PAIR(30));
		mvprintw(4, 3, "Kraina Demonów znana jest ze swojej wszechobecnej czarnej trawy. Występuje ona w każdym zakątku tej krainy."); move(4,2); getch();
		mvprintw(4, 3, "Między kępami, bardzo rzadko można spotkać życiodajne rośliny. Są one koloru czerwonego ze zwięczeniem w kształcie serca."); move(4,2); getch();
		mvprintw(4, 3, "Zjedzenie takiej odbudowuje martwe komórki i podobno potrafi przywracać nawet martwych do życia.                              "); move(4,2); getch();
		mvprintw(4, 3, "Niestety przez swoje właściwości, rośliny te są tak bardzo wytrzewione, że nie ma szans abyś taką znalazł. "); move(4,2);
	}	
	
//5-6
	
	
	else if(ph==5 && pw==6){
		
		attron(COLOR_PAIR(30));mvprintw(1, 50, "Pole Graniczne");attroff(COLOR_PAIR(30));
		mvprintw(4, 3, "Po granice horyzontu rozciąga się jaskrawo zielona polana. Wszelakie kwiaty przebijają się w gęstwinie traw tworząc pejzaż niespotykanych na codzień kolorów.");
		mvprintw(6, 6, "Widok ten od wieków oddzielała świat demonów od pozostałych istnień zamieszkujących tutejsze krainy. "); move(4,2); getch();
		
		mvprintw(4, 3, "Opowieści postronnych gości prawią, iż gdy księżyc okaże swą pełnią chwałę, usłyszeć tudzież można przeraźliwe krzyki poległych niegdyś wojaków.                ");
		mvprintw(6, 6, "Polana ta mimo że pięknym jest mirażem, kryje pod sobą hektolitry przelanej krwi ślepo powtarzającej się historii dzielnych umarlaków. "); move(4,2);
	}

//6-6
	
	else if(ph==6 && pw==6){
		attron(COLOR_PAIR(30));mvprintw(1, 50, "Siedziba Kultystów");attroff(COLOR_PAIR(30));
		mvprintw(4, 3, "W tym z pozoru rozpadającym się budynku można znaleźć rozległy kompleks podziemnych labiryntów. Tylko kultyści potrafią się w nim odnaleźć.");
		mvprintw(6, 6, "Na szczęście udało mi się jednego z nich spotkać tuż przy wejściu."); move(4,2); getch();
		
		mvprintw(4, 3, "Ciemny kaptur przykrywał mu twarz, jego głos wydawał się dochodzić z wielu miejsc jednocześnie. Mam dla ciebie zadanie - rzekł.                ");
		mvprintw(6, 6, "Weź ten list i dostarcz go do kultysty na moczarach, znajdziesz go wypowiadając ten złowrogi cytat."); move(4,2); getch();
		
		eq=5;
		eqip(eq);
		
		mvprintw(4, 3, "Sed ut aliquid comedat dulce.                                                                                                         ");
		mvprintw(6, 6, "                                                                                                                                        "); move(4,2); getch();
		
		mvprintw(4, 3, "A teraz idź, od twoich czynów zależy przyszłość naszego kultu."); move(4,2);
	}

//7-6
	
	else if(ph==7 && pw==6){
		attron(COLOR_PAIR(30));mvprintw(1, 50, "Brama Miejska");attroff(COLOR_PAIR(30));
		mvprintw(4, 3, "Wychodząc z miasta jeden ze strażników w imię zasad grzmotnął cię w tył głowy.");move(4,2);
		hp=hp-20;
		life(hp, vic); getch();
		
		while(true){
		
			mvprintw(4, 3, "Nie było to zbyt miłe zachowanie. Chcesz odpłacić pięknym za nadobne?              ");
			mvprintw(6, 6, "Dwóch na jednego?! Bułka z masłem. (w)");
			mvprintw(8, 6, "Pas, nie warci są mojego czasu. (d)");move(4,2);

			int wybory = getch();

			if(wybory=='w' || wybory=='W'){
				mvprintw(4, 3, "Z miejsca rozwaliłeś nos jednemu ze strażników. Chcieli zabawy to zabawę otrzymają.");
				mvprintw(6, 6, "                                                             ");
				mvprintw(8, 6, "                                                                 ");move(4,2); getch();
				
				if(eq==2){
					mvprintw(4, 3, "Twój miecz mieni się w pełnej chwale. Powaliłeś dwóch strażników zanim pozostali czterej zdąrzyli dobiec.");
					mvprintw(6, 6, "Wystarczy tej błazenady. Oddaliłeś się w blasku słońca.");move(4,2);
					break;
				} else{
					mvprintw(4, 3, "Nie była to twoja najdumniejsza walka, lecz co rozwaliłeś to twoje.                                   ");move(4,2);
					hp=hp-30;
					life(hp, vic);
					break;
				}	
			} else if(wybory=='d' || wybory=='D'){
				mvprintw(4, 3, "Z daleka słyszysz śmiech i wyzwiska ze strony strażników. Zachowaj ten gniew. Na pewno nie jeden raz się przyda.              ");
				mvprintw(6, 6, "                                                             ");
				mvprintw(8, 6, "                                                                 ");move(4,2);
				break;
			}
		}
	}

//2-8
	
	else if(ph==2 && pw==8){
		attron(COLOR_PAIR(30));mvprintw(1, 50, "Podejrzany chodnik");attroff(COLOR_PAIR(30));
		mvprintw(4, 3, "Idąc sobie polaną, dostrzegasz chodnik. Jego obecność tutaj wydaje się bardzo podejrzana."); move(4,2); getch();
		
		while(true){
		
			mvprintw(4, 3, "Chcesz przejść się chodnikiem i zobaczyć dokąd prowadzi?                                     ");
			mvprintw(6, 6, "Jasne (w)");
			mvprintw(8, 6, "Lepiej nie (d)");move(4,2);

			int wybory = getch();

			if(wybory=='w' || wybory=='W'){
				mvprintw(4, 3, "Idziesz spokojnie chodnikiem jak gdyby nigdy nic. Gdzieś w końcu musi cię doprowadzić prawda?               ");
				mvprintw(6, 6, "                                                             ");
				mvprintw(8, 6, "                                                                 ");move(4,2); getch();
				mvprintw(4, 3, "To żywy chodnik, stworzony z żywych kamieni stwór, pojawia się znikąd i pożera istoty, które po nim chodzą. "); move(4,2);
				hp=hp-100;
				life(hp,vic);
				break;
			} else if(wybory=='d' || wybory=='D'){
				mvprintw(4, 3, "Chodnik ha, pewnie ma jeszcze zęby. Lepiej zostawię go w spokoju.                ");
				mvprintw(6, 6, "                                                             ");
				mvprintw(8, 6, "                                                                 ");move(4,2);
				break;
			}
		}
	}	
	
//3-8, 5-8, 7-8
	
	else if((ph==3 && pw==8) || (ph==5 && pw==8) || (ph==7 && pw==8)){
	
		attron(COLOR_PAIR(30));mvprintw(1, 50, "Wilgotne Polany");attroff(COLOR_PAIR(30));
		if(slime==0){
			mvprintw(4, 3, "Wilgotna rosa ociera się o twoje szaty. Świeże powietrze trafia do twoich nozdrzy. Dzień idealny."); move(4,2); getch();
			mvprintw(4, 3, "No prawie. Ten jeden złowrogi Slime naciera właśnie w twoją stronę.                               "); move(4,2); getch();
		} else if(slime==1){
			mvprintw(4, 3, "Delektując się rześkim powietrzem, spoglądasz w dal, a zza pleców wyłania się Slime."); move(4,2); getch();
		} else if(slime==2){
			mvprintw(4, 3, "Ah jaki piękny ... kolejny Slime."); move(4,2); getch();
		}
		slime++;
		
		if(eq==2){
			mvprintw(4, 3, "Trzy z miecza od lewej, raz od prawej i basta. Slime to dla mnie żadne wyzwanie.                "); move(4,2);
		} else{
			mvprintw(4, 3, "Wrrr, dlaczego się to tak klei. Ciekawe czy kiedykolwiek się domyję.                              "); move(4,2);
			hp=hp-10;
			life(hp,vic);
		}
		
	}

//4-8
	
	else if(ph==4 && pw==8){
		attron(COLOR_PAIR(30));mvprintw(1, 50, "Polanna Niespodzianka");attroff(COLOR_PAIR(30));
		mvprintw(4, 3, "Jest rano, a ty właśnie rozpoczynasz swoją podróż. Jeszcze z zaspanymi oczami wyruszasz przed siebie."); move(4,2); getch();
		mvprintw(4, 3, "A raczej taki miałeś plan, zrobiłeś zaledwie parenaście kroków i wdepnąłeś w kaktusa. Tak KAKTUSA na środku polany."); move(4,2); getch();
		hp=hp-10;
		life(hp, vic);
		mvprintw(4, 3, "Następnym razem zapamiętasz, aby nie wstawać z lewej nogi.                                                             "); move(4,2);
	}
	
//2-10
	
	else if(ph==2 && pw==10){
		attron(COLOR_PAIR(30));mvprintw(1, 50, "Żabie zalewisko");attroff(COLOR_PAIR(30));
		mvprintw(4, 3, "Nie bój żaby, są rzeczy straszniejsze na tym świecie. Jak żywe kamienie, czy chodniki. "); move(4,2); getch();
		mvprintw(4, 3, "Kurki czyli zakopane kury z grzybią czupryną, Kaczury czyli ogromne kaczki z wąsami jak kot."); move(4,2); getch();
		mvprintw(4, 3, "Traworośle, czyli pnącza wciągające i duszące pod wodą...                                         "); move(4,2); getch();
		mvprintw(4, 3, "Gdy już miałeś odejść dostrzegłeś armię żab uzbrojonych po zęby. Dosłownie nawet naparstki z ostrzami miały. "); move(4,2); getch();
		mvprintw(4, 3, "Zostawiłeś krasnoludka podróżnika przemierzającego wodne tereny międzynarodowe na pastwę żab.                    "); move(4,2);
	}
	
//3-10, 4-10, 5-10, 6-10, 7-10, 8-10
	
	else if(pw==10 && (ph==3 || ph==4 || ph==5 || ph==6 || ph==7 || ph==8)){
		attron(COLOR_PAIR(30));mvprintw(1, 50, "Domniemane Królestwo Krasnali");attroff(COLOR_PAIR(30));
		if(krasno==0){
			mvprintw(4, 3, "Właśnie spotkałeś krasnala ogrodowego, który oznajmił ci że jest to teren ich nowo powstałego królestwa."); move(4,2); getch();
			mvprintw(4, 3, "Oznajmił również, że ...                                                                                   "); move(4,2);
			mvprintw(4, 3, "Zanim zdążył dokończyć spuściłeś mu łomot."); move(4,2);
		} else if(krasno==1){
			mvprintw(4, 3, "Właśnie spotkałeś dwa krasnale ogrodowego, które oznajmiły ci że jest to teren ich nowo powstałego królestwa."); move(4,2); getch();
			mvprintw(4, 3, "Nie chciały cię przepuścić, więc musiałeś im spuścić łomot.                                                      "); move(4,2);
			if(eq!=2){
				hp=hp-10;
				life(hp, vic);
			}
		} else if(krasno==2){
			mvprintw(4, 3, "Właśnie spotkałeś trzy krasnale ogrodowego, które oznajmiły ci że jest to teren ich nowo powstałego królestwa."); move(4,2); getch();
			mvprintw(4, 3, "Nie chciały cię przepuścić, więc musiałeś im spuścić łomot.                                                      "); move(4,2);
			if(eq!=2){
				hp=hp-20;
				life(hp, vic);
			}
		} else if(krasno==3){
			mvprintw(4, 3, "Właśnie spotkałeś cztery krasnale ogrodowego, które oznajmiły ci że jest to teren ich nowo powstałego królestwa."); move(4,2); getch();
			mvprintw(4, 3, "Nie chciały cię przepuścić, więc musiałeś im spuścić łomot.                                                      "); move(4,2);
			if(eq==2){
				hp=hp-10;
				life(hp, vic);
			} else{
				hp=hp-30;
				life(hp, vic);
			}
		} else if(krasno==4){
			mvprintw(4, 3, "Właśnie spotkałeś pięć krasnali ogrodowych, które oznajmiły ci że jest to teren ich nowo powstałego królestwa."); move(4,2); getch();
			mvprintw(4, 3, "Nie chciały cię przepuścić, więc musiałeś im spuścić łomot.                                                      "); move(4,2);
			if(eq==2){
				hp=hp-20;
				life(hp, vic);
			} else{
				hp=hp-40;
				life(hp, vic);
			}
		} else if(krasno==5){
			mvprintw(4, 3, "Właśnie spotkałeś sześć krasnali ogrodowych, które oznajmiły ci że jest to teren ich nowo powstałego królestwa."); move(4,2); getch();
			mvprintw(4, 3, "Nie chciały cię przepuścić, więc musiałeś im spuścić łomot.                                                      "); move(4,2);
			if(eq==2){
				hp=hp-30;
				life(hp, vic);
			} else{
				hp=hp-50;
				life(hp, vic);
			}
		}
		krasno++;
	}
	
//3-12
	
	else if(ph==3 && pw==12){
		attron(COLOR_PAIR(30));mvprintw(1, 50, "Moczary");attroff(COLOR_PAIR(30));
		mvprintw(4, 3, "Bagno otoczone gęstą mgłą. W powietrzu czuć zgnilinę i słychać cały pejzaż dźwięków, których nigdy nie chciałbyś słyszeć.");
		mvprintw(6, 6, "Lepiej się z tego miejsca jak najszybciej wynieść."); move(4,2); getch();
		
		if(eq==5){
		
			mvprintw(4, 3, "Nadszedł czas na złowrogi cytat. Jest tylko jeden problem, nie pamiętam jak on brzmiał...                                       ");
			mvprintw(6, 6, "                                                                                             "); move(4,2); getch();
			
			mvprintw(4, 3, "Gdy już miałeś odejść pojawiła się postać odziana w maskę przypominającą komara i rzekłą - Wyczuwam, że masz dla mnie list.");
			mvprintw(6, 6, "Bardzo dobrze, weź teraz tą fiolkę i udaj się na zamglone wzgórze."); move(4,2);
			
			eq=6;
			eqip(eq);
			
		}
	}

//5-12
	
	else if(ph==5 && pw==12){
		
		attron(COLOR_PAIR(30));mvprintw(1, 50, "Błotniste Równiny");attroff(COLOR_PAIR(30));
		mvprintw(4, 3, "Lepkie błoto klei się do całego twojego rynsztunku, śmierdzący odór wypala ci nozdrza. Nie idealny dzień."); move(4,2); getch();
		
		if(slime==3){
			mvprintw(4, 3, "Trzy Slimy gryzą kwiatki od spodu. Jeden więcej już nie robi różnicy. To że jest trochę większy i ma koronę nic nie zmienia."); move(4,2); getch();
			mvprintw(4, 3, "A jednak zmienia. Walka rozgorzała na dobre. Epickie wymachy przecieły powietrze. Nawet wyszkolony żołnierz miałby problem by nadąrzyć za nimi wzrokiem. "); move(4,2); getch();
			mvprintw(4, 3, "Pojedynek był tak EPICKI, że nie ma słów aby go opisać. I na końcu zwyciężca mógł być tylko jeden.                                                           "); move(4,2); getch();
			
			if(eq==2){
				mvprintw(4, 3, "Stoisz wyprostowany na polu walki, lecz gorycz w twych ustach przykrywa cały blask zwycięstwa.                               "); move(4,2); getch();
				mvprintw(4, 3, "Oto twój partner - drewniany miecz, leży połamany w błotnistej breji.                                "); move(4,2);
				eq=0;
				eqip(eq);
			} else if (eq!=2){
				hp=hp-30;
				life(hp,vic);
				mvprintw(4, 3, "To tak smakuje prawdziwe zwycięstwo. Padasz na glebę. Czas chyba na mały odpoczynek.                        "); move(4,2); getch();
			}
			if(hp<=0){
					mvprintw(4, 3, "Ztrudzone oczy powoli się zamykają, cały ten smród i lepkość jakby przestaje ci przeskadzać. To chyba koniec ..    . "); move(4,2); getch();
			}
		} else{
			mvprintw(4, 3, "Ale przynajmniej w tak brzydkim miejscu nie ma Slimów.                                                                         "); move(4,2); getch();
		}
	}	

//6-12
	
	else if(ph==6 && pw==12){
		
		attron(COLOR_PAIR(30));mvprintw(1, 50, "Jasna Strona");attroff(COLOR_PAIR(30));
		mvprintw(4, 3, "Drogi pamiętniczku. Dzisiejszy dzień nie zaczął się zbyt dobrze."); move(4,2); getch();
		mvprintw(4, 3, "Gdy tylko wstałem, zorientowałem się że jestem cały pogryziony przez mrówki. Całe ciało mnie strasznie szczypie i nie mogę się przestać drapać"); move(4,2); getch();
		mvprintw(4, 3, "Na śniadanie próbowałem zjeść ostatniego podpłomyka, którego przygotowałem na tą wyprawę, lecz zapomniałem że zjadłem go wczoraj.                 "); move(4,2); getch();
		mvprintw(4, 3, "Wykąpać też się nie mogłem, gdyż nigdzie w pobliżu nie mogłem znaleźć wody. A przy próbie umycia zębów szczoteczka wylądowała w błocie."); move(4,2); getch();
		mvprintw(4, 3, "Drogi pamiętniczku, jest dopiero dziesiąta. Boję się że mogę nie dożyć jutra.          .            ..                  Czy to niedźwiedź?    .           .          "); move(4,2); getch();
		mvprintw(4, 3, "Ku przestrodze . . . nigdy nie rozbijaj lustra drabiną patrząc na czarnego kota, który gra na tamburynie.                                                      "); move(4,2); getch();
		mvprintw(4, 3, "...                                                                                                                    "); move(4,2); getch();
		mvprintw(4, 3, "Wyrzuciłeś znaleziony dziennik. CO za głupstwo przecież w tym świecie jeszcze nie ma luster. Czekaj CO?"); move(4,2);
	}
	
//8-12
	
	else if(ph==8 && pw==12){
		attron(COLOR_PAIR(30));mvprintw(1, 50, "Mroczna Jaskinia");attroff(COLOR_PAIR(30));
		mvprintw(4, 3, "Postanowiłeś wejść do pobliskiej jaskini. Szybko zorientowałęś się jednak iż nie był to zbyt dobry pomysł.");
		mvprintw(6, 6, "Klaustrofobiczne przejścia, prawie całkowity mrok i upiorne dźwięki."); move(4,2); getch();
		
		mvprintw(4, 3, "Powoli pojawiające się zmęczenie i głód przechyliły czarę goryczy. Postanowiłeś zawrócić.                       ");
		mvprintw(6, 6, "                                                                      "); move(4,2); getch();
		
		mvprintw(4, 3, "Gdy byłeś dosłownie obok wyjścia dziwna istota zaszła ci drogę. Nie przypominała ona żadnej widzianej przez ciebie wcześniej istoty.    ");
		mvprintw(6, 6, "Zielony stwór nie zważając na twoje ostrzeżenia rzucił się na ciebie. Nie miałeś innego wyjścia sięgnąłeś za broń. "); move(4,2); getch();
		
		mvprintw(4, 3, "Jednym silnym uderzeniem powaliłeś oponenta. Z jego paszczy wydobył się syk, a powietrze wypełnił zapach siarki.                         ");
		mvprintw(6, 6, "                                                                                                                      "); move(4,2); getch();
		
		mvprintw(4, 3, "Potężny wybuch wypełnił jaskinię.                                                                                              "); move(4,2); getch();
		
		hp=hp-40;
		life(hp,vic);
		mvprintw(4, 3, "Do końca swoich dni będziesz dziękował swemu ciału za tak szybki refleks, ");
		mvprintw(6, 6, "  który pozwolił ci odskoczyć wystarczająco daleko by uniknąć śmiertelnych obrażeń.  "); move(4,2);
	}

//2-14
	
	else if(ph==2 && pw==14){
		attron(COLOR_PAIR(30));mvprintw(1, 50, "Nie głęboka woda");attroff(COLOR_PAIR(30));
		mvprintw(4, 3, "Czy to Kra-b-ken?! Legendarny morski potwór, zatapiający statki swoimi gigantycznymi szczypcami. CO oN TutAj rOBi? "); move(4,2); getch();
		mvprintw(4, 3, "Ale serio ta woda nawet nie jest głęboka. W najgłębszym miejscu był może z metr głębokości.                             "); move(4,2); getch();
		mvprintw(4, 3, "Naprawdę nie wiem kto to wymyślił, aczkolwiek naciągnął granice fizyki na zupełnie nowy level.  "); move(4,2); getch();
		hp=hp-10;
		life(hp, vic);
		mvprintw(4, 3, "Twoje wywody ściągnęły na ciebie karę z niebios. Grzmot z czystego nieba też był zacnym zjawiskiem.  "); move(4,2);
	}
	
//4-14
	
	else if(ph==4 && pw==14){
		
		attron(COLOR_PAIR(30));mvprintw(1, 50, "Szpital Polowy Zielonego Minusa");attroff(COLOR_PAIR(30));
		mvprintw(4, 3, "Organizacja nonprofit pomagająca ludzią wyleczyć swoje rany całkowicie za darmo. Aż dobry uczynek nie skorzystać."); move(4,2); getch();
		hp = 100;
		life(hp,vic);
		mvprintw(4, 3, "Cały wiążący cię ból znika. Czujesz ukojenie w najczystrzej postaci. Twoje ciało dziękuje ci po stokroć.              "); move(4,2);
	}

//7-14
	
	else if(ph==7 && pw==14){
		attron(COLOR_PAIR(30));mvprintw(1, 50, "Wzgórze Żywych Kamieni");attroff(COLOR_PAIR(30));
		mvprintw(4, 3, "Tak bratku do ciebie mówię - powiedział kamień.  "); move(4,2); getch();
		mvprintw(4, 3, "Nawet nie udawaj, że mnie nie słyszysz. Kopsnąłem ci wahę 3 miechy temu, nie gadoj że ci się zapomło."); move(4,2); getch();
		mvprintw(4, 3, "Za 3 miechole to takie procenty ci wyliczyłem, że bongol ci zaraz w gardle zapieje.                      "); move(4,2); getch();
		mvprintw(4, 3, "Lepieja ci mówie, już kredyta bierz u Marcjana, be ci na życie mioł.                         "); move(4,2); getch();
		mvprintw(4, 3, "Nie mogąc znieść pomówień ze strony kamienia, zagrałeś nim w kaczki W GÓRACH."); move(4,2); getch();
		mvprintw(4, 3, "...                                                                                         "); move(4,2); getch();
		mvprintw(4, 3, "Cisza spokój. I nagle..."); move(4,2); getch();
		mvprintw(4, 3, "Sorry Mareczku, naprawdę nie chciałem z tym tak zwlekać. Wiem, że masz żonę i dwójkę dzieci i potrzebujesz bym ci te pieniądze oddał."); move(4,2); getch();
		mvprintw(4, 3, "Mareczku? ... prysnąłeś w siną dal, byle jak najdalej od tego miejsca.                                                                     "); move(4,2);
	}

//3-16
	
	else if(ph==3 && pw==16){
		attron(COLOR_PAIR(30));mvprintw(1, 50, "Komarze Moczary");attroff(COLOR_PAIR(30));
		mvprintw(4, 3, "Właśnie użarł cię komar."); move(4,2); getch();
		hp=hp-20;
		life(hp, vic);
		
		int licznik = 0;
		
		while(true){
		
			mvprintw(4, 3, "Jeśli chcesz odzyskać stracone życie, musisz zabić komara");
			mvprintw(6, 6, "> Uderz komara (w)");
			mvprintw(8, 6, "> Odejdź (d)");move(4,2);
			
			int wybory = getch();
			
			if(wybory=='w' || wybory=='W'){
				
			mvprintw(6, 6, "                                                 ");
			mvprintw(8, 6, "                                                 ");
				
				if(licznik==12){
					mvprintw(4, 3, "Właśnie obrzezałeś komara. Ten fakt tak go zabolał, że postanowił oddać ci krew.  ");move(4,2);
					hp=hp+20;
					life(hp, vic);
					break;
				} else{
					mvprintw(4, 3, "Pudło                                                     ");move(4,2); getch();
					licznik++;
				}
			}else if (wybory=='d' || wybory=='D'){
				break;
			}
		}
	}
	
//5-16
	
	else if(ph==5 && pw==16){
		attron(COLOR_PAIR(30));mvprintw(1, 50, "Kraina Zagadek");attroff(COLOR_PAIR(30));
		mvprintw(4, 3, "Przed oczami pojawiła ci się magiczna istota odziana w kapelusz, płaszcz i maskę zakrywającą twarz."); move(4,2); getch();
		mvprintw(4, 3, "Oznajmiła iż musisz rozwiązać trzy zagadki inaczej czeka cię sroga kara. Oto treść pierwszej zagadki:      "); move(4,2); getch();
		
		while(true){

			mvprintw(4, 3, "Gargulec - ojciec Kamila ma trzech synów. Kolejno Kacpra, Melchiora i ostatniego imienia nie pamiętam. Proszę przypomnij mi:");
			mvprintw(6, 6, "Imię syna to - Baltazar (w)");
			mvprintw(8, 6, "Imię syna to - Kacper (d)");
			mvprintw(10, 6, "Imię syna to - Kamil (s)"); move(4,2);

			int wybory = getch();	

			if(wybory=='w' || wybory=='W' || wybory=='d' || wybory=='D'){
				mvprintw(4, 3, "Błąd                                                                                                                                  ");
				mvprintw(6, 6, "                                            ");
				mvprintw(8, 6, "                                              ");
				mvprintw(10, 6, "                                                       "); move(4,2);
				hp=hp-10;
				life(hp, vic);
				break;
			}else if (wybory=='s' || wybory=='S'){
				mvprintw(4, 3, "Poprawnie                                                                                                                                ");
				mvprintw(6, 6, "                                            ");
				mvprintw(8, 6, "                                              ");
				mvprintw(10, 6, "                                                       "); move(4,2);
				break;
			}
		}
		
		mvprintw(4, 3, "Czas na drugą zagadkę: "); move(4,2); getch();
		
		while(true){

			mvprintw(4, 3, "Czerwony ork przebywa w czerwonym domu, Zielony w zielonym domu, a Brązowy w brązowym domu przebywa. Kto przebywa w białym domu?");
			mvprintw(6, 6, "Biały Ork  (w)");
			mvprintw(8, 6, "Biały dom jest pusty (d)");
			mvprintw(10, 6, "Prezydent (s)"); move(4,2);

			int wybory = getch();	

			if(wybory=='w' || wybory=='W' || wybory=='d' || wybory=='D'){
				mvprintw(4, 3, "Błąd                                                                                                                                  ");
				mvprintw(6, 6, "                                            ");
				mvprintw(8, 6, "                                              ");
				mvprintw(10, 6, "                                                       "); move(4,2);
				hp=hp-20;
				life(hp, vic);
				break;
			}else if (wybory=='s' || wybory=='S'){
				mvprintw(4, 3, "Poprawnie                                                                                                                                ");
				mvprintw(6, 6, "                                            ");
				mvprintw(8, 6, "                                              ");
				mvprintw(10, 6, "                                                       "); move(4,2);
				break;
			}
		}
		
		mvprintw(4, 3, "Finałowa zagadka, czeka cię już za moment. Daj mi tylko złapać oddech."); move(4,2); getch();
		
		while(true){

			mvprintw(4, 3, "Jakiej wielkości jest mapa w tym świecie?                                                                                           ");
			mvprintw(6, 6, "5 na 11 (w)");
			mvprintw(8, 6, "6 na 12 (d)");
			mvprintw(10, 6, "7 na 13 (s)"); move(4,2);

			int wybory = getch();	

			if(wybory=='w' || wybory=='W' || wybory=='d' || wybory=='D'){
				mvprintw(4, 3, "Błąd                                                                                                                                  ");
				mvprintw(6, 6, "                                            ");
				mvprintw(8, 6, "                                              ");
				mvprintw(10, 6, "                                                       "); move(4,2);
				hp=hp-30;
				life(hp, vic);
				break;
			}else if (wybory=='s' || wybory=='S'){
				mvprintw(4, 3, "Poprawnie                                                                                                                                ");
				mvprintw(6, 6, "                                            ");
				mvprintw(8, 6, "                                              ");
				mvprintw(10, 6, "                                                       "); move(4,2);
				break;
			}
		}
		
	}
		
//6-16
	
	else if(ph==6 && pw==16){
	
		attron(COLOR_PAIR(30));mvprintw(1, 50, "Bardzo popularne miejsce turystyczne");attroff(COLOR_PAIR(30));
		mvprintw(4, 3, "Echem odbija się tudzież młodzieńczych marzeń sen. Każdy słyszał o mieczu, który w skałę wbity jest.");
		mvprintw(6, 6, "I o tym jednym co zdoła go z kamienia wydobyć. A imię jego po wsze czasy w historii odbije się. "); move(4,2); getch();
		
		mvprintw(4, 3, "Sięgnąłeś po miecz. Determinacja wypełniła twą duszę. Ruszyło się coś ksztynę. Miecz z kamienia oswobodził, lecz tylko połowę jego zaczął dzierżyć");
		mvprintw(6, 6, "Miecz z legend u jego stóp na połowę przełamany.                                                  "); move(4,2); getch();
		
		mvprintw(4, 3, "Sprzedawca pobliskich suwenirów na wieść o twym wielkim dokonaniu rzucił w ciebie plastikowym mieczem w imię zniszczonego biznesu.                  ");
		hp=hp-10;
		life(hp,vic);
		if(eq!=0){
			while(true){
				mvprintw(4, 3, "Czy chcesz wymienić swój przedmiot, na plastikowy miecz?                                                                                          ");
				mvprintw(6, 6, "Tak (w)                                                          ");
				mvprintw(8, 6, "Nie (d)                                                          "); move(4,2);
				int wybory = getch();

				if(wybory=='w' || wybory=='W'){
					eq=3;
					eqip(eq);
					mvprintw(4, 3, "                                                             ");
					mvprintw(8, 3, "                                                             ");
					break;
				} else if (wybory=='d' || wybory=='D'){
					mvprintw(4, 3, "                                                             ");
					mvprintw(8, 3, "                                                             ");
					break;
				}
			}
		} else{
			eq=3;
			eqip(eq);
		}
		mvprintw(6, 6, "                                                             "); move(4,2);
		
	}

//8-16
	
	else if(ph==8 && pw==16){
		attron(COLOR_PAIR(30));mvprintw(1, 50, "Głęboki Dół");attroff(COLOR_PAIR(30));
		mvprintw(4, 3, "Anty bohater idzie beztrosko po ośnieżonych górach. Nie patrzy pod nogi, mapę trzyma do góry nogami.");
		mvprintw(6, 6, "Po prostu rewelacyjnie, co może pójść nie tak."); move(4,2); getch();
		
		mvprintw(4, 3, "Gigantyczna dziura przykryta śniegiem jasno oznaczona na mapie pojawiłą się jakby znikąd.             ");
		mvprintw(6, 6, "Lot w dół był czasochłonny i wypełniony pytaniami retorycznymi."); move(4,2); getch();
		
		hp=hp-90;
		life(hp, vic);
		
		if(hp>0){
			mvprintw(4, 3, "Nie widzę logicznego wytłumaczenia na to jak udało ci się przeżyć... teraz tylko stąd wyjdź milordzie.");
			mvprintw(6, 6, "                                                                                         "); move(4,2);
		}
	}

//2-18
	
	else if(ph==2 && pw==18){
		attron(COLOR_PAIR(30));mvprintw(1, 50, "Zatoka Piratów");attroff(COLOR_PAIR(30));
		mvprintw(4, 3, "Kto by pomyślał, że spotkamy piratów na takich płyciznach. Do nich faktycznie można się dostać z każdego zakątka świata.");
		mvprintw(6, 6, "Nawet jak władze ich zdejmą to zawsze wracają."); move(4,2); getch();
		
		mvprintw(4, 3, "Ściągneliśmy mapę z ich kajuty, pobraliśmy jedną łopatę z ich magazynu. A nawet przejrzeliśmy ich książki o Torze i Entach.");
		mvprintw(6, 6, "                                                       "); move(4,2); getch();
		
		if(eq!=0){
			while(true){
				mvprintw(4, 3, "Czy chcesz wymienić swój przedmiot, na łopatę?                                                                                          ");
				mvprintw(6, 6, "Tak (w)                                                          ");
				mvprintw(8, 6, "Nie (d)                                                          "); move(4,2);
				int wybory = getch();

				if(wybory=='w' || wybory=='W'){
					eq=9;
					eqip(eq);
					mvprintw(6, 3, "                                                             ");
					mvprintw(8, 3, "                                                             ");
					break;
				} else if (wybory=='d' || wybory=='D'){
					mvprintw(4, 3, "                                                             ");
					mvprintw(8, 3, "                                                             ");
					break;
				}
			}
		} else{
			eq=9;
			eqip(eq);
		}
		
		mvprintw(4, 3, "Idąc za wskazówkami, skarb powinien się znajdować na polu otoczonym z dwóch stron miastem.                                    "); move(4,2);
	}

//4-18 	
	
	else if(ph==4 && pw==18){
		attron(COLOR_PAIR(30));mvprintw(1, 50, "Zimna Noc");attroff(COLOR_PAIR(30));
		mvprintw(4, 3, "W zmroku dostrzegłeś bestię o czarnej jak smoła karnacji, która praktycznie całkowicie zlewała się z otoczeniem."); move(4,2); getch();
		mvprintw(4, 3, "Jej oczy błyszczały neonowym zielonym, wraz z jej pazuram. Z każdym jej krokiem czułeś jakby twoje życie skracało się o połowę."); move(4,2); getch();
		mvprintw(4, 3, "Wtem roztąpiły się niebiosa i pojawił się On - Uskrzydlony czerwony byk. Bitwa rozgorzała na stałe.                                "); move(4,2); getch();
		mvprintw(4, 3, "Iż ci życie miłe, uciekłeś wiedząc że zapewne nigdy już więcej nie będziesz miał okazji na zobaczenie tak energetyzującej potyczki."); move(4,2);
	}

//6-18
	
	else if(ph==6 && pw==18){
		attron(COLOR_PAIR(30));mvprintw(1, 50, "Losowe Wzgórze");attroff(COLOR_PAIR(30));
		mvprintw(4, 3, "Idąc po całkiem nie równym terenie dostrzegasz coś na niebie."); move(4,2); getch();
		mvprintw(4, 3, "Czy to ptak? Czy to smok? Czy to teletenżarka do akupunktury?   "); move(4,2); getch();
		mvprintw(4, 3, "Nie...                                                                     "); move(4,2); getch();
		mvprintw(4, 3, "To niemożliwe..."); move(4,2); getch();
		mvprintw(4, 3, "To Le-Go-las wykonujący swój popisowy numer. Tri_SiX_YYY NO_SKOPEE łukiem trzema strzałami jednocześnie."); move(4,2); getch();
		mvprintw(4, 3, "To był dopiero niezapomniany widok..                                                                           "); move(4,2);
	}
	
//7-18
	
	else if(ph==7 && pw==18){
		attron(COLOR_PAIR(30));mvprintw(1, 50, "Zamglone wzgórze");attroff(COLOR_PAIR(30));
		mvprintw(4, 3, "Mgła gęsta jak mleko. Mimo usilnych prób nie jesteś w stanie zrobić z niej płatków. Oczywiście najpierw wlewając mleko.");
		mvprintw(6, 6, "Dodatkowo płatki wrzucając dopiero po podgrzaniu mleka."); move(4,2); getch();
		
		if(eq==6){
		
			mvprintw(4, 3, "Ciekawe co było pierwsze mgła, czy kultyści.                                                                          ");
			mvprintw(6, 6, "                                                                                             "); move(4,2); getch();
			
			mvprintw(4, 3, "Z losowej dziury w ziemi wychodzi kultysta ubrany w maskę kreta i rzecze - Za prawdę powiadam ci mleko dobre jest, ale tylko bezlaktozy.");
			mvprintw(6, 6, "A teraz weź ten patyk nie mówiąc nic i zanieś go do kultysty mieszkającego w ciemnym lesie"); move(4,2);
			eq=7;
			eqip(eq);
		}
	}

//3-20
	
	else if(ph==3 && pw==20){
	
		attron(COLOR_PAIR(30));mvprintw(1, 50, "Bezbłędny Las");attroff(COLOR_PAIR(30));
		mvprintw(4, 3, "W otaczającej nas przyrodzie możemy uświadczyć naprawdę nietypowe anomalię."); move(4,2); getch();
		mvprintw(4, 3, "Przechodzisz obok sosenki i mijasz 10 grzybów.                                "); move(4,2); getch();
		mvprintw(4, 3, "Przechodzisz obok sosenki i mijasz 1 grzyba.    "); move(4,2); getch();
		mvprintw(4, 3, "Przechodzisz obok sosenki i mijasz 0 grzybów.    "); move(4,2); getch();
		mvprintw(4, 3, "Przechodzisz obok sosenki i mijasz 0.38 grzyba.    "); move(4,2); getch();
		mvprintw(4, 3, "Przechodzisz obok sosenki i mijasz -7 grzybów.    "); move(4,2); getch();
		mvprintw(4, 3, "Przechodzisz obok sosenki i mijasz Qweeexd grzybów.    "); move(4,2); getch();
		mvprintw(4, 3, "I tak w końcu siadasz koło takiej sosenki i zastanawiasz się. Czy grzyby były warte tych wszystkich testów"); move(4,2);
		
		
	}

//5-20
	
	else if(ph==5 && pw==20){
		attron(COLOR_PAIR(30));mvprintw(1, 50, "Osuwisko");attroff(COLOR_PAIR(30));
		mvprintw(4, 3, "Pomimo nachodzącego zmęczenia postanowiłeś dalej kontynuować podróż mimo nadejścia zmroku.  "); move(4,2); getch();
		mvprintw(4, 3, "Decyzję tą szybko zweryfikował niechybny los. Wpadłeś do Osuwiska. Gdy zrobiłeś w nim krok, zapaliły się pochodnie tworząc spory okrąg w około ciebie. "); move(4,2); getch();
		mvprintw(4, 3, "Na ziemi znalazłeś trochę bandarzy i jeszcze świeżej żywności. A to może oznaczać tylko jedno - szykuje się ciężka bitwa.                                     "); move(4,2); getch();
		hp=hp+30;
		life(hp, vic);
		mvprintw(4, 3, "Z cienia spoza okręgu wyłonił się Golem sporych rozmiarów. Ciało miał pokryte kamieniami, a oczy jego świeciły magią.         "); move(4,2); getch();
		if(eq==2 || eq==3){
			mvprintw(4, 3, "Mimo iż miecz twój był nieskuteczny udało ci się dzięki niemu wychwycić dziwne zachowanie bestii.                       "); move(4,2); getch();
			hp=hp-10;
			life(hp, vic);
			mvprintw(4, 3, "Istota za wszelką cenę broniła swojej prawej pięty.                                                     "); move(4,2); getch();
			hp=hp-10;
			life(hp, vic);
			mvprintw(4, 3, "Wykorzystując tą wiedzę udało ci się pokonać stwora, a z jego truchłą zrobiłeś schody wyjściowe z osuwiska."); move(4,2); getch();
		} else{
			mvprintw(4, 3, "To nie była bitwa, którą mogłeś wygrać. Zacząłeś biec przed siebie nie patrząc na spadające życie.                      "); move(4,2); getch();
			hp=hp-50;
			life(hp, vic);
			
			if(hp>0){
				mvprintw(4, 3, "W końcu po długiej wspinaczce udało ci się wydostać.                                                       "); move(4,2);
			}
		}
	}
	
//7-20
	
	else if(ph==7 && pw==20){
	
		attron(COLOR_PAIR(30));mvprintw(1, 50, "Szczyt Wielkiej Sus'ie");attroff(COLOR_PAIR(30));
		mvprintw(4, 3, "Przez chmury dojrzałeś oślepiające światło. Nie minęła sekunda a twe uszy pogrążył huk. Ledwo utrzymałeś się na nogach. Chwilę zabrało ci wybudzenie z letargu.");
		mvprintw(6, 6, "Postanowiłeś podejść do miejsca z którego unosił się dym. Twoim oczom ukazała się dziwna metalowa konstrukcja. Z której dochodziły niepokojące dźwięki.");  move(4,2); getch();
		
		mvprintw(4, 3, "sus, sus ...           sus sus .      SUS SUS            SUS                                                                                                       ");
		mvprintw(6, 6, "Nieznany język staje się coraz głośniejszy, gdy nagle ...                                                                                                ");  move(4,2); getch();
		mvprintw(4, 3, "                                                                                                       ");
		mvprintw(6, 6, "                                                                                                ");
		
		int pcv = 4;
		int pcvv = 34;
		int pcvvv = 64;
		
		attron(COLOR_PAIR(30));
			move(4, 6+pcv); printw("        ");
			move(5, 4+pcv); printw("  "); move(5,14+pcv); printw("  ");
			move(6,2+pcv); printw("        "); move(6,16+pcv); printw("  ");
			move(7,0+pcv); printw("  "); move(7,10+pcv); printw("  "); move(7,16+pcv); printw("    ");
			move(8,0+pcv); printw("  "); move(8,10+pcv); printw("  "); move(8,16+pcv); printw("  "); move(8,20+pcv); printw("  ");
			move(9,2+pcv); printw("        "); move(9,16+pcv); printw("  "); move(9,20+pcv); printw("  ");
			move(10,2+pcv); printw("  "); move(10,16+pcv); printw("  "); move(10,20+pcv); printw("  ");
			move(11,2+pcv); printw("  "); move(11,16+pcv); printw("      ");
			move(12,2+pcv); printw("  "); move(12,16+pcv); printw("  ");
			move(13,2+pcv); printw("  "); move(13,16+pcv); printw("  ");
			move(14,2+pcv); printw("  "); move(14,6+pcv); printw("        "); move(14,16+pcv); printw("  ");
			move(15,2+pcv); printw("  "); move(15,6+pcv); printw("  "); move(15,12+pcv); printw("  "); move(15,16+pcv); printw("  ");
			move(16,2+pcv); printw("      "); move(16,12+pcv); printw("      ");
		attroff(COLOR_PAIR(30));
	
	attron(COLOR_PAIR(32));
		move(7, 2+pcv); printw("        ");
		move(8, 2+pcv); printw("        ");
	attroff(COLOR_PAIR(32));
	
	attron(COLOR_PAIR(33));
		move(5, 6+pcv); printw("        ");
		move(6, 10+pcv); printw("      ");
		move(7, 12+pcv); printw("    ");
		move(8, 12+pcv); printw("    "); move(8, 18+pcv); printw("  ");
		move(9, 10+pcv); printw("      "); move(9, 18+pcv); printw("  ");
		move(10, 4+pcv); printw("            "); move(10, 18+pcv); printw("  ");
		move(11, 4+pcv); printw("            ");
		move(12, 4+pcv); printw("            ");
		move(13, 4+pcv); printw("            ");
		move(14, 4+pcv); printw("  "); move(14, 14+pcv); printw("  ");
		move(15, 4+pcv); printw("  "); move(15, 14+pcv); printw("  ");
	attroff(COLOR_PAIR(33));
		
//Żółty
		
	attron(COLOR_PAIR(30));
			move(4, 6+pcvv); printw("        ");
			move(5, 4+pcvv); printw("  "); move(5,14+pcvv); printw("  ");
			move(6,2+pcvv); printw("        "); move(6,16+pcvv); printw("  ");
			move(7,0+pcvv); printw("  "); move(7,10+pcvv); printw("  "); move(7,16+pcvv); printw("    ");
			move(8,0+pcvv); printw("  "); move(8,10+pcvv); printw("  "); move(8,16+pcvv); printw("  "); move(8,20+pcvv); printw("  ");
			move(9,2+pcvv); printw("        "); move(9,16+pcvv); printw("  "); move(9,20+pcvv); printw("  ");
			move(10,2+pcvv); printw("  "); move(10,16+pcvv); printw("  "); move(10,20+pcvv); printw("  ");
			move(11,2+pcvv); printw("  "); move(11,16+pcvv); printw("      ");
			move(12,2+pcvv); printw("  "); move(12,16+pcvv); printw("  ");
			move(13,2+pcvv); printw("  "); move(13,16+pcvv); printw("  ");
			move(14,2+pcvv); printw("  "); move(14,6+pcvv); printw("        "); move(14,16+pcvv); printw("  ");
			move(15,2+pcvv); printw("  "); move(15,6+pcvv); printw("  "); move(15,12+pcvv); printw("  "); move(15,16+pcvv); printw("  ");
			move(16,2+pcvv); printw("      "); move(16,12+pcvv); printw("      ");
		attroff(COLOR_PAIR(30));
	
	attron(COLOR_PAIR(32));
		move(7, 2+pcvv); printw("        ");
		move(8, 2+pcvv); printw("        ");
	attroff(COLOR_PAIR(32));
	
	attron(COLOR_PAIR(34));
		move(5, 6+pcvv); printw("        ");
		move(6, 10+pcvv); printw("      ");
		move(7, 12+pcvv); printw("    ");
		move(8, 12+pcvv); printw("    "); move(8, 18+pcvv); printw("  ");
		move(9, 10+pcvv); printw("      "); move(9, 18+pcvv); printw("  ");
		move(10, 4+pcvv); printw("            "); move(10, 18+pcvv); printw("  ");
		move(11, 4+pcvv); printw("            ");
		move(12, 4+pcvv); printw("            ");
		move(13, 4+pcvv); printw("            ");
		move(14, 4+pcvv); printw("  "); move(14, 14+pcvv); printw("  ");
		move(15, 4+pcvv); printw("  "); move(15, 14+pcvv); printw("  ");
	attroff(COLOR_PAIR(34));
	
//Zielony
	
	attron(COLOR_PAIR(30));
			move(4, 6+pcvvv); printw("        ");
			move(5, 4+pcvvv); printw("  "); move(5,14+pcvvv); printw("  ");
			move(6,2+pcvvv); printw("        "); move(6,16+pcvvv); printw("  ");
			move(7,0+pcvvv); printw("  "); move(7,10+pcvvv); printw("  "); move(7,16+pcvvv); printw("    ");
			move(8,0+pcvvv); printw("  "); move(8,10+pcvvv); printw("  "); move(8,16+pcvvv); printw("  "); move(8,20+pcvvv); printw("  ");
			move(9,2+pcvvv); printw("        "); move(9,16+pcvvv); printw("  "); move(9,20+pcvvv); printw("  ");
			move(10,2+pcvvv); printw("  "); move(10,16+pcvvv); printw("  "); move(10,20+pcvvv); printw("  ");
			move(11,2+pcvvv); printw("  "); move(11,16+pcvvv); printw("      ");
			move(12,2+pcvvv); printw("  "); move(12,16+pcvvv); printw("  ");
			move(13,2+pcvvv); printw("  "); move(13,16+pcvvv); printw("  ");
			move(14,2+pcvvv); printw("  "); move(14,6+pcvvv); printw("        "); move(14,16+pcvvv); printw("  ");
			move(15,2+pcvvv); printw("  "); move(15,6+pcvvv); printw("  "); move(15,12+pcvvv); printw("  "); move(15,16+pcvvv); printw("  ");
			move(16,2+pcvvv); printw("      "); move(16,12+pcvvv); printw("      ");
		attroff(COLOR_PAIR(30));
	
	attron(COLOR_PAIR(32));
		move(7, 2+pcvvv); printw("        ");
		move(8, 2+pcvvv); printw("        ");
	attroff(COLOR_PAIR(32));
	
	attron(COLOR_PAIR(35));
		move(5, 6+pcvvv); printw("        ");
		move(6, 10+pcvvv); printw("      ");
		move(7, 12+pcvvv); printw("    ");
		move(8, 12+pcvvv); printw("    "); move(8, 18+pcvvv); printw("  ");
		move(9, 10+pcvvv); printw("      "); move(9, 18+pcvvv); printw("  ");
		move(10, 4+pcvvv); printw("            "); move(10, 18+pcvvv); printw("  ");
		move(11, 4+pcvvv); printw("            ");
		move(12, 4+pcvvv); printw("            ");
		move(13, 4+pcvvv); printw("            ");
		move(14, 4+pcvvv); printw("  "); move(14, 14+pcvvv); printw("  ");
		move(15, 4+pcvvv); printw("  "); move(15, 14+pcvvv); printw("  ");
	attroff(COLOR_PAIR(35));
	
		move(0,0);getch();
		
		mvprintw(4, 3, "                                                                                                                                                           ");
		mvprintw(5, 3, "                                                                                                                                                           ");
		mvprintw(6, 3, "                                                                                                                                                           ");
		mvprintw(7, 3, "                                                                                                                                                           ");
		mvprintw(8, 3, "                                                                                                                                                           ");
		mvprintw(9, 3, "                                                                                                                                                           ");
		mvprintw(10, 3, "                                                                                                                                                           ");
		mvprintw(11, 3, "                                                                                                                                                           ");
		mvprintw(12, 3, "                                                                                                                                                           ");
		mvprintw(13, 3, "                                                                                                                                                           ");
		mvprintw(14, 3, "                                                                                                                                                           ");
		mvprintw(15, 3, "                                                                                                                                                           ");
		mvprintw(16, 3, "                                                                                                                                                           ");
		
		while(true){
		
			mvprintw(4, 3, "Czerwony> Impostor is Among Us (w)");
			mvprintw(6, 3, "Żółty> Nie jestem Impostorem (d)");
			mvprintw(8, 3, "Zielony> Ktoś z nas kłamie i na pewno nie jest to Czerwony (s)");
			mvprintw(10, 3, "Kto jest SUS?"); move(10,2);

			int wyboryy = getch();
			
			mvprintw(4, 3, "                                                                                 ");
			mvprintw(6, 3, "                                                                                      ");
			mvprintw(8, 3, "                                                                                   ");
			mvprintw(10, 3, "                                                             ");
			
			if(wyboryy=='w' || wyboryy=='W' || wyboryy=='s' || wyboryy=='S'){
				hp=hp-20;
				mvprintw(4, 3, "     Impostor Victory"); move(4,2);
				life(hp,vic);
				break;
			} else if(wyboryy=='d' || wyboryy=='D'){
				mvprintw(4, 3, "     Victory"); move(4,2);
				break;	
			}
			
		}
		
		
	}

//2-22
	
	else if(ph==2 && pw==22){
		
		attron(COLOR_PAIR(30));mvprintw(1, 50, "Małpi Gaj");attroff(COLOR_PAIR(30));
		mvprintw(4, 3, "Przemierzając las natrafiłeś na grupkę starych drzew których korony zostały wymodelowane na kształt placu zabaw. ");
		mvprintw(6, 6, "Postanowiłeś nie analizować tej anomali zanadto, lecz nie mogłeś od niej oderwać wzroku."); move(4,2); getch();
		
		mvprintw(4, 3, "Cała ta sytuacja skutkowała potknięciem się o pobliski korzeń. No to wydarzenie stosowną ciszę przerwał głośny śmiech.");
		mvprintw(6, 6, "Z jednej z jam w koronie drzewa wyłoniła się małpa i zaczęła cię wyzywać od szympansów.    "); move(4,2); getch();
		
		while(true){
			mvprintw(4, 3, "Czy chcesz uderzyć małpę?                                                                                                  ");
			mvprintw(6, 6, "Z miłą chęcią (w)                                                                                                         ");
			mvprintw(8, 6, "Zostaw małpę i odejdź (d)                                                            "); move(4,2);
			
			int wybory = getch();
			
			if(wybory=='w' || wybory=='W'){
				mvprintw(4, 3, "Małpa jest całkiem sprytna, uniknęła twojego ataku i odpłaciła ci kamieniem w twarz. ");
				hp = hp-10;
				life(hp,vic);
				mvprintw(6, 6, "                                                                              ");
				mvprintw(8, 6, "                                                                                        "); move(4,2); getch();
				
				mvprintw(4, 3, "Czy chcesz odpłacić małpie pięknym za nadobne?                                                                                                ");
				mvprintw(6, 6, "Z miłą chęcią (w)                                                                                                               ");
				mvprintw(8, 6, "Zostaw małpę i odejdź (d)                                                            "); move(4,2);
				int wybory = getch();
				
				if(wybory=='w' || wybory=='W'){
					mvprintw(4, 3, "Małpa jest po prostu zbyt szybka, a jej celność jest po prostu na zupełnie innym poziomie. ");
					hp = hp-10;
					life(hp,vic);
					mvprintw(6, 6, "Kolejny kamień na twarzy był tego doskonałym przykładem."); 
					mvprintw(8, 6, "                                                                                        "); move(4,2); getch();
					mvprintw(4, 3, "Sam uśmiech małpy doprowadza cię do szewskiej pasji. Do trzech razy sztuka?                                                     ");
					mvprintw(6, 6, "Z miłą chęcią (w)                                                                    ");
					mvprintw(8, 6, "Zostaw małpę i odejdź (d)                                                            "); move(4,2);
					
					if(wybory=='w' || wybory=='W'){
						mvprintw(4, 3, "Twój atak nawet nie był blisko. Czas się chyba trochę uspokoić. Choć trzeba przyznać, że te kamienie na twarzy nie pomagają.                                 ");
						mvprintw(6, 6, "                                                                                        ");
						mvprintw(8, 6, "                                                                                        "); move(4,2); getch();
						hp = hp-10;
						life(hp,vic);
						mvprintw(4, 3, "Małpa wydaje się już dosyć zmęczona ciągłym skakaniem. Chcesz to wykorzystać?                                                                 ");
						mvprintw(6, 6, "Z miłą chęcią (w)                                                                    ");
						mvprintw(8, 6, "Zostaw małpę i odejdź (d)                                                            "); move(4,2);
						int wybory = getch();
						
							if(wybory=='w' || wybory=='W'){
								mvprintw(4, 3, "Ostatkiem sił musnąłeś włosy małpy. Po czym usiadłeś pogodzony z losem                                                                  ");move(4,2);
								mvprintw(6, 6, "                                                                             ");
								mvprintw(8, 6, "                                                                          "); move(4,2);  getch();
								mvprintw(4, 3, "Niespodziewanie małpa usiadła koło ciebie i doceniając twoją determinację wręczyła ci czerwony kapturek.                                      ");move(4,2);
								break;
							} else{
								mvprintw(4, 3, "Po prostu odchodzisz, nie masz już nawet nerwów by cokolwiek jej odpowiedzieć.                                                                 ");
								mvprintw(6, 6, "                                                                                        ");
							mvprintw(8, 6, "                                                                                        "); move(4,2);
								break;
							}
					} else{
						mvprintw(4, 3, "Odchodzisz obiecując sobie pod nosem, że kiedyś tu wrócisz z zapalniczką.                         ");
						mvprintw(6, 6, "                                                                                        ");
						mvprintw(8, 6, "                                                                                        "); move(4,2);
					}
					
				} else{
					mvprintw(4, 3, "Nie ma co zniżać się do małpiego poziomu. Na dowidzenia małpa obrzuca cię śmierdzącą niespodzianką. ");
					mvprintw(6, 6, "                                                                                        ");
					mvprintw(8, 6, "                                                                                        "); move(4,2);
					break;	
				}
				
			} else if (wybory=='d' || wybory=='D'){
				mvprintw(4, 3, "Nie zwarzając na obelgi małpy postanowiłeś się oddalić. Spokój++ ");
				mvprintw(6, 6, "                                                                                        ");
				mvprintw(8, 6, "                                                                                        "); move(4,2);
				break;
			}
		}
		mvprintw(4, 3, "Jak Ja nienawidzę małp.                                                                                                                                 ");move(4,2);
	}

//4-22
	
	else if(ph==4 && pw==22){
		attron(COLOR_PAIR(30));mvprintw(1, 50, "Ciemny Las");attroff(COLOR_PAIR(30));
		mvprintw(4, 3, "W zasadzie las ten nawet nie jest ciemny. Po prostu jest tu sporo mgły. Ciekawe kto wymyśla nazwy tych wszystkich krain.");
		mvprintw(6, 6, "Niektóre takie jak ta są takie jakby na siłe.              "); move(4,2); getch();
		
		if(eq==7){
		
			mvprintw(4, 3, "Czekasz na kultystę godzinę, dwie, trzy, czternaście i gdy masz już zrezygnować to zjawia się On kultysta w stroju dinozaura.  ");
			mvprintw(6, 6, "Sorki korki na koniostradzie były - rzecze.             "); move(4,2); getch();
			
			mvprintw(4, 3, "Dobrze jesteśmy coraz bliżej celu. Weź teraz te najmniejsze skrzypce na świecie i zanieś do sklepu z rupieciami.");
			mvprintw(6, 6, "A i zanim pójdziesz weź też ten płaszcz kultysty. Przyda ci się aby wejść do miasta"); move(4,2);
			cloak=1;
			eq=8;
			eqip(eq);
		}
	}	

//6-22
	
	else if(ph==6 && pw==22){
		attron(COLOR_PAIR(30));mvprintw(1, 50, "Don't look at me! I'm shy");attroff(COLOR_PAIR(30));
		mvprintw(4, 3, "Czy to właśnie zagubiona strzała leci w twoją stronę? Szybko to czas na matematykę."); move(4,2); getch();
		
		mvprintw(4, 3, "Strzała leci z prędkością:                                                                 ");
		mvprintw(6, 6, "100 km/h (w)             ");
		mvprintw(8, 6, "80 km/h (d)             ");
		mvprintw(10, 6, "120 km/h (s)             "); move(4,2); getch();
		
		mvprintw(4, 3, "Wielkość jej cienia wskazuje na to, że strzała jest na wysokości:         ");
		mvprintw(6, 6, "10 m (w)             ");
		mvprintw(8, 6, "5 m (d)             ");
		mvprintw(10, 6, "7 m (s)             "); move(4,2); getch();
		
		mvprintw(4, 3, "Pęd wiatru w tym momencie jest równy:                                        ");
		mvprintw(6, 6, "2 m/s (w)             ");
		mvprintw(8, 6, "3 m/s (d)             ");
		mvprintw(10, 6, "4 m/s (s)             "); move(4,2); getch();
		
		mvprintw(4, 3, "Rosa o poranku parowała z prędkością:                                        ");
		mvprintw(6, 6, "1 l/s (w)             ");
		mvprintw(8, 6, "3 ml/s (d)             ");
		mvprintw(10, 6, "7 ml/s (s)             "); move(4,2); getch();
		
		mvprintw(6, 6, "                            ");
		mvprintw(8, 6, "                              ");
		mvprintw(10, 6, "                                ");
		mvprintw(4, 3, "I gdy dochodziłeś do konkluzji strzała minęła twoją głowę o 2 centymetry.          "); move(4,2);
		
		
	}
	
//8-22
	
	else if(ph==8 && pw==22){
		
		attron(COLOR_PAIR(30));mvprintw(1, 50, "Pieczara Bandytów");attroff(COLOR_PAIR(30));
		mvprintw(4, 3, "Przechodząc nieopodal dostrzegłeś siedzibę bandytów. Jej neonowe odwrócone trzy litery L biły po oczach nawet z wielu kilometrów.");
		mvprintw(6, 6, "Bez chwili zawahania postanowiłeś złożyć im małą wizytę."); move(4,2); getch();
		
		mvprintw(4, 3, "Szczęście to czy pech - Nie wiem, aczkolwiek w środku był tylko jeden bandyta bez ręki. Jego silny metaliczny głos zaproponował ci małą grę.");
		mvprintw(6, 6, "Po chwili zastanowienia przystałeś na jego propozycję, w końcu to tylko jedna gra."); move(4,2); getch();
		
		mvprintw(4, 3, "Po 347 próbie udało ci się trafić jackpot. Te 3 dni ciągłej gry były tego warte. Wygrane bilety możesz wymienić na jeden z 3 przedmiotów.       ");
		mvprintw(6, 6, "                                                                                    "); move(4,2); getch();
		
		while(true){
		
			mvprintw(4, 3, "Co wybierasz?                                                                                                                                     ");
			mvprintw(6, 6, "> Płaszcz Szmuglera +3 do niezauważalności (w)");
			mvprintw(8, 6, "> Amulet szczęścia - podobno złoty (d)");
			mvprintw(10, 6, "> Złodziejki - znane czekoladki (s)"); move(4,2);

			int wybory = getch();

			mvprintw(6, 6, "                                                                                     ");
			mvprintw(8, 6, "                                                                                             ");
			mvprintw(10, 6, "                                                                                     ");

			if(wybory=='w' || wybory=='W'){
				mvprintw(4, 3, "Za moich czasów nazywali to workiem do ziemniaków."); move(4,2);
				cloak=1;
				break;
			} else if(wybory=='d' || wybory=='D'){
				mvprintw(4, 3, "Amulet składa się z odwróconej litery L        "); move(4,2);
				eq=4;
				eqip(eq);
				break;
			} else if(wybory=='s' || wybory=='S'){
				mvprintw(4, 3, "Mimo zielonego koloru i dziwnej konsystencji, wypełniły twoje podniebienie rozkoszą"); move(4,2);
				hp=hp+10;
				life(hp,vic);
				break;
			}
		
		}
	}	

//3-24, 4-24, 5-24, 6-24, 7-24, 2-26, 8-26
	
	else if((ph==3 && pw==24) || (ph==4 && pw==24) || (ph==5 && pw==24) || (ph==6 && pw==24) || (ph==7 && pw==24) || (ph==2 && pw==26) || (ph==8 && pw==26)){
	
		attron(COLOR_PAIR(30));mvprintw(1, 50, "Wejście do Kraju Ludzi");attroff(COLOR_PAIR(30));
		
		if(skipp==0){
			if(cloak==0){
				mvprintw(4, 3, "Najbardziej znany ludzki zdrajca wchodzi do ludzkiej stolicy jakgdyby nigdy nic. BEZ PRZEBRANIA. Co może pójść nie tak..."); move(4,2);getch();
				mvprintw(4, 3, "Z każdym krokiem coraz więcej ludzi zbierało się na jego powitanie. W końcu poleciał pierwszy kamień.                           ");
				hp=hp-10;
				life(hp, vic); move(4,2);getch();
				mvprintw(4, 3, "Po chwili w miejscu gdzie stał nasz antybohater leżała tylko ogromna góra kamieni i innych przyborów kuchennych.");  move(4,2);getch();
				mvprintw(4, 3, "I tak właśnie pycha jednej osoby zgubiła setki istnień. Pandemia rozgorzała na nowo.                                ");  move(4,2);
				vic=9;
				skipp=1;
			} else{
				mvprintw(4, 3, "Antybohater nakrywszy się szatą wszedł niepostrzeżenie do ludzkiej krainy. Czas by zabawa doszła do punktu kulminacyjnego."); move(4,2);getch();
				skipp=1;
			}
		} else{
			mvprintw(4, 3, " ..."); move(4,2);
		}
	}
	
//8-24
	
	else if(ph==8 && pw==24){
	
		attron(COLOR_PAIR(30));mvprintw(1, 50, "Doświadczona Polana");attroff(COLOR_PAIR(30));
		mvprintw(4, 3, "To miejsce wygląda jakoś znajomo. Wzgórza porośnięte idealnie zieloną trawą. Piękne błękitne niebo i te chumrki.");
		mvprintw(6, 6, "Gdyby tylko dało się ten widoczek przez okienko jakoś uwiecznić. Tak by każdy mógł go zobaczyć.                   "); move(4,2); getch();
		
		mvprintw(4, 3, "A cóż to tam wiatr niesie. Przed oczami przelatuje ci czerwono-zielono-niebiesko-żółta flaga.                  ");
		mvprintw(6, 6, "                                                                                                             "); move(4,2); getch();
		
		if(eq==9){
			mvprintw(4, 3, "Najwyraźniej to tu piraci zakopali mój skarb.                                                                   ");move(4,2); getch();
			mvprintw(4, 3, "Zaczynasz kopać. Ciszę przebija metalowy brzdęk. Twym oczom ukazuje się skrzynia. No to czas ją otworzyć.       ");move(4,2); getch();
			mvprintw(4, 3, "To Wir... q   7263  19283   113-0   0111 XP   Win---s   njsgnvpiovinsdxpgvnsvs..     0               p          ");move(4,2);
			vic=8;
		}
		
		
	}
	
//4-26
	
	else if(ph==4 && pw==26){
		attron(COLOR_PAIR(30));mvprintw(1, 50, "Jubiler");attroff(COLOR_PAIR(30));
		mvprintw(4, 3, "Asortyment mieni się i błyszczy. Zdobione zbroje, nieskazitelne różdżki i te klejnoty.");
		mvprintw(6, 6, "Ceny tylko zabójcze. 10 sztabek złota za cegłę znanej marki?!"); move(4,2); getch();
		
		mvprintw(4, 3, "O strefa szkieł. Jeden zły ruch i całe życie może skończyć się ruiną. Od tych kosztowności zaczyna cię boleć głowa.");
		mvprintw(6, 6, "                                                                   "); move(4,2); getch();
		
		if(eq==4){
			mvprintw(4, 3, "A więc chcesz odsprzedać mi ten Amulet? Uważasz mnie za głupca?! Nawet dziecko jest w stanie stwierdzić, że to złoto głupców.");
			mvprintw(6, 6, "Wynoś się i nigdy nie wracaj "); move(4,2);
		}
	}	

//5-26
	
	else if(ph==5 && pw==26){
		
		int zly = 50;
		int razA=1;
		int razB=1;
		int razC=1;
		int razD=1;
		int razE=1;
		
		attron(COLOR_PAIR(30));mvprintw(1, 50, "Wejście do Zamku Królewskiego");attroff(COLOR_PAIR(30));
		mvprintw(4, 3, "Wielkie wrota stoją otworem, minęły lata od kiedy mogłeś ten widok uświadczyć ostatni raz."); move(4,2); getch();
		mvprintw(4, 3, "Teraz już tylko jedna osoba może cię powstrzymać i stoi ona naprzeciw ciebie."               ); move(4,2); getch();
		mvprintw(4, 3, "Zastanawiasz się gdzie armia, królewska gwardia?                                                 ");  move(4,2); getch();
		mvprintw(4, 3, "Pandemia jest. Ostatnie na co może sobie królestwo ludzi pozwolić do gromadzenie dużej ilości ludzi na małym obszarze.            "); move(4,2); getch();
		mvprintw(4, 3, "Teraz nie ma już odwrotu czas zmierzyć się z ostatnim obrońcą zamku królewskiego.                                         "); move(4,2); getch();
		
		ff=0;
		
		while(true){
		
			mvprintw(4, 3, "Twój ruch:                                                                                                                      ");
			mvprintw(6, 6, ">Zaatakuj (w)                                                                                                                   "); move(4,2);

			int wybory = getch();

			if(zly==0){
				mvprintw(4, 3, "Więc to koniec, twój własny ojciec ledwo łapie wdech przed tobą. Jesteś z siebie dumny? Naprawdę było warto?");
				mvprintw(6, 6, ">Zabij sumienie (dowolny klawisz)"); move(4,2);  getch();
				break;	
			} else if(zly==50 && razA==1){
				mvprintw(4, 3, "Byłem niegdyś nadzieją tego kraju, teraz jestem jej największą rozpaczą.");
				mvprintw(6, 6, "                                               "); move(4,2);  getch();
				razA=0;
			} else if(zly==40 && razB==1){
				mvprintw(4, 3, "Chciałem tak niewiele, lecz wszyscy mnie opuściliście. TO jest moja zemsta.");
				mvprintw(6, 6, "                                               "); move(4,2);  getch();
				razB=0;
			} else if(zly==30 && razC==1){
				mvprintw(4, 3, "Może gdzieś w alternatywnym świecie, wspólnie podbijamy teraz świat demonów...");
				mvprintw(6, 6, "                                               "); move(4,2);  getch();
				razC=0;
			} else if(zly==20 && razD==1){
				mvprintw(4, 3, "To okrutne że nie ma już odwrotu. Klamra zapadła, przeznaczenia już nie można zmienić");
				mvprintw(6, 6, "                                               "); move(4,2);  getch();
				razD=0;
			} else if(zly==10 && razE==1){
				mvprintw(4, 3, "Zimne krople ukratkiem zaczeły spływać po twoim policzku. Lecz zimny wzrok oponenta nie dawał ci chwili na otaricie łez.");
				mvprintw(6, 6, "                                               "); move(4,2);  getch();
				razE=0;
			}

			if(wybory=='w' || wybory=='W'){
				zly=zly-10;
			}
				hp=hp-10;
				life(hp,vic);
			if(hp==0){
				mvprintw(4, 3, "                                                                                                                         ");
				mvprintw(6, 6, "                                                                                                                         ");
				victory(vic);
				break;
			}
		}
	}
	
//6-26
	
	else if(ph==6 && pw==26){
		attron(COLOR_PAIR(30));mvprintw(1, 50, "Sklep z Antykami");attroff(COLOR_PAIR(30));
		mvprintw(4, 3, "1001 Rupieci to nazwa tegoż sklepu. Znajdziesz tu wszystko od starych pajęczyn po nowe kurze.");
		mvprintw(6, 6, "W zasadzie nic co mogło by ci się przydać."); move(4,2); getch();
		
		if(eq==8){
		
			mvprintw(4, 3, "O więc interesują cię nici, a nie czekaj wyczuwam że masz coś drogocennego przy sobie. Powiedział kultysta odziany w maskę konia.");
			mvprintw(6, 6, "Oddałeś kultyście najmniejsze skrzypce na świecie."); move(4,2);
			eq=0;
			eqip(eq); getch();
			mvprintw(4, 3, "Miałem na myśli twoje serce, lecz widzę że przyszedłeś tu w nieco ciekawszych interesach. Bardzo dobrze.                    ");
			mvprintw(6, 6, "                                                                              "); move(4,2);
			
			mvprintw(4, 3, "Zdobywszy zaufanie kultystów stałeś się oficjalnie ich kompanem. Otworzyło ci to zupełnie nową ścieżkę zawodową.");
			mvprintw(6, 6, "Założyliście wspólnie spółkę transportową i zbiliście fortunę na sprzedarzy broni wszystkim stronom konfliktu.    "); move(4,2);
			vic=6;
		}
	}	

//2-28	
	
	else if(ph==2 && pw==28){
		attron(COLOR_PAIR(30));mvprintw(1, 50, "Ruiny Areny");attroff(COLOR_PAIR(30));
		mvprintw(4, 3, "Za czasów świetności to miejsce mieściło tysiące ludzi jednocześnie. Dziś to jedynie puste mury. "); move(4,2); getch();
		mvprintw(4, 3, "Idąc w głąb trafiasz na środek areny. Po twoich dawnych wyczynach pozostał jedynie grób na środku. "); move(4,2); getch();
		mvprintw(4, 3, "Na koniec nikt z nas nie spełnił swojej obietnicy co? Siadasz przy grobie.                          "); move(4,2); getch();
		
		if(eq==1){
			mvprintw(4, 3, "Zaczynasz wspominać stare dzieje. Wspólne lata, przygody, zmartwienia. Wszystko jest takie odległe."); move(4,2); getch();
			mvprintw(4, 3, "Kładziesz różę na grobie. Czas wydaje się zatrzymać.                                                     "); move(4,2); getch();
			mvprintw(4, 3, "Nie poczekaj on faktycznie się zatrzymał. Wieczne cierpienie w świecie bez ciebie. Czy to moja kara?   "); move(4,2);
			vic=3;
		} else{
			mvprintw(4, 3, "Czas zaczyna wydawać się jedynie złudzeniem. Powoli zapadasz w sen.                 "); move(4,2);
			vic=2;
		}
	}
	
//4-28 i 6-28
	
	else if((ph==4 && pw==28) || (ph==6 && pw==28)){
		
		int zly = 50;
		int razA=1;
		int razB=1;
		int razC=1;
		int razD=1;
		int razE=1;
		
		attron(COLOR_PAIR(30));mvprintw(1, 50, "Boczne wejście do Zamku Królewskiego");attroff(COLOR_PAIR(30));
		mvprintw(4, 3, "Boczne wejście prowadzi prosto do pokoju księżniczki. Ktokolwiek je stworzył zrobił mi bardzo dużą przysługę."); move(4,2); getch();
		if(ff==1){
			mvprintw(4, 3, "Teraz już tylko jedna osoba może cię powstrzymać i stoi ona naprzeciw ciebie."               ); move(4,2); getch();
			mvprintw(4, 3, "Zastanawiasz się gdzie armia, królewska gwardia?                                                 ");  move(4,2); getch();
			mvprintw(4, 3, "Pandemia jest. Ostatnie na co może sobie królestwo ludzi pozwolić do gromadzenie dużej ilości ludzi na małym obszarze.            "); move(4,2); getch();
			mvprintw(4, 3, "Teraz nie ma już odwrotu czas zmierzyć się z ostatnim obrońcą zamku królewskiego.                                         "); move(4,2); getch();

			ff=0;

			while(true){

				mvprintw(4, 3, "Twój ruch:                                                                                                                      ");
				mvprintw(6, 6, ">Zaatakuj (w)                                                                                                                   "); move(4,2);

				int wybory = getch();

				if(zly==0){
					mvprintw(4, 3, "Więc to koniec, twój własny ojciec ledwo łapie wdech przed tobą. Jesteś z siebie dumny? Naprawdę było warto?");
					mvprintw(6, 6, ">Zabij sumienie (dowolny klawisz)"); move(4,2);  getch();
					break;	
				} else if(zly==50 && razA==1){
					mvprintw(4, 3, "Byłem niegdyś nadzieją tego kraju, teraz jestem jej największą rozpaczą.");
					mvprintw(6, 6, "                                               "); move(4,2);  getch();
					razA=0;
				} else if(zly==40 && razB==1){
					mvprintw(4, 3, "Chciałem tak niewiele, lecz wszyscy mnie opuściliście. TO jest moja zemsta.");
					mvprintw(6, 6, "                                               "); move(4,2);  getch();
					razB=0;
				} else if(zly==30 && razC==1){
					mvprintw(4, 3, "Może gdzieś w alternatywnym świecie, wspólnie podbijamy teraz świat demonów...");
					mvprintw(6, 6, "                                               "); move(4,2);  getch();
					razC=0;
				} else if(zly==20 && razD==1){
					mvprintw(4, 3, "To okrutne że nie ma już odwrotu. Klamra zapadła, przeznaczenia już nie można zmienić");
					mvprintw(6, 6, "                                               "); move(4,2);  getch();
					razD=0;
				} else if(zly==10 && razE==1){
					mvprintw(4, 3, "Zimne krople ukratkiem zaczeły spływać po twoim policzku. Lecz zimny wzrok oponenta nie dawał ci chwili na otaricie łez.");
					mvprintw(6, 6, "                                               "); move(4,2);  getch();
					razE=0;
				}

				if(wybory=='w' || wybory=='W'){
					zly=zly-10;
				}
					hp=hp-10;
					life(hp,vic);
				if(hp==0){
					mvprintw(4, 3, "                                                                                                                         ");
					mvprintw(6, 6, "                                                                                                                         ");
					victory(vic);
					break;
				}
			}
		}
	}	

//5-28
	
	else if(ph==5 && pw==28){
		
		attron(COLOR_PAIR(30));mvprintw(1, 50, "Komnata Księżniczki");attroff(COLOR_PAIR(30));
		mvprintw(4, 3, "I tak oto przybyłem moja księżniczko, twój koń na białym rycerzu. Hehe. "); move(4,2); getch();
		mvprintw(4, 3, "Jak nie chcesz widzieć swojej rodziny we krwi to lepiej pakuj manatki.    "); move(4,2);
		vic=1;
		
	} 
	
//8-28	
	
	else if(ph==8 && pw==28){
		
		attron(COLOR_PAIR(30));mvprintw(1, 50, "Sklep z Zabawkami");attroff(COLOR_PAIR(30));
		mvprintw(4, 3, "Jesteś pewny, że Władca demonów chciał Lalkę Księżniczki z Księżyca?"); move(4,2); getch();
		mvprintw(4, 3, "Rób co chcesz, ale nie mów później, że nie ostrzegałam - LOGIKA.             "); move(4,2);
		vic=7;
		
	} 
	
	else{
		if(pusto==0){
			attron(COLOR_PAIR(30));mvprintw(1, 50, "Pustkowia");attroff(COLOR_PAIR(30));
			mvprintw(4, 3, "Rozglądając się dookoła nic nie zwróciło twojej uwagi.");move(4,2);
			pusto++;
		} else if(pusto==1){
			attron(COLOR_PAIR(30));mvprintw(1, 50, "Nicość");attroff(COLOR_PAIR(30));
			mvprintw(4, 3, "Bardzo chciałeś by tutaj coś było, lecz niestety nie tym razem.");move(4,2);
			pusto++;
		} else if(pusto==2){
			attron(COLOR_PAIR(30));mvprintw(1, 50, "Miejsce");attroff(COLOR_PAIR(30));
			mvprintw(4, 3, "Tak to jest bardzo interesujące miejsce.");move(4,2);
			pusto++;
		} else if(pusto==3){
			attron(COLOR_PAIR(30));mvprintw(1, 50, "Ktokolwiek to czyta?");attroff(COLOR_PAIR(30));
			mvprintw(4, 3, "No jest tu i czyste powietrze i lekka mrzawka, ale ile razy można mówić podobne rzeczy.");move(4,2);
			pusto++;
		} else if(pusto==4){
			attron(COLOR_PAIR(30));mvprintw(1, 50, "Śpiewanko");attroff(COLOR_PAIR(30));
			mvprintw(4, 3, "Idąc przez te terytoria zachciało ci się śpiewać. Więc szłeś wesoło podśpiewując death metal.");move(4,2);
			pusto++;
		} else if(pusto==4){
			attron(COLOR_PAIR(30));mvprintw(1, 50, "Śpiewanko");attroff(COLOR_PAIR(30));
			mvprintw(4, 3, "Idąc przez te terytoria zachciało ci się śpiewać. Więc szłeś wesoło podśpiewując death metal.");move(4,2);
			pusto++;
		} else if(pusto==5){
			attron(COLOR_PAIR(30));mvprintw(1, 50, "Gdyby kózka nie skakała");attroff(COLOR_PAIR(30));
			mvprintw(4, 3, "Wpadłeś na genialny pomysł, aby sobie poskakać. Niestety nie był to najinteligentniejszy pomysł na jaki wpadłeś.");move(4,2);
			mvprintw(6, 6, "Twoja kostka teraz naprawdę boli");move(4,2);
			pusto++;
		} else if(pusto==6){
			attron(COLOR_PAIR(30));mvprintw(1, 50, "Coś na Drodze");attroff(COLOR_PAIR(30));
			mvprintw(4, 3, "Spotkałeś coś na drodze i obiecałeś mu, że nikomu nie powiesz czym jest.");move(4,2); getch();
			mvprintw(4, 3, "I tak też zrobiłeś.                                                        ");move(4,2);
			pusto++;
		} else if(pusto==7){
			attron(COLOR_PAIR(30));mvprintw(1, 50, "Marzenia");attroff(COLOR_PAIR(30));
			mvprintw(4, 3, "Zamyśliłeś się. Gdy byłeś gdzieś między sensem życia, a bólem istnienia doznałeś objawienia. Mięso na obiad to byłby całkiem dobry pomysł.");move(4,2);
			pusto++;
		} else if(pusto==8){
			attron(COLOR_PAIR(30));mvprintw(1, 50, "Niespodzianka");attroff(COLOR_PAIR(30));
			mvprintw(4, 3, "Na swojej drodze spotkałeś mglaka. No wiesz taką istotę co żyje w mgle, dlatego nikt jej nigdy nie widział. W sumie fajnie.");move(4,2);
			pusto++;
		} else if(pusto==9){
			attron(COLOR_PAIR(30));mvprintw(1, 50, "...");attroff(COLOR_PAIR(30));
			mvprintw(4, 3, "...");move(4,2); getch();
			mvprintw(4, 3, "Fajnie");move(4,2);
			pusto++;
		} else if(pusto==10){
			attron(COLOR_PAIR(30));mvprintw(1, 50, "Nie Głoduj");attroff(COLOR_PAIR(30));
			mvprintw(4, 3, "Zacząłeś wydawać z siebie dźwięk instrumentu i myślisz jakie miałbyś imię, gdyby zaczynało się ono na W.");move(4,2);
			pusto++;
		} else if(pusto==11){
			attron(COLOR_PAIR(30));mvprintw(1, 50, "Wszystko");attroff(COLOR_PAIR(30));
			mvprintw(4, 3, "Zobaczyłeś tak wiele wszystkiego, że aż nie byłeś w stanie tego opisać. ");move(4,2);
			pusto++;
		} else if(pusto==12){
			attron(COLOR_PAIR(30));mvprintw(1, 50, "Pytania");attroff(COLOR_PAIR(30));
			mvprintw(4, 3, "Długie podróże mają do siebie to, że masz mnóstwo wolnego czasu. Więc odpowiadasz na wszystkie pytania jakie ci do głowy przyjdą.");move(4,2);
			pusto++;
		} else if(pusto==13){
			attron(COLOR_PAIR(30));mvprintw(1, 50, "Droga do Pacanowa");attroff(COLOR_PAIR(30));
			mvprintw(4, 3, "Właśnie minąłeś kozę chodzącą na dwóch nogach. Ciekawe było to zjawisko. Ciekawe dokąd szła. ");move(4,2);
			pusto++;
		} else if(pusto==14){
			attron(COLOR_PAIR(30));mvprintw(1, 50, "Gra");attroff(COLOR_PAIR(30));
			mvprintw(4, 3, "Nagle naszła cię ochota, aby zagrać w jakąś hitową grę jak szachy, czy młynek. Ciekawe w co ludzie będą grali w przyszłości.");move(4,2);
			pusto++;
		} else if(pusto==15){
			attron(COLOR_PAIR(30));mvprintw(1, 50, "Amnezja");attroff(COLOR_PAIR(30));
			mvprintw(4, 3, "Zapomniałeś co miałeś powiedzieć. Więc zacznijmy od początku.");move(4,2);
			pusto=0;
		}
	}
	
	attroff(A_BOLD);
	getch();
	clear();

}



