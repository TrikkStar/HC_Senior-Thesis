#pragma once

namespace ProjectOppenheimer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  menuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  newGameToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  uSAToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  uSSRToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  developerToolsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  countryToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  africaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  asiaToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  gameToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  handsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  uSAToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  revealToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  uSSRToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  revealToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  algeriaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  angolaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  botsawnaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  cameroonToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ethiopiaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ivoryCoastToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  kenyaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  moroccoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  nigeriaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saharanStatesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  sEAfricanStatesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  somaliaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  southAfricaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  sudanToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  tunisiaToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  centralAmericaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  europeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  middleEastToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  southAmericaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  westAfricanStatesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  zaireToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  zimbabweToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  afghanistanToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  australiaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  burmaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  indiaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  indonesiaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  japanToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  laosCambodiaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  malaysiaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  northKoreaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pakistanToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  philippinesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  southKoreaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  taiwanToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  thailandToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  vietnamToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  costaRicaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  cubaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  dominicanRepToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  elSalvadorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  guatemalaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  hatiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  hondurasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mexicoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  nicaraguaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  panamaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  austriaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  benluxToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  bulgariaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  canadaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  czechoslovakiaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  denmarkToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  eGermanyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  finlandToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  franceToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  greeceToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  hungaryToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  italyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  norwayToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  polandToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  romaniaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  sweedenToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  turkeyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  uKToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  wGermanyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  yugoslaviaToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  egyptToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  gulfStatesToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  iranToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  iraqToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  israelToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  jordanToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  lebanonToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  libyaToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  saudiArabiaToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  syriaToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  argentinaToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  brazilToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  boliviaToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  chileToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  colombiaToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  ecuadorToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  paraguayToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  peruToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  uruguayToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  venezuelaToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  turnToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem2;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem3;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem4;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem5;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem6;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem7;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem8;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem9;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem10;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem11;
private: System::Windows::Forms::ToolStripMenuItem^  roundToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  headlinePhaseToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem12;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem13;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem14;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem15;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem16;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem17;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem18;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem19;
private: System::Windows::Forms::ToolStripMenuItem^  scoreToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem20;
private: System::Windows::Forms::ToolStripMenuItem^  uSAToolStripMenuItem2;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem21;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem22;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem23;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem24;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem25;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem26;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem27;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem28;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem29;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem30;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem31;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem32;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem33;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem34;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem35;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem36;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem37;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem38;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem39;
private: System::Windows::Forms::ToolStripMenuItem^  uSSRToolStripMenuItem2;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem40;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem41;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem42;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem43;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem44;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem45;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem46;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem47;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem48;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem49;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem50;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem51;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem52;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem53;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem54;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem55;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem56;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem57;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem58;
private: System::Windows::Forms::ToolStripMenuItem^  defconToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem59;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem60;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem61;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem62;
private: System::Windows::Forms::ToolStripMenuItem^  militaryOpsToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  uSAToolStripMenuItem3;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem63;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem64;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem65;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem66;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem67;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem68;
private: System::Windows::Forms::ToolStripMenuItem^  uSSRToolStripMenuItem3;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem69;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem70;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem71;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem72;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem73;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem74;
private: System::Windows::Forms::ToolStripMenuItem^  spaceRaceToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  uSAToolStripMenuItem4;
private: System::Windows::Forms::ToolStripMenuItem^  startToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem75;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem76;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem77;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem78;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem79;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem80;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem81;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem82;
private: System::Windows::Forms::ToolStripMenuItem^  uSSRToolStripMenuItem4;
private: System::Windows::Forms::ToolStripMenuItem^  startToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem83;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem84;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem85;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem86;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem87;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem88;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem89;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem90;
private: System::Windows::Forms::ToolStripMenuItem^  eventToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  resetToolStripMenuItem;



	protected:




	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->developerToolsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newGameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->uSAToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->uSSRToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->countryToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->handsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->uSAToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->uSSRToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->revealToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->revealToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->africaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->asiaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->centralAmericaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->europeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->middleEastToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->southAmericaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->algeriaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->angolaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->botsawnaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cameroonToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ethiopiaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ivoryCoastToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->kenyaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->moroccoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nigeriaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saharanStatesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sEAfricanStatesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->somaliaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->southAfricaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sudanToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tunisiaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->westAfricanStatesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zaireToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zimbabweToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->afghanistanToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->australiaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->burmaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->indiaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->indonesiaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->japanToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->laosCambodiaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->malaysiaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->northKoreaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pakistanToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->philippinesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->southKoreaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->taiwanToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->thailandToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->vietnamToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->costaRicaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cubaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dominicanRepToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->elSalvadorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->guatemalaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->hatiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->hondurasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mexicoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nicaraguaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panamaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->austriaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->benluxToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bulgariaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->canadaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->czechoslovakiaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->denmarkToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eGermanyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->finlandToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->franceToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->greeceToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->hungaryToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->italyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->norwayToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->polandToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->romaniaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sweedenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->turkeyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->uKToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wGermanyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->yugoslaviaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->egyptToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gulfStatesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->iranToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->iraqToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->israelToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->jordanToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lebanonToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->libyaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saudiArabiaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->syriaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->argentinaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->brazilToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->boliviaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->chileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->colombiaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ecuadorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->paraguayToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->peruToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->uruguayToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->venezuelaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->turnToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->roundToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->scoreToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->defconToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->militaryOpsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->spaceRaceToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eventToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->resetToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem6 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem7 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem8 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem9 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem10 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem11 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->headlinePhaseToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem12 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem13 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem14 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem15 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem16 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem17 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem18 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem19 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem20 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->uSAToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->uSSRToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem21 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem22 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem23 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem24 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem25 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem26 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem27 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem28 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem29 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem30 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem31 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem32 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem33 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem34 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem35 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem36 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem37 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem38 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem39 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem40 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem41 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem42 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem43 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem44 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem45 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem46 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem47 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem48 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem49 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem50 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem51 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem52 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem53 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem54 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem55 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem56 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem57 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem58 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem59 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem60 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem61 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem62 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->uSAToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->uSSRToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem63 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem64 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem65 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem66 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem67 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem68 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem69 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem70 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem71 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem72 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem73 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem74 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->uSAToolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->startToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem75 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem76 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem77 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem78 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem79 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem80 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem81 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem82 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->uSSRToolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->startToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem83 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem84 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem85 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem86 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem87 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem88 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem89 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem90 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->menuToolStripMenuItem,
					this->developerToolsToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1085, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->newGameToolStripMenuItem });
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(58, 24);
			this->menuToolStripMenuItem->Text = L"Menu";
			// 
			// developerToolsToolStripMenuItem
			// 
			this->developerToolsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->countryToolStripMenuItem,
					this->gameToolStripMenuItem, this->handsToolStripMenuItem
			});
			this->developerToolsToolStripMenuItem->Name = L"developerToolsToolStripMenuItem";
			this->developerToolsToolStripMenuItem->Size = System::Drawing::Size(130, 24);
			this->developerToolsToolStripMenuItem->Text = L"Developer Tools";
			// 
			// newGameToolStripMenuItem
			// 
			this->newGameToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->uSAToolStripMenuItem,
					this->uSSRToolStripMenuItem
			});
			this->newGameToolStripMenuItem->Name = L"newGameToolStripMenuItem";
			this->newGameToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->newGameToolStripMenuItem->Text = L"New game";
			// 
			// uSAToolStripMenuItem
			// 
			this->uSAToolStripMenuItem->Name = L"uSAToolStripMenuItem";
			this->uSAToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->uSAToolStripMenuItem->Text = L"USA";
			// 
			// uSSRToolStripMenuItem
			// 
			this->uSSRToolStripMenuItem->Name = L"uSSRToolStripMenuItem";
			this->uSSRToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->uSSRToolStripMenuItem->Text = L"USSR";
			// 
			// countryToolStripMenuItem
			// 
			this->countryToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->africaToolStripMenuItem,
					this->asiaToolStripMenuItem, this->centralAmericaToolStripMenuItem, this->europeToolStripMenuItem, this->middleEastToolStripMenuItem,
					this->southAmericaToolStripMenuItem
			});
			this->countryToolStripMenuItem->Name = L"countryToolStripMenuItem";
			this->countryToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->countryToolStripMenuItem->Text = L"Country";
			// 
			// gameToolStripMenuItem
			// 
			this->gameToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->turnToolStripMenuItem,
					this->roundToolStripMenuItem, this->scoreToolStripMenuItem, this->defconToolStripMenuItem, this->militaryOpsToolStripMenuItem,
					this->spaceRaceToolStripMenuItem, this->eventToolStripMenuItem, this->resetToolStripMenuItem
			});
			this->gameToolStripMenuItem->Name = L"gameToolStripMenuItem";
			this->gameToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->gameToolStripMenuItem->Text = L"Game";
			// 
			// handsToolStripMenuItem
			// 
			this->handsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->uSAToolStripMenuItem1,
					this->uSSRToolStripMenuItem1
			});
			this->handsToolStripMenuItem->Name = L"handsToolStripMenuItem";
			this->handsToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->handsToolStripMenuItem->Text = L"Hands";
			// 
			// uSAToolStripMenuItem1
			// 
			this->uSAToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->revealToolStripMenuItem });
			this->uSAToolStripMenuItem1->Name = L"uSAToolStripMenuItem1";
			this->uSAToolStripMenuItem1->Size = System::Drawing::Size(181, 26);
			this->uSAToolStripMenuItem1->Text = L"USA";
			// 
			// uSSRToolStripMenuItem1
			// 
			this->uSSRToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->revealToolStripMenuItem1 });
			this->uSSRToolStripMenuItem1->Name = L"uSSRToolStripMenuItem1";
			this->uSSRToolStripMenuItem1->Size = System::Drawing::Size(181, 26);
			this->uSSRToolStripMenuItem1->Text = L"USSR";
			// 
			// revealToolStripMenuItem
			// 
			this->revealToolStripMenuItem->Name = L"revealToolStripMenuItem";
			this->revealToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->revealToolStripMenuItem->Text = L"Reveal";
			// 
			// revealToolStripMenuItem1
			// 
			this->revealToolStripMenuItem1->Name = L"revealToolStripMenuItem1";
			this->revealToolStripMenuItem1->Size = System::Drawing::Size(181, 26);
			this->revealToolStripMenuItem1->Text = L"Reveal";
			// 
			// africaToolStripMenuItem
			// 
			this->africaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(18) {
				this->algeriaToolStripMenuItem,
					this->angolaToolStripMenuItem, this->botsawnaToolStripMenuItem, this->cameroonToolStripMenuItem, this->ethiopiaToolStripMenuItem,
					this->ivoryCoastToolStripMenuItem, this->kenyaToolStripMenuItem, this->moroccoToolStripMenuItem, this->nigeriaToolStripMenuItem,
					this->saharanStatesToolStripMenuItem, this->sEAfricanStatesToolStripMenuItem, this->somaliaToolStripMenuItem, this->southAfricaToolStripMenuItem,
					this->sudanToolStripMenuItem, this->tunisiaToolStripMenuItem, this->westAfricanStatesToolStripMenuItem, this->zaireToolStripMenuItem,
					this->zimbabweToolStripMenuItem
			});
			this->africaToolStripMenuItem->Name = L"africaToolStripMenuItem";
			this->africaToolStripMenuItem->Size = System::Drawing::Size(190, 26);
			this->africaToolStripMenuItem->Text = L"Africa";
			// 
			// asiaToolStripMenuItem
			// 
			this->asiaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(15) {
				this->afghanistanToolStripMenuItem,
					this->australiaToolStripMenuItem, this->burmaToolStripMenuItem, this->indiaToolStripMenuItem, this->indonesiaToolStripMenuItem,
					this->japanToolStripMenuItem, this->laosCambodiaToolStripMenuItem, this->malaysiaToolStripMenuItem, this->northKoreaToolStripMenuItem,
					this->pakistanToolStripMenuItem, this->philippinesToolStripMenuItem, this->southKoreaToolStripMenuItem, this->taiwanToolStripMenuItem,
					this->thailandToolStripMenuItem, this->vietnamToolStripMenuItem
			});
			this->asiaToolStripMenuItem->Name = L"asiaToolStripMenuItem";
			this->asiaToolStripMenuItem->Size = System::Drawing::Size(190, 26);
			this->asiaToolStripMenuItem->Text = L"Asia";
			// 
			// centralAmericaToolStripMenuItem
			// 
			this->centralAmericaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(10) {
				this->costaRicaToolStripMenuItem,
					this->cubaToolStripMenuItem, this->dominicanRepToolStripMenuItem, this->elSalvadorToolStripMenuItem, this->guatemalaToolStripMenuItem,
					this->hatiToolStripMenuItem, this->hondurasToolStripMenuItem, this->mexicoToolStripMenuItem, this->nicaraguaToolStripMenuItem,
					this->panamaToolStripMenuItem
			});
			this->centralAmericaToolStripMenuItem->Name = L"centralAmericaToolStripMenuItem";
			this->centralAmericaToolStripMenuItem->Size = System::Drawing::Size(190, 26);
			this->centralAmericaToolStripMenuItem->Text = L"Central America";
			// 
			// europeToolStripMenuItem
			// 
			this->europeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(20) {
				this->austriaToolStripMenuItem,
					this->benluxToolStripMenuItem, this->bulgariaToolStripMenuItem, this->canadaToolStripMenuItem, this->czechoslovakiaToolStripMenuItem,
					this->denmarkToolStripMenuItem, this->eGermanyToolStripMenuItem, this->finlandToolStripMenuItem, this->franceToolStripMenuItem,
					this->greeceToolStripMenuItem, this->hungaryToolStripMenuItem, this->italyToolStripMenuItem, this->norwayToolStripMenuItem, this->polandToolStripMenuItem,
					this->romaniaToolStripMenuItem, this->sweedenToolStripMenuItem, this->turkeyToolStripMenuItem, this->uKToolStripMenuItem, this->wGermanyToolStripMenuItem,
					this->yugoslaviaToolStripMenuItem
			});
			this->europeToolStripMenuItem->Name = L"europeToolStripMenuItem";
			this->europeToolStripMenuItem->Size = System::Drawing::Size(190, 26);
			this->europeToolStripMenuItem->Text = L"Europe";
			// 
			// middleEastToolStripMenuItem
			// 
			this->middleEastToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(10) {
				this->egyptToolStripMenuItem,
					this->gulfStatesToolStripMenuItem, this->iranToolStripMenuItem, this->iraqToolStripMenuItem, this->israelToolStripMenuItem, this->jordanToolStripMenuItem,
					this->lebanonToolStripMenuItem, this->libyaToolStripMenuItem, this->saudiArabiaToolStripMenuItem, this->syriaToolStripMenuItem
			});
			this->middleEastToolStripMenuItem->Name = L"middleEastToolStripMenuItem";
			this->middleEastToolStripMenuItem->Size = System::Drawing::Size(190, 26);
			this->middleEastToolStripMenuItem->Text = L"Middle East";
			// 
			// southAmericaToolStripMenuItem
			// 
			this->southAmericaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(10) {
				this->argentinaToolStripMenuItem,
					this->brazilToolStripMenuItem, this->boliviaToolStripMenuItem, this->chileToolStripMenuItem, this->colombiaToolStripMenuItem,
					this->ecuadorToolStripMenuItem, this->paraguayToolStripMenuItem, this->peruToolStripMenuItem, this->uruguayToolStripMenuItem,
					this->venezuelaToolStripMenuItem
			});
			this->southAmericaToolStripMenuItem->Name = L"southAmericaToolStripMenuItem";
			this->southAmericaToolStripMenuItem->Size = System::Drawing::Size(190, 26);
			this->southAmericaToolStripMenuItem->Text = L"South America";
			// 
			// algeriaToolStripMenuItem
			// 
			this->algeriaToolStripMenuItem->Name = L"algeriaToolStripMenuItem";
			this->algeriaToolStripMenuItem->Size = System::Drawing::Size(212, 26);
			this->algeriaToolStripMenuItem->Text = L"Algeria";
			// 
			// angolaToolStripMenuItem
			// 
			this->angolaToolStripMenuItem->Name = L"angolaToolStripMenuItem";
			this->angolaToolStripMenuItem->Size = System::Drawing::Size(212, 26);
			this->angolaToolStripMenuItem->Text = L"Angola";
			// 
			// botsawnaToolStripMenuItem
			// 
			this->botsawnaToolStripMenuItem->Name = L"botsawnaToolStripMenuItem";
			this->botsawnaToolStripMenuItem->Size = System::Drawing::Size(212, 26);
			this->botsawnaToolStripMenuItem->Text = L"Botsawna";
			// 
			// cameroonToolStripMenuItem
			// 
			this->cameroonToolStripMenuItem->Name = L"cameroonToolStripMenuItem";
			this->cameroonToolStripMenuItem->Size = System::Drawing::Size(212, 26);
			this->cameroonToolStripMenuItem->Text = L"Cameroon";
			// 
			// ethiopiaToolStripMenuItem
			// 
			this->ethiopiaToolStripMenuItem->Name = L"ethiopiaToolStripMenuItem";
			this->ethiopiaToolStripMenuItem->Size = System::Drawing::Size(212, 26);
			this->ethiopiaToolStripMenuItem->Text = L"Ethiopia";
			// 
			// ivoryCoastToolStripMenuItem
			// 
			this->ivoryCoastToolStripMenuItem->Name = L"ivoryCoastToolStripMenuItem";
			this->ivoryCoastToolStripMenuItem->Size = System::Drawing::Size(212, 26);
			this->ivoryCoastToolStripMenuItem->Text = L"Ivory Coast";
			// 
			// kenyaToolStripMenuItem
			// 
			this->kenyaToolStripMenuItem->Name = L"kenyaToolStripMenuItem";
			this->kenyaToolStripMenuItem->Size = System::Drawing::Size(212, 26);
			this->kenyaToolStripMenuItem->Text = L"Kenya";
			// 
			// moroccoToolStripMenuItem
			// 
			this->moroccoToolStripMenuItem->Name = L"moroccoToolStripMenuItem";
			this->moroccoToolStripMenuItem->Size = System::Drawing::Size(212, 26);
			this->moroccoToolStripMenuItem->Text = L"Morocco";
			// 
			// nigeriaToolStripMenuItem
			// 
			this->nigeriaToolStripMenuItem->Name = L"nigeriaToolStripMenuItem";
			this->nigeriaToolStripMenuItem->Size = System::Drawing::Size(212, 26);
			this->nigeriaToolStripMenuItem->Text = L"Nigeria";
			// 
			// saharanStatesToolStripMenuItem
			// 
			this->saharanStatesToolStripMenuItem->Name = L"saharanStatesToolStripMenuItem";
			this->saharanStatesToolStripMenuItem->Size = System::Drawing::Size(212, 26);
			this->saharanStatesToolStripMenuItem->Text = L"Saharan States";
			// 
			// sEAfricanStatesToolStripMenuItem
			// 
			this->sEAfricanStatesToolStripMenuItem->Name = L"sEAfricanStatesToolStripMenuItem";
			this->sEAfricanStatesToolStripMenuItem->Size = System::Drawing::Size(212, 26);
			this->sEAfricanStatesToolStripMenuItem->Text = L"SE African States";
			// 
			// somaliaToolStripMenuItem
			// 
			this->somaliaToolStripMenuItem->Name = L"somaliaToolStripMenuItem";
			this->somaliaToolStripMenuItem->Size = System::Drawing::Size(212, 26);
			this->somaliaToolStripMenuItem->Text = L"Somalia";
			// 
			// southAfricaToolStripMenuItem
			// 
			this->southAfricaToolStripMenuItem->Name = L"southAfricaToolStripMenuItem";
			this->southAfricaToolStripMenuItem->Size = System::Drawing::Size(212, 26);
			this->southAfricaToolStripMenuItem->Text = L"South Africa";
			// 
			// sudanToolStripMenuItem
			// 
			this->sudanToolStripMenuItem->Name = L"sudanToolStripMenuItem";
			this->sudanToolStripMenuItem->Size = System::Drawing::Size(212, 26);
			this->sudanToolStripMenuItem->Text = L"Sudan";
			// 
			// tunisiaToolStripMenuItem
			// 
			this->tunisiaToolStripMenuItem->Name = L"tunisiaToolStripMenuItem";
			this->tunisiaToolStripMenuItem->Size = System::Drawing::Size(212, 26);
			this->tunisiaToolStripMenuItem->Text = L"Tunisia";
			// 
			// westAfricanStatesToolStripMenuItem
			// 
			this->westAfricanStatesToolStripMenuItem->Name = L"westAfricanStatesToolStripMenuItem";
			this->westAfricanStatesToolStripMenuItem->Size = System::Drawing::Size(212, 26);
			this->westAfricanStatesToolStripMenuItem->Text = L"West African States";
			// 
			// zaireToolStripMenuItem
			// 
			this->zaireToolStripMenuItem->Name = L"zaireToolStripMenuItem";
			this->zaireToolStripMenuItem->Size = System::Drawing::Size(212, 26);
			this->zaireToolStripMenuItem->Text = L"Zaire";
			// 
			// zimbabweToolStripMenuItem
			// 
			this->zimbabweToolStripMenuItem->Name = L"zimbabweToolStripMenuItem";
			this->zimbabweToolStripMenuItem->Size = System::Drawing::Size(212, 26);
			this->zimbabweToolStripMenuItem->Text = L"Zimbabwe";
			// 
			// afghanistanToolStripMenuItem
			// 
			this->afghanistanToolStripMenuItem->Name = L"afghanistanToolStripMenuItem";
			this->afghanistanToolStripMenuItem->Size = System::Drawing::Size(189, 26);
			this->afghanistanToolStripMenuItem->Text = L"Afghanistan";
			// 
			// australiaToolStripMenuItem
			// 
			this->australiaToolStripMenuItem->Name = L"australiaToolStripMenuItem";
			this->australiaToolStripMenuItem->Size = System::Drawing::Size(189, 26);
			this->australiaToolStripMenuItem->Text = L"Australia";
			// 
			// burmaToolStripMenuItem
			// 
			this->burmaToolStripMenuItem->Name = L"burmaToolStripMenuItem";
			this->burmaToolStripMenuItem->Size = System::Drawing::Size(189, 26);
			this->burmaToolStripMenuItem->Text = L"Burma";
			// 
			// indiaToolStripMenuItem
			// 
			this->indiaToolStripMenuItem->Name = L"indiaToolStripMenuItem";
			this->indiaToolStripMenuItem->Size = System::Drawing::Size(189, 26);
			this->indiaToolStripMenuItem->Text = L"India";
			// 
			// indonesiaToolStripMenuItem
			// 
			this->indonesiaToolStripMenuItem->Name = L"indonesiaToolStripMenuItem";
			this->indonesiaToolStripMenuItem->Size = System::Drawing::Size(189, 26);
			this->indonesiaToolStripMenuItem->Text = L"Indonesia";
			// 
			// japanToolStripMenuItem
			// 
			this->japanToolStripMenuItem->Name = L"japanToolStripMenuItem";
			this->japanToolStripMenuItem->Size = System::Drawing::Size(189, 26);
			this->japanToolStripMenuItem->Text = L"Japan";
			// 
			// laosCambodiaToolStripMenuItem
			// 
			this->laosCambodiaToolStripMenuItem->Name = L"laosCambodiaToolStripMenuItem";
			this->laosCambodiaToolStripMenuItem->Size = System::Drawing::Size(189, 26);
			this->laosCambodiaToolStripMenuItem->Text = L"Laos/Cambodia";
			// 
			// malaysiaToolStripMenuItem
			// 
			this->malaysiaToolStripMenuItem->Name = L"malaysiaToolStripMenuItem";
			this->malaysiaToolStripMenuItem->Size = System::Drawing::Size(189, 26);
			this->malaysiaToolStripMenuItem->Text = L"Malaysia";
			// 
			// northKoreaToolStripMenuItem
			// 
			this->northKoreaToolStripMenuItem->Name = L"northKoreaToolStripMenuItem";
			this->northKoreaToolStripMenuItem->Size = System::Drawing::Size(189, 26);
			this->northKoreaToolStripMenuItem->Text = L"North Korea";
			// 
			// pakistanToolStripMenuItem
			// 
			this->pakistanToolStripMenuItem->Name = L"pakistanToolStripMenuItem";
			this->pakistanToolStripMenuItem->Size = System::Drawing::Size(189, 26);
			this->pakistanToolStripMenuItem->Text = L"Pakistan";
			// 
			// philippinesToolStripMenuItem
			// 
			this->philippinesToolStripMenuItem->Name = L"philippinesToolStripMenuItem";
			this->philippinesToolStripMenuItem->Size = System::Drawing::Size(189, 26);
			this->philippinesToolStripMenuItem->Text = L"Philippines";
			// 
			// southKoreaToolStripMenuItem
			// 
			this->southKoreaToolStripMenuItem->Name = L"southKoreaToolStripMenuItem";
			this->southKoreaToolStripMenuItem->Size = System::Drawing::Size(189, 26);
			this->southKoreaToolStripMenuItem->Text = L"South Korea";
			// 
			// taiwanToolStripMenuItem
			// 
			this->taiwanToolStripMenuItem->Name = L"taiwanToolStripMenuItem";
			this->taiwanToolStripMenuItem->Size = System::Drawing::Size(189, 26);
			this->taiwanToolStripMenuItem->Text = L"Taiwan";
			// 
			// thailandToolStripMenuItem
			// 
			this->thailandToolStripMenuItem->Name = L"thailandToolStripMenuItem";
			this->thailandToolStripMenuItem->Size = System::Drawing::Size(189, 26);
			this->thailandToolStripMenuItem->Text = L"Thailand";
			// 
			// vietnamToolStripMenuItem
			// 
			this->vietnamToolStripMenuItem->Name = L"vietnamToolStripMenuItem";
			this->vietnamToolStripMenuItem->Size = System::Drawing::Size(189, 26);
			this->vietnamToolStripMenuItem->Text = L"Vietnam";
			// 
			// costaRicaToolStripMenuItem
			// 
			this->costaRicaToolStripMenuItem->Name = L"costaRicaToolStripMenuItem";
			this->costaRicaToolStripMenuItem->Size = System::Drawing::Size(189, 26);
			this->costaRicaToolStripMenuItem->Text = L"Costa Rica";
			// 
			// cubaToolStripMenuItem
			// 
			this->cubaToolStripMenuItem->Name = L"cubaToolStripMenuItem";
			this->cubaToolStripMenuItem->Size = System::Drawing::Size(189, 26);
			this->cubaToolStripMenuItem->Text = L"Cuba";
			// 
			// dominicanRepToolStripMenuItem
			// 
			this->dominicanRepToolStripMenuItem->Name = L"dominicanRepToolStripMenuItem";
			this->dominicanRepToolStripMenuItem->Size = System::Drawing::Size(189, 26);
			this->dominicanRepToolStripMenuItem->Text = L"Dominican Rep.";
			// 
			// elSalvadorToolStripMenuItem
			// 
			this->elSalvadorToolStripMenuItem->Name = L"elSalvadorToolStripMenuItem";
			this->elSalvadorToolStripMenuItem->Size = System::Drawing::Size(189, 26);
			this->elSalvadorToolStripMenuItem->Text = L"El Salvador";
			// 
			// guatemalaToolStripMenuItem
			// 
			this->guatemalaToolStripMenuItem->Name = L"guatemalaToolStripMenuItem";
			this->guatemalaToolStripMenuItem->Size = System::Drawing::Size(189, 26);
			this->guatemalaToolStripMenuItem->Text = L"Guatemala";
			// 
			// hatiToolStripMenuItem
			// 
			this->hatiToolStripMenuItem->Name = L"hatiToolStripMenuItem";
			this->hatiToolStripMenuItem->Size = System::Drawing::Size(189, 26);
			this->hatiToolStripMenuItem->Text = L"Hati";
			// 
			// hondurasToolStripMenuItem
			// 
			this->hondurasToolStripMenuItem->Name = L"hondurasToolStripMenuItem";
			this->hondurasToolStripMenuItem->Size = System::Drawing::Size(189, 26);
			this->hondurasToolStripMenuItem->Text = L"Honduras";
			// 
			// mexicoToolStripMenuItem
			// 
			this->mexicoToolStripMenuItem->Name = L"mexicoToolStripMenuItem";
			this->mexicoToolStripMenuItem->Size = System::Drawing::Size(189, 26);
			this->mexicoToolStripMenuItem->Text = L"Mexico";
			// 
			// nicaraguaToolStripMenuItem
			// 
			this->nicaraguaToolStripMenuItem->Name = L"nicaraguaToolStripMenuItem";
			this->nicaraguaToolStripMenuItem->Size = System::Drawing::Size(189, 26);
			this->nicaraguaToolStripMenuItem->Text = L"Nicaragua";
			// 
			// panamaToolStripMenuItem
			// 
			this->panamaToolStripMenuItem->Name = L"panamaToolStripMenuItem";
			this->panamaToolStripMenuItem->Size = System::Drawing::Size(189, 26);
			this->panamaToolStripMenuItem->Text = L"Panama";
			// 
			// austriaToolStripMenuItem
			// 
			this->austriaToolStripMenuItem->Name = L"austriaToolStripMenuItem";
			this->austriaToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->austriaToolStripMenuItem->Text = L"Austria";
			// 
			// benluxToolStripMenuItem
			// 
			this->benluxToolStripMenuItem->Name = L"benluxToolStripMenuItem";
			this->benluxToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->benluxToolStripMenuItem->Text = L"Benlux";
			// 
			// bulgariaToolStripMenuItem
			// 
			this->bulgariaToolStripMenuItem->Name = L"bulgariaToolStripMenuItem";
			this->bulgariaToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->bulgariaToolStripMenuItem->Text = L"Bulgaria";
			// 
			// canadaToolStripMenuItem
			// 
			this->canadaToolStripMenuItem->Name = L"canadaToolStripMenuItem";
			this->canadaToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->canadaToolStripMenuItem->Text = L"Canada";
			// 
			// czechoslovakiaToolStripMenuItem
			// 
			this->czechoslovakiaToolStripMenuItem->Name = L"czechoslovakiaToolStripMenuItem";
			this->czechoslovakiaToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->czechoslovakiaToolStripMenuItem->Text = L"Czechoslovakia";
			// 
			// denmarkToolStripMenuItem
			// 
			this->denmarkToolStripMenuItem->Name = L"denmarkToolStripMenuItem";
			this->denmarkToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->denmarkToolStripMenuItem->Text = L"Denmark";
			// 
			// eGermanyToolStripMenuItem
			// 
			this->eGermanyToolStripMenuItem->Name = L"eGermanyToolStripMenuItem";
			this->eGermanyToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->eGermanyToolStripMenuItem->Text = L"E. Germany";
			// 
			// finlandToolStripMenuItem
			// 
			this->finlandToolStripMenuItem->Name = L"finlandToolStripMenuItem";
			this->finlandToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->finlandToolStripMenuItem->Text = L"Finland";
			// 
			// franceToolStripMenuItem
			// 
			this->franceToolStripMenuItem->Name = L"franceToolStripMenuItem";
			this->franceToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->franceToolStripMenuItem->Text = L"France";
			// 
			// greeceToolStripMenuItem
			// 
			this->greeceToolStripMenuItem->Name = L"greeceToolStripMenuItem";
			this->greeceToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->greeceToolStripMenuItem->Text = L"Greece";
			// 
			// hungaryToolStripMenuItem
			// 
			this->hungaryToolStripMenuItem->Name = L"hungaryToolStripMenuItem";
			this->hungaryToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->hungaryToolStripMenuItem->Text = L"Hungary";
			// 
			// italyToolStripMenuItem
			// 
			this->italyToolStripMenuItem->Name = L"italyToolStripMenuItem";
			this->italyToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->italyToolStripMenuItem->Text = L"Italy";
			// 
			// norwayToolStripMenuItem
			// 
			this->norwayToolStripMenuItem->Name = L"norwayToolStripMenuItem";
			this->norwayToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->norwayToolStripMenuItem->Text = L"Norway";
			// 
			// polandToolStripMenuItem
			// 
			this->polandToolStripMenuItem->Name = L"polandToolStripMenuItem";
			this->polandToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->polandToolStripMenuItem->Text = L"Poland";
			// 
			// romaniaToolStripMenuItem
			// 
			this->romaniaToolStripMenuItem->Name = L"romaniaToolStripMenuItem";
			this->romaniaToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->romaniaToolStripMenuItem->Text = L"Romania";
			// 
			// sweedenToolStripMenuItem
			// 
			this->sweedenToolStripMenuItem->Name = L"sweedenToolStripMenuItem";
			this->sweedenToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->sweedenToolStripMenuItem->Text = L"Sweeden";
			// 
			// turkeyToolStripMenuItem
			// 
			this->turkeyToolStripMenuItem->Name = L"turkeyToolStripMenuItem";
			this->turkeyToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->turkeyToolStripMenuItem->Text = L"Turkey";
			// 
			// uKToolStripMenuItem
			// 
			this->uKToolStripMenuItem->Name = L"uKToolStripMenuItem";
			this->uKToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->uKToolStripMenuItem->Text = L"U.K.";
			// 
			// wGermanyToolStripMenuItem
			// 
			this->wGermanyToolStripMenuItem->Name = L"wGermanyToolStripMenuItem";
			this->wGermanyToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->wGermanyToolStripMenuItem->Text = L"W. Germany";
			// 
			// yugoslaviaToolStripMenuItem
			// 
			this->yugoslaviaToolStripMenuItem->Name = L"yugoslaviaToolStripMenuItem";
			this->yugoslaviaToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->yugoslaviaToolStripMenuItem->Text = L"Yugoslavia";
			// 
			// egyptToolStripMenuItem
			// 
			this->egyptToolStripMenuItem->Name = L"egyptToolStripMenuItem";
			this->egyptToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->egyptToolStripMenuItem->Text = L"Egypt";
			// 
			// gulfStatesToolStripMenuItem
			// 
			this->gulfStatesToolStripMenuItem->Name = L"gulfStatesToolStripMenuItem";
			this->gulfStatesToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->gulfStatesToolStripMenuItem->Text = L"Gulf States";
			// 
			// iranToolStripMenuItem
			// 
			this->iranToolStripMenuItem->Name = L"iranToolStripMenuItem";
			this->iranToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->iranToolStripMenuItem->Text = L"Iran";
			// 
			// iraqToolStripMenuItem
			// 
			this->iraqToolStripMenuItem->Name = L"iraqToolStripMenuItem";
			this->iraqToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->iraqToolStripMenuItem->Text = L"Iraq";
			// 
			// israelToolStripMenuItem
			// 
			this->israelToolStripMenuItem->Name = L"israelToolStripMenuItem";
			this->israelToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->israelToolStripMenuItem->Text = L"Israel";
			// 
			// jordanToolStripMenuItem
			// 
			this->jordanToolStripMenuItem->Name = L"jordanToolStripMenuItem";
			this->jordanToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->jordanToolStripMenuItem->Text = L"Jordan";
			// 
			// lebanonToolStripMenuItem
			// 
			this->lebanonToolStripMenuItem->Name = L"lebanonToolStripMenuItem";
			this->lebanonToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->lebanonToolStripMenuItem->Text = L"Lebanon";
			// 
			// libyaToolStripMenuItem
			// 
			this->libyaToolStripMenuItem->Name = L"libyaToolStripMenuItem";
			this->libyaToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->libyaToolStripMenuItem->Text = L"Libya";
			// 
			// saudiArabiaToolStripMenuItem
			// 
			this->saudiArabiaToolStripMenuItem->Name = L"saudiArabiaToolStripMenuItem";
			this->saudiArabiaToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->saudiArabiaToolStripMenuItem->Text = L"Saudi Arabia";
			// 
			// syriaToolStripMenuItem
			// 
			this->syriaToolStripMenuItem->Name = L"syriaToolStripMenuItem";
			this->syriaToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->syriaToolStripMenuItem->Text = L"Syria";
			// 
			// argentinaToolStripMenuItem
			// 
			this->argentinaToolStripMenuItem->Name = L"argentinaToolStripMenuItem";
			this->argentinaToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->argentinaToolStripMenuItem->Text = L"Argentina";
			// 
			// brazilToolStripMenuItem
			// 
			this->brazilToolStripMenuItem->Name = L"brazilToolStripMenuItem";
			this->brazilToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->brazilToolStripMenuItem->Text = L"Brazil";
			// 
			// boliviaToolStripMenuItem
			// 
			this->boliviaToolStripMenuItem->Name = L"boliviaToolStripMenuItem";
			this->boliviaToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->boliviaToolStripMenuItem->Text = L"Bolivia";
			// 
			// chileToolStripMenuItem
			// 
			this->chileToolStripMenuItem->Name = L"chileToolStripMenuItem";
			this->chileToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->chileToolStripMenuItem->Text = L"Chile";
			// 
			// colombiaToolStripMenuItem
			// 
			this->colombiaToolStripMenuItem->Name = L"colombiaToolStripMenuItem";
			this->colombiaToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->colombiaToolStripMenuItem->Text = L"Colombia";
			// 
			// ecuadorToolStripMenuItem
			// 
			this->ecuadorToolStripMenuItem->Name = L"ecuadorToolStripMenuItem";
			this->ecuadorToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->ecuadorToolStripMenuItem->Text = L"Ecuador";
			// 
			// paraguayToolStripMenuItem
			// 
			this->paraguayToolStripMenuItem->Name = L"paraguayToolStripMenuItem";
			this->paraguayToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->paraguayToolStripMenuItem->Text = L"Paraguay";
			// 
			// peruToolStripMenuItem
			// 
			this->peruToolStripMenuItem->Name = L"peruToolStripMenuItem";
			this->peruToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->peruToolStripMenuItem->Text = L"Peru";
			// 
			// uruguayToolStripMenuItem
			// 
			this->uruguayToolStripMenuItem->Name = L"uruguayToolStripMenuItem";
			this->uruguayToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->uruguayToolStripMenuItem->Text = L"Uruguay";
			// 
			// venezuelaToolStripMenuItem
			// 
			this->venezuelaToolStripMenuItem->Name = L"venezuelaToolStripMenuItem";
			this->venezuelaToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->venezuelaToolStripMenuItem->Text = L"Venezuela";
			// 
			// turnToolStripMenuItem
			// 
			this->turnToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(10) {
				this->toolStripMenuItem2,
					this->toolStripMenuItem3, this->toolStripMenuItem4, this->toolStripMenuItem5, this->toolStripMenuItem6, this->toolStripMenuItem7,
					this->toolStripMenuItem8, this->toolStripMenuItem9, this->toolStripMenuItem10, this->toolStripMenuItem11
			});
			this->turnToolStripMenuItem->Name = L"turnToolStripMenuItem";
			this->turnToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->turnToolStripMenuItem->Text = L"Turn";
			// 
			// roundToolStripMenuItem
			// 
			this->roundToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {
				this->headlinePhaseToolStripMenuItem,
					this->toolStripMenuItem12, this->toolStripMenuItem13, this->toolStripMenuItem14, this->toolStripMenuItem15, this->toolStripMenuItem16,
					this->toolStripMenuItem17, this->toolStripMenuItem18, this->toolStripMenuItem19
			});
			this->roundToolStripMenuItem->Name = L"roundToolStripMenuItem";
			this->roundToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->roundToolStripMenuItem->Text = L"Round";
			// 
			// scoreToolStripMenuItem
			// 
			this->scoreToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripMenuItem20,
					this->uSAToolStripMenuItem2, this->uSSRToolStripMenuItem2
			});
			this->scoreToolStripMenuItem->Name = L"scoreToolStripMenuItem";
			this->scoreToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->scoreToolStripMenuItem->Text = L"Score";
			// 
			// defconToolStripMenuItem
			// 
			this->defconToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripMenuItem59,
					this->toolStripMenuItem60, this->toolStripMenuItem61, this->toolStripMenuItem62
			});
			this->defconToolStripMenuItem->Name = L"defconToolStripMenuItem";
			this->defconToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->defconToolStripMenuItem->Text = L"Defcon";
			// 
			// militaryOpsToolStripMenuItem
			// 
			this->militaryOpsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->uSAToolStripMenuItem3,
					this->uSSRToolStripMenuItem3
			});
			this->militaryOpsToolStripMenuItem->Name = L"militaryOpsToolStripMenuItem";
			this->militaryOpsToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->militaryOpsToolStripMenuItem->Text = L"Military Ops";
			// 
			// spaceRaceToolStripMenuItem
			// 
			this->spaceRaceToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->uSAToolStripMenuItem4,
					this->uSSRToolStripMenuItem4
			});
			this->spaceRaceToolStripMenuItem->Name = L"spaceRaceToolStripMenuItem";
			this->spaceRaceToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->spaceRaceToolStripMenuItem->Text = L"Space Race";
			// 
			// eventToolStripMenuItem
			// 
			this->eventToolStripMenuItem->Name = L"eventToolStripMenuItem";
			this->eventToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->eventToolStripMenuItem->Text = L"Event";
			// 
			// resetToolStripMenuItem
			// 
			this->resetToolStripMenuItem->Name = L"resetToolStripMenuItem";
			this->resetToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->resetToolStripMenuItem->Text = L"Reset";
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem2->Text = L"1";
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem3->Text = L"2";
			// 
			// toolStripMenuItem4
			// 
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem4->Text = L"3";
			// 
			// toolStripMenuItem5
			// 
			this->toolStripMenuItem5->Name = L"toolStripMenuItem5";
			this->toolStripMenuItem5->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem5->Text = L"4";
			// 
			// toolStripMenuItem6
			// 
			this->toolStripMenuItem6->Name = L"toolStripMenuItem6";
			this->toolStripMenuItem6->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem6->Text = L"5";
			// 
			// toolStripMenuItem7
			// 
			this->toolStripMenuItem7->Name = L"toolStripMenuItem7";
			this->toolStripMenuItem7->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem7->Text = L"6";
			// 
			// toolStripMenuItem8
			// 
			this->toolStripMenuItem8->Name = L"toolStripMenuItem8";
			this->toolStripMenuItem8->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem8->Text = L"7";
			// 
			// toolStripMenuItem9
			// 
			this->toolStripMenuItem9->Name = L"toolStripMenuItem9";
			this->toolStripMenuItem9->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem9->Text = L"8";
			// 
			// toolStripMenuItem10
			// 
			this->toolStripMenuItem10->Name = L"toolStripMenuItem10";
			this->toolStripMenuItem10->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem10->Text = L"9";
			// 
			// toolStripMenuItem11
			// 
			this->toolStripMenuItem11->Name = L"toolStripMenuItem11";
			this->toolStripMenuItem11->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem11->Text = L"10";
			// 
			// headlinePhaseToolStripMenuItem
			// 
			this->headlinePhaseToolStripMenuItem->Name = L"headlinePhaseToolStripMenuItem";
			this->headlinePhaseToolStripMenuItem->Size = System::Drawing::Size(186, 26);
			this->headlinePhaseToolStripMenuItem->Text = L"Headline Phase";
			// 
			// toolStripMenuItem12
			// 
			this->toolStripMenuItem12->Name = L"toolStripMenuItem12";
			this->toolStripMenuItem12->Size = System::Drawing::Size(186, 26);
			this->toolStripMenuItem12->Text = L"1";
			// 
			// toolStripMenuItem13
			// 
			this->toolStripMenuItem13->Name = L"toolStripMenuItem13";
			this->toolStripMenuItem13->Size = System::Drawing::Size(186, 26);
			this->toolStripMenuItem13->Text = L"2";
			// 
			// toolStripMenuItem14
			// 
			this->toolStripMenuItem14->Name = L"toolStripMenuItem14";
			this->toolStripMenuItem14->Size = System::Drawing::Size(186, 26);
			this->toolStripMenuItem14->Text = L"3";
			// 
			// toolStripMenuItem15
			// 
			this->toolStripMenuItem15->Name = L"toolStripMenuItem15";
			this->toolStripMenuItem15->Size = System::Drawing::Size(186, 26);
			this->toolStripMenuItem15->Text = L"4";
			// 
			// toolStripMenuItem16
			// 
			this->toolStripMenuItem16->Name = L"toolStripMenuItem16";
			this->toolStripMenuItem16->Size = System::Drawing::Size(186, 26);
			this->toolStripMenuItem16->Text = L"5";
			// 
			// toolStripMenuItem17
			// 
			this->toolStripMenuItem17->Name = L"toolStripMenuItem17";
			this->toolStripMenuItem17->Size = System::Drawing::Size(186, 26);
			this->toolStripMenuItem17->Text = L"6";
			// 
			// toolStripMenuItem18
			// 
			this->toolStripMenuItem18->Name = L"toolStripMenuItem18";
			this->toolStripMenuItem18->Size = System::Drawing::Size(186, 26);
			this->toolStripMenuItem18->Text = L"7";
			// 
			// toolStripMenuItem19
			// 
			this->toolStripMenuItem19->Name = L"toolStripMenuItem19";
			this->toolStripMenuItem19->Size = System::Drawing::Size(186, 26);
			this->toolStripMenuItem19->Text = L"8";
			// 
			// toolStripMenuItem20
			// 
			this->toolStripMenuItem20->Name = L"toolStripMenuItem20";
			this->toolStripMenuItem20->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem20->Text = L"0";
			// 
			// uSAToolStripMenuItem2
			// 
			this->uSAToolStripMenuItem2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(19) {
				this->toolStripMenuItem21,
					this->toolStripMenuItem22, this->toolStripMenuItem23, this->toolStripMenuItem24, this->toolStripMenuItem25, this->toolStripMenuItem26,
					this->toolStripMenuItem27, this->toolStripMenuItem28, this->toolStripMenuItem29, this->toolStripMenuItem30, this->toolStripMenuItem31,
					this->toolStripMenuItem32, this->toolStripMenuItem33, this->toolStripMenuItem34, this->toolStripMenuItem35, this->toolStripMenuItem36,
					this->toolStripMenuItem37, this->toolStripMenuItem38, this->toolStripMenuItem39
			});
			this->uSAToolStripMenuItem2->Name = L"uSAToolStripMenuItem2";
			this->uSAToolStripMenuItem2->Size = System::Drawing::Size(181, 26);
			this->uSAToolStripMenuItem2->Text = L"USA";
			// 
			// uSSRToolStripMenuItem2
			// 
			this->uSSRToolStripMenuItem2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(19) {
				this->toolStripMenuItem40,
					this->toolStripMenuItem41, this->toolStripMenuItem42, this->toolStripMenuItem43, this->toolStripMenuItem44, this->toolStripMenuItem45,
					this->toolStripMenuItem46, this->toolStripMenuItem47, this->toolStripMenuItem48, this->toolStripMenuItem49, this->toolStripMenuItem50,
					this->toolStripMenuItem51, this->toolStripMenuItem52, this->toolStripMenuItem53, this->toolStripMenuItem54, this->toolStripMenuItem55,
					this->toolStripMenuItem56, this->toolStripMenuItem57, this->toolStripMenuItem58
			});
			this->uSSRToolStripMenuItem2->Name = L"uSSRToolStripMenuItem2";
			this->uSSRToolStripMenuItem2->Size = System::Drawing::Size(181, 26);
			this->uSSRToolStripMenuItem2->Text = L"USSR";
			// 
			// toolStripMenuItem21
			// 
			this->toolStripMenuItem21->Name = L"toolStripMenuItem21";
			this->toolStripMenuItem21->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem21->Text = L"1";
			// 
			// toolStripMenuItem22
			// 
			this->toolStripMenuItem22->Name = L"toolStripMenuItem22";
			this->toolStripMenuItem22->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem22->Text = L"2";
			// 
			// toolStripMenuItem23
			// 
			this->toolStripMenuItem23->Name = L"toolStripMenuItem23";
			this->toolStripMenuItem23->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem23->Text = L"3";
			// 
			// toolStripMenuItem24
			// 
			this->toolStripMenuItem24->Name = L"toolStripMenuItem24";
			this->toolStripMenuItem24->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem24->Text = L"4";
			// 
			// toolStripMenuItem25
			// 
			this->toolStripMenuItem25->Name = L"toolStripMenuItem25";
			this->toolStripMenuItem25->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem25->Text = L"5";
			// 
			// toolStripMenuItem26
			// 
			this->toolStripMenuItem26->Name = L"toolStripMenuItem26";
			this->toolStripMenuItem26->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem26->Text = L"6";
			// 
			// toolStripMenuItem27
			// 
			this->toolStripMenuItem27->Name = L"toolStripMenuItem27";
			this->toolStripMenuItem27->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem27->Text = L"7";
			// 
			// toolStripMenuItem28
			// 
			this->toolStripMenuItem28->Name = L"toolStripMenuItem28";
			this->toolStripMenuItem28->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem28->Text = L"8";
			// 
			// toolStripMenuItem29
			// 
			this->toolStripMenuItem29->Name = L"toolStripMenuItem29";
			this->toolStripMenuItem29->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem29->Text = L"9";
			// 
			// toolStripMenuItem30
			// 
			this->toolStripMenuItem30->Name = L"toolStripMenuItem30";
			this->toolStripMenuItem30->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem30->Text = L"10";
			// 
			// toolStripMenuItem31
			// 
			this->toolStripMenuItem31->Name = L"toolStripMenuItem31";
			this->toolStripMenuItem31->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem31->Text = L"11";
			// 
			// toolStripMenuItem32
			// 
			this->toolStripMenuItem32->Name = L"toolStripMenuItem32";
			this->toolStripMenuItem32->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem32->Text = L"12";
			// 
			// toolStripMenuItem33
			// 
			this->toolStripMenuItem33->Name = L"toolStripMenuItem33";
			this->toolStripMenuItem33->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem33->Text = L"13";
			// 
			// toolStripMenuItem34
			// 
			this->toolStripMenuItem34->Name = L"toolStripMenuItem34";
			this->toolStripMenuItem34->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem34->Text = L"14";
			// 
			// toolStripMenuItem35
			// 
			this->toolStripMenuItem35->Name = L"toolStripMenuItem35";
			this->toolStripMenuItem35->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem35->Text = L"15";
			// 
			// toolStripMenuItem36
			// 
			this->toolStripMenuItem36->Name = L"toolStripMenuItem36";
			this->toolStripMenuItem36->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem36->Text = L"16";
			// 
			// toolStripMenuItem37
			// 
			this->toolStripMenuItem37->Name = L"toolStripMenuItem37";
			this->toolStripMenuItem37->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem37->Text = L"17";
			// 
			// toolStripMenuItem38
			// 
			this->toolStripMenuItem38->Name = L"toolStripMenuItem38";
			this->toolStripMenuItem38->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem38->Text = L"18";
			// 
			// toolStripMenuItem39
			// 
			this->toolStripMenuItem39->Name = L"toolStripMenuItem39";
			this->toolStripMenuItem39->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem39->Text = L"19";
			// 
			// toolStripMenuItem40
			// 
			this->toolStripMenuItem40->Name = L"toolStripMenuItem40";
			this->toolStripMenuItem40->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem40->Text = L"1";
			// 
			// toolStripMenuItem41
			// 
			this->toolStripMenuItem41->Name = L"toolStripMenuItem41";
			this->toolStripMenuItem41->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem41->Text = L"2";
			// 
			// toolStripMenuItem42
			// 
			this->toolStripMenuItem42->Name = L"toolStripMenuItem42";
			this->toolStripMenuItem42->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem42->Text = L"3";
			// 
			// toolStripMenuItem43
			// 
			this->toolStripMenuItem43->Name = L"toolStripMenuItem43";
			this->toolStripMenuItem43->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem43->Text = L"4";
			// 
			// toolStripMenuItem44
			// 
			this->toolStripMenuItem44->Name = L"toolStripMenuItem44";
			this->toolStripMenuItem44->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem44->Text = L"5";
			// 
			// toolStripMenuItem45
			// 
			this->toolStripMenuItem45->Name = L"toolStripMenuItem45";
			this->toolStripMenuItem45->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem45->Text = L"6";
			// 
			// toolStripMenuItem46
			// 
			this->toolStripMenuItem46->Name = L"toolStripMenuItem46";
			this->toolStripMenuItem46->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem46->Text = L"7";
			// 
			// toolStripMenuItem47
			// 
			this->toolStripMenuItem47->Name = L"toolStripMenuItem47";
			this->toolStripMenuItem47->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem47->Text = L"8";
			// 
			// toolStripMenuItem48
			// 
			this->toolStripMenuItem48->Name = L"toolStripMenuItem48";
			this->toolStripMenuItem48->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem48->Text = L"9";
			// 
			// toolStripMenuItem49
			// 
			this->toolStripMenuItem49->Name = L"toolStripMenuItem49";
			this->toolStripMenuItem49->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem49->Text = L"10";
			// 
			// toolStripMenuItem50
			// 
			this->toolStripMenuItem50->Name = L"toolStripMenuItem50";
			this->toolStripMenuItem50->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem50->Text = L"11";
			// 
			// toolStripMenuItem51
			// 
			this->toolStripMenuItem51->Name = L"toolStripMenuItem51";
			this->toolStripMenuItem51->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem51->Text = L"12";
			// 
			// toolStripMenuItem52
			// 
			this->toolStripMenuItem52->Name = L"toolStripMenuItem52";
			this->toolStripMenuItem52->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem52->Text = L"13";
			// 
			// toolStripMenuItem53
			// 
			this->toolStripMenuItem53->Name = L"toolStripMenuItem53";
			this->toolStripMenuItem53->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem53->Text = L"14";
			// 
			// toolStripMenuItem54
			// 
			this->toolStripMenuItem54->Name = L"toolStripMenuItem54";
			this->toolStripMenuItem54->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem54->Text = L"15";
			// 
			// toolStripMenuItem55
			// 
			this->toolStripMenuItem55->Name = L"toolStripMenuItem55";
			this->toolStripMenuItem55->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem55->Text = L"16";
			// 
			// toolStripMenuItem56
			// 
			this->toolStripMenuItem56->Name = L"toolStripMenuItem56";
			this->toolStripMenuItem56->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem56->Text = L"17";
			// 
			// toolStripMenuItem57
			// 
			this->toolStripMenuItem57->Name = L"toolStripMenuItem57";
			this->toolStripMenuItem57->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem57->Text = L"18";
			// 
			// toolStripMenuItem58
			// 
			this->toolStripMenuItem58->Name = L"toolStripMenuItem58";
			this->toolStripMenuItem58->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem58->Text = L"19";
			// 
			// toolStripMenuItem59
			// 
			this->toolStripMenuItem59->Name = L"toolStripMenuItem59";
			this->toolStripMenuItem59->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem59->Text = L"5";
			// 
			// toolStripMenuItem60
			// 
			this->toolStripMenuItem60->Name = L"toolStripMenuItem60";
			this->toolStripMenuItem60->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem60->Text = L"4";
			// 
			// toolStripMenuItem61
			// 
			this->toolStripMenuItem61->Name = L"toolStripMenuItem61";
			this->toolStripMenuItem61->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem61->Text = L"3";
			// 
			// toolStripMenuItem62
			// 
			this->toolStripMenuItem62->Name = L"toolStripMenuItem62";
			this->toolStripMenuItem62->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem62->Text = L"2";
			// 
			// uSAToolStripMenuItem3
			// 
			this->uSAToolStripMenuItem3->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->toolStripMenuItem63,
					this->toolStripMenuItem64, this->toolStripMenuItem65, this->toolStripMenuItem66, this->toolStripMenuItem67, this->toolStripMenuItem68
			});
			this->uSAToolStripMenuItem3->Name = L"uSAToolStripMenuItem3";
			this->uSAToolStripMenuItem3->Size = System::Drawing::Size(181, 26);
			this->uSAToolStripMenuItem3->Text = L"USA";
			// 
			// uSSRToolStripMenuItem3
			// 
			this->uSSRToolStripMenuItem3->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->toolStripMenuItem69,
					this->toolStripMenuItem70, this->toolStripMenuItem71, this->toolStripMenuItem72, this->toolStripMenuItem73, this->toolStripMenuItem74
			});
			this->uSSRToolStripMenuItem3->Name = L"uSSRToolStripMenuItem3";
			this->uSSRToolStripMenuItem3->Size = System::Drawing::Size(181, 26);
			this->uSSRToolStripMenuItem3->Text = L"USSR";
			// 
			// toolStripMenuItem63
			// 
			this->toolStripMenuItem63->Name = L"toolStripMenuItem63";
			this->toolStripMenuItem63->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem63->Text = L"0";
			// 
			// toolStripMenuItem64
			// 
			this->toolStripMenuItem64->Name = L"toolStripMenuItem64";
			this->toolStripMenuItem64->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem64->Text = L"1";
			// 
			// toolStripMenuItem65
			// 
			this->toolStripMenuItem65->Name = L"toolStripMenuItem65";
			this->toolStripMenuItem65->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem65->Text = L"2";
			// 
			// toolStripMenuItem66
			// 
			this->toolStripMenuItem66->Name = L"toolStripMenuItem66";
			this->toolStripMenuItem66->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem66->Text = L"3";
			// 
			// toolStripMenuItem67
			// 
			this->toolStripMenuItem67->Name = L"toolStripMenuItem67";
			this->toolStripMenuItem67->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem67->Text = L"4";
			// 
			// toolStripMenuItem68
			// 
			this->toolStripMenuItem68->Name = L"toolStripMenuItem68";
			this->toolStripMenuItem68->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem68->Text = L"5";
			// 
			// toolStripMenuItem69
			// 
			this->toolStripMenuItem69->Name = L"toolStripMenuItem69";
			this->toolStripMenuItem69->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem69->Text = L"0";
			// 
			// toolStripMenuItem70
			// 
			this->toolStripMenuItem70->Name = L"toolStripMenuItem70";
			this->toolStripMenuItem70->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem70->Text = L"1";
			// 
			// toolStripMenuItem71
			// 
			this->toolStripMenuItem71->Name = L"toolStripMenuItem71";
			this->toolStripMenuItem71->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem71->Text = L"2";
			// 
			// toolStripMenuItem72
			// 
			this->toolStripMenuItem72->Name = L"toolStripMenuItem72";
			this->toolStripMenuItem72->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem72->Text = L"3";
			// 
			// toolStripMenuItem73
			// 
			this->toolStripMenuItem73->Name = L"toolStripMenuItem73";
			this->toolStripMenuItem73->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem73->Text = L"4";
			// 
			// toolStripMenuItem74
			// 
			this->toolStripMenuItem74->Name = L"toolStripMenuItem74";
			this->toolStripMenuItem74->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem74->Text = L"5";
			// 
			// uSAToolStripMenuItem4
			// 
			this->uSAToolStripMenuItem4->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {
				this->startToolStripMenuItem,
					this->toolStripMenuItem75, this->toolStripMenuItem76, this->toolStripMenuItem77, this->toolStripMenuItem78, this->toolStripMenuItem79,
					this->toolStripMenuItem80, this->toolStripMenuItem81, this->toolStripMenuItem82
			});
			this->uSAToolStripMenuItem4->Name = L"uSAToolStripMenuItem4";
			this->uSAToolStripMenuItem4->Size = System::Drawing::Size(181, 26);
			this->uSAToolStripMenuItem4->Text = L"USA";
			// 
			// startToolStripMenuItem
			// 
			this->startToolStripMenuItem->Name = L"startToolStripMenuItem";
			this->startToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->startToolStripMenuItem->Text = L"Start";
			// 
			// toolStripMenuItem75
			// 
			this->toolStripMenuItem75->Name = L"toolStripMenuItem75";
			this->toolStripMenuItem75->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem75->Text = L"1";
			// 
			// toolStripMenuItem76
			// 
			this->toolStripMenuItem76->Name = L"toolStripMenuItem76";
			this->toolStripMenuItem76->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem76->Text = L"2";
			// 
			// toolStripMenuItem77
			// 
			this->toolStripMenuItem77->Name = L"toolStripMenuItem77";
			this->toolStripMenuItem77->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem77->Text = L"3";
			// 
			// toolStripMenuItem78
			// 
			this->toolStripMenuItem78->Name = L"toolStripMenuItem78";
			this->toolStripMenuItem78->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem78->Text = L"4";
			// 
			// toolStripMenuItem79
			// 
			this->toolStripMenuItem79->Name = L"toolStripMenuItem79";
			this->toolStripMenuItem79->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem79->Text = L"5";
			// 
			// toolStripMenuItem80
			// 
			this->toolStripMenuItem80->Name = L"toolStripMenuItem80";
			this->toolStripMenuItem80->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem80->Text = L"6";
			// 
			// toolStripMenuItem81
			// 
			this->toolStripMenuItem81->Name = L"toolStripMenuItem81";
			this->toolStripMenuItem81->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem81->Text = L"7";
			// 
			// toolStripMenuItem82
			// 
			this->toolStripMenuItem82->Name = L"toolStripMenuItem82";
			this->toolStripMenuItem82->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem82->Text = L"8";
			// 
			// uSSRToolStripMenuItem4
			// 
			this->uSSRToolStripMenuItem4->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {
				this->startToolStripMenuItem1,
					this->toolStripMenuItem83, this->toolStripMenuItem84, this->toolStripMenuItem85, this->toolStripMenuItem86, this->toolStripMenuItem87,
					this->toolStripMenuItem88, this->toolStripMenuItem89, this->toolStripMenuItem90
			});
			this->uSSRToolStripMenuItem4->Name = L"uSSRToolStripMenuItem4";
			this->uSSRToolStripMenuItem4->Size = System::Drawing::Size(181, 26);
			this->uSSRToolStripMenuItem4->Text = L"USSR";
			// 
			// startToolStripMenuItem1
			// 
			this->startToolStripMenuItem1->Name = L"startToolStripMenuItem1";
			this->startToolStripMenuItem1->Size = System::Drawing::Size(181, 26);
			this->startToolStripMenuItem1->Text = L"Start";
			// 
			// toolStripMenuItem83
			// 
			this->toolStripMenuItem83->Name = L"toolStripMenuItem83";
			this->toolStripMenuItem83->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem83->Text = L"1";
			// 
			// toolStripMenuItem84
			// 
			this->toolStripMenuItem84->Name = L"toolStripMenuItem84";
			this->toolStripMenuItem84->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem84->Text = L"2";
			// 
			// toolStripMenuItem85
			// 
			this->toolStripMenuItem85->Name = L"toolStripMenuItem85";
			this->toolStripMenuItem85->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem85->Text = L"3";
			// 
			// toolStripMenuItem86
			// 
			this->toolStripMenuItem86->Name = L"toolStripMenuItem86";
			this->toolStripMenuItem86->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem86->Text = L"4";
			// 
			// toolStripMenuItem87
			// 
			this->toolStripMenuItem87->Name = L"toolStripMenuItem87";
			this->toolStripMenuItem87->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem87->Text = L"5";
			// 
			// toolStripMenuItem88
			// 
			this->toolStripMenuItem88->Name = L"toolStripMenuItem88";
			this->toolStripMenuItem88->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem88->Text = L"6";
			// 
			// toolStripMenuItem89
			// 
			this->toolStripMenuItem89->Name = L"toolStripMenuItem89";
			this->toolStripMenuItem89->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem89->Text = L"7";
			// 
			// toolStripMenuItem90
			// 
			this->toolStripMenuItem90->Name = L"toolStripMenuItem90";
			this->toolStripMenuItem90->Size = System::Drawing::Size(181, 26);
			this->toolStripMenuItem90->Text = L"8";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1085, 622);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Project Oppenheimer";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
