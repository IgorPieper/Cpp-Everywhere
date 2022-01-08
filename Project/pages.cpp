#include <ncurses.h>
#include "life.cpp"
#include "eqipment.cpp"

void pages(int ph, int pw, int &vic, int &hp, int &eq, int &cloak){

	clear();
	life(hp,vic);
	eqip(eq);
	
	int skip = 0;
	
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
		mvprintw(4, 3, "...> Widzę, że rozmowa z Władcą była dla ciebie niemałą niespodzianką. Dostojność jego przemowy była zaiste bardzo ujmująca."); move(4,2);
		mvprintw(6, 6, "Zaprawdę nikt nie spodziewał się, że tak ważne zadanie trafi do ludzkiego pomiota jakim się narodziłeś."); move(4,2); getch();
		mvprintw(4, 3, "                                                                                                                             ");
		mvprintw(6, 3, "                                                                                                                             ");
		
		
		mvprintw(4, 3, "Człowiek> ..."); move(4,2); getch();
			
		mvprintw(4, 3, "Gerdan> Z twarzy imo jest całkowicie ludzki, lecz serce jego zdobi tylko mrok. Za jego wychowanie, stała jakże nie byle jaka królewska gwardia, ");
		mvprintw(6, 6, " znana jak nie kto inny z najbrutalniejszego przestrzagania jego Mrocznej Podłości."); move(4,2); getch();
		
		mvprintw(4, 3, "Gerdan> Przemawiająca przez ciebie zazdrość wylewa się ciurkiem na wszystkich do okoła Rejzendryku. Pomimo niezerowego wkładu w plan Jego Upiornej Mości, ");
		mvprintw(6, 6, " masz wyjątkowo dużo wolnego czasu, na dogryzanie biednemu Armenowi.                 "); move(4,2); getch();
		
		mvprintw(4, 3, "Rezendryk> Jak na służalca masz bardzo duży tupet, by tak się wyrażać do Głównego Dowódcy Sił Armii Cienia. Nawyk ten napewno przyniesie ci niegdyś zgubę.");
		mvprintw(6, 6, " A co do ciebie smarkaczu, spróbuj tylko wrócić z zadania bez księżniczki, a osobiście ukrócę cię o czereb."); move(4,2); getch();
		
		mvprintw(4, 3, "Gerdan> Nie miej zazłe Rezendrykowi, jego ogromna potęga przyniosła chwałę Królestwie Mroku w nie jedenej bitwie. Najzwyczajniej jak każdy w tutejszych murach ma wątpliwości, ");
		mvprintw(6, 6, " w powierzaniu tak ważnego zadania, człowiekowi, który nie zapisał się jeszcze na żadnej karcie historii naszego królestwa."); move(4,2); getch();
		
		mvprintw(4, 3, "Gerdan> Nie mniej czas już na nasze pożegnanie, jak będzie trzeba złapię kciuki wszystkich demonów w Królestwie za twoje powodzenie.                                            ");
		mvprintw(6, 6, " Niech duch Bogini Podłości - Argeni, będzie po twojej stronie.                                                             "); move(4,2);
		
		mvprintw(1, 50, "                                                                                                            ");
		mvprintw(6, 3, "                                                                                                                                                                                    ");
		attron(COLOR_PAIR(30));mvprintw(1, 50, "Poradnik");attroff(COLOR_PAIR(30));
		mvprintw(4, 3, "Przyszedł czas na objaśnienie zasad gry                                                                                                                                      "); move(4,2); getch();
		mvprintw(4, 3, "Twoim głównym celem jest pojmanie księżniczki znajdującej się w przeciwległym królestwie ludzi w polu oznaczonym literką M."); move(4,2); getch();
		mvprintw(4, 3, "Po drodze czeka cię wiele przygód, bla bla bla wszyscy to znamy.                                                             "); move(4,2); getch();
		mvprintw(4, 3, "Twoja postać może poruszać się w 3 kierunkach, aczkolwiek nie może się cofać więc uważaj, gdyż może być to dosyć zgubne."); move(4,2); getch();
		mvprintw(4, 3, "Monitoruj swój pasek życia i zbieraj przedmioty, które mogą ci się przydać przy odkrywaniu dodatkowych zakończeń.        "); move(4,2); getch();
		mvprintw(4, 3, "To tyle ode mnie i życzę miłej gry                                                                                 "); move(4,2);
		
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
		attron(COLOR_PAIR(30));mvprintw(1, 50, "Królewskie Ogrody");attroff(COLOR_PAIR(30));
		mvprintw(4, 3, "Różane ogrody ciągną się kilometrami. Tylko nieliczni są w stanie dostać się w sam środek tego bezlitosnego miejsca. ");
		mvprintw(6, 6, "Stoi tu od dawien dawna, nikt nie wie jak długo fontanna tryskająca wodą rdzawego koloru."); move(4,2); getch();
		
		mvprintw(4, 3, "Nie pierwszy raz trafiasz do tego cichego miejsca. Nawet ptakom brakuje sił by dostać się do tego miejsca.             ");
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
	
//6-6
	
	else if(ph==6 && pw==4) {
		attron(COLOR_PAIR(30));mvprintw(1, 50, "Koszary");attroff(COLOR_PAIR(30));
		mvprintw(4, 3, "Kto raz przechodził nieopodal, nie zapomni już nigdy tego specyficznego miejsca. Zapach potu, wymieszany z bólem i cierpieniem. Potworne krzyki, wieczny ruch. Lecz dziś jest inaczej");
		mvprintw(6, 6, "W okolicy jest spokojnie. Z koszarów nie dochodzą żadne dźwięki. Ten błogi spokój przykrywać może tylko jedną klątwę."); move(4,2); getch();
		
		mvprintw(4, 3, "Prowadzenie wojen na północy i zachodzie w jednym momencie ");
	}
	
//5-6
	
	
	else if(ph==5 && pw==6){
		
		attron(COLOR_PAIR(30));mvprintw(1, 50, "Pole Graniczne");attroff(COLOR_PAIR(30));
		mvprintw(4, 3, "Po granice horyzontu rozciąga się jaskrawo zielona polana. Wszelakie kwiaty przebijają się w gęstwinie traw tworząc pejzaż niespotykanych na codzień kolorów.");
		mvprintw(6, 6, "Widok ten od wieków oddzielała świat demonów od pozostałych istnień zamieszkujących tutejsze krainy. "); move(4,2); getch();
		
		mvprintw(4, 3, "Opowieści postronnych gości prawią, iż gdy księżyc okaże swą pełnią chwałę, usłyszeć tudzież można przeraźliwe krzyki poległych niegdyś wojaków.                ");
		mvprintw(6, 6, "Polana ta mimo że pięknym jest mirażem, kryje pod sobą hektolitry przelanej krwi ślepo powtarzającej się historii dzielnych umarlaków. "); move(4,2);
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
	
//4-14
	
	else if(ph==4 && pw==14){
		
		attron(COLOR_PAIR(30));mvprintw(1, 50, "Szpital Polowy Zielonego Minusa");attroff(COLOR_PAIR(30));
		mvprintw(4, 3, "Organizacja nonprofit pomagająca ludzią wyleczyć swoje rany całkowicie za darmo. Aż dobry uczynek nie skorzystać."); move(4,2); getch();
		hp = 100;
		life(hp,vic);
		mvprintw(4, 3, "Cały wiążący cię ból znika. Czujesz ukojenie w najczystrzej postaci. Twoje ciało dziękuje ci po stokroć.              "); move(4,2);
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
				mvprintw(8, 6, "Nie (d)                                                          ");
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
			mvprintw(6, 3, "Żółty> Nie jestem Impostorem (a)");
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
			} else if(wyboryy=='a' || wyboryy=='A'){
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
								cloak=1;
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
	
//8-22
	
	else if(ph==8 && pw==22){
		
		attron(COLOR_PAIR(30));mvprintw(1, 50, "Pieczara Bandytów");attroff(COLOR_PAIR(30));
		mvprintw(4, 3, "Przechodząc nieopodal dostrzegłeś siedzibę bandytów. Jej neonowe odwrócone trzy litery L biły po oczach nawet z wielu kilometrów.");
		mvprintw(6, 6, "Bez chwili zawahania postanowiłeś złożyć im małą wizytę."); move(4,2); getch();
		
		mvprintw(4, 3, "Szczęście to czy pech - Nie wiem, aczkolwiek w środku był tylko jeden bandyta bez ręki. Jego silny metaliczny głos zaproponował ci małą grę.");
		mvprintw(6, 6, "Po chwili zastanowienia przystałeś na jego propozycję, w końcu to tylko jedna gra."); move(4,2); getch();
		
		mvprintw(4, 3, "Po 347 próbie udało ci się trafić jackpot. Te 3 dni ciągłej gry były tego warte. Wygrane bilety możesz wymienić na jeden z 3 przedmiotów.       ");
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
	
//5-28
	
	else if(ph==5 && pw==28){
		
		mvprintw(0, 0, "Konice lol");
		vic=1;
		
	} else{
		mvprintw(1, 2, "Nic ciekawego cię w tym miejscu nie czekało");
	}
	
	attroff(A_BOLD);
	getch();
	clear();

}



