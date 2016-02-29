#pragma once
#include "Gamestate.h"

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
	private: Gamestate* game = new Gamestate();
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
private: System::Windows::Forms::Label^  Algeria_USA;



private: System::Windows::Forms::GroupBox^  groupBox1;
private: System::Windows::Forms::Label^  Algeria_USSR;

private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel8;
private: System::Windows::Forms::Label^  Morocco_USA;
private: System::Windows::Forms::Label^  Morocco_USSR;


private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel7;
private: System::Windows::Forms::Label^  Kenya_USA;
private: System::Windows::Forms::Label^  Kenya_USSR;


private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel6;
private: System::Windows::Forms::Label^  IvoryCoast_USA;
private: System::Windows::Forms::Label^  IvoryCoast_USSR;


private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel5;
private: System::Windows::Forms::Label^  Ethiopia_USA;
private: System::Windows::Forms::Label^  Ethiopia_USSR;


private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel4;
private: System::Windows::Forms::Label^  Cameroon_USA;
private: System::Windows::Forms::Label^  Cameroon_USSR;


private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel3;
private: System::Windows::Forms::Label^  Botswana_USA;
private: System::Windows::Forms::Label^  Botswana_USSR;


private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel2;
private: System::Windows::Forms::Label^  Angola_USA;
private: System::Windows::Forms::Label^  Angola_USSR;


private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel9;
private: System::Windows::Forms::Label^  Zaire_USA;
private: System::Windows::Forms::Label^  Zaire_USSR;


private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel10;
private: System::Windows::Forms::Label^  WestAfricanStates_USA;
private: System::Windows::Forms::Label^  WestAfricanStates_USSR;


private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel11;
private: System::Windows::Forms::Label^  Tunisia_USA;
private: System::Windows::Forms::Label^  Tunisia_USSR;


private: System::Windows::Forms::Label^  label34;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel12;
private: System::Windows::Forms::Label^  Sudan_USA;
private: System::Windows::Forms::Label^  Sudan_USSR;


private: System::Windows::Forms::Label^  label37;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel13;
private: System::Windows::Forms::Label^  SouthAfrica_USA;
private: System::Windows::Forms::Label^  SouthAfrica_USSR;


private: System::Windows::Forms::Label^  label40;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel14;
private: System::Windows::Forms::Label^  Somalia_USA;
private: System::Windows::Forms::Label^  Somalia_USSR;


private: System::Windows::Forms::Label^  label43;
private: System::Windows::Forms::Label^  label44;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel15;
private: System::Windows::Forms::Label^  SEAfricanStates_USA;
private: System::Windows::Forms::Label^  SEAfricanStates_USSR;


private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel16;
private: System::Windows::Forms::Label^  SaharanStates_USA;
private: System::Windows::Forms::Label^  SaharanStates_USSR;


private: System::Windows::Forms::Label^  label49;
private: System::Windows::Forms::Label^  label50;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel17;
private: System::Windows::Forms::Label^  Zimbabwe_USA;
private: System::Windows::Forms::Label^  Zimbabwe_USSR;


private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel18;
private: System::Windows::Forms::Label^  Nigeria_USA;
private: System::Windows::Forms::Label^  Nigeria_USSR;


private: System::Windows::Forms::GroupBox^  groupBox2;
private: System::Windows::Forms::Label^  label62;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel22;
private: System::Windows::Forms::Label^  Malaysia_USA;
private: System::Windows::Forms::Label^  Malaysia_USSR;


private: System::Windows::Forms::Label^  label67;
private: System::Windows::Forms::Label^  label68;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel23;
private: System::Windows::Forms::Label^  Vietnam_USA;
private: System::Windows::Forms::Label^  Vietnam_USSR;


private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel24;
private: System::Windows::Forms::Label^  LaosCambodia_USA;
private: System::Windows::Forms::Label^  LaosCambodia_USSR;


private: System::Windows::Forms::Label^  label73;
private: System::Windows::Forms::Label^  label74;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel25;
private: System::Windows::Forms::Label^  Thailand_USA;
private: System::Windows::Forms::Label^  Thailand_USSR;


private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel26;
private: System::Windows::Forms::Label^  Japan_USA;
private: System::Windows::Forms::Label^  Japan_USSR;


private: System::Windows::Forms::Label^  label79;
private: System::Windows::Forms::Label^  label80;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel27;
private: System::Windows::Forms::Label^  Taiwan_USA;
private: System::Windows::Forms::Label^  Taiwan_USSR;


private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel28;
private: System::Windows::Forms::Label^  Indonesia_USA;
private: System::Windows::Forms::Label^  Indonesia_USSR;


private: System::Windows::Forms::Label^  label85;
private: System::Windows::Forms::Label^  label86;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel29;
private: System::Windows::Forms::Label^  SouthKorea_USA;
private: System::Windows::Forms::Label^  SouthKorea_USSR;


private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel30;
private: System::Windows::Forms::Label^  India_USA;
private: System::Windows::Forms::Label^  India_USSR;


private: System::Windows::Forms::Label^  label91;
private: System::Windows::Forms::Label^  label92;
private: System::Windows::Forms::TableLayoutPanel^  Philippeans_USA;
private: System::Windows::Forms::Label^  Philippians_USA;


private: System::Windows::Forms::Label^  Philippians_USSR;


private: System::Windows::Forms::Label^  label95;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel32;
private: System::Windows::Forms::Label^  Burma_USA;
private: System::Windows::Forms::Label^  Burma_USSR;


private: System::Windows::Forms::Label^  label98;
private: System::Windows::Forms::Label^  label99;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel33;
private: System::Windows::Forms::Label^  Pakistan_USA;
private: System::Windows::Forms::Label^  Pakistan_USSR;


private: System::Windows::Forms::Label^  label102;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel34;
private: System::Windows::Forms::Label^  NorthKorea_USA;
private: System::Windows::Forms::Label^  NorthKorea_USSR;


private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel35;
private: System::Windows::Forms::Label^  Australia_USA;
private: System::Windows::Forms::Label^  Australia_USSR;




private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel36;
private: System::Windows::Forms::Label^  Afghanistan_USA;
private: System::Windows::Forms::Label^  Afghanistan_USSR;


private: System::Windows::Forms::GroupBox^  groupBox3;
private: System::Windows::Forms::Label^  label115;
private: System::Windows::Forms::Label^  label116;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel39;
private: System::Windows::Forms::Label^  Panama_USA;
private: System::Windows::Forms::Label^  Panama_USSR;


private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel40;
private: System::Windows::Forms::Label^  Guatemala_USA;
private: System::Windows::Forms::Label^  Guatemala_USSR;


private: System::Windows::Forms::Label^  label121;
private: System::Windows::Forms::Label^  label122;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel41;
private: System::Windows::Forms::Label^  Nicaragua_USA;
private: System::Windows::Forms::Label^  Nicaragua_USSR;


private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel42;
private: System::Windows::Forms::Label^  ElSalvador_USA;
private: System::Windows::Forms::Label^  ElSalvador_USSR;


private: System::Windows::Forms::Label^  label127;
private: System::Windows::Forms::Label^  label128;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel43;
private: System::Windows::Forms::Label^  Mexico_USA;
private: System::Windows::Forms::Label^  Mexico_USSR;


private: System::Windows::Forms::Label^  label131;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel44;
private: System::Windows::Forms::Label^  DominicanRep_USA;
private: System::Windows::Forms::Label^  DominicanRep_USSR;


private: System::Windows::Forms::Label^  label134;
private: System::Windows::Forms::Label^  label135;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel45;
private: System::Windows::Forms::Label^  Honduras_USA;
private: System::Windows::Forms::Label^  Honduras_USSR;


private: System::Windows::Forms::Label^  label138;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel46;
private: System::Windows::Forms::Label^  Haiti_USA;
private: System::Windows::Forms::Label^  Haiti_USSR;




private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel47;
private: System::Windows::Forms::Label^  Cuba_USA;
private: System::Windows::Forms::Label^  Cuba_USSR;


private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel48;
private: System::Windows::Forms::Label^  CostaRica_USA;
private: System::Windows::Forms::Label^  CostaRica_USSR;


private: System::Windows::Forms::GroupBox^  groupBox4;
private: System::Windows::Forms::Label^  label184;
private: System::Windows::Forms::Label^  label185;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel62;
private: System::Windows::Forms::Label^  Yugoslavia_USA;
private: System::Windows::Forms::Label^  Yugoslavia_USSR;


private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel63;
private: System::Windows::Forms::Label^  Greece_USA;
private: System::Windows::Forms::Label^  Greece_USSR;


private: System::Windows::Forms::Label^  label55;
private: System::Windows::Forms::Label^  label56;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel19;
private: System::Windows::Forms::Label^  WGermany_USA;
private: System::Windows::Forms::Label^  WGermany_USSR;


private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel20;
private: System::Windows::Forms::Label^  France_USA;
private: System::Windows::Forms::Label^  France_USSR;


private: System::Windows::Forms::Label^  label61;
private: System::Windows::Forms::Label^  label63;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel21;
private: System::Windows::Forms::Label^  UK_USA;
private: System::Windows::Forms::Label^  UK_USSR;


private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel37;
private: System::Windows::Forms::Label^  Finland_USA;
private: System::Windows::Forms::Label^  Finland_USSR;


private: System::Windows::Forms::Label^  label112;
private: System::Windows::Forms::Label^  label113;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel38;
private: System::Windows::Forms::Label^  Turkey_USA;
private: System::Windows::Forms::Label^  Turkey_USSR;


private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel49;
private: System::Windows::Forms::Label^  EGermany_USA;
private: System::Windows::Forms::Label^  EGermany_USSR;


private: System::Windows::Forms::Label^  label148;
private: System::Windows::Forms::Label^  label149;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel50;
private: System::Windows::Forms::Label^  Sweden_USA;
private: System::Windows::Forms::Label^  Sweden_USSR;




private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel51;
private: System::Windows::Forms::Label^  Denmark_USA;
private: System::Windows::Forms::Label^  Denmark_USSR;


private: System::Windows::Forms::Label^  label154;
private: System::Windows::Forms::Label^  label155;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel52;
private: System::Windows::Forms::Label^  Romania_USA;
private: System::Windows::Forms::Label^  Romania_USSR;


private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel53;
private: System::Windows::Forms::Label^  Czechoslovakia_USA;
private: System::Windows::Forms::Label^  Czechoslovakia_USSR;


private: System::Windows::Forms::Label^  label160;
private: System::Windows::Forms::Label^  label161;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel54;
private: System::Windows::Forms::Label^  Poland_USA;
private: System::Windows::Forms::Label^  Poland_USSR;


private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel55;
private: System::Windows::Forms::Label^  Canada_USA;
private: System::Windows::Forms::Label^  Canada_USSR;


private: System::Windows::Forms::Label^  label166;
private: System::Windows::Forms::Label^  label167;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel56;
private: System::Windows::Forms::Label^  Norway_USA;
private: System::Windows::Forms::Label^  Norway_USSR;


private: System::Windows::Forms::Label^  label170;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel57;
private: System::Windows::Forms::Label^  Bulgaria_USA;
private: System::Windows::Forms::Label^  Bulgaria_USSR;


private: System::Windows::Forms::Label^  label173;
private: System::Windows::Forms::Label^  label174;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel58;
private: System::Windows::Forms::Label^  Italy_USA;
private: System::Windows::Forms::Label^  Italy_USSR;


private: System::Windows::Forms::Label^  label177;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel59;
private: System::Windows::Forms::Label^  Hungary_USA;
private: System::Windows::Forms::Label^  Hungary_USSR;


private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel60;
private: System::Windows::Forms::Label^  Benlux_USA;
private: System::Windows::Forms::Label^  Benlux_USSR;


private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel61;
private: System::Windows::Forms::Label^  Austria_USA;
private: System::Windows::Forms::Label^  Austria_USSR;


private: System::Windows::Forms::GroupBox^  groupBox5;
private: System::Windows::Forms::Label^  label190;
private: System::Windows::Forms::Label^  label191;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel64;
private: System::Windows::Forms::Label^  Syria_USA;
private: System::Windows::Forms::Label^  Syria_USSR;


private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel65;
private: System::Windows::Forms::Label^  Israel_USA;
private: System::Windows::Forms::Label^  Israel_USSR;


private: System::Windows::Forms::Label^  label196;
private: System::Windows::Forms::Label^  label197;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel66;
private: System::Windows::Forms::Label^  SaudiArabia_USA;
private: System::Windows::Forms::Label^  SaudiArabia_USSR;


private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel67;
private: System::Windows::Forms::Label^  Iraq_USA;
private: System::Windows::Forms::Label^  Iraq_USSR;


private: System::Windows::Forms::Label^  label202;
private: System::Windows::Forms::Label^  label203;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel68;
private: System::Windows::Forms::Label^  Libya_USA;
private: System::Windows::Forms::Label^  Libya_USSR;


private: System::Windows::Forms::Label^  label206;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel69;
private: System::Windows::Forms::Label^  Iran_USA;
private: System::Windows::Forms::Label^  Iran_USSR;


private: System::Windows::Forms::Label^  label209;
private: System::Windows::Forms::Label^  label210;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel70;
private: System::Windows::Forms::Label^  Lebanon_USA;
private: System::Windows::Forms::Label^  Lebanon_USSR;


private: System::Windows::Forms::Label^  label213;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel71;
private: System::Windows::Forms::Label^  Jordan_USA;
private: System::Windows::Forms::Label^  Jordan_USSR;


private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel72;
private: System::Windows::Forms::Label^  GulfStates_USA;
private: System::Windows::Forms::Label^  GulfStates_USSR;


private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel73;
private: System::Windows::Forms::Label^  Egypt_USA;
private: System::Windows::Forms::Label^  Egypt_USSR;


private: System::Windows::Forms::GroupBox^  groupBox6;
private: System::Windows::Forms::Label^  label220;
private: System::Windows::Forms::Label^  label221;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel74;
private: System::Windows::Forms::Label^  Venezuela_USA;
private: System::Windows::Forms::Label^  Venezuela_USSR;


private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel75;
private: System::Windows::Forms::Label^  Colombia_USA;
private: System::Windows::Forms::Label^  Colombia_USSR;


private: System::Windows::Forms::Label^  label226;
private: System::Windows::Forms::Label^  label227;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel76;
private: System::Windows::Forms::Label^  Uruguay_USA;
private: System::Windows::Forms::Label^  Uruguay_USSR;


private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel77;
private: System::Windows::Forms::Label^  Chile_USA;
private: System::Windows::Forms::Label^  Chile_USSR;


private: System::Windows::Forms::Label^  label232;
private: System::Windows::Forms::Label^  label233;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel78;
private: System::Windows::Forms::Label^  Peru_USA;
private: System::Windows::Forms::Label^  Peru_USSR;


private: System::Windows::Forms::Label^  label236;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel79;
private: System::Windows::Forms::Label^  Bolivia_USA;
private: System::Windows::Forms::Label^  Bolivia_USSR;


private: System::Windows::Forms::Label^  label239;
private: System::Windows::Forms::Label^  label240;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel80;
private: System::Windows::Forms::Label^  Paraguay_USA;
private: System::Windows::Forms::Label^  Paraguay_USSR;


private: System::Windows::Forms::Label^  label243;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel81;
private: System::Windows::Forms::Label^  Ecuador_USA;
private: System::Windows::Forms::Label^  Ecuador_USSR;


private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel82;
private: System::Windows::Forms::Label^  Brazil_USA;
private: System::Windows::Forms::Label^  Brazil_USSR;


private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel83;
private: System::Windows::Forms::Label^  Argentina_USA;
private: System::Windows::Forms::Label^  Argentina_USSR;


private: System::Windows::Forms::GroupBox^  groupBox7;
private: System::Windows::Forms::Label^  label261;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel85;
private: System::Windows::Forms::Label^  SpaceRace_USA;
private: System::Windows::Forms::Label^  SpaceRace_USSR;




private: System::Windows::Forms::Label^  label258;
private: System::Windows::Forms::Label^  label256;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel84;
private: System::Windows::Forms::Label^  MilitaryOps_USA;
private: System::Windows::Forms::Label^  MilitaryOps_USSR;


private: System::Windows::Forms::Label^  Defcon_lbl;

private: System::Windows::Forms::Label^  label254;
private: System::Windows::Forms::Label^  Score_lbl;

private: System::Windows::Forms::Label^  label252;
private: System::Windows::Forms::Label^  Round_lbl;

private: System::Windows::Forms::Label^  label251;
private: System::Windows::Forms::Label^  Turn_lbl;
private: System::Windows::Forms::ToolStripMenuItem^  spainPortugulToolStripMenuItem;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel31;
private: System::Windows::Forms::Label^  SpainPortugul_USA;
private: System::Windows::Forms::Label^  SpainPortugul_USSR;








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
			this->newGameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->uSAToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->uSSRToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->developerToolsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->countryToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->africaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->asiaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->centralAmericaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->europeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->middleEastToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->southAmericaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->gameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->turnToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->roundToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->headlinePhaseToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem12 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem13 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem14 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem15 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem16 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem17 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem18 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem19 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->scoreToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem20 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->uSAToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->uSSRToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->defconToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem59 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem60 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem61 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem62 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->militaryOpsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->uSAToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem63 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem64 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem65 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem66 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem67 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem68 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->uSSRToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem69 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem70 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem71 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem72 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem73 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem74 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->spaceRaceToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->eventToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->resetToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->handsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->uSAToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->revealToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->uSSRToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->revealToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Algeria_USA = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel17 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Zimbabwe_USA = (gcnew System::Windows::Forms::Label());
			this->Zimbabwe_USSR = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel18 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Nigeria_USA = (gcnew System::Windows::Forms::Label());
			this->Nigeria_USSR = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel9 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Zaire_USA = (gcnew System::Windows::Forms::Label());
			this->Zaire_USSR = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel8 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Morocco_USA = (gcnew System::Windows::Forms::Label());
			this->Morocco_USSR = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel10 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->WestAfricanStates_USA = (gcnew System::Windows::Forms::Label());
			this->WestAfricanStates_USSR = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel7 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Kenya_USA = (gcnew System::Windows::Forms::Label());
			this->Kenya_USSR = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel11 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Tunisia_USA = (gcnew System::Windows::Forms::Label());
			this->Tunisia_USSR = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->IvoryCoast_USA = (gcnew System::Windows::Forms::Label());
			this->IvoryCoast_USSR = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel12 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Sudan_USA = (gcnew System::Windows::Forms::Label());
			this->Sudan_USSR = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Ethiopia_USA = (gcnew System::Windows::Forms::Label());
			this->Ethiopia_USSR = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel13 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->SouthAfrica_USA = (gcnew System::Windows::Forms::Label());
			this->SouthAfrica_USSR = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Cameroon_USA = (gcnew System::Windows::Forms::Label());
			this->Cameroon_USSR = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel14 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Somalia_USA = (gcnew System::Windows::Forms::Label());
			this->Somalia_USSR = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Botswana_USA = (gcnew System::Windows::Forms::Label());
			this->Botswana_USSR = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel15 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->SEAfricanStates_USA = (gcnew System::Windows::Forms::Label());
			this->SEAfricanStates_USSR = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel16 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->SaharanStates_USA = (gcnew System::Windows::Forms::Label());
			this->SaharanStates_USSR = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Angola_USA = (gcnew System::Windows::Forms::Label());
			this->Angola_USSR = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Algeria_USSR = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel22 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Malaysia_USA = (gcnew System::Windows::Forms::Label());
			this->Malaysia_USSR = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel23 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Vietnam_USA = (gcnew System::Windows::Forms::Label());
			this->Vietnam_USSR = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel24 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->LaosCambodia_USA = (gcnew System::Windows::Forms::Label());
			this->LaosCambodia_USSR = (gcnew System::Windows::Forms::Label());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel25 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Thailand_USA = (gcnew System::Windows::Forms::Label());
			this->Thailand_USSR = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel26 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Japan_USA = (gcnew System::Windows::Forms::Label());
			this->Japan_USSR = (gcnew System::Windows::Forms::Label());
			this->label79 = (gcnew System::Windows::Forms::Label());
			this->label80 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel27 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Taiwan_USA = (gcnew System::Windows::Forms::Label());
			this->Taiwan_USSR = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel28 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Indonesia_USA = (gcnew System::Windows::Forms::Label());
			this->Indonesia_USSR = (gcnew System::Windows::Forms::Label());
			this->label85 = (gcnew System::Windows::Forms::Label());
			this->label86 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel29 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->SouthKorea_USA = (gcnew System::Windows::Forms::Label());
			this->SouthKorea_USSR = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel30 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->India_USA = (gcnew System::Windows::Forms::Label());
			this->India_USSR = (gcnew System::Windows::Forms::Label());
			this->label91 = (gcnew System::Windows::Forms::Label());
			this->label92 = (gcnew System::Windows::Forms::Label());
			this->Philippeans_USA = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Philippians_USA = (gcnew System::Windows::Forms::Label());
			this->Philippians_USSR = (gcnew System::Windows::Forms::Label());
			this->label95 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel32 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Burma_USA = (gcnew System::Windows::Forms::Label());
			this->Burma_USSR = (gcnew System::Windows::Forms::Label());
			this->label98 = (gcnew System::Windows::Forms::Label());
			this->label99 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel33 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Pakistan_USA = (gcnew System::Windows::Forms::Label());
			this->Pakistan_USSR = (gcnew System::Windows::Forms::Label());
			this->label102 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel34 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->NorthKorea_USA = (gcnew System::Windows::Forms::Label());
			this->NorthKorea_USSR = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel35 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Australia_USA = (gcnew System::Windows::Forms::Label());
			this->Australia_USSR = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel36 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Afghanistan_USA = (gcnew System::Windows::Forms::Label());
			this->Afghanistan_USSR = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label115 = (gcnew System::Windows::Forms::Label());
			this->label116 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel39 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Panama_USA = (gcnew System::Windows::Forms::Label());
			this->Panama_USSR = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel40 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Guatemala_USA = (gcnew System::Windows::Forms::Label());
			this->Guatemala_USSR = (gcnew System::Windows::Forms::Label());
			this->label121 = (gcnew System::Windows::Forms::Label());
			this->label122 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel41 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Nicaragua_USA = (gcnew System::Windows::Forms::Label());
			this->Nicaragua_USSR = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel42 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->ElSalvador_USA = (gcnew System::Windows::Forms::Label());
			this->ElSalvador_USSR = (gcnew System::Windows::Forms::Label());
			this->label127 = (gcnew System::Windows::Forms::Label());
			this->label128 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel43 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Mexico_USA = (gcnew System::Windows::Forms::Label());
			this->Mexico_USSR = (gcnew System::Windows::Forms::Label());
			this->label131 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel44 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->DominicanRep_USA = (gcnew System::Windows::Forms::Label());
			this->DominicanRep_USSR = (gcnew System::Windows::Forms::Label());
			this->label134 = (gcnew System::Windows::Forms::Label());
			this->label135 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel45 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Honduras_USA = (gcnew System::Windows::Forms::Label());
			this->Honduras_USSR = (gcnew System::Windows::Forms::Label());
			this->label138 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel46 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Haiti_USA = (gcnew System::Windows::Forms::Label());
			this->Haiti_USSR = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel47 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Cuba_USA = (gcnew System::Windows::Forms::Label());
			this->Cuba_USSR = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel48 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->CostaRica_USA = (gcnew System::Windows::Forms::Label());
			this->CostaRica_USSR = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label184 = (gcnew System::Windows::Forms::Label());
			this->label185 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel62 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Yugoslavia_USA = (gcnew System::Windows::Forms::Label());
			this->Yugoslavia_USSR = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel63 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Greece_USA = (gcnew System::Windows::Forms::Label());
			this->Greece_USSR = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel19 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->WGermany_USA = (gcnew System::Windows::Forms::Label());
			this->WGermany_USSR = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel20 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->France_USA = (gcnew System::Windows::Forms::Label());
			this->France_USSR = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel21 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->UK_USA = (gcnew System::Windows::Forms::Label());
			this->UK_USSR = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel37 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Finland_USA = (gcnew System::Windows::Forms::Label());
			this->Finland_USSR = (gcnew System::Windows::Forms::Label());
			this->label112 = (gcnew System::Windows::Forms::Label());
			this->label113 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel38 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Turkey_USA = (gcnew System::Windows::Forms::Label());
			this->Turkey_USSR = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel49 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->EGermany_USA = (gcnew System::Windows::Forms::Label());
			this->EGermany_USSR = (gcnew System::Windows::Forms::Label());
			this->label148 = (gcnew System::Windows::Forms::Label());
			this->label149 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel50 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Sweden_USA = (gcnew System::Windows::Forms::Label());
			this->Sweden_USSR = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel51 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Denmark_USA = (gcnew System::Windows::Forms::Label());
			this->Denmark_USSR = (gcnew System::Windows::Forms::Label());
			this->label154 = (gcnew System::Windows::Forms::Label());
			this->label155 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel52 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Romania_USA = (gcnew System::Windows::Forms::Label());
			this->Romania_USSR = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel53 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Czechoslovakia_USA = (gcnew System::Windows::Forms::Label());
			this->Czechoslovakia_USSR = (gcnew System::Windows::Forms::Label());
			this->label160 = (gcnew System::Windows::Forms::Label());
			this->label161 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel54 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Poland_USA = (gcnew System::Windows::Forms::Label());
			this->Poland_USSR = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel55 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Canada_USA = (gcnew System::Windows::Forms::Label());
			this->Canada_USSR = (gcnew System::Windows::Forms::Label());
			this->label166 = (gcnew System::Windows::Forms::Label());
			this->label167 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel56 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Norway_USA = (gcnew System::Windows::Forms::Label());
			this->Norway_USSR = (gcnew System::Windows::Forms::Label());
			this->label170 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel57 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Bulgaria_USA = (gcnew System::Windows::Forms::Label());
			this->Bulgaria_USSR = (gcnew System::Windows::Forms::Label());
			this->label173 = (gcnew System::Windows::Forms::Label());
			this->label174 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel58 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Italy_USA = (gcnew System::Windows::Forms::Label());
			this->Italy_USSR = (gcnew System::Windows::Forms::Label());
			this->label177 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel59 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Hungary_USA = (gcnew System::Windows::Forms::Label());
			this->Hungary_USSR = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel60 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Benlux_USA = (gcnew System::Windows::Forms::Label());
			this->Benlux_USSR = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel61 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Austria_USA = (gcnew System::Windows::Forms::Label());
			this->Austria_USSR = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label190 = (gcnew System::Windows::Forms::Label());
			this->label191 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel64 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Syria_USA = (gcnew System::Windows::Forms::Label());
			this->Syria_USSR = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel65 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Israel_USA = (gcnew System::Windows::Forms::Label());
			this->Israel_USSR = (gcnew System::Windows::Forms::Label());
			this->label196 = (gcnew System::Windows::Forms::Label());
			this->label197 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel66 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->SaudiArabia_USA = (gcnew System::Windows::Forms::Label());
			this->SaudiArabia_USSR = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel67 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Iraq_USA = (gcnew System::Windows::Forms::Label());
			this->Iraq_USSR = (gcnew System::Windows::Forms::Label());
			this->label202 = (gcnew System::Windows::Forms::Label());
			this->label203 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel68 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Libya_USA = (gcnew System::Windows::Forms::Label());
			this->Libya_USSR = (gcnew System::Windows::Forms::Label());
			this->label206 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel69 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Iran_USA = (gcnew System::Windows::Forms::Label());
			this->Iran_USSR = (gcnew System::Windows::Forms::Label());
			this->label209 = (gcnew System::Windows::Forms::Label());
			this->label210 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel70 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Lebanon_USA = (gcnew System::Windows::Forms::Label());
			this->Lebanon_USSR = (gcnew System::Windows::Forms::Label());
			this->label213 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel71 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Jordan_USA = (gcnew System::Windows::Forms::Label());
			this->Jordan_USSR = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel72 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->GulfStates_USA = (gcnew System::Windows::Forms::Label());
			this->GulfStates_USSR = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel73 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Egypt_USA = (gcnew System::Windows::Forms::Label());
			this->Egypt_USSR = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->label220 = (gcnew System::Windows::Forms::Label());
			this->label221 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel74 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Venezuela_USA = (gcnew System::Windows::Forms::Label());
			this->Venezuela_USSR = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel75 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Colombia_USA = (gcnew System::Windows::Forms::Label());
			this->Colombia_USSR = (gcnew System::Windows::Forms::Label());
			this->label226 = (gcnew System::Windows::Forms::Label());
			this->label227 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel76 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Uruguay_USA = (gcnew System::Windows::Forms::Label());
			this->Uruguay_USSR = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel77 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Chile_USA = (gcnew System::Windows::Forms::Label());
			this->Chile_USSR = (gcnew System::Windows::Forms::Label());
			this->label232 = (gcnew System::Windows::Forms::Label());
			this->label233 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel78 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Peru_USA = (gcnew System::Windows::Forms::Label());
			this->Peru_USSR = (gcnew System::Windows::Forms::Label());
			this->label236 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel79 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Bolivia_USA = (gcnew System::Windows::Forms::Label());
			this->Bolivia_USSR = (gcnew System::Windows::Forms::Label());
			this->label239 = (gcnew System::Windows::Forms::Label());
			this->label240 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel80 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Paraguay_USA = (gcnew System::Windows::Forms::Label());
			this->Paraguay_USSR = (gcnew System::Windows::Forms::Label());
			this->label243 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel81 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Ecuador_USA = (gcnew System::Windows::Forms::Label());
			this->Ecuador_USSR = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel82 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Brazil_USA = (gcnew System::Windows::Forms::Label());
			this->Brazil_USSR = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel83 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Argentina_USA = (gcnew System::Windows::Forms::Label());
			this->Argentina_USSR = (gcnew System::Windows::Forms::Label());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->label261 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel85 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->SpaceRace_USA = (gcnew System::Windows::Forms::Label());
			this->SpaceRace_USSR = (gcnew System::Windows::Forms::Label());
			this->label258 = (gcnew System::Windows::Forms::Label());
			this->label256 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel84 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->MilitaryOps_USA = (gcnew System::Windows::Forms::Label());
			this->MilitaryOps_USSR = (gcnew System::Windows::Forms::Label());
			this->Defcon_lbl = (gcnew System::Windows::Forms::Label());
			this->label254 = (gcnew System::Windows::Forms::Label());
			this->Score_lbl = (gcnew System::Windows::Forms::Label());
			this->label252 = (gcnew System::Windows::Forms::Label());
			this->Round_lbl = (gcnew System::Windows::Forms::Label());
			this->label251 = (gcnew System::Windows::Forms::Label());
			this->Turn_lbl = (gcnew System::Windows::Forms::Label());
			this->spainPortugulToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel31 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->SpainPortugul_USA = (gcnew System::Windows::Forms::Label());
			this->SpainPortugul_USSR = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tableLayoutPanel17->SuspendLayout();
			this->tableLayoutPanel18->SuspendLayout();
			this->tableLayoutPanel9->SuspendLayout();
			this->tableLayoutPanel8->SuspendLayout();
			this->tableLayoutPanel10->SuspendLayout();
			this->tableLayoutPanel7->SuspendLayout();
			this->tableLayoutPanel11->SuspendLayout();
			this->tableLayoutPanel6->SuspendLayout();
			this->tableLayoutPanel12->SuspendLayout();
			this->tableLayoutPanel5->SuspendLayout();
			this->tableLayoutPanel13->SuspendLayout();
			this->tableLayoutPanel4->SuspendLayout();
			this->tableLayoutPanel14->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->tableLayoutPanel15->SuspendLayout();
			this->tableLayoutPanel16->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->tableLayoutPanel22->SuspendLayout();
			this->tableLayoutPanel23->SuspendLayout();
			this->tableLayoutPanel24->SuspendLayout();
			this->tableLayoutPanel25->SuspendLayout();
			this->tableLayoutPanel26->SuspendLayout();
			this->tableLayoutPanel27->SuspendLayout();
			this->tableLayoutPanel28->SuspendLayout();
			this->tableLayoutPanel29->SuspendLayout();
			this->tableLayoutPanel30->SuspendLayout();
			this->Philippeans_USA->SuspendLayout();
			this->tableLayoutPanel32->SuspendLayout();
			this->tableLayoutPanel33->SuspendLayout();
			this->tableLayoutPanel34->SuspendLayout();
			this->tableLayoutPanel35->SuspendLayout();
			this->tableLayoutPanel36->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->tableLayoutPanel39->SuspendLayout();
			this->tableLayoutPanel40->SuspendLayout();
			this->tableLayoutPanel41->SuspendLayout();
			this->tableLayoutPanel42->SuspendLayout();
			this->tableLayoutPanel43->SuspendLayout();
			this->tableLayoutPanel44->SuspendLayout();
			this->tableLayoutPanel45->SuspendLayout();
			this->tableLayoutPanel46->SuspendLayout();
			this->tableLayoutPanel47->SuspendLayout();
			this->tableLayoutPanel48->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->tableLayoutPanel62->SuspendLayout();
			this->tableLayoutPanel63->SuspendLayout();
			this->tableLayoutPanel19->SuspendLayout();
			this->tableLayoutPanel20->SuspendLayout();
			this->tableLayoutPanel21->SuspendLayout();
			this->tableLayoutPanel37->SuspendLayout();
			this->tableLayoutPanel38->SuspendLayout();
			this->tableLayoutPanel49->SuspendLayout();
			this->tableLayoutPanel50->SuspendLayout();
			this->tableLayoutPanel51->SuspendLayout();
			this->tableLayoutPanel52->SuspendLayout();
			this->tableLayoutPanel53->SuspendLayout();
			this->tableLayoutPanel54->SuspendLayout();
			this->tableLayoutPanel55->SuspendLayout();
			this->tableLayoutPanel56->SuspendLayout();
			this->tableLayoutPanel57->SuspendLayout();
			this->tableLayoutPanel58->SuspendLayout();
			this->tableLayoutPanel59->SuspendLayout();
			this->tableLayoutPanel60->SuspendLayout();
			this->tableLayoutPanel61->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->tableLayoutPanel64->SuspendLayout();
			this->tableLayoutPanel65->SuspendLayout();
			this->tableLayoutPanel66->SuspendLayout();
			this->tableLayoutPanel67->SuspendLayout();
			this->tableLayoutPanel68->SuspendLayout();
			this->tableLayoutPanel69->SuspendLayout();
			this->tableLayoutPanel70->SuspendLayout();
			this->tableLayoutPanel71->SuspendLayout();
			this->tableLayoutPanel72->SuspendLayout();
			this->tableLayoutPanel73->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->tableLayoutPanel74->SuspendLayout();
			this->tableLayoutPanel75->SuspendLayout();
			this->tableLayoutPanel76->SuspendLayout();
			this->tableLayoutPanel77->SuspendLayout();
			this->tableLayoutPanel78->SuspendLayout();
			this->tableLayoutPanel79->SuspendLayout();
			this->tableLayoutPanel80->SuspendLayout();
			this->tableLayoutPanel81->SuspendLayout();
			this->tableLayoutPanel82->SuspendLayout();
			this->tableLayoutPanel83->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->tableLayoutPanel85->SuspendLayout();
			this->tableLayoutPanel84->SuspendLayout();
			this->tableLayoutPanel31->SuspendLayout();
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
			this->menuStrip1->Size = System::Drawing::Size(1302, 28);
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
			this->uSAToolStripMenuItem->Size = System::Drawing::Size(119, 26);
			this->uSAToolStripMenuItem->Text = L"USA";
			// 
			// uSSRToolStripMenuItem
			// 
			this->uSSRToolStripMenuItem->Name = L"uSSRToolStripMenuItem";
			this->uSSRToolStripMenuItem->Size = System::Drawing::Size(119, 26);
			this->uSSRToolStripMenuItem->Text = L"USSR";
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
			this->philippinesToolStripMenuItem->Text = L"Philippians";
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
			this->hatiToolStripMenuItem->Text = L"Haiti";
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
			// europeToolStripMenuItem
			// 
			this->europeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(21) {
				this->austriaToolStripMenuItem,
					this->benluxToolStripMenuItem, this->bulgariaToolStripMenuItem, this->canadaToolStripMenuItem, this->czechoslovakiaToolStripMenuItem,
					this->denmarkToolStripMenuItem, this->eGermanyToolStripMenuItem, this->finlandToolStripMenuItem, this->franceToolStripMenuItem,
					this->greeceToolStripMenuItem, this->hungaryToolStripMenuItem, this->italyToolStripMenuItem, this->norwayToolStripMenuItem, this->polandToolStripMenuItem,
					this->romaniaToolStripMenuItem, this->spainPortugulToolStripMenuItem, this->sweedenToolStripMenuItem, this->turkeyToolStripMenuItem,
					this->uKToolStripMenuItem, this->wGermanyToolStripMenuItem, this->yugoslaviaToolStripMenuItem
			});
			this->europeToolStripMenuItem->Name = L"europeToolStripMenuItem";
			this->europeToolStripMenuItem->Size = System::Drawing::Size(190, 26);
			this->europeToolStripMenuItem->Text = L"Europe";
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
			this->sweedenToolStripMenuItem->Text = L"Sweden";
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
			// egyptToolStripMenuItem
			// 
			this->egyptToolStripMenuItem->Name = L"egyptToolStripMenuItem";
			this->egyptToolStripMenuItem->Size = System::Drawing::Size(169, 26);
			this->egyptToolStripMenuItem->Text = L"Egypt";
			// 
			// gulfStatesToolStripMenuItem
			// 
			this->gulfStatesToolStripMenuItem->Name = L"gulfStatesToolStripMenuItem";
			this->gulfStatesToolStripMenuItem->Size = System::Drawing::Size(169, 26);
			this->gulfStatesToolStripMenuItem->Text = L"Gulf States";
			// 
			// iranToolStripMenuItem
			// 
			this->iranToolStripMenuItem->Name = L"iranToolStripMenuItem";
			this->iranToolStripMenuItem->Size = System::Drawing::Size(169, 26);
			this->iranToolStripMenuItem->Text = L"Iran";
			// 
			// iraqToolStripMenuItem
			// 
			this->iraqToolStripMenuItem->Name = L"iraqToolStripMenuItem";
			this->iraqToolStripMenuItem->Size = System::Drawing::Size(169, 26);
			this->iraqToolStripMenuItem->Text = L"Iraq";
			// 
			// israelToolStripMenuItem
			// 
			this->israelToolStripMenuItem->Name = L"israelToolStripMenuItem";
			this->israelToolStripMenuItem->Size = System::Drawing::Size(169, 26);
			this->israelToolStripMenuItem->Text = L"Israel";
			// 
			// jordanToolStripMenuItem
			// 
			this->jordanToolStripMenuItem->Name = L"jordanToolStripMenuItem";
			this->jordanToolStripMenuItem->Size = System::Drawing::Size(169, 26);
			this->jordanToolStripMenuItem->Text = L"Jordan";
			// 
			// lebanonToolStripMenuItem
			// 
			this->lebanonToolStripMenuItem->Name = L"lebanonToolStripMenuItem";
			this->lebanonToolStripMenuItem->Size = System::Drawing::Size(169, 26);
			this->lebanonToolStripMenuItem->Text = L"Lebanon";
			// 
			// libyaToolStripMenuItem
			// 
			this->libyaToolStripMenuItem->Name = L"libyaToolStripMenuItem";
			this->libyaToolStripMenuItem->Size = System::Drawing::Size(169, 26);
			this->libyaToolStripMenuItem->Text = L"Libya";
			// 
			// saudiArabiaToolStripMenuItem
			// 
			this->saudiArabiaToolStripMenuItem->Name = L"saudiArabiaToolStripMenuItem";
			this->saudiArabiaToolStripMenuItem->Size = System::Drawing::Size(169, 26);
			this->saudiArabiaToolStripMenuItem->Text = L"Saudi Arabia";
			// 
			// syriaToolStripMenuItem
			// 
			this->syriaToolStripMenuItem->Name = L"syriaToolStripMenuItem";
			this->syriaToolStripMenuItem->Size = System::Drawing::Size(169, 26);
			this->syriaToolStripMenuItem->Text = L"Syria";
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
			// argentinaToolStripMenuItem
			// 
			this->argentinaToolStripMenuItem->Name = L"argentinaToolStripMenuItem";
			this->argentinaToolStripMenuItem->Size = System::Drawing::Size(152, 26);
			this->argentinaToolStripMenuItem->Text = L"Argentina";
			// 
			// brazilToolStripMenuItem
			// 
			this->brazilToolStripMenuItem->Name = L"brazilToolStripMenuItem";
			this->brazilToolStripMenuItem->Size = System::Drawing::Size(152, 26);
			this->brazilToolStripMenuItem->Text = L"Brazil";
			// 
			// boliviaToolStripMenuItem
			// 
			this->boliviaToolStripMenuItem->Name = L"boliviaToolStripMenuItem";
			this->boliviaToolStripMenuItem->Size = System::Drawing::Size(152, 26);
			this->boliviaToolStripMenuItem->Text = L"Bolivia";
			// 
			// chileToolStripMenuItem
			// 
			this->chileToolStripMenuItem->Name = L"chileToolStripMenuItem";
			this->chileToolStripMenuItem->Size = System::Drawing::Size(152, 26);
			this->chileToolStripMenuItem->Text = L"Chile";
			// 
			// colombiaToolStripMenuItem
			// 
			this->colombiaToolStripMenuItem->Name = L"colombiaToolStripMenuItem";
			this->colombiaToolStripMenuItem->Size = System::Drawing::Size(152, 26);
			this->colombiaToolStripMenuItem->Text = L"Colombia";
			// 
			// ecuadorToolStripMenuItem
			// 
			this->ecuadorToolStripMenuItem->Name = L"ecuadorToolStripMenuItem";
			this->ecuadorToolStripMenuItem->Size = System::Drawing::Size(152, 26);
			this->ecuadorToolStripMenuItem->Text = L"Ecuador";
			// 
			// paraguayToolStripMenuItem
			// 
			this->paraguayToolStripMenuItem->Name = L"paraguayToolStripMenuItem";
			this->paraguayToolStripMenuItem->Size = System::Drawing::Size(152, 26);
			this->paraguayToolStripMenuItem->Text = L"Paraguay";
			// 
			// peruToolStripMenuItem
			// 
			this->peruToolStripMenuItem->Name = L"peruToolStripMenuItem";
			this->peruToolStripMenuItem->Size = System::Drawing::Size(152, 26);
			this->peruToolStripMenuItem->Text = L"Peru";
			// 
			// uruguayToolStripMenuItem
			// 
			this->uruguayToolStripMenuItem->Name = L"uruguayToolStripMenuItem";
			this->uruguayToolStripMenuItem->Size = System::Drawing::Size(152, 26);
			this->uruguayToolStripMenuItem->Text = L"Uruguay";
			// 
			// venezuelaToolStripMenuItem
			// 
			this->venezuelaToolStripMenuItem->Name = L"venezuelaToolStripMenuItem";
			this->venezuelaToolStripMenuItem->Size = System::Drawing::Size(152, 26);
			this->venezuelaToolStripMenuItem->Text = L"Venezuela";
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
			// turnToolStripMenuItem
			// 
			this->turnToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(10) {
				this->toolStripMenuItem2,
					this->toolStripMenuItem3, this->toolStripMenuItem4, this->toolStripMenuItem5, this->toolStripMenuItem6, this->toolStripMenuItem7,
					this->toolStripMenuItem8, this->toolStripMenuItem9, this->toolStripMenuItem10, this->toolStripMenuItem11
			});
			this->turnToolStripMenuItem->Name = L"turnToolStripMenuItem";
			this->turnToolStripMenuItem->Size = System::Drawing::Size(164, 26);
			this->turnToolStripMenuItem->Text = L"Turn";
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(100, 26);
			this->toolStripMenuItem2->Text = L"1";
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(100, 26);
			this->toolStripMenuItem3->Text = L"2";
			// 
			// toolStripMenuItem4
			// 
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->Size = System::Drawing::Size(100, 26);
			this->toolStripMenuItem4->Text = L"3";
			// 
			// toolStripMenuItem5
			// 
			this->toolStripMenuItem5->Name = L"toolStripMenuItem5";
			this->toolStripMenuItem5->Size = System::Drawing::Size(100, 26);
			this->toolStripMenuItem5->Text = L"4";
			// 
			// toolStripMenuItem6
			// 
			this->toolStripMenuItem6->Name = L"toolStripMenuItem6";
			this->toolStripMenuItem6->Size = System::Drawing::Size(100, 26);
			this->toolStripMenuItem6->Text = L"5";
			// 
			// toolStripMenuItem7
			// 
			this->toolStripMenuItem7->Name = L"toolStripMenuItem7";
			this->toolStripMenuItem7->Size = System::Drawing::Size(100, 26);
			this->toolStripMenuItem7->Text = L"6";
			// 
			// toolStripMenuItem8
			// 
			this->toolStripMenuItem8->Name = L"toolStripMenuItem8";
			this->toolStripMenuItem8->Size = System::Drawing::Size(100, 26);
			this->toolStripMenuItem8->Text = L"7";
			// 
			// toolStripMenuItem9
			// 
			this->toolStripMenuItem9->Name = L"toolStripMenuItem9";
			this->toolStripMenuItem9->Size = System::Drawing::Size(100, 26);
			this->toolStripMenuItem9->Text = L"8";
			// 
			// toolStripMenuItem10
			// 
			this->toolStripMenuItem10->Name = L"toolStripMenuItem10";
			this->toolStripMenuItem10->Size = System::Drawing::Size(100, 26);
			this->toolStripMenuItem10->Text = L"9";
			// 
			// toolStripMenuItem11
			// 
			this->toolStripMenuItem11->Name = L"toolStripMenuItem11";
			this->toolStripMenuItem11->Size = System::Drawing::Size(100, 26);
			this->toolStripMenuItem11->Text = L"10";
			// 
			// roundToolStripMenuItem
			// 
			this->roundToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {
				this->headlinePhaseToolStripMenuItem,
					this->toolStripMenuItem12, this->toolStripMenuItem13, this->toolStripMenuItem14, this->toolStripMenuItem15, this->toolStripMenuItem16,
					this->toolStripMenuItem17, this->toolStripMenuItem18, this->toolStripMenuItem19
			});
			this->roundToolStripMenuItem->Name = L"roundToolStripMenuItem";
			this->roundToolStripMenuItem->Size = System::Drawing::Size(164, 26);
			this->roundToolStripMenuItem->Text = L"Round";
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
			// scoreToolStripMenuItem
			// 
			this->scoreToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripMenuItem20,
					this->uSAToolStripMenuItem2, this->uSSRToolStripMenuItem2
			});
			this->scoreToolStripMenuItem->Name = L"scoreToolStripMenuItem";
			this->scoreToolStripMenuItem->Size = System::Drawing::Size(164, 26);
			this->scoreToolStripMenuItem->Text = L"Score";
			// 
			// toolStripMenuItem20
			// 
			this->toolStripMenuItem20->Name = L"toolStripMenuItem20";
			this->toolStripMenuItem20->Size = System::Drawing::Size(119, 26);
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
			this->uSAToolStripMenuItem2->Size = System::Drawing::Size(119, 26);
			this->uSAToolStripMenuItem2->Text = L"USA";
			// 
			// toolStripMenuItem21
			// 
			this->toolStripMenuItem21->Name = L"toolStripMenuItem21";
			this->toolStripMenuItem21->Size = System::Drawing::Size(100, 26);
			this->toolStripMenuItem21->Text = L"1";
			// 
			// toolStripMenuItem22
			// 
			this->toolStripMenuItem22->Name = L"toolStripMenuItem22";
			this->toolStripMenuItem22->Size = System::Drawing::Size(100, 26);
			this->toolStripMenuItem22->Text = L"2";
			// 
			// toolStripMenuItem23
			// 
			this->toolStripMenuItem23->Name = L"toolStripMenuItem23";
			this->toolStripMenuItem23->Size = System::Drawing::Size(100, 26);
			this->toolStripMenuItem23->Text = L"3";
			// 
			// toolStripMenuItem24
			// 
			this->toolStripMenuItem24->Name = L"toolStripMenuItem24";
			this->toolStripMenuItem24->Size = System::Drawing::Size(100, 26);
			this->toolStripMenuItem24->Text = L"4";
			// 
			// toolStripMenuItem25
			// 
			this->toolStripMenuItem25->Name = L"toolStripMenuItem25";
			this->toolStripMenuItem25->Size = System::Drawing::Size(100, 26);
			this->toolStripMenuItem25->Text = L"5";
			// 
			// toolStripMenuItem26
			// 
			this->toolStripMenuItem26->Name = L"toolStripMenuItem26";
			this->toolStripMenuItem26->Size = System::Drawing::Size(100, 26);
			this->toolStripMenuItem26->Text = L"6";
			// 
			// toolStripMenuItem27
			// 
			this->toolStripMenuItem27->Name = L"toolStripMenuItem27";
			this->toolStripMenuItem27->Size = System::Drawing::Size(100, 26);
			this->toolStripMenuItem27->Text = L"7";
			// 
			// toolStripMenuItem28
			// 
			this->toolStripMenuItem28->Name = L"toolStripMenuItem28";
			this->toolStripMenuItem28->Size = System::Drawing::Size(100, 26);
			this->toolStripMenuItem28->Text = L"8";
			// 
			// toolStripMenuItem29
			// 
			this->toolStripMenuItem29->Name = L"toolStripMenuItem29";
			this->toolStripMenuItem29->Size = System::Drawing::Size(100, 26);
			this->toolStripMenuItem29->Text = L"9";
			// 
			// toolStripMenuItem30
			// 
			this->toolStripMenuItem30->Name = L"toolStripMenuItem30";
			this->toolStripMenuItem30->Size = System::Drawing::Size(100, 26);
			this->toolStripMenuItem30->Text = L"10";
			// 
			// toolStripMenuItem31
			// 
			this->toolStripMenuItem31->Name = L"toolStripMenuItem31";
			this->toolStripMenuItem31->Size = System::Drawing::Size(100, 26);
			this->toolStripMenuItem31->Text = L"11";
			// 
			// toolStripMenuItem32
			// 
			this->toolStripMenuItem32->Name = L"toolStripMenuItem32";
			this->toolStripMenuItem32->Size = System::Drawing::Size(100, 26);
			this->toolStripMenuItem32->Text = L"12";
			// 
			// toolStripMenuItem33
			// 
			this->toolStripMenuItem33->Name = L"toolStripMenuItem33";
			this->toolStripMenuItem33->Size = System::Drawing::Size(100, 26);
			this->toolStripMenuItem33->Text = L"13";
			// 
			// toolStripMenuItem34
			// 
			this->toolStripMenuItem34->Name = L"toolStripMenuItem34";
			this->toolStripMenuItem34->Size = System::Drawing::Size(100, 26);
			this->toolStripMenuItem34->Text = L"14";
			// 
			// toolStripMenuItem35
			// 
			this->toolStripMenuItem35->Name = L"toolStripMenuItem35";
			this->toolStripMenuItem35->Size = System::Drawing::Size(100, 26);
			this->toolStripMenuItem35->Text = L"15";
			// 
			// toolStripMenuItem36
			// 
			this->toolStripMenuItem36->Name = L"toolStripMenuItem36";
			this->toolStripMenuItem36->Size = System::Drawing::Size(100, 26);
			this->toolStripMenuItem36->Text = L"16";
			// 
			// toolStripMenuItem37
			// 
			this->toolStripMenuItem37->Name = L"toolStripMenuItem37";
			this->toolStripMenuItem37->Size = System::Drawing::Size(100, 26);
			this->toolStripMenuItem37->Text = L"17";
			// 
			// toolStripMenuItem38
			// 
			this->toolStripMenuItem38->Name = L"toolStripMenuItem38";
			this->toolStripMenuItem38->Size = System::Drawing::Size(100, 26);
			this->toolStripMenuItem38->Text = L"18";
			// 
			// toolStripMenuItem39
			// 
			this->toolStripMenuItem39->Name = L"toolStripMenuItem39";
			this->toolStripMenuItem39->Size = System::Drawing::Size(100, 26);
			this->toolStripMenuItem39->Text = L"19";
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
			this->uSSRToolStripMenuItem2->Size = System::Drawing::Size(119, 26);
			this->uSSRToolStripMenuItem2->Text = L"USSR";
			// 
			// toolStripMenuItem40
			// 
			this->toolStripMenuItem40->Name = L"toolStripMenuItem40";
			this->toolStripMenuItem40->Size = System::Drawing::Size(100, 26);
			this->toolStripMenuItem40->Text = L"1";
			// 
			// toolStripMenuItem41
			// 
			this->toolStripMenuItem41->Name = L"toolStripMenuItem41";
			this->toolStripMenuItem41->Size = System::Drawing::Size(100, 26);
			this->toolStripMenuItem41->Text = L"2";
			// 
			// toolStripMenuItem42
			// 
			this->toolStripMenuItem42->Name = L"toolStripMenuItem42";
			this->toolStripMenuItem42->Size = System::Drawing::Size(100, 26);
			this->toolStripMenuItem42->Text = L"3";
			// 
			// toolStripMenuItem43
			// 
			this->toolStripMenuItem43->Name = L"toolStripMenuItem43";
			this->toolStripMenuItem43->Size = System::Drawing::Size(100, 26);
			this->toolStripMenuItem43->Text = L"4";
			// 
			// toolStripMenuItem44
			// 
			this->toolStripMenuItem44->Name = L"toolStripMenuItem44";
			this->toolStripMenuItem44->Size = System::Drawing::Size(100, 26);
			this->toolStripMenuItem44->Text = L"5";
			// 
			// toolStripMenuItem45
			// 
			this->toolStripMenuItem45->Name = L"toolStripMenuItem45";
			this->toolStripMenuItem45->Size = System::Drawing::Size(100, 26);
			this->toolStripMenuItem45->Text = L"6";
			// 
			// toolStripMenuItem46
			// 
			this->toolStripMenuItem46->Name = L"toolStripMenuItem46";
			this->toolStripMenuItem46->Size = System::Drawing::Size(100, 26);
			this->toolStripMenuItem46->Text = L"7";
			// 
			// toolStripMenuItem47
			// 
			this->toolStripMenuItem47->Name = L"toolStripMenuItem47";
			this->toolStripMenuItem47->Size = System::Drawing::Size(100, 26);
			this->toolStripMenuItem47->Text = L"8";
			// 
			// toolStripMenuItem48
			// 
			this->toolStripMenuItem48->Name = L"toolStripMenuItem48";
			this->toolStripMenuItem48->Size = System::Drawing::Size(100, 26);
			this->toolStripMenuItem48->Text = L"9";
			// 
			// toolStripMenuItem49
			// 
			this->toolStripMenuItem49->Name = L"toolStripMenuItem49";
			this->toolStripMenuItem49->Size = System::Drawing::Size(100, 26);
			this->toolStripMenuItem49->Text = L"10";
			// 
			// toolStripMenuItem50
			// 
			this->toolStripMenuItem50->Name = L"toolStripMenuItem50";
			this->toolStripMenuItem50->Size = System::Drawing::Size(100, 26);
			this->toolStripMenuItem50->Text = L"11";
			// 
			// toolStripMenuItem51
			// 
			this->toolStripMenuItem51->Name = L"toolStripMenuItem51";
			this->toolStripMenuItem51->Size = System::Drawing::Size(100, 26);
			this->toolStripMenuItem51->Text = L"12";
			// 
			// toolStripMenuItem52
			// 
			this->toolStripMenuItem52->Name = L"toolStripMenuItem52";
			this->toolStripMenuItem52->Size = System::Drawing::Size(100, 26);
			this->toolStripMenuItem52->Text = L"13";
			// 
			// toolStripMenuItem53
			// 
			this->toolStripMenuItem53->Name = L"toolStripMenuItem53";
			this->toolStripMenuItem53->Size = System::Drawing::Size(100, 26);
			this->toolStripMenuItem53->Text = L"14";
			// 
			// toolStripMenuItem54
			// 
			this->toolStripMenuItem54->Name = L"toolStripMenuItem54";
			this->toolStripMenuItem54->Size = System::Drawing::Size(100, 26);
			this->toolStripMenuItem54->Text = L"15";
			// 
			// toolStripMenuItem55
			// 
			this->toolStripMenuItem55->Name = L"toolStripMenuItem55";
			this->toolStripMenuItem55->Size = System::Drawing::Size(100, 26);
			this->toolStripMenuItem55->Text = L"16";
			// 
			// toolStripMenuItem56
			// 
			this->toolStripMenuItem56->Name = L"toolStripMenuItem56";
			this->toolStripMenuItem56->Size = System::Drawing::Size(100, 26);
			this->toolStripMenuItem56->Text = L"17";
			// 
			// toolStripMenuItem57
			// 
			this->toolStripMenuItem57->Name = L"toolStripMenuItem57";
			this->toolStripMenuItem57->Size = System::Drawing::Size(100, 26);
			this->toolStripMenuItem57->Text = L"18";
			// 
			// toolStripMenuItem58
			// 
			this->toolStripMenuItem58->Name = L"toolStripMenuItem58";
			this->toolStripMenuItem58->Size = System::Drawing::Size(100, 26);
			this->toolStripMenuItem58->Text = L"19";
			// 
			// defconToolStripMenuItem
			// 
			this->defconToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripMenuItem59,
					this->toolStripMenuItem60, this->toolStripMenuItem61, this->toolStripMenuItem62
			});
			this->defconToolStripMenuItem->Name = L"defconToolStripMenuItem";
			this->defconToolStripMenuItem->Size = System::Drawing::Size(164, 26);
			this->defconToolStripMenuItem->Text = L"Defcon";
			// 
			// toolStripMenuItem59
			// 
			this->toolStripMenuItem59->Name = L"toolStripMenuItem59";
			this->toolStripMenuItem59->Size = System::Drawing::Size(92, 26);
			this->toolStripMenuItem59->Text = L"5";
			// 
			// toolStripMenuItem60
			// 
			this->toolStripMenuItem60->Name = L"toolStripMenuItem60";
			this->toolStripMenuItem60->Size = System::Drawing::Size(92, 26);
			this->toolStripMenuItem60->Text = L"4";
			// 
			// toolStripMenuItem61
			// 
			this->toolStripMenuItem61->Name = L"toolStripMenuItem61";
			this->toolStripMenuItem61->Size = System::Drawing::Size(92, 26);
			this->toolStripMenuItem61->Text = L"3";
			// 
			// toolStripMenuItem62
			// 
			this->toolStripMenuItem62->Name = L"toolStripMenuItem62";
			this->toolStripMenuItem62->Size = System::Drawing::Size(92, 26);
			this->toolStripMenuItem62->Text = L"2";
			// 
			// militaryOpsToolStripMenuItem
			// 
			this->militaryOpsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->uSAToolStripMenuItem3,
					this->uSSRToolStripMenuItem3
			});
			this->militaryOpsToolStripMenuItem->Name = L"militaryOpsToolStripMenuItem";
			this->militaryOpsToolStripMenuItem->Size = System::Drawing::Size(164, 26);
			this->militaryOpsToolStripMenuItem->Text = L"Military Ops";
			// 
			// uSAToolStripMenuItem3
			// 
			this->uSAToolStripMenuItem3->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->toolStripMenuItem63,
					this->toolStripMenuItem64, this->toolStripMenuItem65, this->toolStripMenuItem66, this->toolStripMenuItem67, this->toolStripMenuItem68
			});
			this->uSAToolStripMenuItem3->Name = L"uSAToolStripMenuItem3";
			this->uSAToolStripMenuItem3->Size = System::Drawing::Size(119, 26);
			this->uSAToolStripMenuItem3->Text = L"USA";
			// 
			// toolStripMenuItem63
			// 
			this->toolStripMenuItem63->Name = L"toolStripMenuItem63";
			this->toolStripMenuItem63->Size = System::Drawing::Size(92, 26);
			this->toolStripMenuItem63->Text = L"0";
			// 
			// toolStripMenuItem64
			// 
			this->toolStripMenuItem64->Name = L"toolStripMenuItem64";
			this->toolStripMenuItem64->Size = System::Drawing::Size(92, 26);
			this->toolStripMenuItem64->Text = L"1";
			// 
			// toolStripMenuItem65
			// 
			this->toolStripMenuItem65->Name = L"toolStripMenuItem65";
			this->toolStripMenuItem65->Size = System::Drawing::Size(92, 26);
			this->toolStripMenuItem65->Text = L"2";
			// 
			// toolStripMenuItem66
			// 
			this->toolStripMenuItem66->Name = L"toolStripMenuItem66";
			this->toolStripMenuItem66->Size = System::Drawing::Size(92, 26);
			this->toolStripMenuItem66->Text = L"3";
			// 
			// toolStripMenuItem67
			// 
			this->toolStripMenuItem67->Name = L"toolStripMenuItem67";
			this->toolStripMenuItem67->Size = System::Drawing::Size(92, 26);
			this->toolStripMenuItem67->Text = L"4";
			// 
			// toolStripMenuItem68
			// 
			this->toolStripMenuItem68->Name = L"toolStripMenuItem68";
			this->toolStripMenuItem68->Size = System::Drawing::Size(92, 26);
			this->toolStripMenuItem68->Text = L"5";
			// 
			// uSSRToolStripMenuItem3
			// 
			this->uSSRToolStripMenuItem3->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->toolStripMenuItem69,
					this->toolStripMenuItem70, this->toolStripMenuItem71, this->toolStripMenuItem72, this->toolStripMenuItem73, this->toolStripMenuItem74
			});
			this->uSSRToolStripMenuItem3->Name = L"uSSRToolStripMenuItem3";
			this->uSSRToolStripMenuItem3->Size = System::Drawing::Size(119, 26);
			this->uSSRToolStripMenuItem3->Text = L"USSR";
			// 
			// toolStripMenuItem69
			// 
			this->toolStripMenuItem69->Name = L"toolStripMenuItem69";
			this->toolStripMenuItem69->Size = System::Drawing::Size(92, 26);
			this->toolStripMenuItem69->Text = L"0";
			// 
			// toolStripMenuItem70
			// 
			this->toolStripMenuItem70->Name = L"toolStripMenuItem70";
			this->toolStripMenuItem70->Size = System::Drawing::Size(92, 26);
			this->toolStripMenuItem70->Text = L"1";
			// 
			// toolStripMenuItem71
			// 
			this->toolStripMenuItem71->Name = L"toolStripMenuItem71";
			this->toolStripMenuItem71->Size = System::Drawing::Size(92, 26);
			this->toolStripMenuItem71->Text = L"2";
			// 
			// toolStripMenuItem72
			// 
			this->toolStripMenuItem72->Name = L"toolStripMenuItem72";
			this->toolStripMenuItem72->Size = System::Drawing::Size(92, 26);
			this->toolStripMenuItem72->Text = L"3";
			// 
			// toolStripMenuItem73
			// 
			this->toolStripMenuItem73->Name = L"toolStripMenuItem73";
			this->toolStripMenuItem73->Size = System::Drawing::Size(92, 26);
			this->toolStripMenuItem73->Text = L"4";
			// 
			// toolStripMenuItem74
			// 
			this->toolStripMenuItem74->Name = L"toolStripMenuItem74";
			this->toolStripMenuItem74->Size = System::Drawing::Size(92, 26);
			this->toolStripMenuItem74->Text = L"5";
			// 
			// spaceRaceToolStripMenuItem
			// 
			this->spaceRaceToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->uSAToolStripMenuItem4,
					this->uSSRToolStripMenuItem4
			});
			this->spaceRaceToolStripMenuItem->Name = L"spaceRaceToolStripMenuItem";
			this->spaceRaceToolStripMenuItem->Size = System::Drawing::Size(164, 26);
			this->spaceRaceToolStripMenuItem->Text = L"Space Race";
			// 
			// uSAToolStripMenuItem4
			// 
			this->uSAToolStripMenuItem4->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {
				this->startToolStripMenuItem,
					this->toolStripMenuItem75, this->toolStripMenuItem76, this->toolStripMenuItem77, this->toolStripMenuItem78, this->toolStripMenuItem79,
					this->toolStripMenuItem80, this->toolStripMenuItem81, this->toolStripMenuItem82
			});
			this->uSAToolStripMenuItem4->Name = L"uSAToolStripMenuItem4";
			this->uSAToolStripMenuItem4->Size = System::Drawing::Size(119, 26);
			this->uSAToolStripMenuItem4->Text = L"USA";
			// 
			// startToolStripMenuItem
			// 
			this->startToolStripMenuItem->Name = L"startToolStripMenuItem";
			this->startToolStripMenuItem->Size = System::Drawing::Size(115, 26);
			this->startToolStripMenuItem->Text = L"Start";
			// 
			// toolStripMenuItem75
			// 
			this->toolStripMenuItem75->Name = L"toolStripMenuItem75";
			this->toolStripMenuItem75->Size = System::Drawing::Size(115, 26);
			this->toolStripMenuItem75->Text = L"1";
			// 
			// toolStripMenuItem76
			// 
			this->toolStripMenuItem76->Name = L"toolStripMenuItem76";
			this->toolStripMenuItem76->Size = System::Drawing::Size(115, 26);
			this->toolStripMenuItem76->Text = L"2";
			// 
			// toolStripMenuItem77
			// 
			this->toolStripMenuItem77->Name = L"toolStripMenuItem77";
			this->toolStripMenuItem77->Size = System::Drawing::Size(115, 26);
			this->toolStripMenuItem77->Text = L"3";
			// 
			// toolStripMenuItem78
			// 
			this->toolStripMenuItem78->Name = L"toolStripMenuItem78";
			this->toolStripMenuItem78->Size = System::Drawing::Size(115, 26);
			this->toolStripMenuItem78->Text = L"4";
			// 
			// toolStripMenuItem79
			// 
			this->toolStripMenuItem79->Name = L"toolStripMenuItem79";
			this->toolStripMenuItem79->Size = System::Drawing::Size(115, 26);
			this->toolStripMenuItem79->Text = L"5";
			// 
			// toolStripMenuItem80
			// 
			this->toolStripMenuItem80->Name = L"toolStripMenuItem80";
			this->toolStripMenuItem80->Size = System::Drawing::Size(115, 26);
			this->toolStripMenuItem80->Text = L"6";
			// 
			// toolStripMenuItem81
			// 
			this->toolStripMenuItem81->Name = L"toolStripMenuItem81";
			this->toolStripMenuItem81->Size = System::Drawing::Size(115, 26);
			this->toolStripMenuItem81->Text = L"7";
			// 
			// toolStripMenuItem82
			// 
			this->toolStripMenuItem82->Name = L"toolStripMenuItem82";
			this->toolStripMenuItem82->Size = System::Drawing::Size(115, 26);
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
			this->uSSRToolStripMenuItem4->Size = System::Drawing::Size(119, 26);
			this->uSSRToolStripMenuItem4->Text = L"USSR";
			// 
			// startToolStripMenuItem1
			// 
			this->startToolStripMenuItem1->Name = L"startToolStripMenuItem1";
			this->startToolStripMenuItem1->Size = System::Drawing::Size(115, 26);
			this->startToolStripMenuItem1->Text = L"Start";
			// 
			// toolStripMenuItem83
			// 
			this->toolStripMenuItem83->Name = L"toolStripMenuItem83";
			this->toolStripMenuItem83->Size = System::Drawing::Size(115, 26);
			this->toolStripMenuItem83->Text = L"1";
			// 
			// toolStripMenuItem84
			// 
			this->toolStripMenuItem84->Name = L"toolStripMenuItem84";
			this->toolStripMenuItem84->Size = System::Drawing::Size(115, 26);
			this->toolStripMenuItem84->Text = L"2";
			// 
			// toolStripMenuItem85
			// 
			this->toolStripMenuItem85->Name = L"toolStripMenuItem85";
			this->toolStripMenuItem85->Size = System::Drawing::Size(115, 26);
			this->toolStripMenuItem85->Text = L"3";
			// 
			// toolStripMenuItem86
			// 
			this->toolStripMenuItem86->Name = L"toolStripMenuItem86";
			this->toolStripMenuItem86->Size = System::Drawing::Size(115, 26);
			this->toolStripMenuItem86->Text = L"4";
			// 
			// toolStripMenuItem87
			// 
			this->toolStripMenuItem87->Name = L"toolStripMenuItem87";
			this->toolStripMenuItem87->Size = System::Drawing::Size(115, 26);
			this->toolStripMenuItem87->Text = L"5";
			// 
			// toolStripMenuItem88
			// 
			this->toolStripMenuItem88->Name = L"toolStripMenuItem88";
			this->toolStripMenuItem88->Size = System::Drawing::Size(115, 26);
			this->toolStripMenuItem88->Text = L"6";
			// 
			// toolStripMenuItem89
			// 
			this->toolStripMenuItem89->Name = L"toolStripMenuItem89";
			this->toolStripMenuItem89->Size = System::Drawing::Size(115, 26);
			this->toolStripMenuItem89->Text = L"7";
			// 
			// toolStripMenuItem90
			// 
			this->toolStripMenuItem90->Name = L"toolStripMenuItem90";
			this->toolStripMenuItem90->Size = System::Drawing::Size(115, 26);
			this->toolStripMenuItem90->Text = L"8";
			// 
			// eventToolStripMenuItem
			// 
			this->eventToolStripMenuItem->Name = L"eventToolStripMenuItem";
			this->eventToolStripMenuItem->Size = System::Drawing::Size(164, 26);
			this->eventToolStripMenuItem->Text = L"Event";
			// 
			// resetToolStripMenuItem
			// 
			this->resetToolStripMenuItem->Name = L"resetToolStripMenuItem";
			this->resetToolStripMenuItem->Size = System::Drawing::Size(164, 26);
			this->resetToolStripMenuItem->Text = L"Reset";
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
			this->uSAToolStripMenuItem1->Size = System::Drawing::Size(119, 26);
			this->uSAToolStripMenuItem1->Text = L"USA";
			// 
			// revealToolStripMenuItem
			// 
			this->revealToolStripMenuItem->Name = L"revealToolStripMenuItem";
			this->revealToolStripMenuItem->Size = System::Drawing::Size(128, 26);
			this->revealToolStripMenuItem->Text = L"Reveal";
			// 
			// uSSRToolStripMenuItem1
			// 
			this->uSSRToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->revealToolStripMenuItem1 });
			this->uSSRToolStripMenuItem1->Name = L"uSSRToolStripMenuItem1";
			this->uSSRToolStripMenuItem1->Size = System::Drawing::Size(119, 26);
			this->uSSRToolStripMenuItem1->Text = L"USSR";
			// 
			// revealToolStripMenuItem1
			// 
			this->revealToolStripMenuItem1->Name = L"revealToolStripMenuItem1";
			this->revealToolStripMenuItem1->Size = System::Drawing::Size(128, 26);
			this->revealToolStripMenuItem1->Text = L"Reveal";
			// 
			// Algeria_USA
			// 
			this->Algeria_USA->AutoSize = true;
			this->Algeria_USA->BackColor = System::Drawing::Color::White;
			this->Algeria_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Algeria_USA->ForeColor = System::Drawing::Color::Blue;
			this->Algeria_USA->Location = System::Drawing::Point(4, 1);
			this->Algeria_USA->Name = L"Algeria_USA";
			this->Algeria_USA->Size = System::Drawing::Size(26, 17);
			this->Algeria_USA->TabIndex = 0;
			this->Algeria_USA->Text = L"10";
			this->Algeria_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label49);
			this->groupBox1->Controls->Add(this->label50);
			this->groupBox1->Controls->Add(this->tableLayoutPanel17);
			this->groupBox1->Controls->Add(this->tableLayoutPanel18);
			this->groupBox1->Controls->Add(this->label25);
			this->groupBox1->Controls->Add(this->label22);
			this->groupBox1->Controls->Add(this->tableLayoutPanel9);
			this->groupBox1->Controls->Add(this->tableLayoutPanel8);
			this->groupBox1->Controls->Add(this->label28);
			this->groupBox1->Controls->Add(this->label19);
			this->groupBox1->Controls->Add(this->tableLayoutPanel10);
			this->groupBox1->Controls->Add(this->tableLayoutPanel7);
			this->groupBox1->Controls->Add(this->label31);
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->Controls->Add(this->tableLayoutPanel11);
			this->groupBox1->Controls->Add(this->tableLayoutPanel6);
			this->groupBox1->Controls->Add(this->label34);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->tableLayoutPanel12);
			this->groupBox1->Controls->Add(this->tableLayoutPanel5);
			this->groupBox1->Controls->Add(this->label37);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->tableLayoutPanel13);
			this->groupBox1->Controls->Add(this->tableLayoutPanel4);
			this->groupBox1->Controls->Add(this->label40);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->tableLayoutPanel14);
			this->groupBox1->Controls->Add(this->label43);
			this->groupBox1->Controls->Add(this->tableLayoutPanel3);
			this->groupBox1->Controls->Add(this->label44);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->tableLayoutPanel15);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->tableLayoutPanel16);
			this->groupBox1->Controls->Add(this->tableLayoutPanel2);
			this->groupBox1->Controls->Add(this->tableLayoutPanel1);
			this->groupBox1->Location = System::Drawing::Point(12, 31);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(236, 438);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Africa";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Location = System::Drawing::Point(102, 372);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(72, 17);
			this->label49->TabIndex = 39;
			this->label49->Text = L"Zimbabwe";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Location = System::Drawing::Point(17, 371);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(53, 17);
			this->label50->TabIndex = 37;
			this->label50->Text = L"Nigeria";
			// 
			// tableLayoutPanel17
			// 
			this->tableLayoutPanel17->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel17->ColumnCount = 2;
			this->tableLayoutPanel17->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel17->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel17->Controls->Add(this->Zimbabwe_USA, 0, 0);
			this->tableLayoutPanel17->Controls->Add(this->Zimbabwe_USSR, 1, 0);
			this->tableLayoutPanel17->Location = System::Drawing::Point(105, 392);
			this->tableLayoutPanel17->Name = L"tableLayoutPanel17";
			this->tableLayoutPanel17->RowCount = 1;
			this->tableLayoutPanel17->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel17->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel17->TabIndex = 38;
			// 
			// Zimbabwe_USA
			// 
			this->Zimbabwe_USA->AutoSize = true;
			this->Zimbabwe_USA->BackColor = System::Drawing::Color::White;
			this->Zimbabwe_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Zimbabwe_USA->ForeColor = System::Drawing::Color::Blue;
			this->Zimbabwe_USA->Location = System::Drawing::Point(4, 1);
			this->Zimbabwe_USA->Name = L"Zimbabwe_USA";
			this->Zimbabwe_USA->Size = System::Drawing::Size(26, 17);
			this->Zimbabwe_USA->TabIndex = 0;
			this->Zimbabwe_USA->Text = L"10";
			this->Zimbabwe_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Zimbabwe_USSR
			// 
			this->Zimbabwe_USSR->AutoSize = true;
			this->Zimbabwe_USSR->BackColor = System::Drawing::Color::White;
			this->Zimbabwe_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Zimbabwe_USSR->ForeColor = System::Drawing::Color::Red;
			this->Zimbabwe_USSR->Location = System::Drawing::Point(37, 1);
			this->Zimbabwe_USSR->Name = L"Zimbabwe_USSR";
			this->Zimbabwe_USSR->Size = System::Drawing::Size(26, 17);
			this->Zimbabwe_USSR->TabIndex = 5;
			this->Zimbabwe_USSR->Text = L"10";
			this->Zimbabwe_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel18
			// 
			this->tableLayoutPanel18->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel18->ColumnCount = 2;
			this->tableLayoutPanel18->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel18->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel18->Controls->Add(this->Nigeria_USA, 0, 0);
			this->tableLayoutPanel18->Controls->Add(this->Nigeria_USSR, 1, 0);
			this->tableLayoutPanel18->Location = System::Drawing::Point(20, 391);
			this->tableLayoutPanel18->Name = L"tableLayoutPanel18";
			this->tableLayoutPanel18->RowCount = 1;
			this->tableLayoutPanel18->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel18->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel18->TabIndex = 36;
			// 
			// Nigeria_USA
			// 
			this->Nigeria_USA->AutoSize = true;
			this->Nigeria_USA->BackColor = System::Drawing::Color::White;
			this->Nigeria_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Nigeria_USA->ForeColor = System::Drawing::Color::Blue;
			this->Nigeria_USA->Location = System::Drawing::Point(4, 1);
			this->Nigeria_USA->Name = L"Nigeria_USA";
			this->Nigeria_USA->Size = System::Drawing::Size(26, 17);
			this->Nigeria_USA->TabIndex = 0;
			this->Nigeria_USA->Text = L"10";
			this->Nigeria_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Nigeria_USSR
			// 
			this->Nigeria_USSR->AutoSize = true;
			this->Nigeria_USSR->BackColor = System::Drawing::Color::White;
			this->Nigeria_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Nigeria_USSR->ForeColor = System::Drawing::Color::Red;
			this->Nigeria_USSR->Location = System::Drawing::Point(37, 1);
			this->Nigeria_USSR->Name = L"Nigeria_USSR";
			this->Nigeria_USSR->Size = System::Drawing::Size(26, 17);
			this->Nigeria_USSR->TabIndex = 5;
			this->Nigeria_USSR->Text = L"10";
			this->Nigeria_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(102, 329);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(41, 17);
			this->label25->TabIndex = 35;
			this->label25->Text = L"Zaire";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(17, 328);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(62, 17);
			this->label22->TabIndex = 19;
			this->label22->Text = L"Morocco";
			// 
			// tableLayoutPanel9
			// 
			this->tableLayoutPanel9->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel9->ColumnCount = 2;
			this->tableLayoutPanel9->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel9->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel9->Controls->Add(this->Zaire_USA, 0, 0);
			this->tableLayoutPanel9->Controls->Add(this->Zaire_USSR, 1, 0);
			this->tableLayoutPanel9->Location = System::Drawing::Point(105, 349);
			this->tableLayoutPanel9->Name = L"tableLayoutPanel9";
			this->tableLayoutPanel9->RowCount = 1;
			this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel9->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel9->TabIndex = 34;
			// 
			// Zaire_USA
			// 
			this->Zaire_USA->AutoSize = true;
			this->Zaire_USA->BackColor = System::Drawing::Color::White;
			this->Zaire_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Zaire_USA->ForeColor = System::Drawing::Color::Blue;
			this->Zaire_USA->Location = System::Drawing::Point(4, 1);
			this->Zaire_USA->Name = L"Zaire_USA";
			this->Zaire_USA->Size = System::Drawing::Size(26, 17);
			this->Zaire_USA->TabIndex = 0;
			this->Zaire_USA->Text = L"10";
			this->Zaire_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Zaire_USSR
			// 
			this->Zaire_USSR->AutoSize = true;
			this->Zaire_USSR->BackColor = System::Drawing::Color::White;
			this->Zaire_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Zaire_USSR->ForeColor = System::Drawing::Color::Red;
			this->Zaire_USSR->Location = System::Drawing::Point(37, 1);
			this->Zaire_USSR->Name = L"Zaire_USSR";
			this->Zaire_USSR->Size = System::Drawing::Size(26, 17);
			this->Zaire_USSR->TabIndex = 5;
			this->Zaire_USSR->Text = L"10";
			this->Zaire_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel8
			// 
			this->tableLayoutPanel8->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel8->ColumnCount = 2;
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel8->Controls->Add(this->Morocco_USA, 0, 0);
			this->tableLayoutPanel8->Controls->Add(this->Morocco_USSR, 1, 0);
			this->tableLayoutPanel8->Location = System::Drawing::Point(20, 348);
			this->tableLayoutPanel8->Name = L"tableLayoutPanel8";
			this->tableLayoutPanel8->RowCount = 1;
			this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel8->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel8->TabIndex = 18;
			// 
			// Morocco_USA
			// 
			this->Morocco_USA->AutoSize = true;
			this->Morocco_USA->BackColor = System::Drawing::Color::White;
			this->Morocco_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Morocco_USA->ForeColor = System::Drawing::Color::Blue;
			this->Morocco_USA->Location = System::Drawing::Point(4, 1);
			this->Morocco_USA->Name = L"Morocco_USA";
			this->Morocco_USA->Size = System::Drawing::Size(26, 17);
			this->Morocco_USA->TabIndex = 0;
			this->Morocco_USA->Text = L"10";
			this->Morocco_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Morocco_USSR
			// 
			this->Morocco_USSR->AutoSize = true;
			this->Morocco_USSR->BackColor = System::Drawing::Color::White;
			this->Morocco_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Morocco_USSR->ForeColor = System::Drawing::Color::Red;
			this->Morocco_USSR->Location = System::Drawing::Point(37, 1);
			this->Morocco_USSR->Name = L"Morocco_USSR";
			this->Morocco_USSR->Size = System::Drawing::Size(26, 17);
			this->Morocco_USSR->TabIndex = 5;
			this->Morocco_USSR->Text = L"10";
			this->Morocco_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(102, 284);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(132, 17);
			this->label28->TabIndex = 33;
			this->label28->Text = L"West African States";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(17, 283);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(48, 17);
			this->label19->TabIndex = 17;
			this->label19->Text = L"Kenya";
			// 
			// tableLayoutPanel10
			// 
			this->tableLayoutPanel10->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel10->ColumnCount = 2;
			this->tableLayoutPanel10->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel10->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel10->Controls->Add(this->WestAfricanStates_USA, 0, 0);
			this->tableLayoutPanel10->Controls->Add(this->WestAfricanStates_USSR, 1, 0);
			this->tableLayoutPanel10->Location = System::Drawing::Point(105, 304);
			this->tableLayoutPanel10->Name = L"tableLayoutPanel10";
			this->tableLayoutPanel10->RowCount = 1;
			this->tableLayoutPanel10->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel10->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel10->TabIndex = 32;
			// 
			// WestAfricanStates_USA
			// 
			this->WestAfricanStates_USA->AutoSize = true;
			this->WestAfricanStates_USA->BackColor = System::Drawing::Color::White;
			this->WestAfricanStates_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->WestAfricanStates_USA->ForeColor = System::Drawing::Color::Blue;
			this->WestAfricanStates_USA->Location = System::Drawing::Point(4, 1);
			this->WestAfricanStates_USA->Name = L"WestAfricanStates_USA";
			this->WestAfricanStates_USA->Size = System::Drawing::Size(26, 17);
			this->WestAfricanStates_USA->TabIndex = 0;
			this->WestAfricanStates_USA->Text = L"10";
			this->WestAfricanStates_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// WestAfricanStates_USSR
			// 
			this->WestAfricanStates_USSR->AutoSize = true;
			this->WestAfricanStates_USSR->BackColor = System::Drawing::Color::White;
			this->WestAfricanStates_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->WestAfricanStates_USSR->ForeColor = System::Drawing::Color::Red;
			this->WestAfricanStates_USSR->Location = System::Drawing::Point(37, 1);
			this->WestAfricanStates_USSR->Name = L"WestAfricanStates_USSR";
			this->WestAfricanStates_USSR->Size = System::Drawing::Size(26, 17);
			this->WestAfricanStates_USSR->TabIndex = 5;
			this->WestAfricanStates_USSR->Text = L"10";
			this->WestAfricanStates_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel7
			// 
			this->tableLayoutPanel7->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel7->ColumnCount = 2;
			this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel7->Controls->Add(this->Kenya_USA, 0, 0);
			this->tableLayoutPanel7->Controls->Add(this->Kenya_USSR, 1, 0);
			this->tableLayoutPanel7->Location = System::Drawing::Point(20, 303);
			this->tableLayoutPanel7->Name = L"tableLayoutPanel7";
			this->tableLayoutPanel7->RowCount = 1;
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel7->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel7->TabIndex = 16;
			// 
			// Kenya_USA
			// 
			this->Kenya_USA->AutoSize = true;
			this->Kenya_USA->BackColor = System::Drawing::Color::White;
			this->Kenya_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Kenya_USA->ForeColor = System::Drawing::Color::Blue;
			this->Kenya_USA->Location = System::Drawing::Point(4, 1);
			this->Kenya_USA->Name = L"Kenya_USA";
			this->Kenya_USA->Size = System::Drawing::Size(26, 17);
			this->Kenya_USA->TabIndex = 0;
			this->Kenya_USA->Text = L"10";
			this->Kenya_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Kenya_USSR
			// 
			this->Kenya_USSR->AutoSize = true;
			this->Kenya_USSR->BackColor = System::Drawing::Color::White;
			this->Kenya_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Kenya_USSR->ForeColor = System::Drawing::Color::Red;
			this->Kenya_USSR->Location = System::Drawing::Point(37, 1);
			this->Kenya_USSR->Name = L"Kenya_USSR";
			this->Kenya_USSR->Size = System::Drawing::Size(26, 17);
			this->Kenya_USSR->TabIndex = 5;
			this->Kenya_USSR->Text = L"10";
			this->Kenya_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(102, 241);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(54, 17);
			this->label31->TabIndex = 31;
			this->label31->Text = L"Tunisia";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(17, 240);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(78, 17);
			this->label16->TabIndex = 15;
			this->label16->Text = L"Ivory Coast";
			// 
			// tableLayoutPanel11
			// 
			this->tableLayoutPanel11->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel11->ColumnCount = 2;
			this->tableLayoutPanel11->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel11->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel11->Controls->Add(this->Tunisia_USA, 0, 0);
			this->tableLayoutPanel11->Controls->Add(this->Tunisia_USSR, 1, 0);
			this->tableLayoutPanel11->Location = System::Drawing::Point(105, 261);
			this->tableLayoutPanel11->Name = L"tableLayoutPanel11";
			this->tableLayoutPanel11->RowCount = 1;
			this->tableLayoutPanel11->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel11->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel11->TabIndex = 30;
			// 
			// Tunisia_USA
			// 
			this->Tunisia_USA->AutoSize = true;
			this->Tunisia_USA->BackColor = System::Drawing::Color::White;
			this->Tunisia_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Tunisia_USA->ForeColor = System::Drawing::Color::Blue;
			this->Tunisia_USA->Location = System::Drawing::Point(4, 1);
			this->Tunisia_USA->Name = L"Tunisia_USA";
			this->Tunisia_USA->Size = System::Drawing::Size(26, 17);
			this->Tunisia_USA->TabIndex = 0;
			this->Tunisia_USA->Text = L"10";
			this->Tunisia_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Tunisia_USSR
			// 
			this->Tunisia_USSR->AutoSize = true;
			this->Tunisia_USSR->BackColor = System::Drawing::Color::White;
			this->Tunisia_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Tunisia_USSR->ForeColor = System::Drawing::Color::Red;
			this->Tunisia_USSR->Location = System::Drawing::Point(37, 1);
			this->Tunisia_USSR->Name = L"Tunisia_USSR";
			this->Tunisia_USSR->Size = System::Drawing::Size(26, 17);
			this->Tunisia_USSR->TabIndex = 5;
			this->Tunisia_USSR->Text = L"10";
			this->Tunisia_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel6
			// 
			this->tableLayoutPanel6->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel6->ColumnCount = 2;
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel6->Controls->Add(this->IvoryCoast_USA, 0, 0);
			this->tableLayoutPanel6->Controls->Add(this->IvoryCoast_USSR, 1, 0);
			this->tableLayoutPanel6->Location = System::Drawing::Point(20, 260);
			this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
			this->tableLayoutPanel6->RowCount = 1;
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel6->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel6->TabIndex = 14;
			// 
			// IvoryCoast_USA
			// 
			this->IvoryCoast_USA->AutoSize = true;
			this->IvoryCoast_USA->BackColor = System::Drawing::Color::White;
			this->IvoryCoast_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IvoryCoast_USA->ForeColor = System::Drawing::Color::Blue;
			this->IvoryCoast_USA->Location = System::Drawing::Point(4, 1);
			this->IvoryCoast_USA->Name = L"IvoryCoast_USA";
			this->IvoryCoast_USA->Size = System::Drawing::Size(26, 17);
			this->IvoryCoast_USA->TabIndex = 0;
			this->IvoryCoast_USA->Text = L"10";
			this->IvoryCoast_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// IvoryCoast_USSR
			// 
			this->IvoryCoast_USSR->AutoSize = true;
			this->IvoryCoast_USSR->BackColor = System::Drawing::Color::White;
			this->IvoryCoast_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IvoryCoast_USSR->ForeColor = System::Drawing::Color::Red;
			this->IvoryCoast_USSR->Location = System::Drawing::Point(37, 1);
			this->IvoryCoast_USSR->Name = L"IvoryCoast_USSR";
			this->IvoryCoast_USSR->Size = System::Drawing::Size(26, 17);
			this->IvoryCoast_USSR->TabIndex = 5;
			this->IvoryCoast_USSR->Text = L"10";
			this->IvoryCoast_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(102, 197);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(49, 17);
			this->label34->TabIndex = 29;
			this->label34->Text = L"Sudan";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(17, 196);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(59, 17);
			this->label13->TabIndex = 13;
			this->label13->Text = L"Ethiopia";
			// 
			// tableLayoutPanel12
			// 
			this->tableLayoutPanel12->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel12->ColumnCount = 2;
			this->tableLayoutPanel12->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel12->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel12->Controls->Add(this->Sudan_USA, 0, 0);
			this->tableLayoutPanel12->Controls->Add(this->Sudan_USSR, 1, 0);
			this->tableLayoutPanel12->Location = System::Drawing::Point(105, 217);
			this->tableLayoutPanel12->Name = L"tableLayoutPanel12";
			this->tableLayoutPanel12->RowCount = 1;
			this->tableLayoutPanel12->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel12->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel12->TabIndex = 28;
			// 
			// Sudan_USA
			// 
			this->Sudan_USA->AutoSize = true;
			this->Sudan_USA->BackColor = System::Drawing::Color::White;
			this->Sudan_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Sudan_USA->ForeColor = System::Drawing::Color::Blue;
			this->Sudan_USA->Location = System::Drawing::Point(4, 1);
			this->Sudan_USA->Name = L"Sudan_USA";
			this->Sudan_USA->Size = System::Drawing::Size(26, 17);
			this->Sudan_USA->TabIndex = 0;
			this->Sudan_USA->Text = L"10";
			this->Sudan_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Sudan_USSR
			// 
			this->Sudan_USSR->AutoSize = true;
			this->Sudan_USSR->BackColor = System::Drawing::Color::White;
			this->Sudan_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Sudan_USSR->ForeColor = System::Drawing::Color::Red;
			this->Sudan_USSR->Location = System::Drawing::Point(37, 1);
			this->Sudan_USSR->Name = L"Sudan_USSR";
			this->Sudan_USSR->Size = System::Drawing::Size(26, 17);
			this->Sudan_USSR->TabIndex = 5;
			this->Sudan_USSR->Text = L"10";
			this->Sudan_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel5
			// 
			this->tableLayoutPanel5->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel5->ColumnCount = 2;
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel5->Controls->Add(this->Ethiopia_USA, 0, 0);
			this->tableLayoutPanel5->Controls->Add(this->Ethiopia_USSR, 1, 0);
			this->tableLayoutPanel5->Location = System::Drawing::Point(20, 216);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 1;
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel5->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel5->TabIndex = 12;
			// 
			// Ethiopia_USA
			// 
			this->Ethiopia_USA->AutoSize = true;
			this->Ethiopia_USA->BackColor = System::Drawing::Color::White;
			this->Ethiopia_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ethiopia_USA->ForeColor = System::Drawing::Color::Blue;
			this->Ethiopia_USA->Location = System::Drawing::Point(4, 1);
			this->Ethiopia_USA->Name = L"Ethiopia_USA";
			this->Ethiopia_USA->Size = System::Drawing::Size(26, 17);
			this->Ethiopia_USA->TabIndex = 0;
			this->Ethiopia_USA->Text = L"10";
			this->Ethiopia_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Ethiopia_USSR
			// 
			this->Ethiopia_USSR->AutoSize = true;
			this->Ethiopia_USSR->BackColor = System::Drawing::Color::White;
			this->Ethiopia_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ethiopia_USSR->ForeColor = System::Drawing::Color::Red;
			this->Ethiopia_USSR->Location = System::Drawing::Point(37, 1);
			this->Ethiopia_USSR->Name = L"Ethiopia_USSR";
			this->Ethiopia_USSR->Size = System::Drawing::Size(26, 17);
			this->Ethiopia_USSR->TabIndex = 5;
			this->Ethiopia_USSR->Text = L"10";
			this->Ethiopia_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(102, 153);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(85, 17);
			this->label37->TabIndex = 24;
			this->label37->Text = L"South Africa";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(17, 152);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(73, 17);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Cameroon";
			// 
			// tableLayoutPanel13
			// 
			this->tableLayoutPanel13->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel13->ColumnCount = 2;
			this->tableLayoutPanel13->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel13->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel13->Controls->Add(this->SouthAfrica_USA, 0, 0);
			this->tableLayoutPanel13->Controls->Add(this->SouthAfrica_USSR, 1, 0);
			this->tableLayoutPanel13->Location = System::Drawing::Point(105, 173);
			this->tableLayoutPanel13->Name = L"tableLayoutPanel13";
			this->tableLayoutPanel13->RowCount = 1;
			this->tableLayoutPanel13->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel13->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel13->TabIndex = 22;
			// 
			// SouthAfrica_USA
			// 
			this->SouthAfrica_USA->AutoSize = true;
			this->SouthAfrica_USA->BackColor = System::Drawing::Color::White;
			this->SouthAfrica_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SouthAfrica_USA->ForeColor = System::Drawing::Color::Blue;
			this->SouthAfrica_USA->Location = System::Drawing::Point(4, 1);
			this->SouthAfrica_USA->Name = L"SouthAfrica_USA";
			this->SouthAfrica_USA->Size = System::Drawing::Size(26, 17);
			this->SouthAfrica_USA->TabIndex = 0;
			this->SouthAfrica_USA->Text = L"10";
			this->SouthAfrica_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// SouthAfrica_USSR
			// 
			this->SouthAfrica_USSR->AutoSize = true;
			this->SouthAfrica_USSR->BackColor = System::Drawing::Color::White;
			this->SouthAfrica_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SouthAfrica_USSR->ForeColor = System::Drawing::Color::Red;
			this->SouthAfrica_USSR->Location = System::Drawing::Point(37, 1);
			this->SouthAfrica_USSR->Name = L"SouthAfrica_USSR";
			this->SouthAfrica_USSR->Size = System::Drawing::Size(26, 17);
			this->SouthAfrica_USSR->TabIndex = 5;
			this->SouthAfrica_USSR->Text = L"10";
			this->SouthAfrica_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel4->ColumnCount = 2;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel4->Controls->Add(this->Cameroon_USA, 0, 0);
			this->tableLayoutPanel4->Controls->Add(this->Cameroon_USSR, 1, 0);
			this->tableLayoutPanel4->Location = System::Drawing::Point(20, 172);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 1;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel4->TabIndex = 8;
			// 
			// Cameroon_USA
			// 
			this->Cameroon_USA->AutoSize = true;
			this->Cameroon_USA->BackColor = System::Drawing::Color::White;
			this->Cameroon_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cameroon_USA->ForeColor = System::Drawing::Color::Blue;
			this->Cameroon_USA->Location = System::Drawing::Point(4, 1);
			this->Cameroon_USA->Name = L"Cameroon_USA";
			this->Cameroon_USA->Size = System::Drawing::Size(26, 17);
			this->Cameroon_USA->TabIndex = 0;
			this->Cameroon_USA->Text = L"10";
			this->Cameroon_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Cameroon_USSR
			// 
			this->Cameroon_USSR->AutoSize = true;
			this->Cameroon_USSR->BackColor = System::Drawing::Color::White;
			this->Cameroon_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cameroon_USSR->ForeColor = System::Drawing::Color::Red;
			this->Cameroon_USSR->Location = System::Drawing::Point(37, 1);
			this->Cameroon_USSR->Name = L"Cameroon_USSR";
			this->Cameroon_USSR->Size = System::Drawing::Size(26, 17);
			this->Cameroon_USSR->TabIndex = 5;
			this->Cameroon_USSR->Text = L"10";
			this->Cameroon_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(102, 110);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(58, 17);
			this->label40->TabIndex = 27;
			this->label40->Text = L"Somalia";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(17, 109);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(69, 17);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Botswana";
			// 
			// tableLayoutPanel14
			// 
			this->tableLayoutPanel14->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel14->ColumnCount = 2;
			this->tableLayoutPanel14->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel14->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel14->Controls->Add(this->Somalia_USA, 0, 0);
			this->tableLayoutPanel14->Controls->Add(this->Somalia_USSR, 1, 0);
			this->tableLayoutPanel14->Location = System::Drawing::Point(105, 130);
			this->tableLayoutPanel14->Name = L"tableLayoutPanel14";
			this->tableLayoutPanel14->RowCount = 1;
			this->tableLayoutPanel14->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel14->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel14->TabIndex = 26;
			// 
			// Somalia_USA
			// 
			this->Somalia_USA->AutoSize = true;
			this->Somalia_USA->BackColor = System::Drawing::Color::White;
			this->Somalia_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Somalia_USA->ForeColor = System::Drawing::Color::Blue;
			this->Somalia_USA->Location = System::Drawing::Point(4, 1);
			this->Somalia_USA->Name = L"Somalia_USA";
			this->Somalia_USA->Size = System::Drawing::Size(26, 17);
			this->Somalia_USA->TabIndex = 0;
			this->Somalia_USA->Text = L"10";
			this->Somalia_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Somalia_USSR
			// 
			this->Somalia_USSR->AutoSize = true;
			this->Somalia_USSR->BackColor = System::Drawing::Color::White;
			this->Somalia_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Somalia_USSR->ForeColor = System::Drawing::Color::Red;
			this->Somalia_USSR->Location = System::Drawing::Point(37, 1);
			this->Somalia_USSR->Name = L"Somalia_USSR";
			this->Somalia_USSR->Size = System::Drawing::Size(26, 17);
			this->Somalia_USSR->TabIndex = 5;
			this->Somalia_USSR->Text = L"10";
			this->Somalia_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(102, 67);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(118, 17);
			this->label43->TabIndex = 25;
			this->label43->Text = L"SE African States";
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel3->ColumnCount = 2;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel3->Controls->Add(this->Botswana_USA, 0, 0);
			this->tableLayoutPanel3->Controls->Add(this->Botswana_USSR, 1, 0);
			this->tableLayoutPanel3->Location = System::Drawing::Point(20, 129);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel3->TabIndex = 10;
			// 
			// Botswana_USA
			// 
			this->Botswana_USA->AutoSize = true;
			this->Botswana_USA->BackColor = System::Drawing::Color::White;
			this->Botswana_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Botswana_USA->ForeColor = System::Drawing::Color::Blue;
			this->Botswana_USA->Location = System::Drawing::Point(4, 1);
			this->Botswana_USA->Name = L"Botswana_USA";
			this->Botswana_USA->Size = System::Drawing::Size(26, 17);
			this->Botswana_USA->TabIndex = 0;
			this->Botswana_USA->Text = L"10";
			this->Botswana_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Botswana_USSR
			// 
			this->Botswana_USSR->AutoSize = true;
			this->Botswana_USSR->BackColor = System::Drawing::Color::White;
			this->Botswana_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Botswana_USSR->ForeColor = System::Drawing::Color::Red;
			this->Botswana_USSR->Location = System::Drawing::Point(37, 1);
			this->Botswana_USSR->Name = L"Botswana_USSR";
			this->Botswana_USSR->Size = System::Drawing::Size(26, 17);
			this->Botswana_USSR->TabIndex = 5;
			this->Botswana_USSR->Text = L"10";
			this->Botswana_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(102, 24);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(106, 17);
			this->label44->TabIndex = 21;
			this->label44->Text = L"Saharan States";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(17, 66);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 17);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Angola";
			// 
			// tableLayoutPanel15
			// 
			this->tableLayoutPanel15->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel15->ColumnCount = 2;
			this->tableLayoutPanel15->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel15->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel15->Controls->Add(this->SEAfricanStates_USA, 0, 0);
			this->tableLayoutPanel15->Controls->Add(this->SEAfricanStates_USSR, 1, 0);
			this->tableLayoutPanel15->Location = System::Drawing::Point(105, 87);
			this->tableLayoutPanel15->Name = L"tableLayoutPanel15";
			this->tableLayoutPanel15->RowCount = 1;
			this->tableLayoutPanel15->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel15->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel15->TabIndex = 23;
			// 
			// SEAfricanStates_USA
			// 
			this->SEAfricanStates_USA->AutoSize = true;
			this->SEAfricanStates_USA->BackColor = System::Drawing::Color::White;
			this->SEAfricanStates_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SEAfricanStates_USA->ForeColor = System::Drawing::Color::Blue;
			this->SEAfricanStates_USA->Location = System::Drawing::Point(4, 1);
			this->SEAfricanStates_USA->Name = L"SEAfricanStates_USA";
			this->SEAfricanStates_USA->Size = System::Drawing::Size(26, 17);
			this->SEAfricanStates_USA->TabIndex = 0;
			this->SEAfricanStates_USA->Text = L"10";
			this->SEAfricanStates_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// SEAfricanStates_USSR
			// 
			this->SEAfricanStates_USSR->AutoSize = true;
			this->SEAfricanStates_USSR->BackColor = System::Drawing::Color::White;
			this->SEAfricanStates_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->SEAfricanStates_USSR->ForeColor = System::Drawing::Color::Red;
			this->SEAfricanStates_USSR->Location = System::Drawing::Point(37, 1);
			this->SEAfricanStates_USSR->Name = L"SEAfricanStates_USSR";
			this->SEAfricanStates_USSR->Size = System::Drawing::Size(26, 17);
			this->SEAfricanStates_USSR->TabIndex = 5;
			this->SEAfricanStates_USSR->Text = L"10";
			this->SEAfricanStates_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(17, 23);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 17);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Algeria";
			// 
			// tableLayoutPanel16
			// 
			this->tableLayoutPanel16->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel16->ColumnCount = 2;
			this->tableLayoutPanel16->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel16->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel16->Controls->Add(this->SaharanStates_USA, 0, 0);
			this->tableLayoutPanel16->Controls->Add(this->SaharanStates_USSR, 1, 0);
			this->tableLayoutPanel16->Location = System::Drawing::Point(105, 44);
			this->tableLayoutPanel16->Name = L"tableLayoutPanel16";
			this->tableLayoutPanel16->RowCount = 1;
			this->tableLayoutPanel16->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel16->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel16->TabIndex = 20;
			// 
			// SaharanStates_USA
			// 
			this->SaharanStates_USA->AutoSize = true;
			this->SaharanStates_USA->BackColor = System::Drawing::Color::White;
			this->SaharanStates_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SaharanStates_USA->ForeColor = System::Drawing::Color::Blue;
			this->SaharanStates_USA->Location = System::Drawing::Point(4, 1);
			this->SaharanStates_USA->Name = L"SaharanStates_USA";
			this->SaharanStates_USA->Size = System::Drawing::Size(26, 17);
			this->SaharanStates_USA->TabIndex = 0;
			this->SaharanStates_USA->Text = L"10";
			this->SaharanStates_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// SaharanStates_USSR
			// 
			this->SaharanStates_USSR->AutoSize = true;
			this->SaharanStates_USSR->BackColor = System::Drawing::Color::White;
			this->SaharanStates_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SaharanStates_USSR->ForeColor = System::Drawing::Color::Red;
			this->SaharanStates_USSR->Location = System::Drawing::Point(37, 1);
			this->SaharanStates_USSR->Name = L"SaharanStates_USSR";
			this->SaharanStates_USSR->Size = System::Drawing::Size(26, 17);
			this->SaharanStates_USSR->TabIndex = 5;
			this->SaharanStates_USSR->Text = L"10";
			this->SaharanStates_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->Controls->Add(this->Angola_USA, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->Angola_USSR, 1, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(20, 86);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel2->TabIndex = 8;
			// 
			// Angola_USA
			// 
			this->Angola_USA->AutoSize = true;
			this->Angola_USA->BackColor = System::Drawing::Color::White;
			this->Angola_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Angola_USA->ForeColor = System::Drawing::Color::Blue;
			this->Angola_USA->Location = System::Drawing::Point(4, 1);
			this->Angola_USA->Name = L"Angola_USA";
			this->Angola_USA->Size = System::Drawing::Size(26, 17);
			this->Angola_USA->TabIndex = 0;
			this->Angola_USA->Text = L"10";
			this->Angola_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Angola_USSR
			// 
			this->Angola_USSR->AutoSize = true;
			this->Angola_USSR->BackColor = System::Drawing::Color::White;
			this->Angola_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Angola_USSR->ForeColor = System::Drawing::Color::Red;
			this->Angola_USSR->Location = System::Drawing::Point(37, 1);
			this->Angola_USSR->Name = L"Angola_USSR";
			this->Angola_USSR->Size = System::Drawing::Size(26, 17);
			this->Angola_USSR->TabIndex = 5;
			this->Angola_USSR->Text = L"10";
			this->Angola_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->Algeria_USA, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->Algeria_USSR, 1, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(20, 43);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel1->TabIndex = 6;
			// 
			// Algeria_USSR
			// 
			this->Algeria_USSR->AutoSize = true;
			this->Algeria_USSR->BackColor = System::Drawing::Color::White;
			this->Algeria_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Algeria_USSR->ForeColor = System::Drawing::Color::Red;
			this->Algeria_USSR->Location = System::Drawing::Point(37, 1);
			this->Algeria_USSR->Name = L"Algeria_USSR";
			this->Algeria_USSR->Size = System::Drawing::Size(26, 17);
			this->Algeria_USSR->TabIndex = 5;
			this->Algeria_USSR->Text = L"10";
			this->Algeria_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label62);
			this->groupBox2->Controls->Add(this->tableLayoutPanel22);
			this->groupBox2->Controls->Add(this->label67);
			this->groupBox2->Controls->Add(this->label68);
			this->groupBox2->Controls->Add(this->tableLayoutPanel23);
			this->groupBox2->Controls->Add(this->tableLayoutPanel24);
			this->groupBox2->Controls->Add(this->label73);
			this->groupBox2->Controls->Add(this->label74);
			this->groupBox2->Controls->Add(this->tableLayoutPanel25);
			this->groupBox2->Controls->Add(this->tableLayoutPanel26);
			this->groupBox2->Controls->Add(this->label79);
			this->groupBox2->Controls->Add(this->label80);
			this->groupBox2->Controls->Add(this->tableLayoutPanel27);
			this->groupBox2->Controls->Add(this->tableLayoutPanel28);
			this->groupBox2->Controls->Add(this->label85);
			this->groupBox2->Controls->Add(this->label86);
			this->groupBox2->Controls->Add(this->tableLayoutPanel29);
			this->groupBox2->Controls->Add(this->tableLayoutPanel30);
			this->groupBox2->Controls->Add(this->label91);
			this->groupBox2->Controls->Add(this->label92);
			this->groupBox2->Controls->Add(this->Philippeans_USA);
			this->groupBox2->Controls->Add(this->label95);
			this->groupBox2->Controls->Add(this->tableLayoutPanel32);
			this->groupBox2->Controls->Add(this->label98);
			this->groupBox2->Controls->Add(this->label99);
			this->groupBox2->Controls->Add(this->tableLayoutPanel33);
			this->groupBox2->Controls->Add(this->label102);
			this->groupBox2->Controls->Add(this->tableLayoutPanel34);
			this->groupBox2->Controls->Add(this->tableLayoutPanel35);
			this->groupBox2->Controls->Add(this->tableLayoutPanel36);
			this->groupBox2->Location = System::Drawing::Point(254, 31);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(208, 388);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Asia";
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->Location = System::Drawing::Point(17, 328);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(63, 17);
			this->label62->TabIndex = 19;
			this->label62->Text = L"Malaysia";
			// 
			// tableLayoutPanel22
			// 
			this->tableLayoutPanel22->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel22->ColumnCount = 2;
			this->tableLayoutPanel22->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel22->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel22->Controls->Add(this->Malaysia_USA, 0, 0);
			this->tableLayoutPanel22->Controls->Add(this->Malaysia_USSR, 1, 0);
			this->tableLayoutPanel22->Location = System::Drawing::Point(20, 348);
			this->tableLayoutPanel22->Name = L"tableLayoutPanel22";
			this->tableLayoutPanel22->RowCount = 1;
			this->tableLayoutPanel22->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel22->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel22->TabIndex = 18;
			// 
			// Malaysia_USA
			// 
			this->Malaysia_USA->AutoSize = true;
			this->Malaysia_USA->BackColor = System::Drawing::Color::White;
			this->Malaysia_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Malaysia_USA->ForeColor = System::Drawing::Color::Blue;
			this->Malaysia_USA->Location = System::Drawing::Point(4, 1);
			this->Malaysia_USA->Name = L"Malaysia_USA";
			this->Malaysia_USA->Size = System::Drawing::Size(26, 17);
			this->Malaysia_USA->TabIndex = 0;
			this->Malaysia_USA->Text = L"10";
			this->Malaysia_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Malaysia_USSR
			// 
			this->Malaysia_USSR->AutoSize = true;
			this->Malaysia_USSR->BackColor = System::Drawing::Color::White;
			this->Malaysia_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Malaysia_USSR->ForeColor = System::Drawing::Color::Red;
			this->Malaysia_USSR->Location = System::Drawing::Point(37, 1);
			this->Malaysia_USSR->Name = L"Malaysia_USSR";
			this->Malaysia_USSR->Size = System::Drawing::Size(26, 17);
			this->Malaysia_USSR->TabIndex = 5;
			this->Malaysia_USSR->Text = L"10";
			this->Malaysia_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->Location = System::Drawing::Point(122, 284);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(59, 17);
			this->label67->TabIndex = 33;
			this->label67->Text = L"Vietnam";
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->Location = System::Drawing::Point(17, 283);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(106, 17);
			this->label68->TabIndex = 17;
			this->label68->Text = L"Laos/Cambodia";
			// 
			// tableLayoutPanel23
			// 
			this->tableLayoutPanel23->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel23->ColumnCount = 2;
			this->tableLayoutPanel23->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel23->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel23->Controls->Add(this->Vietnam_USA, 0, 0);
			this->tableLayoutPanel23->Controls->Add(this->Vietnam_USSR, 1, 0);
			this->tableLayoutPanel23->Location = System::Drawing::Point(125, 304);
			this->tableLayoutPanel23->Name = L"tableLayoutPanel23";
			this->tableLayoutPanel23->RowCount = 1;
			this->tableLayoutPanel23->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel23->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel23->TabIndex = 32;
			// 
			// Vietnam_USA
			// 
			this->Vietnam_USA->AutoSize = true;
			this->Vietnam_USA->BackColor = System::Drawing::Color::White;
			this->Vietnam_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Vietnam_USA->ForeColor = System::Drawing::Color::Blue;
			this->Vietnam_USA->Location = System::Drawing::Point(4, 1);
			this->Vietnam_USA->Name = L"Vietnam_USA";
			this->Vietnam_USA->Size = System::Drawing::Size(26, 17);
			this->Vietnam_USA->TabIndex = 0;
			this->Vietnam_USA->Text = L"10";
			this->Vietnam_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Vietnam_USSR
			// 
			this->Vietnam_USSR->AutoSize = true;
			this->Vietnam_USSR->BackColor = System::Drawing::Color::White;
			this->Vietnam_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Vietnam_USSR->ForeColor = System::Drawing::Color::Red;
			this->Vietnam_USSR->Location = System::Drawing::Point(37, 1);
			this->Vietnam_USSR->Name = L"Vietnam_USSR";
			this->Vietnam_USSR->Size = System::Drawing::Size(26, 17);
			this->Vietnam_USSR->TabIndex = 5;
			this->Vietnam_USSR->Text = L"10";
			this->Vietnam_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel24
			// 
			this->tableLayoutPanel24->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel24->ColumnCount = 2;
			this->tableLayoutPanel24->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel24->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel24->Controls->Add(this->LaosCambodia_USA, 0, 0);
			this->tableLayoutPanel24->Controls->Add(this->LaosCambodia_USSR, 1, 0);
			this->tableLayoutPanel24->Location = System::Drawing::Point(20, 303);
			this->tableLayoutPanel24->Name = L"tableLayoutPanel24";
			this->tableLayoutPanel24->RowCount = 1;
			this->tableLayoutPanel24->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel24->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel24->TabIndex = 16;
			// 
			// LaosCambodia_USA
			// 
			this->LaosCambodia_USA->AutoSize = true;
			this->LaosCambodia_USA->BackColor = System::Drawing::Color::White;
			this->LaosCambodia_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LaosCambodia_USA->ForeColor = System::Drawing::Color::Blue;
			this->LaosCambodia_USA->Location = System::Drawing::Point(4, 1);
			this->LaosCambodia_USA->Name = L"LaosCambodia_USA";
			this->LaosCambodia_USA->Size = System::Drawing::Size(26, 17);
			this->LaosCambodia_USA->TabIndex = 0;
			this->LaosCambodia_USA->Text = L"10";
			this->LaosCambodia_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LaosCambodia_USSR
			// 
			this->LaosCambodia_USSR->AutoSize = true;
			this->LaosCambodia_USSR->BackColor = System::Drawing::Color::White;
			this->LaosCambodia_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LaosCambodia_USSR->ForeColor = System::Drawing::Color::Red;
			this->LaosCambodia_USSR->Location = System::Drawing::Point(37, 1);
			this->LaosCambodia_USSR->Name = L"LaosCambodia_USSR";
			this->LaosCambodia_USSR->Size = System::Drawing::Size(26, 17);
			this->LaosCambodia_USSR->TabIndex = 5;
			this->LaosCambodia_USSR->Text = L"10";
			this->LaosCambodia_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label73
			// 
			this->label73->AutoSize = true;
			this->label73->Location = System::Drawing::Point(122, 241);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(63, 17);
			this->label73->TabIndex = 31;
			this->label73->Text = L"Thailand";
			// 
			// label74
			// 
			this->label74->AutoSize = true;
			this->label74->Location = System::Drawing::Point(17, 240);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(47, 17);
			this->label74->TabIndex = 15;
			this->label74->Text = L"Japan";
			// 
			// tableLayoutPanel25
			// 
			this->tableLayoutPanel25->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel25->ColumnCount = 2;
			this->tableLayoutPanel25->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel25->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel25->Controls->Add(this->Thailand_USA, 0, 0);
			this->tableLayoutPanel25->Controls->Add(this->Thailand_USSR, 1, 0);
			this->tableLayoutPanel25->Location = System::Drawing::Point(125, 261);
			this->tableLayoutPanel25->Name = L"tableLayoutPanel25";
			this->tableLayoutPanel25->RowCount = 1;
			this->tableLayoutPanel25->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel25->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel25->TabIndex = 30;
			// 
			// Thailand_USA
			// 
			this->Thailand_USA->AutoSize = true;
			this->Thailand_USA->BackColor = System::Drawing::Color::White;
			this->Thailand_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Thailand_USA->ForeColor = System::Drawing::Color::Blue;
			this->Thailand_USA->Location = System::Drawing::Point(4, 1);
			this->Thailand_USA->Name = L"Thailand_USA";
			this->Thailand_USA->Size = System::Drawing::Size(26, 17);
			this->Thailand_USA->TabIndex = 0;
			this->Thailand_USA->Text = L"10";
			this->Thailand_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Thailand_USSR
			// 
			this->Thailand_USSR->AutoSize = true;
			this->Thailand_USSR->BackColor = System::Drawing::Color::White;
			this->Thailand_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Thailand_USSR->ForeColor = System::Drawing::Color::Red;
			this->Thailand_USSR->Location = System::Drawing::Point(37, 1);
			this->Thailand_USSR->Name = L"Thailand_USSR";
			this->Thailand_USSR->Size = System::Drawing::Size(26, 17);
			this->Thailand_USSR->TabIndex = 5;
			this->Thailand_USSR->Text = L"10";
			this->Thailand_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel26
			// 
			this->tableLayoutPanel26->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel26->ColumnCount = 2;
			this->tableLayoutPanel26->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel26->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel26->Controls->Add(this->Japan_USA, 0, 0);
			this->tableLayoutPanel26->Controls->Add(this->Japan_USSR, 1, 0);
			this->tableLayoutPanel26->Location = System::Drawing::Point(20, 260);
			this->tableLayoutPanel26->Name = L"tableLayoutPanel26";
			this->tableLayoutPanel26->RowCount = 1;
			this->tableLayoutPanel26->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel26->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel26->TabIndex = 14;
			// 
			// Japan_USA
			// 
			this->Japan_USA->AutoSize = true;
			this->Japan_USA->BackColor = System::Drawing::Color::White;
			this->Japan_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Japan_USA->ForeColor = System::Drawing::Color::Blue;
			this->Japan_USA->Location = System::Drawing::Point(4, 1);
			this->Japan_USA->Name = L"Japan_USA";
			this->Japan_USA->Size = System::Drawing::Size(26, 17);
			this->Japan_USA->TabIndex = 0;
			this->Japan_USA->Text = L"10";
			this->Japan_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Japan_USSR
			// 
			this->Japan_USSR->AutoSize = true;
			this->Japan_USSR->BackColor = System::Drawing::Color::White;
			this->Japan_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Japan_USSR->ForeColor = System::Drawing::Color::Red;
			this->Japan_USSR->Location = System::Drawing::Point(37, 1);
			this->Japan_USSR->Name = L"Japan_USSR";
			this->Japan_USSR->Size = System::Drawing::Size(26, 17);
			this->Japan_USSR->TabIndex = 5;
			this->Japan_USSR->Text = L"10";
			this->Japan_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label79
			// 
			this->label79->AutoSize = true;
			this->label79->Location = System::Drawing::Point(122, 197);
			this->label79->Name = L"label79";
			this->label79->Size = System::Drawing::Size(53, 17);
			this->label79->TabIndex = 29;
			this->label79->Text = L"Taiwan";
			// 
			// label80
			// 
			this->label80->AutoSize = true;
			this->label80->Location = System::Drawing::Point(17, 196);
			this->label80->Name = L"label80";
			this->label80->Size = System::Drawing::Size(69, 17);
			this->label80->TabIndex = 13;
			this->label80->Text = L"Indonesia";
			// 
			// tableLayoutPanel27
			// 
			this->tableLayoutPanel27->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel27->ColumnCount = 2;
			this->tableLayoutPanel27->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel27->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel27->Controls->Add(this->Taiwan_USA, 0, 0);
			this->tableLayoutPanel27->Controls->Add(this->Taiwan_USSR, 1, 0);
			this->tableLayoutPanel27->Location = System::Drawing::Point(125, 217);
			this->tableLayoutPanel27->Name = L"tableLayoutPanel27";
			this->tableLayoutPanel27->RowCount = 1;
			this->tableLayoutPanel27->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel27->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel27->TabIndex = 28;
			// 
			// Taiwan_USA
			// 
			this->Taiwan_USA->AutoSize = true;
			this->Taiwan_USA->BackColor = System::Drawing::Color::White;
			this->Taiwan_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Taiwan_USA->ForeColor = System::Drawing::Color::Blue;
			this->Taiwan_USA->Location = System::Drawing::Point(4, 1);
			this->Taiwan_USA->Name = L"Taiwan_USA";
			this->Taiwan_USA->Size = System::Drawing::Size(26, 17);
			this->Taiwan_USA->TabIndex = 0;
			this->Taiwan_USA->Text = L"10";
			this->Taiwan_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Taiwan_USSR
			// 
			this->Taiwan_USSR->AutoSize = true;
			this->Taiwan_USSR->BackColor = System::Drawing::Color::White;
			this->Taiwan_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Taiwan_USSR->ForeColor = System::Drawing::Color::Red;
			this->Taiwan_USSR->Location = System::Drawing::Point(37, 1);
			this->Taiwan_USSR->Name = L"Taiwan_USSR";
			this->Taiwan_USSR->Size = System::Drawing::Size(26, 17);
			this->Taiwan_USSR->TabIndex = 5;
			this->Taiwan_USSR->Text = L"10";
			this->Taiwan_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel28
			// 
			this->tableLayoutPanel28->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel28->ColumnCount = 2;
			this->tableLayoutPanel28->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel28->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel28->Controls->Add(this->Indonesia_USA, 0, 0);
			this->tableLayoutPanel28->Controls->Add(this->Indonesia_USSR, 1, 0);
			this->tableLayoutPanel28->Location = System::Drawing::Point(20, 216);
			this->tableLayoutPanel28->Name = L"tableLayoutPanel28";
			this->tableLayoutPanel28->RowCount = 1;
			this->tableLayoutPanel28->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel28->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel28->TabIndex = 12;
			// 
			// Indonesia_USA
			// 
			this->Indonesia_USA->AutoSize = true;
			this->Indonesia_USA->BackColor = System::Drawing::Color::White;
			this->Indonesia_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Indonesia_USA->ForeColor = System::Drawing::Color::Blue;
			this->Indonesia_USA->Location = System::Drawing::Point(4, 1);
			this->Indonesia_USA->Name = L"Indonesia_USA";
			this->Indonesia_USA->Size = System::Drawing::Size(26, 17);
			this->Indonesia_USA->TabIndex = 0;
			this->Indonesia_USA->Text = L"10";
			this->Indonesia_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Indonesia_USSR
			// 
			this->Indonesia_USSR->AutoSize = true;
			this->Indonesia_USSR->BackColor = System::Drawing::Color::White;
			this->Indonesia_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Indonesia_USSR->ForeColor = System::Drawing::Color::Red;
			this->Indonesia_USSR->Location = System::Drawing::Point(37, 1);
			this->Indonesia_USSR->Name = L"Indonesia_USSR";
			this->Indonesia_USSR->Size = System::Drawing::Size(26, 17);
			this->Indonesia_USSR->TabIndex = 5;
			this->Indonesia_USSR->Text = L"10";
			this->Indonesia_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label85
			// 
			this->label85->AutoSize = true;
			this->label85->Location = System::Drawing::Point(122, 153);
			this->label85->Name = L"label85";
			this->label85->Size = System::Drawing::Size(87, 17);
			this->label85->TabIndex = 24;
			this->label85->Text = L"South Korea";
			// 
			// label86
			// 
			this->label86->AutoSize = true;
			this->label86->Location = System::Drawing::Point(17, 152);
			this->label86->Name = L"label86";
			this->label86->Size = System::Drawing::Size(38, 17);
			this->label86->TabIndex = 9;
			this->label86->Text = L"India";
			// 
			// tableLayoutPanel29
			// 
			this->tableLayoutPanel29->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel29->ColumnCount = 2;
			this->tableLayoutPanel29->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel29->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel29->Controls->Add(this->SouthKorea_USA, 0, 0);
			this->tableLayoutPanel29->Controls->Add(this->SouthKorea_USSR, 1, 0);
			this->tableLayoutPanel29->Location = System::Drawing::Point(125, 173);
			this->tableLayoutPanel29->Name = L"tableLayoutPanel29";
			this->tableLayoutPanel29->RowCount = 1;
			this->tableLayoutPanel29->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel29->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel29->TabIndex = 22;
			// 
			// SouthKorea_USA
			// 
			this->SouthKorea_USA->AutoSize = true;
			this->SouthKorea_USA->BackColor = System::Drawing::Color::White;
			this->SouthKorea_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SouthKorea_USA->ForeColor = System::Drawing::Color::Blue;
			this->SouthKorea_USA->Location = System::Drawing::Point(4, 1);
			this->SouthKorea_USA->Name = L"SouthKorea_USA";
			this->SouthKorea_USA->Size = System::Drawing::Size(26, 17);
			this->SouthKorea_USA->TabIndex = 0;
			this->SouthKorea_USA->Text = L"10";
			this->SouthKorea_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// SouthKorea_USSR
			// 
			this->SouthKorea_USSR->AutoSize = true;
			this->SouthKorea_USSR->BackColor = System::Drawing::Color::White;
			this->SouthKorea_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SouthKorea_USSR->ForeColor = System::Drawing::Color::Red;
			this->SouthKorea_USSR->Location = System::Drawing::Point(37, 1);
			this->SouthKorea_USSR->Name = L"SouthKorea_USSR";
			this->SouthKorea_USSR->Size = System::Drawing::Size(26, 17);
			this->SouthKorea_USSR->TabIndex = 5;
			this->SouthKorea_USSR->Text = L"10";
			this->SouthKorea_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel30
			// 
			this->tableLayoutPanel30->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel30->ColumnCount = 2;
			this->tableLayoutPanel30->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel30->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel30->Controls->Add(this->India_USA, 0, 0);
			this->tableLayoutPanel30->Controls->Add(this->India_USSR, 1, 0);
			this->tableLayoutPanel30->Location = System::Drawing::Point(20, 172);
			this->tableLayoutPanel30->Name = L"tableLayoutPanel30";
			this->tableLayoutPanel30->RowCount = 1;
			this->tableLayoutPanel30->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel30->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel30->TabIndex = 8;
			// 
			// India_USA
			// 
			this->India_USA->AutoSize = true;
			this->India_USA->BackColor = System::Drawing::Color::White;
			this->India_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->India_USA->ForeColor = System::Drawing::Color::Blue;
			this->India_USA->Location = System::Drawing::Point(4, 1);
			this->India_USA->Name = L"India_USA";
			this->India_USA->Size = System::Drawing::Size(26, 17);
			this->India_USA->TabIndex = 0;
			this->India_USA->Text = L"10";
			this->India_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// India_USSR
			// 
			this->India_USSR->AutoSize = true;
			this->India_USSR->BackColor = System::Drawing::Color::White;
			this->India_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->India_USSR->ForeColor = System::Drawing::Color::Red;
			this->India_USSR->Location = System::Drawing::Point(37, 1);
			this->India_USSR->Name = L"India_USSR";
			this->India_USSR->Size = System::Drawing::Size(26, 17);
			this->India_USSR->TabIndex = 5;
			this->India_USSR->Text = L"10";
			this->India_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label91
			// 
			this->label91->AutoSize = true;
			this->label91->Location = System::Drawing::Point(122, 110);
			this->label91->Name = L"label91";
			this->label91->Size = System::Drawing::Size(76, 17);
			this->label91->TabIndex = 27;
			this->label91->Text = L"Philippians";
			// 
			// label92
			// 
			this->label92->AutoSize = true;
			this->label92->Location = System::Drawing::Point(17, 109);
			this->label92->Name = L"label92";
			this->label92->Size = System::Drawing::Size(49, 17);
			this->label92->TabIndex = 11;
			this->label92->Text = L"Burma";
			// 
			// Philippeans_USA
			// 
			this->Philippeans_USA->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->Philippeans_USA->ColumnCount = 2;
			this->Philippeans_USA->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->Philippeans_USA->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->Philippeans_USA->Controls->Add(this->Philippians_USA, 0, 0);
			this->Philippeans_USA->Controls->Add(this->Philippians_USSR, 1, 0);
			this->Philippeans_USA->Location = System::Drawing::Point(125, 130);
			this->Philippeans_USA->Name = L"Philippeans_USA";
			this->Philippeans_USA->RowCount = 1;
			this->Philippeans_USA->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->Philippeans_USA->Size = System::Drawing::Size(68, 20);
			this->Philippeans_USA->TabIndex = 26;
			// 
			// Philippians_USA
			// 
			this->Philippians_USA->AutoSize = true;
			this->Philippians_USA->BackColor = System::Drawing::Color::White;
			this->Philippians_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Philippians_USA->ForeColor = System::Drawing::Color::Blue;
			this->Philippians_USA->Location = System::Drawing::Point(4, 1);
			this->Philippians_USA->Name = L"Philippians_USA";
			this->Philippians_USA->Size = System::Drawing::Size(26, 17);
			this->Philippians_USA->TabIndex = 0;
			this->Philippians_USA->Text = L"10";
			this->Philippians_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Philippians_USSR
			// 
			this->Philippians_USSR->AutoSize = true;
			this->Philippians_USSR->BackColor = System::Drawing::Color::White;
			this->Philippians_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Philippians_USSR->ForeColor = System::Drawing::Color::Red;
			this->Philippians_USSR->Location = System::Drawing::Point(37, 1);
			this->Philippians_USSR->Name = L"Philippians_USSR";
			this->Philippians_USSR->Size = System::Drawing::Size(26, 17);
			this->Philippians_USSR->TabIndex = 5;
			this->Philippians_USSR->Text = L"10";
			this->Philippians_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label95
			// 
			this->label95->AutoSize = true;
			this->label95->Location = System::Drawing::Point(122, 67);
			this->label95->Name = L"label95";
			this->label95->Size = System::Drawing::Size(62, 17);
			this->label95->TabIndex = 25;
			this->label95->Text = L"Pakistan";
			// 
			// tableLayoutPanel32
			// 
			this->tableLayoutPanel32->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel32->ColumnCount = 2;
			this->tableLayoutPanel32->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel32->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel32->Controls->Add(this->Burma_USA, 0, 0);
			this->tableLayoutPanel32->Controls->Add(this->Burma_USSR, 1, 0);
			this->tableLayoutPanel32->Location = System::Drawing::Point(20, 129);
			this->tableLayoutPanel32->Name = L"tableLayoutPanel32";
			this->tableLayoutPanel32->RowCount = 1;
			this->tableLayoutPanel32->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel32->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel32->TabIndex = 10;
			// 
			// Burma_USA
			// 
			this->Burma_USA->AutoSize = true;
			this->Burma_USA->BackColor = System::Drawing::Color::White;
			this->Burma_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Burma_USA->ForeColor = System::Drawing::Color::Blue;
			this->Burma_USA->Location = System::Drawing::Point(4, 1);
			this->Burma_USA->Name = L"Burma_USA";
			this->Burma_USA->Size = System::Drawing::Size(26, 17);
			this->Burma_USA->TabIndex = 0;
			this->Burma_USA->Text = L"10";
			this->Burma_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Burma_USSR
			// 
			this->Burma_USSR->AutoSize = true;
			this->Burma_USSR->BackColor = System::Drawing::Color::White;
			this->Burma_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Burma_USSR->ForeColor = System::Drawing::Color::Red;
			this->Burma_USSR->Location = System::Drawing::Point(37, 1);
			this->Burma_USSR->Name = L"Burma_USSR";
			this->Burma_USSR->Size = System::Drawing::Size(26, 17);
			this->Burma_USSR->TabIndex = 5;
			this->Burma_USSR->Text = L"10";
			this->Burma_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label98
			// 
			this->label98->AutoSize = true;
			this->label98->Location = System::Drawing::Point(122, 24);
			this->label98->Name = L"label98";
			this->label98->Size = System::Drawing::Size(85, 17);
			this->label98->TabIndex = 21;
			this->label98->Text = L"North Korea";
			// 
			// label99
			// 
			this->label99->AutoSize = true;
			this->label99->Location = System::Drawing::Point(17, 66);
			this->label99->Name = L"label99";
			this->label99->Size = System::Drawing::Size(63, 17);
			this->label99->TabIndex = 9;
			this->label99->Text = L"Australia";
			// 
			// tableLayoutPanel33
			// 
			this->tableLayoutPanel33->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel33->ColumnCount = 2;
			this->tableLayoutPanel33->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel33->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel33->Controls->Add(this->Pakistan_USA, 0, 0);
			this->tableLayoutPanel33->Controls->Add(this->Pakistan_USSR, 1, 0);
			this->tableLayoutPanel33->Location = System::Drawing::Point(125, 87);
			this->tableLayoutPanel33->Name = L"tableLayoutPanel33";
			this->tableLayoutPanel33->RowCount = 1;
			this->tableLayoutPanel33->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel33->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel33->TabIndex = 23;
			// 
			// Pakistan_USA
			// 
			this->Pakistan_USA->AutoSize = true;
			this->Pakistan_USA->BackColor = System::Drawing::Color::White;
			this->Pakistan_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Pakistan_USA->ForeColor = System::Drawing::Color::Blue;
			this->Pakistan_USA->Location = System::Drawing::Point(4, 1);
			this->Pakistan_USA->Name = L"Pakistan_USA";
			this->Pakistan_USA->Size = System::Drawing::Size(26, 17);
			this->Pakistan_USA->TabIndex = 0;
			this->Pakistan_USA->Text = L"10";
			this->Pakistan_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Pakistan_USSR
			// 
			this->Pakistan_USSR->AutoSize = true;
			this->Pakistan_USSR->BackColor = System::Drawing::Color::White;
			this->Pakistan_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Pakistan_USSR->ForeColor = System::Drawing::Color::Red;
			this->Pakistan_USSR->Location = System::Drawing::Point(37, 1);
			this->Pakistan_USSR->Name = L"Pakistan_USSR";
			this->Pakistan_USSR->Size = System::Drawing::Size(26, 17);
			this->Pakistan_USSR->TabIndex = 5;
			this->Pakistan_USSR->Text = L"10";
			this->Pakistan_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label102
			// 
			this->label102->AutoSize = true;
			this->label102->Location = System::Drawing::Point(17, 23);
			this->label102->Name = L"label102";
			this->label102->Size = System::Drawing::Size(83, 17);
			this->label102->TabIndex = 7;
			this->label102->Text = L"Afghanistan";
			// 
			// tableLayoutPanel34
			// 
			this->tableLayoutPanel34->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel34->ColumnCount = 2;
			this->tableLayoutPanel34->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel34->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel34->Controls->Add(this->NorthKorea_USA, 0, 0);
			this->tableLayoutPanel34->Controls->Add(this->NorthKorea_USSR, 1, 0);
			this->tableLayoutPanel34->Location = System::Drawing::Point(125, 44);
			this->tableLayoutPanel34->Name = L"tableLayoutPanel34";
			this->tableLayoutPanel34->RowCount = 1;
			this->tableLayoutPanel34->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel34->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel34->TabIndex = 20;
			// 
			// NorthKorea_USA
			// 
			this->NorthKorea_USA->AutoSize = true;
			this->NorthKorea_USA->BackColor = System::Drawing::Color::White;
			this->NorthKorea_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NorthKorea_USA->ForeColor = System::Drawing::Color::Blue;
			this->NorthKorea_USA->Location = System::Drawing::Point(4, 1);
			this->NorthKorea_USA->Name = L"NorthKorea_USA";
			this->NorthKorea_USA->Size = System::Drawing::Size(26, 17);
			this->NorthKorea_USA->TabIndex = 0;
			this->NorthKorea_USA->Text = L"10";
			this->NorthKorea_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// NorthKorea_USSR
			// 
			this->NorthKorea_USSR->AutoSize = true;
			this->NorthKorea_USSR->BackColor = System::Drawing::Color::White;
			this->NorthKorea_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NorthKorea_USSR->ForeColor = System::Drawing::Color::Red;
			this->NorthKorea_USSR->Location = System::Drawing::Point(37, 1);
			this->NorthKorea_USSR->Name = L"NorthKorea_USSR";
			this->NorthKorea_USSR->Size = System::Drawing::Size(26, 17);
			this->NorthKorea_USSR->TabIndex = 5;
			this->NorthKorea_USSR->Text = L"10";
			this->NorthKorea_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel35
			// 
			this->tableLayoutPanel35->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel35->ColumnCount = 2;
			this->tableLayoutPanel35->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel35->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel35->Controls->Add(this->Australia_USA, 0, 0);
			this->tableLayoutPanel35->Controls->Add(this->Australia_USSR, 1, 0);
			this->tableLayoutPanel35->Location = System::Drawing::Point(20, 86);
			this->tableLayoutPanel35->Name = L"tableLayoutPanel35";
			this->tableLayoutPanel35->RowCount = 1;
			this->tableLayoutPanel35->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel35->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel35->TabIndex = 8;
			// 
			// Australia_USA
			// 
			this->Australia_USA->AutoSize = true;
			this->Australia_USA->BackColor = System::Drawing::Color::White;
			this->Australia_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Australia_USA->ForeColor = System::Drawing::Color::Blue;
			this->Australia_USA->Location = System::Drawing::Point(4, 1);
			this->Australia_USA->Name = L"Australia_USA";
			this->Australia_USA->Size = System::Drawing::Size(26, 17);
			this->Australia_USA->TabIndex = 0;
			this->Australia_USA->Text = L"10";
			this->Australia_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Australia_USSR
			// 
			this->Australia_USSR->AutoSize = true;
			this->Australia_USSR->BackColor = System::Drawing::Color::White;
			this->Australia_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Australia_USSR->ForeColor = System::Drawing::Color::Red;
			this->Australia_USSR->Location = System::Drawing::Point(37, 1);
			this->Australia_USSR->Name = L"Australia_USSR";
			this->Australia_USSR->Size = System::Drawing::Size(26, 17);
			this->Australia_USSR->TabIndex = 5;
			this->Australia_USSR->Text = L"10";
			this->Australia_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel36
			// 
			this->tableLayoutPanel36->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel36->ColumnCount = 2;
			this->tableLayoutPanel36->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel36->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel36->Controls->Add(this->Afghanistan_USA, 0, 0);
			this->tableLayoutPanel36->Controls->Add(this->Afghanistan_USSR, 1, 0);
			this->tableLayoutPanel36->Location = System::Drawing::Point(20, 43);
			this->tableLayoutPanel36->Name = L"tableLayoutPanel36";
			this->tableLayoutPanel36->RowCount = 1;
			this->tableLayoutPanel36->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel36->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel36->TabIndex = 6;
			// 
			// Afghanistan_USA
			// 
			this->Afghanistan_USA->AutoSize = true;
			this->Afghanistan_USA->BackColor = System::Drawing::Color::White;
			this->Afghanistan_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Afghanistan_USA->ForeColor = System::Drawing::Color::Blue;
			this->Afghanistan_USA->Location = System::Drawing::Point(4, 1);
			this->Afghanistan_USA->Name = L"Afghanistan_USA";
			this->Afghanistan_USA->Size = System::Drawing::Size(26, 17);
			this->Afghanistan_USA->TabIndex = 0;
			this->Afghanistan_USA->Text = L"10";
			this->Afghanistan_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Afghanistan_USSR
			// 
			this->Afghanistan_USSR->AutoSize = true;
			this->Afghanistan_USSR->BackColor = System::Drawing::Color::White;
			this->Afghanistan_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Afghanistan_USSR->ForeColor = System::Drawing::Color::Red;
			this->Afghanistan_USSR->Location = System::Drawing::Point(37, 1);
			this->Afghanistan_USSR->Name = L"Afghanistan_USSR";
			this->Afghanistan_USSR->Size = System::Drawing::Size(26, 17);
			this->Afghanistan_USSR->TabIndex = 5;
			this->Afghanistan_USSR->Text = L"10";
			this->Afghanistan_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label115);
			this->groupBox3->Controls->Add(this->label116);
			this->groupBox3->Controls->Add(this->tableLayoutPanel39);
			this->groupBox3->Controls->Add(this->tableLayoutPanel40);
			this->groupBox3->Controls->Add(this->label121);
			this->groupBox3->Controls->Add(this->label122);
			this->groupBox3->Controls->Add(this->tableLayoutPanel41);
			this->groupBox3->Controls->Add(this->tableLayoutPanel42);
			this->groupBox3->Controls->Add(this->label127);
			this->groupBox3->Controls->Add(this->label128);
			this->groupBox3->Controls->Add(this->tableLayoutPanel43);
			this->groupBox3->Controls->Add(this->label131);
			this->groupBox3->Controls->Add(this->tableLayoutPanel44);
			this->groupBox3->Controls->Add(this->label134);
			this->groupBox3->Controls->Add(this->label135);
			this->groupBox3->Controls->Add(this->tableLayoutPanel45);
			this->groupBox3->Controls->Add(this->label138);
			this->groupBox3->Controls->Add(this->tableLayoutPanel46);
			this->groupBox3->Controls->Add(this->tableLayoutPanel47);
			this->groupBox3->Controls->Add(this->tableLayoutPanel48);
			this->groupBox3->Location = System::Drawing::Point(469, 31);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(205, 258);
			this->groupBox3->TabIndex = 6;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Central America";
			// 
			// label115
			// 
			this->label115->AutoSize = true;
			this->label115->Location = System::Drawing::Point(122, 197);
			this->label115->Name = L"label115";
			this->label115->Size = System::Drawing::Size(60, 17);
			this->label115->TabIndex = 29;
			this->label115->Text = L"Panama";
			// 
			// label116
			// 
			this->label116->AutoSize = true;
			this->label116->Location = System::Drawing::Point(17, 196);
			this->label116->Name = L"label116";
			this->label116->Size = System::Drawing::Size(77, 17);
			this->label116->TabIndex = 13;
			this->label116->Text = L"Guatemala";
			// 
			// tableLayoutPanel39
			// 
			this->tableLayoutPanel39->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel39->ColumnCount = 2;
			this->tableLayoutPanel39->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel39->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel39->Controls->Add(this->Panama_USA, 0, 0);
			this->tableLayoutPanel39->Controls->Add(this->Panama_USSR, 1, 0);
			this->tableLayoutPanel39->Location = System::Drawing::Point(125, 217);
			this->tableLayoutPanel39->Name = L"tableLayoutPanel39";
			this->tableLayoutPanel39->RowCount = 1;
			this->tableLayoutPanel39->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel39->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel39->TabIndex = 28;
			// 
			// Panama_USA
			// 
			this->Panama_USA->AutoSize = true;
			this->Panama_USA->BackColor = System::Drawing::Color::White;
			this->Panama_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Panama_USA->ForeColor = System::Drawing::Color::Blue;
			this->Panama_USA->Location = System::Drawing::Point(4, 1);
			this->Panama_USA->Name = L"Panama_USA";
			this->Panama_USA->Size = System::Drawing::Size(26, 17);
			this->Panama_USA->TabIndex = 0;
			this->Panama_USA->Text = L"10";
			this->Panama_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Panama_USSR
			// 
			this->Panama_USSR->AutoSize = true;
			this->Panama_USSR->BackColor = System::Drawing::Color::White;
			this->Panama_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Panama_USSR->ForeColor = System::Drawing::Color::Red;
			this->Panama_USSR->Location = System::Drawing::Point(37, 1);
			this->Panama_USSR->Name = L"Panama_USSR";
			this->Panama_USSR->Size = System::Drawing::Size(26, 17);
			this->Panama_USSR->TabIndex = 5;
			this->Panama_USSR->Text = L"10";
			this->Panama_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel40
			// 
			this->tableLayoutPanel40->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel40->ColumnCount = 2;
			this->tableLayoutPanel40->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel40->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel40->Controls->Add(this->Guatemala_USA, 0, 0);
			this->tableLayoutPanel40->Controls->Add(this->Guatemala_USSR, 1, 0);
			this->tableLayoutPanel40->Location = System::Drawing::Point(20, 216);
			this->tableLayoutPanel40->Name = L"tableLayoutPanel40";
			this->tableLayoutPanel40->RowCount = 1;
			this->tableLayoutPanel40->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel40->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel40->TabIndex = 12;
			// 
			// Guatemala_USA
			// 
			this->Guatemala_USA->AutoSize = true;
			this->Guatemala_USA->BackColor = System::Drawing::Color::White;
			this->Guatemala_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Guatemala_USA->ForeColor = System::Drawing::Color::Blue;
			this->Guatemala_USA->Location = System::Drawing::Point(4, 1);
			this->Guatemala_USA->Name = L"Guatemala_USA";
			this->Guatemala_USA->Size = System::Drawing::Size(26, 17);
			this->Guatemala_USA->TabIndex = 0;
			this->Guatemala_USA->Text = L"10";
			this->Guatemala_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Guatemala_USSR
			// 
			this->Guatemala_USSR->AutoSize = true;
			this->Guatemala_USSR->BackColor = System::Drawing::Color::White;
			this->Guatemala_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Guatemala_USSR->ForeColor = System::Drawing::Color::Red;
			this->Guatemala_USSR->Location = System::Drawing::Point(37, 1);
			this->Guatemala_USSR->Name = L"Guatemala_USSR";
			this->Guatemala_USSR->Size = System::Drawing::Size(26, 17);
			this->Guatemala_USSR->TabIndex = 5;
			this->Guatemala_USSR->Text = L"10";
			this->Guatemala_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label121
			// 
			this->label121->AutoSize = true;
			this->label121->Location = System::Drawing::Point(122, 153);
			this->label121->Name = L"label121";
			this->label121->Size = System::Drawing::Size(73, 17);
			this->label121->TabIndex = 24;
			this->label121->Text = L"Nicaragua";
			// 
			// label122
			// 
			this->label122->AutoSize = true;
			this->label122->Location = System::Drawing::Point(17, 152);
			this->label122->Name = L"label122";
			this->label122->Size = System::Drawing::Size(80, 17);
			this->label122->TabIndex = 9;
			this->label122->Text = L"El Salvador";
			// 
			// tableLayoutPanel41
			// 
			this->tableLayoutPanel41->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel41->ColumnCount = 2;
			this->tableLayoutPanel41->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel41->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel41->Controls->Add(this->Nicaragua_USA, 0, 0);
			this->tableLayoutPanel41->Controls->Add(this->Nicaragua_USSR, 1, 0);
			this->tableLayoutPanel41->Location = System::Drawing::Point(125, 173);
			this->tableLayoutPanel41->Name = L"tableLayoutPanel41";
			this->tableLayoutPanel41->RowCount = 1;
			this->tableLayoutPanel41->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel41->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel41->TabIndex = 22;
			// 
			// Nicaragua_USA
			// 
			this->Nicaragua_USA->AutoSize = true;
			this->Nicaragua_USA->BackColor = System::Drawing::Color::White;
			this->Nicaragua_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Nicaragua_USA->ForeColor = System::Drawing::Color::Blue;
			this->Nicaragua_USA->Location = System::Drawing::Point(4, 1);
			this->Nicaragua_USA->Name = L"Nicaragua_USA";
			this->Nicaragua_USA->Size = System::Drawing::Size(26, 17);
			this->Nicaragua_USA->TabIndex = 0;
			this->Nicaragua_USA->Text = L"10";
			this->Nicaragua_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Nicaragua_USSR
			// 
			this->Nicaragua_USSR->AutoSize = true;
			this->Nicaragua_USSR->BackColor = System::Drawing::Color::White;
			this->Nicaragua_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Nicaragua_USSR->ForeColor = System::Drawing::Color::Red;
			this->Nicaragua_USSR->Location = System::Drawing::Point(37, 1);
			this->Nicaragua_USSR->Name = L"Nicaragua_USSR";
			this->Nicaragua_USSR->Size = System::Drawing::Size(26, 17);
			this->Nicaragua_USSR->TabIndex = 5;
			this->Nicaragua_USSR->Text = L"10";
			this->Nicaragua_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel42
			// 
			this->tableLayoutPanel42->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel42->ColumnCount = 2;
			this->tableLayoutPanel42->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel42->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel42->Controls->Add(this->ElSalvador_USA, 0, 0);
			this->tableLayoutPanel42->Controls->Add(this->ElSalvador_USSR, 1, 0);
			this->tableLayoutPanel42->Location = System::Drawing::Point(20, 172);
			this->tableLayoutPanel42->Name = L"tableLayoutPanel42";
			this->tableLayoutPanel42->RowCount = 1;
			this->tableLayoutPanel42->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel42->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel42->TabIndex = 8;
			// 
			// ElSalvador_USA
			// 
			this->ElSalvador_USA->AutoSize = true;
			this->ElSalvador_USA->BackColor = System::Drawing::Color::White;
			this->ElSalvador_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ElSalvador_USA->ForeColor = System::Drawing::Color::Blue;
			this->ElSalvador_USA->Location = System::Drawing::Point(4, 1);
			this->ElSalvador_USA->Name = L"ElSalvador_USA";
			this->ElSalvador_USA->Size = System::Drawing::Size(26, 17);
			this->ElSalvador_USA->TabIndex = 0;
			this->ElSalvador_USA->Text = L"10";
			this->ElSalvador_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ElSalvador_USSR
			// 
			this->ElSalvador_USSR->AutoSize = true;
			this->ElSalvador_USSR->BackColor = System::Drawing::Color::White;
			this->ElSalvador_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ElSalvador_USSR->ForeColor = System::Drawing::Color::Red;
			this->ElSalvador_USSR->Location = System::Drawing::Point(37, 1);
			this->ElSalvador_USSR->Name = L"ElSalvador_USSR";
			this->ElSalvador_USSR->Size = System::Drawing::Size(26, 17);
			this->ElSalvador_USSR->TabIndex = 5;
			this->ElSalvador_USSR->Text = L"10";
			this->ElSalvador_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label127
			// 
			this->label127->AutoSize = true;
			this->label127->Location = System::Drawing::Point(122, 110);
			this->label127->Name = L"label127";
			this->label127->Size = System::Drawing::Size(51, 17);
			this->label127->TabIndex = 27;
			this->label127->Text = L"Mexico";
			// 
			// label128
			// 
			this->label128->AutoSize = true;
			this->label128->Location = System::Drawing::Point(17, 109);
			this->label128->Name = L"label128";
			this->label128->Size = System::Drawing::Size(108, 17);
			this->label128->TabIndex = 11;
			this->label128->Text = L"Dominican Rep.";
			// 
			// tableLayoutPanel43
			// 
			this->tableLayoutPanel43->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel43->ColumnCount = 2;
			this->tableLayoutPanel43->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel43->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel43->Controls->Add(this->Mexico_USA, 0, 0);
			this->tableLayoutPanel43->Controls->Add(this->Mexico_USSR, 1, 0);
			this->tableLayoutPanel43->Location = System::Drawing::Point(125, 130);
			this->tableLayoutPanel43->Name = L"tableLayoutPanel43";
			this->tableLayoutPanel43->RowCount = 1;
			this->tableLayoutPanel43->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel43->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel43->TabIndex = 26;
			// 
			// Mexico_USA
			// 
			this->Mexico_USA->AutoSize = true;
			this->Mexico_USA->BackColor = System::Drawing::Color::White;
			this->Mexico_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Mexico_USA->ForeColor = System::Drawing::Color::Blue;
			this->Mexico_USA->Location = System::Drawing::Point(4, 1);
			this->Mexico_USA->Name = L"Mexico_USA";
			this->Mexico_USA->Size = System::Drawing::Size(26, 17);
			this->Mexico_USA->TabIndex = 0;
			this->Mexico_USA->Text = L"10";
			this->Mexico_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Mexico_USSR
			// 
			this->Mexico_USSR->AutoSize = true;
			this->Mexico_USSR->BackColor = System::Drawing::Color::White;
			this->Mexico_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Mexico_USSR->ForeColor = System::Drawing::Color::Red;
			this->Mexico_USSR->Location = System::Drawing::Point(37, 1);
			this->Mexico_USSR->Name = L"Mexico_USSR";
			this->Mexico_USSR->Size = System::Drawing::Size(26, 17);
			this->Mexico_USSR->TabIndex = 5;
			this->Mexico_USSR->Text = L"10";
			this->Mexico_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label131
			// 
			this->label131->AutoSize = true;
			this->label131->Location = System::Drawing::Point(122, 67);
			this->label131->Name = L"label131";
			this->label131->Size = System::Drawing::Size(70, 17);
			this->label131->TabIndex = 25;
			this->label131->Text = L"Honduras";
			// 
			// tableLayoutPanel44
			// 
			this->tableLayoutPanel44->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel44->ColumnCount = 2;
			this->tableLayoutPanel44->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel44->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel44->Controls->Add(this->DominicanRep_USA, 0, 0);
			this->tableLayoutPanel44->Controls->Add(this->DominicanRep_USSR, 1, 0);
			this->tableLayoutPanel44->Location = System::Drawing::Point(20, 129);
			this->tableLayoutPanel44->Name = L"tableLayoutPanel44";
			this->tableLayoutPanel44->RowCount = 1;
			this->tableLayoutPanel44->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel44->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel44->TabIndex = 10;
			// 
			// DominicanRep_USA
			// 
			this->DominicanRep_USA->AutoSize = true;
			this->DominicanRep_USA->BackColor = System::Drawing::Color::White;
			this->DominicanRep_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DominicanRep_USA->ForeColor = System::Drawing::Color::Blue;
			this->DominicanRep_USA->Location = System::Drawing::Point(4, 1);
			this->DominicanRep_USA->Name = L"DominicanRep_USA";
			this->DominicanRep_USA->Size = System::Drawing::Size(26, 17);
			this->DominicanRep_USA->TabIndex = 0;
			this->DominicanRep_USA->Text = L"10";
			this->DominicanRep_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// DominicanRep_USSR
			// 
			this->DominicanRep_USSR->AutoSize = true;
			this->DominicanRep_USSR->BackColor = System::Drawing::Color::White;
			this->DominicanRep_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DominicanRep_USSR->ForeColor = System::Drawing::Color::Red;
			this->DominicanRep_USSR->Location = System::Drawing::Point(37, 1);
			this->DominicanRep_USSR->Name = L"DominicanRep_USSR";
			this->DominicanRep_USSR->Size = System::Drawing::Size(26, 17);
			this->DominicanRep_USSR->TabIndex = 5;
			this->DominicanRep_USSR->Text = L"10";
			this->DominicanRep_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label134
			// 
			this->label134->AutoSize = true;
			this->label134->Location = System::Drawing::Point(122, 24);
			this->label134->Name = L"label134";
			this->label134->Size = System::Drawing::Size(36, 17);
			this->label134->TabIndex = 21;
			this->label134->Text = L"Haiti";
			// 
			// label135
			// 
			this->label135->AutoSize = true;
			this->label135->Location = System::Drawing::Point(17, 66);
			this->label135->Name = L"label135";
			this->label135->Size = System::Drawing::Size(41, 17);
			this->label135->TabIndex = 9;
			this->label135->Text = L"Cuba";
			// 
			// tableLayoutPanel45
			// 
			this->tableLayoutPanel45->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel45->ColumnCount = 2;
			this->tableLayoutPanel45->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel45->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel45->Controls->Add(this->Honduras_USA, 0, 0);
			this->tableLayoutPanel45->Controls->Add(this->Honduras_USSR, 1, 0);
			this->tableLayoutPanel45->Location = System::Drawing::Point(125, 87);
			this->tableLayoutPanel45->Name = L"tableLayoutPanel45";
			this->tableLayoutPanel45->RowCount = 1;
			this->tableLayoutPanel45->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel45->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel45->TabIndex = 23;
			// 
			// Honduras_USA
			// 
			this->Honduras_USA->AutoSize = true;
			this->Honduras_USA->BackColor = System::Drawing::Color::White;
			this->Honduras_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Honduras_USA->ForeColor = System::Drawing::Color::Blue;
			this->Honduras_USA->Location = System::Drawing::Point(4, 1);
			this->Honduras_USA->Name = L"Honduras_USA";
			this->Honduras_USA->Size = System::Drawing::Size(26, 17);
			this->Honduras_USA->TabIndex = 0;
			this->Honduras_USA->Text = L"10";
			this->Honduras_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Honduras_USSR
			// 
			this->Honduras_USSR->AutoSize = true;
			this->Honduras_USSR->BackColor = System::Drawing::Color::White;
			this->Honduras_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Honduras_USSR->ForeColor = System::Drawing::Color::Red;
			this->Honduras_USSR->Location = System::Drawing::Point(37, 1);
			this->Honduras_USSR->Name = L"Honduras_USSR";
			this->Honduras_USSR->Size = System::Drawing::Size(26, 17);
			this->Honduras_USSR->TabIndex = 5;
			this->Honduras_USSR->Text = L"10";
			this->Honduras_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label138
			// 
			this->label138->AutoSize = true;
			this->label138->Location = System::Drawing::Point(17, 23);
			this->label138->Name = L"label138";
			this->label138->Size = System::Drawing::Size(76, 17);
			this->label138->TabIndex = 7;
			this->label138->Text = L"Costa Rica";
			// 
			// tableLayoutPanel46
			// 
			this->tableLayoutPanel46->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel46->ColumnCount = 2;
			this->tableLayoutPanel46->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel46->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel46->Controls->Add(this->Haiti_USA, 0, 0);
			this->tableLayoutPanel46->Controls->Add(this->Haiti_USSR, 1, 0);
			this->tableLayoutPanel46->Location = System::Drawing::Point(125, 44);
			this->tableLayoutPanel46->Name = L"tableLayoutPanel46";
			this->tableLayoutPanel46->RowCount = 1;
			this->tableLayoutPanel46->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel46->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel46->TabIndex = 20;
			// 
			// Haiti_USA
			// 
			this->Haiti_USA->AutoSize = true;
			this->Haiti_USA->BackColor = System::Drawing::Color::White;
			this->Haiti_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Haiti_USA->ForeColor = System::Drawing::Color::Blue;
			this->Haiti_USA->Location = System::Drawing::Point(4, 1);
			this->Haiti_USA->Name = L"Haiti_USA";
			this->Haiti_USA->Size = System::Drawing::Size(26, 17);
			this->Haiti_USA->TabIndex = 0;
			this->Haiti_USA->Text = L"10";
			this->Haiti_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Haiti_USSR
			// 
			this->Haiti_USSR->AutoSize = true;
			this->Haiti_USSR->BackColor = System::Drawing::Color::White;
			this->Haiti_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Haiti_USSR->ForeColor = System::Drawing::Color::Red;
			this->Haiti_USSR->Location = System::Drawing::Point(37, 1);
			this->Haiti_USSR->Name = L"Haiti_USSR";
			this->Haiti_USSR->Size = System::Drawing::Size(26, 17);
			this->Haiti_USSR->TabIndex = 5;
			this->Haiti_USSR->Text = L"10";
			this->Haiti_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel47
			// 
			this->tableLayoutPanel47->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel47->ColumnCount = 2;
			this->tableLayoutPanel47->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel47->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel47->Controls->Add(this->Cuba_USA, 0, 0);
			this->tableLayoutPanel47->Controls->Add(this->Cuba_USSR, 1, 0);
			this->tableLayoutPanel47->Location = System::Drawing::Point(20, 86);
			this->tableLayoutPanel47->Name = L"tableLayoutPanel47";
			this->tableLayoutPanel47->RowCount = 1;
			this->tableLayoutPanel47->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel47->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel47->TabIndex = 8;
			// 
			// Cuba_USA
			// 
			this->Cuba_USA->AutoSize = true;
			this->Cuba_USA->BackColor = System::Drawing::Color::White;
			this->Cuba_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cuba_USA->ForeColor = System::Drawing::Color::Blue;
			this->Cuba_USA->Location = System::Drawing::Point(4, 1);
			this->Cuba_USA->Name = L"Cuba_USA";
			this->Cuba_USA->Size = System::Drawing::Size(26, 17);
			this->Cuba_USA->TabIndex = 0;
			this->Cuba_USA->Text = L"10";
			this->Cuba_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Cuba_USSR
			// 
			this->Cuba_USSR->AutoSize = true;
			this->Cuba_USSR->BackColor = System::Drawing::Color::White;
			this->Cuba_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cuba_USSR->ForeColor = System::Drawing::Color::Red;
			this->Cuba_USSR->Location = System::Drawing::Point(37, 1);
			this->Cuba_USSR->Name = L"Cuba_USSR";
			this->Cuba_USSR->Size = System::Drawing::Size(26, 17);
			this->Cuba_USSR->TabIndex = 5;
			this->Cuba_USSR->Text = L"10";
			this->Cuba_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel48
			// 
			this->tableLayoutPanel48->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel48->ColumnCount = 2;
			this->tableLayoutPanel48->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel48->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel48->Controls->Add(this->CostaRica_USA, 0, 0);
			this->tableLayoutPanel48->Controls->Add(this->CostaRica_USSR, 1, 0);
			this->tableLayoutPanel48->Location = System::Drawing::Point(20, 43);
			this->tableLayoutPanel48->Name = L"tableLayoutPanel48";
			this->tableLayoutPanel48->RowCount = 1;
			this->tableLayoutPanel48->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel48->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel48->TabIndex = 6;
			// 
			// CostaRica_USA
			// 
			this->CostaRica_USA->AutoSize = true;
			this->CostaRica_USA->BackColor = System::Drawing::Color::White;
			this->CostaRica_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CostaRica_USA->ForeColor = System::Drawing::Color::Blue;
			this->CostaRica_USA->Location = System::Drawing::Point(4, 1);
			this->CostaRica_USA->Name = L"CostaRica_USA";
			this->CostaRica_USA->Size = System::Drawing::Size(26, 17);
			this->CostaRica_USA->TabIndex = 0;
			this->CostaRica_USA->Text = L"10";
			this->CostaRica_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// CostaRica_USSR
			// 
			this->CostaRica_USSR->AutoSize = true;
			this->CostaRica_USSR->BackColor = System::Drawing::Color::White;
			this->CostaRica_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CostaRica_USSR->ForeColor = System::Drawing::Color::Red;
			this->CostaRica_USSR->Location = System::Drawing::Point(37, 1);
			this->CostaRica_USSR->Name = L"CostaRica_USSR";
			this->CostaRica_USSR->Size = System::Drawing::Size(26, 17);
			this->CostaRica_USSR->TabIndex = 5;
			this->CostaRica_USSR->Text = L"10";
			this->CostaRica_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label4);
			this->groupBox4->Controls->Add(this->tableLayoutPanel31);
			this->groupBox4->Controls->Add(this->label184);
			this->groupBox4->Controls->Add(this->label185);
			this->groupBox4->Controls->Add(this->tableLayoutPanel62);
			this->groupBox4->Controls->Add(this->tableLayoutPanel63);
			this->groupBox4->Controls->Add(this->label55);
			this->groupBox4->Controls->Add(this->label56);
			this->groupBox4->Controls->Add(this->tableLayoutPanel19);
			this->groupBox4->Controls->Add(this->tableLayoutPanel20);
			this->groupBox4->Controls->Add(this->label61);
			this->groupBox4->Controls->Add(this->label63);
			this->groupBox4->Controls->Add(this->tableLayoutPanel21);
			this->groupBox4->Controls->Add(this->tableLayoutPanel37);
			this->groupBox4->Controls->Add(this->label112);
			this->groupBox4->Controls->Add(this->label113);
			this->groupBox4->Controls->Add(this->tableLayoutPanel38);
			this->groupBox4->Controls->Add(this->tableLayoutPanel49);
			this->groupBox4->Controls->Add(this->label148);
			this->groupBox4->Controls->Add(this->label149);
			this->groupBox4->Controls->Add(this->tableLayoutPanel50);
			this->groupBox4->Controls->Add(this->tableLayoutPanel51);
			this->groupBox4->Controls->Add(this->label154);
			this->groupBox4->Controls->Add(this->label155);
			this->groupBox4->Controls->Add(this->tableLayoutPanel52);
			this->groupBox4->Controls->Add(this->tableLayoutPanel53);
			this->groupBox4->Controls->Add(this->label160);
			this->groupBox4->Controls->Add(this->label161);
			this->groupBox4->Controls->Add(this->tableLayoutPanel54);
			this->groupBox4->Controls->Add(this->tableLayoutPanel55);
			this->groupBox4->Controls->Add(this->label166);
			this->groupBox4->Controls->Add(this->label167);
			this->groupBox4->Controls->Add(this->tableLayoutPanel56);
			this->groupBox4->Controls->Add(this->label170);
			this->groupBox4->Controls->Add(this->tableLayoutPanel57);
			this->groupBox4->Controls->Add(this->label173);
			this->groupBox4->Controls->Add(this->label174);
			this->groupBox4->Controls->Add(this->tableLayoutPanel58);
			this->groupBox4->Controls->Add(this->label177);
			this->groupBox4->Controls->Add(this->tableLayoutPanel59);
			this->groupBox4->Controls->Add(this->tableLayoutPanel60);
			this->groupBox4->Controls->Add(this->tableLayoutPanel61);
			this->groupBox4->Location = System::Drawing::Point(680, 31);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(225, 515);
			this->groupBox4->TabIndex = 7;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Europe";
			// 
			// label184
			// 
			this->label184->AutoSize = true;
			this->label184->Location = System::Drawing::Point(124, 415);
			this->label184->Name = L"label184";
			this->label184->Size = System::Drawing::Size(77, 17);
			this->label184->TabIndex = 43;
			this->label184->Text = L"Yugoslavia";
			// 
			// label185
			// 
			this->label185->AutoSize = true;
			this->label185->Location = System::Drawing::Point(17, 415);
			this->label185->Name = L"label185";
			this->label185->Size = System::Drawing::Size(55, 17);
			this->label185->TabIndex = 41;
			this->label185->Text = L"Greece";
			// 
			// tableLayoutPanel62
			// 
			this->tableLayoutPanel62->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel62->ColumnCount = 2;
			this->tableLayoutPanel62->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel62->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel62->Controls->Add(this->Yugoslavia_USA, 0, 0);
			this->tableLayoutPanel62->Controls->Add(this->Yugoslavia_USSR, 1, 0);
			this->tableLayoutPanel62->Location = System::Drawing::Point(127, 435);
			this->tableLayoutPanel62->Name = L"tableLayoutPanel62";
			this->tableLayoutPanel62->RowCount = 1;
			this->tableLayoutPanel62->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel62->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel62->TabIndex = 42;
			// 
			// Yugoslavia_USA
			// 
			this->Yugoslavia_USA->AutoSize = true;
			this->Yugoslavia_USA->BackColor = System::Drawing::Color::White;
			this->Yugoslavia_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Yugoslavia_USA->ForeColor = System::Drawing::Color::Blue;
			this->Yugoslavia_USA->Location = System::Drawing::Point(4, 1);
			this->Yugoslavia_USA->Name = L"Yugoslavia_USA";
			this->Yugoslavia_USA->Size = System::Drawing::Size(26, 17);
			this->Yugoslavia_USA->TabIndex = 0;
			this->Yugoslavia_USA->Text = L"10";
			this->Yugoslavia_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Yugoslavia_USSR
			// 
			this->Yugoslavia_USSR->AutoSize = true;
			this->Yugoslavia_USSR->BackColor = System::Drawing::Color::White;
			this->Yugoslavia_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Yugoslavia_USSR->ForeColor = System::Drawing::Color::Red;
			this->Yugoslavia_USSR->Location = System::Drawing::Point(37, 1);
			this->Yugoslavia_USSR->Name = L"Yugoslavia_USSR";
			this->Yugoslavia_USSR->Size = System::Drawing::Size(26, 17);
			this->Yugoslavia_USSR->TabIndex = 5;
			this->Yugoslavia_USSR->Text = L"10";
			this->Yugoslavia_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel63
			// 
			this->tableLayoutPanel63->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel63->ColumnCount = 2;
			this->tableLayoutPanel63->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel63->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel63->Controls->Add(this->Greece_USA, 0, 0);
			this->tableLayoutPanel63->Controls->Add(this->Greece_USSR, 1, 0);
			this->tableLayoutPanel63->Location = System::Drawing::Point(20, 435);
			this->tableLayoutPanel63->Name = L"tableLayoutPanel63";
			this->tableLayoutPanel63->RowCount = 1;
			this->tableLayoutPanel63->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel63->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel63->TabIndex = 40;
			// 
			// Greece_USA
			// 
			this->Greece_USA->AutoSize = true;
			this->Greece_USA->BackColor = System::Drawing::Color::White;
			this->Greece_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Greece_USA->ForeColor = System::Drawing::Color::Blue;
			this->Greece_USA->Location = System::Drawing::Point(4, 1);
			this->Greece_USA->Name = L"Greece_USA";
			this->Greece_USA->Size = System::Drawing::Size(26, 17);
			this->Greece_USA->TabIndex = 0;
			this->Greece_USA->Text = L"10";
			this->Greece_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Greece_USSR
			// 
			this->Greece_USSR->AutoSize = true;
			this->Greece_USSR->BackColor = System::Drawing::Color::White;
			this->Greece_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Greece_USSR->ForeColor = System::Drawing::Color::Red;
			this->Greece_USSR->Location = System::Drawing::Point(37, 1);
			this->Greece_USSR->Name = L"Greece_USSR";
			this->Greece_USSR->Size = System::Drawing::Size(26, 17);
			this->Greece_USSR->TabIndex = 5;
			this->Greece_USSR->Text = L"10";
			this->Greece_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Location = System::Drawing::Point(124, 371);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(87, 17);
			this->label55->TabIndex = 39;
			this->label55->Text = L"W. Germany";
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Location = System::Drawing::Point(17, 371);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(52, 17);
			this->label56->TabIndex = 37;
			this->label56->Text = L"France";
			// 
			// tableLayoutPanel19
			// 
			this->tableLayoutPanel19->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel19->ColumnCount = 2;
			this->tableLayoutPanel19->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel19->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel19->Controls->Add(this->WGermany_USA, 0, 0);
			this->tableLayoutPanel19->Controls->Add(this->WGermany_USSR, 1, 0);
			this->tableLayoutPanel19->Location = System::Drawing::Point(127, 391);
			this->tableLayoutPanel19->Name = L"tableLayoutPanel19";
			this->tableLayoutPanel19->RowCount = 1;
			this->tableLayoutPanel19->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel19->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel19->TabIndex = 38;
			// 
			// WGermany_USA
			// 
			this->WGermany_USA->AutoSize = true;
			this->WGermany_USA->BackColor = System::Drawing::Color::White;
			this->WGermany_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->WGermany_USA->ForeColor = System::Drawing::Color::Blue;
			this->WGermany_USA->Location = System::Drawing::Point(4, 1);
			this->WGermany_USA->Name = L"WGermany_USA";
			this->WGermany_USA->Size = System::Drawing::Size(26, 17);
			this->WGermany_USA->TabIndex = 0;
			this->WGermany_USA->Text = L"10";
			this->WGermany_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// WGermany_USSR
			// 
			this->WGermany_USSR->AutoSize = true;
			this->WGermany_USSR->BackColor = System::Drawing::Color::White;
			this->WGermany_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->WGermany_USSR->ForeColor = System::Drawing::Color::Red;
			this->WGermany_USSR->Location = System::Drawing::Point(37, 1);
			this->WGermany_USSR->Name = L"WGermany_USSR";
			this->WGermany_USSR->Size = System::Drawing::Size(26, 17);
			this->WGermany_USSR->TabIndex = 5;
			this->WGermany_USSR->Text = L"10";
			this->WGermany_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel20
			// 
			this->tableLayoutPanel20->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel20->ColumnCount = 2;
			this->tableLayoutPanel20->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel20->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel20->Controls->Add(this->France_USA, 0, 0);
			this->tableLayoutPanel20->Controls->Add(this->France_USSR, 1, 0);
			this->tableLayoutPanel20->Location = System::Drawing::Point(20, 391);
			this->tableLayoutPanel20->Name = L"tableLayoutPanel20";
			this->tableLayoutPanel20->RowCount = 1;
			this->tableLayoutPanel20->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel20->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel20->TabIndex = 36;
			// 
			// France_USA
			// 
			this->France_USA->AutoSize = true;
			this->France_USA->BackColor = System::Drawing::Color::White;
			this->France_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->France_USA->ForeColor = System::Drawing::Color::Blue;
			this->France_USA->Location = System::Drawing::Point(4, 1);
			this->France_USA->Name = L"France_USA";
			this->France_USA->Size = System::Drawing::Size(26, 17);
			this->France_USA->TabIndex = 0;
			this->France_USA->Text = L"10";
			this->France_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// France_USSR
			// 
			this->France_USSR->AutoSize = true;
			this->France_USSR->BackColor = System::Drawing::Color::White;
			this->France_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->France_USSR->ForeColor = System::Drawing::Color::Red;
			this->France_USSR->Location = System::Drawing::Point(37, 1);
			this->France_USSR->Name = L"France_USSR";
			this->France_USSR->Size = System::Drawing::Size(26, 17);
			this->France_USSR->TabIndex = 5;
			this->France_USSR->Text = L"10";
			this->France_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->Location = System::Drawing::Point(124, 328);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(35, 17);
			this->label61->TabIndex = 35;
			this->label61->Text = L"U.K.";
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Location = System::Drawing::Point(17, 328);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(54, 17);
			this->label63->TabIndex = 19;
			this->label63->Text = L"Finland";
			// 
			// tableLayoutPanel21
			// 
			this->tableLayoutPanel21->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel21->ColumnCount = 2;
			this->tableLayoutPanel21->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel21->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel21->Controls->Add(this->UK_USA, 0, 0);
			this->tableLayoutPanel21->Controls->Add(this->UK_USSR, 1, 0);
			this->tableLayoutPanel21->Location = System::Drawing::Point(127, 348);
			this->tableLayoutPanel21->Name = L"tableLayoutPanel21";
			this->tableLayoutPanel21->RowCount = 1;
			this->tableLayoutPanel21->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel21->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel21->TabIndex = 34;
			// 
			// UK_USA
			// 
			this->UK_USA->AutoSize = true;
			this->UK_USA->BackColor = System::Drawing::Color::White;
			this->UK_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UK_USA->ForeColor = System::Drawing::Color::Blue;
			this->UK_USA->Location = System::Drawing::Point(4, 1);
			this->UK_USA->Name = L"UK_USA";
			this->UK_USA->Size = System::Drawing::Size(26, 17);
			this->UK_USA->TabIndex = 0;
			this->UK_USA->Text = L"10";
			this->UK_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// UK_USSR
			// 
			this->UK_USSR->AutoSize = true;
			this->UK_USSR->BackColor = System::Drawing::Color::White;
			this->UK_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UK_USSR->ForeColor = System::Drawing::Color::Red;
			this->UK_USSR->Location = System::Drawing::Point(37, 1);
			this->UK_USSR->Name = L"UK_USSR";
			this->UK_USSR->Size = System::Drawing::Size(26, 17);
			this->UK_USSR->TabIndex = 5;
			this->UK_USSR->Text = L"10";
			this->UK_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel37
			// 
			this->tableLayoutPanel37->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel37->ColumnCount = 2;
			this->tableLayoutPanel37->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel37->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel37->Controls->Add(this->Finland_USA, 0, 0);
			this->tableLayoutPanel37->Controls->Add(this->Finland_USSR, 1, 0);
			this->tableLayoutPanel37->Location = System::Drawing::Point(20, 348);
			this->tableLayoutPanel37->Name = L"tableLayoutPanel37";
			this->tableLayoutPanel37->RowCount = 1;
			this->tableLayoutPanel37->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel37->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel37->TabIndex = 18;
			// 
			// Finland_USA
			// 
			this->Finland_USA->AutoSize = true;
			this->Finland_USA->BackColor = System::Drawing::Color::White;
			this->Finland_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Finland_USA->ForeColor = System::Drawing::Color::Blue;
			this->Finland_USA->Location = System::Drawing::Point(4, 1);
			this->Finland_USA->Name = L"Finland_USA";
			this->Finland_USA->Size = System::Drawing::Size(26, 17);
			this->Finland_USA->TabIndex = 0;
			this->Finland_USA->Text = L"10";
			this->Finland_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Finland_USSR
			// 
			this->Finland_USSR->AutoSize = true;
			this->Finland_USSR->BackColor = System::Drawing::Color::White;
			this->Finland_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Finland_USSR->ForeColor = System::Drawing::Color::Red;
			this->Finland_USSR->Location = System::Drawing::Point(37, 1);
			this->Finland_USSR->Name = L"Finland_USSR";
			this->Finland_USSR->Size = System::Drawing::Size(26, 17);
			this->Finland_USSR->TabIndex = 5;
			this->Finland_USSR->Text = L"10";
			this->Finland_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label112
			// 
			this->label112->AutoSize = true;
			this->label112->Location = System::Drawing::Point(124, 283);
			this->label112->Name = L"label112";
			this->label112->Size = System::Drawing::Size(52, 17);
			this->label112->TabIndex = 33;
			this->label112->Text = L"Turkey";
			// 
			// label113
			// 
			this->label113->AutoSize = true;
			this->label113->Location = System::Drawing::Point(17, 283);
			this->label113->Name = L"label113";
			this->label113->Size = System::Drawing::Size(83, 17);
			this->label113->TabIndex = 17;
			this->label113->Text = L"E. Germany";
			// 
			// tableLayoutPanel38
			// 
			this->tableLayoutPanel38->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel38->ColumnCount = 2;
			this->tableLayoutPanel38->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel38->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel38->Controls->Add(this->Turkey_USA, 0, 0);
			this->tableLayoutPanel38->Controls->Add(this->Turkey_USSR, 1, 0);
			this->tableLayoutPanel38->Location = System::Drawing::Point(127, 303);
			this->tableLayoutPanel38->Name = L"tableLayoutPanel38";
			this->tableLayoutPanel38->RowCount = 1;
			this->tableLayoutPanel38->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel38->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel38->TabIndex = 32;
			// 
			// Turkey_USA
			// 
			this->Turkey_USA->AutoSize = true;
			this->Turkey_USA->BackColor = System::Drawing::Color::White;
			this->Turkey_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Turkey_USA->ForeColor = System::Drawing::Color::Blue;
			this->Turkey_USA->Location = System::Drawing::Point(4, 1);
			this->Turkey_USA->Name = L"Turkey_USA";
			this->Turkey_USA->Size = System::Drawing::Size(26, 17);
			this->Turkey_USA->TabIndex = 0;
			this->Turkey_USA->Text = L"10";
			this->Turkey_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Turkey_USSR
			// 
			this->Turkey_USSR->AutoSize = true;
			this->Turkey_USSR->BackColor = System::Drawing::Color::White;
			this->Turkey_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Turkey_USSR->ForeColor = System::Drawing::Color::Red;
			this->Turkey_USSR->Location = System::Drawing::Point(37, 1);
			this->Turkey_USSR->Name = L"Turkey_USSR";
			this->Turkey_USSR->Size = System::Drawing::Size(26, 17);
			this->Turkey_USSR->TabIndex = 5;
			this->Turkey_USSR->Text = L"10";
			this->Turkey_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel49
			// 
			this->tableLayoutPanel49->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel49->ColumnCount = 2;
			this->tableLayoutPanel49->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel49->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel49->Controls->Add(this->EGermany_USA, 0, 0);
			this->tableLayoutPanel49->Controls->Add(this->EGermany_USSR, 1, 0);
			this->tableLayoutPanel49->Location = System::Drawing::Point(20, 303);
			this->tableLayoutPanel49->Name = L"tableLayoutPanel49";
			this->tableLayoutPanel49->RowCount = 1;
			this->tableLayoutPanel49->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel49->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel49->TabIndex = 16;
			// 
			// EGermany_USA
			// 
			this->EGermany_USA->AutoSize = true;
			this->EGermany_USA->BackColor = System::Drawing::Color::White;
			this->EGermany_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EGermany_USA->ForeColor = System::Drawing::Color::Blue;
			this->EGermany_USA->Location = System::Drawing::Point(4, 1);
			this->EGermany_USA->Name = L"EGermany_USA";
			this->EGermany_USA->Size = System::Drawing::Size(26, 17);
			this->EGermany_USA->TabIndex = 0;
			this->EGermany_USA->Text = L"10";
			this->EGermany_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// EGermany_USSR
			// 
			this->EGermany_USSR->AutoSize = true;
			this->EGermany_USSR->BackColor = System::Drawing::Color::White;
			this->EGermany_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EGermany_USSR->ForeColor = System::Drawing::Color::Red;
			this->EGermany_USSR->Location = System::Drawing::Point(37, 1);
			this->EGermany_USSR->Name = L"EGermany_USSR";
			this->EGermany_USSR->Size = System::Drawing::Size(26, 17);
			this->EGermany_USSR->TabIndex = 5;
			this->EGermany_USSR->Text = L"10";
			this->EGermany_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label148
			// 
			this->label148->AutoSize = true;
			this->label148->Location = System::Drawing::Point(124, 240);
			this->label148->Name = L"label148";
			this->label148->Size = System::Drawing::Size(58, 17);
			this->label148->TabIndex = 31;
			this->label148->Text = L"Sweden";
			// 
			// label149
			// 
			this->label149->AutoSize = true;
			this->label149->Location = System::Drawing::Point(17, 240);
			this->label149->Name = L"label149";
			this->label149->Size = System::Drawing::Size(65, 17);
			this->label149->TabIndex = 15;
			this->label149->Text = L"Denmark";
			// 
			// tableLayoutPanel50
			// 
			this->tableLayoutPanel50->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel50->ColumnCount = 2;
			this->tableLayoutPanel50->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel50->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel50->Controls->Add(this->Sweden_USA, 0, 0);
			this->tableLayoutPanel50->Controls->Add(this->Sweden_USSR, 1, 0);
			this->tableLayoutPanel50->Location = System::Drawing::Point(127, 260);
			this->tableLayoutPanel50->Name = L"tableLayoutPanel50";
			this->tableLayoutPanel50->RowCount = 1;
			this->tableLayoutPanel50->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel50->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel50->TabIndex = 30;
			// 
			// Sweden_USA
			// 
			this->Sweden_USA->AutoSize = true;
			this->Sweden_USA->BackColor = System::Drawing::Color::White;
			this->Sweden_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Sweden_USA->ForeColor = System::Drawing::Color::Blue;
			this->Sweden_USA->Location = System::Drawing::Point(4, 1);
			this->Sweden_USA->Name = L"Sweden_USA";
			this->Sweden_USA->Size = System::Drawing::Size(26, 17);
			this->Sweden_USA->TabIndex = 0;
			this->Sweden_USA->Text = L"10";
			this->Sweden_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Sweden_USSR
			// 
			this->Sweden_USSR->AutoSize = true;
			this->Sweden_USSR->BackColor = System::Drawing::Color::White;
			this->Sweden_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Sweden_USSR->ForeColor = System::Drawing::Color::Red;
			this->Sweden_USSR->Location = System::Drawing::Point(37, 1);
			this->Sweden_USSR->Name = L"Sweden_USSR";
			this->Sweden_USSR->Size = System::Drawing::Size(26, 17);
			this->Sweden_USSR->TabIndex = 5;
			this->Sweden_USSR->Text = L"10";
			this->Sweden_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel51
			// 
			this->tableLayoutPanel51->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel51->ColumnCount = 2;
			this->tableLayoutPanel51->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel51->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel51->Controls->Add(this->Denmark_USA, 0, 0);
			this->tableLayoutPanel51->Controls->Add(this->Denmark_USSR, 1, 0);
			this->tableLayoutPanel51->Location = System::Drawing::Point(20, 260);
			this->tableLayoutPanel51->Name = L"tableLayoutPanel51";
			this->tableLayoutPanel51->RowCount = 1;
			this->tableLayoutPanel51->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel51->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel51->TabIndex = 14;
			// 
			// Denmark_USA
			// 
			this->Denmark_USA->AutoSize = true;
			this->Denmark_USA->BackColor = System::Drawing::Color::White;
			this->Denmark_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Denmark_USA->ForeColor = System::Drawing::Color::Blue;
			this->Denmark_USA->Location = System::Drawing::Point(4, 1);
			this->Denmark_USA->Name = L"Denmark_USA";
			this->Denmark_USA->Size = System::Drawing::Size(26, 17);
			this->Denmark_USA->TabIndex = 0;
			this->Denmark_USA->Text = L"10";
			this->Denmark_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Denmark_USSR
			// 
			this->Denmark_USSR->AutoSize = true;
			this->Denmark_USSR->BackColor = System::Drawing::Color::White;
			this->Denmark_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Denmark_USSR->ForeColor = System::Drawing::Color::Red;
			this->Denmark_USSR->Location = System::Drawing::Point(37, 1);
			this->Denmark_USSR->Name = L"Denmark_USSR";
			this->Denmark_USSR->Size = System::Drawing::Size(26, 17);
			this->Denmark_USSR->TabIndex = 5;
			this->Denmark_USSR->Text = L"10";
			this->Denmark_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label154
			// 
			this->label154->AutoSize = true;
			this->label154->Location = System::Drawing::Point(124, 152);
			this->label154->Name = L"label154";
			this->label154->Size = System::Drawing::Size(64, 17);
			this->label154->TabIndex = 29;
			this->label154->Text = L"Romania";
			// 
			// label155
			// 
			this->label155->AutoSize = true;
			this->label155->Location = System::Drawing::Point(17, 196);
			this->label155->Name = L"label155";
			this->label155->Size = System::Drawing::Size(106, 17);
			this->label155->TabIndex = 13;
			this->label155->Text = L"Czechoslovakia";
			// 
			// tableLayoutPanel52
			// 
			this->tableLayoutPanel52->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel52->ColumnCount = 2;
			this->tableLayoutPanel52->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel52->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel52->Controls->Add(this->Romania_USA, 0, 0);
			this->tableLayoutPanel52->Controls->Add(this->Romania_USSR, 1, 0);
			this->tableLayoutPanel52->Location = System::Drawing::Point(127, 172);
			this->tableLayoutPanel52->Name = L"tableLayoutPanel52";
			this->tableLayoutPanel52->RowCount = 1;
			this->tableLayoutPanel52->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel52->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel52->TabIndex = 28;
			// 
			// Romania_USA
			// 
			this->Romania_USA->AutoSize = true;
			this->Romania_USA->BackColor = System::Drawing::Color::White;
			this->Romania_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Romania_USA->ForeColor = System::Drawing::Color::Blue;
			this->Romania_USA->Location = System::Drawing::Point(4, 1);
			this->Romania_USA->Name = L"Romania_USA";
			this->Romania_USA->Size = System::Drawing::Size(26, 17);
			this->Romania_USA->TabIndex = 0;
			this->Romania_USA->Text = L"10";
			this->Romania_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Romania_USSR
			// 
			this->Romania_USSR->AutoSize = true;
			this->Romania_USSR->BackColor = System::Drawing::Color::White;
			this->Romania_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Romania_USSR->ForeColor = System::Drawing::Color::Red;
			this->Romania_USSR->Location = System::Drawing::Point(37, 1);
			this->Romania_USSR->Name = L"Romania_USSR";
			this->Romania_USSR->Size = System::Drawing::Size(26, 17);
			this->Romania_USSR->TabIndex = 5;
			this->Romania_USSR->Text = L"10";
			this->Romania_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel53
			// 
			this->tableLayoutPanel53->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel53->ColumnCount = 2;
			this->tableLayoutPanel53->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel53->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel53->Controls->Add(this->Czechoslovakia_USA, 0, 0);
			this->tableLayoutPanel53->Controls->Add(this->Czechoslovakia_USSR, 1, 0);
			this->tableLayoutPanel53->Location = System::Drawing::Point(20, 216);
			this->tableLayoutPanel53->Name = L"tableLayoutPanel53";
			this->tableLayoutPanel53->RowCount = 1;
			this->tableLayoutPanel53->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel53->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel53->TabIndex = 12;
			// 
			// Czechoslovakia_USA
			// 
			this->Czechoslovakia_USA->AutoSize = true;
			this->Czechoslovakia_USA->BackColor = System::Drawing::Color::White;
			this->Czechoslovakia_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Czechoslovakia_USA->ForeColor = System::Drawing::Color::Blue;
			this->Czechoslovakia_USA->Location = System::Drawing::Point(4, 1);
			this->Czechoslovakia_USA->Name = L"Czechoslovakia_USA";
			this->Czechoslovakia_USA->Size = System::Drawing::Size(26, 17);
			this->Czechoslovakia_USA->TabIndex = 0;
			this->Czechoslovakia_USA->Text = L"10";
			this->Czechoslovakia_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Czechoslovakia_USSR
			// 
			this->Czechoslovakia_USSR->AutoSize = true;
			this->Czechoslovakia_USSR->BackColor = System::Drawing::Color::White;
			this->Czechoslovakia_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Czechoslovakia_USSR->ForeColor = System::Drawing::Color::Red;
			this->Czechoslovakia_USSR->Location = System::Drawing::Point(37, 1);
			this->Czechoslovakia_USSR->Name = L"Czechoslovakia_USSR";
			this->Czechoslovakia_USSR->Size = System::Drawing::Size(26, 17);
			this->Czechoslovakia_USSR->TabIndex = 5;
			this->Czechoslovakia_USSR->Text = L"10";
			this->Czechoslovakia_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label160
			// 
			this->label160->AutoSize = true;
			this->label160->Location = System::Drawing::Point(124, 110);
			this->label160->Name = L"label160";
			this->label160->Size = System::Drawing::Size(52, 17);
			this->label160->TabIndex = 24;
			this->label160->Text = L"Poland";
			// 
			// label161
			// 
			this->label161->AutoSize = true;
			this->label161->Location = System::Drawing::Point(17, 152);
			this->label161->Name = L"label161";
			this->label161->Size = System::Drawing::Size(57, 17);
			this->label161->TabIndex = 9;
			this->label161->Text = L"Canada";
			// 
			// tableLayoutPanel54
			// 
			this->tableLayoutPanel54->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel54->ColumnCount = 2;
			this->tableLayoutPanel54->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel54->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel54->Controls->Add(this->Poland_USA, 0, 0);
			this->tableLayoutPanel54->Controls->Add(this->Poland_USSR, 1, 0);
			this->tableLayoutPanel54->Location = System::Drawing::Point(127, 130);
			this->tableLayoutPanel54->Name = L"tableLayoutPanel54";
			this->tableLayoutPanel54->RowCount = 1;
			this->tableLayoutPanel54->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel54->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel54->TabIndex = 22;
			// 
			// Poland_USA
			// 
			this->Poland_USA->AutoSize = true;
			this->Poland_USA->BackColor = System::Drawing::Color::White;
			this->Poland_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Poland_USA->ForeColor = System::Drawing::Color::Blue;
			this->Poland_USA->Location = System::Drawing::Point(4, 1);
			this->Poland_USA->Name = L"Poland_USA";
			this->Poland_USA->Size = System::Drawing::Size(26, 17);
			this->Poland_USA->TabIndex = 0;
			this->Poland_USA->Text = L"10";
			this->Poland_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Poland_USSR
			// 
			this->Poland_USSR->AutoSize = true;
			this->Poland_USSR->BackColor = System::Drawing::Color::White;
			this->Poland_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Poland_USSR->ForeColor = System::Drawing::Color::Red;
			this->Poland_USSR->Location = System::Drawing::Point(37, 1);
			this->Poland_USSR->Name = L"Poland_USSR";
			this->Poland_USSR->Size = System::Drawing::Size(26, 17);
			this->Poland_USSR->TabIndex = 5;
			this->Poland_USSR->Text = L"10";
			this->Poland_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel55
			// 
			this->tableLayoutPanel55->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel55->ColumnCount = 2;
			this->tableLayoutPanel55->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel55->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel55->Controls->Add(this->Canada_USA, 0, 0);
			this->tableLayoutPanel55->Controls->Add(this->Canada_USSR, 1, 0);
			this->tableLayoutPanel55->Location = System::Drawing::Point(20, 172);
			this->tableLayoutPanel55->Name = L"tableLayoutPanel55";
			this->tableLayoutPanel55->RowCount = 1;
			this->tableLayoutPanel55->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel55->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel55->TabIndex = 8;
			// 
			// Canada_USA
			// 
			this->Canada_USA->AutoSize = true;
			this->Canada_USA->BackColor = System::Drawing::Color::White;
			this->Canada_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Canada_USA->ForeColor = System::Drawing::Color::Blue;
			this->Canada_USA->Location = System::Drawing::Point(4, 1);
			this->Canada_USA->Name = L"Canada_USA";
			this->Canada_USA->Size = System::Drawing::Size(26, 17);
			this->Canada_USA->TabIndex = 0;
			this->Canada_USA->Text = L"10";
			this->Canada_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Canada_USSR
			// 
			this->Canada_USSR->AutoSize = true;
			this->Canada_USSR->BackColor = System::Drawing::Color::White;
			this->Canada_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Canada_USSR->ForeColor = System::Drawing::Color::Red;
			this->Canada_USSR->Location = System::Drawing::Point(37, 1);
			this->Canada_USSR->Name = L"Canada_USSR";
			this->Canada_USSR->Size = System::Drawing::Size(26, 17);
			this->Canada_USSR->TabIndex = 5;
			this->Canada_USSR->Text = L"10";
			this->Canada_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label166
			// 
			this->label166->AutoSize = true;
			this->label166->Location = System::Drawing::Point(124, 66);
			this->label166->Name = L"label166";
			this->label166->Size = System::Drawing::Size(55, 17);
			this->label166->TabIndex = 27;
			this->label166->Text = L"Norway";
			// 
			// label167
			// 
			this->label167->AutoSize = true;
			this->label167->Location = System::Drawing::Point(17, 109);
			this->label167->Name = L"label167";
			this->label167->Size = System::Drawing::Size(60, 17);
			this->label167->TabIndex = 11;
			this->label167->Text = L"Bulgaria";
			// 
			// tableLayoutPanel56
			// 
			this->tableLayoutPanel56->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel56->ColumnCount = 2;
			this->tableLayoutPanel56->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel56->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel56->Controls->Add(this->Norway_USA, 0, 0);
			this->tableLayoutPanel56->Controls->Add(this->Norway_USSR, 1, 0);
			this->tableLayoutPanel56->Location = System::Drawing::Point(127, 86);
			this->tableLayoutPanel56->Name = L"tableLayoutPanel56";
			this->tableLayoutPanel56->RowCount = 1;
			this->tableLayoutPanel56->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel56->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel56->TabIndex = 26;
			// 
			// Norway_USA
			// 
			this->Norway_USA->AutoSize = true;
			this->Norway_USA->BackColor = System::Drawing::Color::White;
			this->Norway_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Norway_USA->ForeColor = System::Drawing::Color::Blue;
			this->Norway_USA->Location = System::Drawing::Point(4, 1);
			this->Norway_USA->Name = L"Norway_USA";
			this->Norway_USA->Size = System::Drawing::Size(26, 17);
			this->Norway_USA->TabIndex = 0;
			this->Norway_USA->Text = L"10";
			this->Norway_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Norway_USSR
			// 
			this->Norway_USSR->AutoSize = true;
			this->Norway_USSR->BackColor = System::Drawing::Color::White;
			this->Norway_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Norway_USSR->ForeColor = System::Drawing::Color::Red;
			this->Norway_USSR->Location = System::Drawing::Point(37, 1);
			this->Norway_USSR->Name = L"Norway_USSR";
			this->Norway_USSR->Size = System::Drawing::Size(26, 17);
			this->Norway_USSR->TabIndex = 5;
			this->Norway_USSR->Text = L"10";
			this->Norway_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label170
			// 
			this->label170->AutoSize = true;
			this->label170->Location = System::Drawing::Point(124, 23);
			this->label170->Name = L"label170";
			this->label170->Size = System::Drawing::Size(33, 17);
			this->label170->TabIndex = 25;
			this->label170->Text = L"Italy";
			// 
			// tableLayoutPanel57
			// 
			this->tableLayoutPanel57->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel57->ColumnCount = 2;
			this->tableLayoutPanel57->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel57->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel57->Controls->Add(this->Bulgaria_USA, 0, 0);
			this->tableLayoutPanel57->Controls->Add(this->Bulgaria_USSR, 1, 0);
			this->tableLayoutPanel57->Location = System::Drawing::Point(20, 129);
			this->tableLayoutPanel57->Name = L"tableLayoutPanel57";
			this->tableLayoutPanel57->RowCount = 1;
			this->tableLayoutPanel57->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel57->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel57->TabIndex = 10;
			// 
			// Bulgaria_USA
			// 
			this->Bulgaria_USA->AutoSize = true;
			this->Bulgaria_USA->BackColor = System::Drawing::Color::White;
			this->Bulgaria_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Bulgaria_USA->ForeColor = System::Drawing::Color::Blue;
			this->Bulgaria_USA->Location = System::Drawing::Point(4, 1);
			this->Bulgaria_USA->Name = L"Bulgaria_USA";
			this->Bulgaria_USA->Size = System::Drawing::Size(26, 17);
			this->Bulgaria_USA->TabIndex = 0;
			this->Bulgaria_USA->Text = L"10";
			this->Bulgaria_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Bulgaria_USSR
			// 
			this->Bulgaria_USSR->AutoSize = true;
			this->Bulgaria_USSR->BackColor = System::Drawing::Color::White;
			this->Bulgaria_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Bulgaria_USSR->ForeColor = System::Drawing::Color::Red;
			this->Bulgaria_USSR->Location = System::Drawing::Point(37, 1);
			this->Bulgaria_USSR->Name = L"Bulgaria_USSR";
			this->Bulgaria_USSR->Size = System::Drawing::Size(26, 17);
			this->Bulgaria_USSR->TabIndex = 5;
			this->Bulgaria_USSR->Text = L"10";
			this->Bulgaria_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label173
			// 
			this->label173->AutoSize = true;
			this->label173->Location = System::Drawing::Point(17, 460);
			this->label173->Name = L"label173";
			this->label173->Size = System::Drawing::Size(62, 17);
			this->label173->TabIndex = 21;
			this->label173->Text = L"Hungary";
			// 
			// label174
			// 
			this->label174->AutoSize = true;
			this->label174->Location = System::Drawing::Point(17, 66);
			this->label174->Name = L"label174";
			this->label174->Size = System::Drawing::Size(50, 17);
			this->label174->TabIndex = 9;
			this->label174->Text = L"Benlux";
			// 
			// tableLayoutPanel58
			// 
			this->tableLayoutPanel58->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel58->ColumnCount = 2;
			this->tableLayoutPanel58->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel58->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel58->Controls->Add(this->Italy_USA, 0, 0);
			this->tableLayoutPanel58->Controls->Add(this->Italy_USSR, 1, 0);
			this->tableLayoutPanel58->Location = System::Drawing::Point(127, 43);
			this->tableLayoutPanel58->Name = L"tableLayoutPanel58";
			this->tableLayoutPanel58->RowCount = 1;
			this->tableLayoutPanel58->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel58->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel58->TabIndex = 23;
			// 
			// Italy_USA
			// 
			this->Italy_USA->AutoSize = true;
			this->Italy_USA->BackColor = System::Drawing::Color::White;
			this->Italy_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Italy_USA->ForeColor = System::Drawing::Color::Blue;
			this->Italy_USA->Location = System::Drawing::Point(4, 1);
			this->Italy_USA->Name = L"Italy_USA";
			this->Italy_USA->Size = System::Drawing::Size(26, 17);
			this->Italy_USA->TabIndex = 0;
			this->Italy_USA->Text = L"10";
			this->Italy_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Italy_USSR
			// 
			this->Italy_USSR->AutoSize = true;
			this->Italy_USSR->BackColor = System::Drawing::Color::White;
			this->Italy_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Italy_USSR->ForeColor = System::Drawing::Color::Red;
			this->Italy_USSR->Location = System::Drawing::Point(37, 1);
			this->Italy_USSR->Name = L"Italy_USSR";
			this->Italy_USSR->Size = System::Drawing::Size(26, 17);
			this->Italy_USSR->TabIndex = 5;
			this->Italy_USSR->Text = L"10";
			this->Italy_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label177
			// 
			this->label177->AutoSize = true;
			this->label177->Location = System::Drawing::Point(17, 23);
			this->label177->Name = L"label177";
			this->label177->Size = System::Drawing::Size(52, 17);
			this->label177->TabIndex = 7;
			this->label177->Text = L"Austria";
			// 
			// tableLayoutPanel59
			// 
			this->tableLayoutPanel59->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel59->ColumnCount = 2;
			this->tableLayoutPanel59->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel59->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel59->Controls->Add(this->Hungary_USA, 0, 0);
			this->tableLayoutPanel59->Controls->Add(this->Hungary_USSR, 1, 0);
			this->tableLayoutPanel59->Location = System::Drawing::Point(20, 480);
			this->tableLayoutPanel59->Name = L"tableLayoutPanel59";
			this->tableLayoutPanel59->RowCount = 1;
			this->tableLayoutPanel59->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel59->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel59->TabIndex = 20;
			// 
			// Hungary_USA
			// 
			this->Hungary_USA->AutoSize = true;
			this->Hungary_USA->BackColor = System::Drawing::Color::White;
			this->Hungary_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Hungary_USA->ForeColor = System::Drawing::Color::Blue;
			this->Hungary_USA->Location = System::Drawing::Point(4, 1);
			this->Hungary_USA->Name = L"Hungary_USA";
			this->Hungary_USA->Size = System::Drawing::Size(26, 17);
			this->Hungary_USA->TabIndex = 0;
			this->Hungary_USA->Text = L"10";
			this->Hungary_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Hungary_USSR
			// 
			this->Hungary_USSR->AutoSize = true;
			this->Hungary_USSR->BackColor = System::Drawing::Color::White;
			this->Hungary_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Hungary_USSR->ForeColor = System::Drawing::Color::Red;
			this->Hungary_USSR->Location = System::Drawing::Point(37, 1);
			this->Hungary_USSR->Name = L"Hungary_USSR";
			this->Hungary_USSR->Size = System::Drawing::Size(26, 17);
			this->Hungary_USSR->TabIndex = 5;
			this->Hungary_USSR->Text = L"10";
			this->Hungary_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel60
			// 
			this->tableLayoutPanel60->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel60->ColumnCount = 2;
			this->tableLayoutPanel60->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel60->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel60->Controls->Add(this->Benlux_USA, 0, 0);
			this->tableLayoutPanel60->Controls->Add(this->Benlux_USSR, 1, 0);
			this->tableLayoutPanel60->Location = System::Drawing::Point(20, 86);
			this->tableLayoutPanel60->Name = L"tableLayoutPanel60";
			this->tableLayoutPanel60->RowCount = 1;
			this->tableLayoutPanel60->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel60->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel60->TabIndex = 8;
			// 
			// Benlux_USA
			// 
			this->Benlux_USA->AutoSize = true;
			this->Benlux_USA->BackColor = System::Drawing::Color::White;
			this->Benlux_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Benlux_USA->ForeColor = System::Drawing::Color::Blue;
			this->Benlux_USA->Location = System::Drawing::Point(4, 1);
			this->Benlux_USA->Name = L"Benlux_USA";
			this->Benlux_USA->Size = System::Drawing::Size(26, 17);
			this->Benlux_USA->TabIndex = 0;
			this->Benlux_USA->Text = L"10";
			this->Benlux_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Benlux_USSR
			// 
			this->Benlux_USSR->AutoSize = true;
			this->Benlux_USSR->BackColor = System::Drawing::Color::White;
			this->Benlux_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Benlux_USSR->ForeColor = System::Drawing::Color::Red;
			this->Benlux_USSR->Location = System::Drawing::Point(37, 1);
			this->Benlux_USSR->Name = L"Benlux_USSR";
			this->Benlux_USSR->Size = System::Drawing::Size(26, 17);
			this->Benlux_USSR->TabIndex = 5;
			this->Benlux_USSR->Text = L"10";
			this->Benlux_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel61
			// 
			this->tableLayoutPanel61->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel61->ColumnCount = 2;
			this->tableLayoutPanel61->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel61->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel61->Controls->Add(this->Austria_USA, 0, 0);
			this->tableLayoutPanel61->Controls->Add(this->Austria_USSR, 1, 0);
			this->tableLayoutPanel61->Location = System::Drawing::Point(20, 43);
			this->tableLayoutPanel61->Name = L"tableLayoutPanel61";
			this->tableLayoutPanel61->RowCount = 1;
			this->tableLayoutPanel61->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel61->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel61->TabIndex = 6;
			// 
			// Austria_USA
			// 
			this->Austria_USA->AutoSize = true;
			this->Austria_USA->BackColor = System::Drawing::Color::White;
			this->Austria_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Austria_USA->ForeColor = System::Drawing::Color::Blue;
			this->Austria_USA->Location = System::Drawing::Point(4, 1);
			this->Austria_USA->Name = L"Austria_USA";
			this->Austria_USA->Size = System::Drawing::Size(26, 17);
			this->Austria_USA->TabIndex = 0;
			this->Austria_USA->Text = L"10";
			this->Austria_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Austria_USSR
			// 
			this->Austria_USSR->AutoSize = true;
			this->Austria_USSR->BackColor = System::Drawing::Color::White;
			this->Austria_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Austria_USSR->ForeColor = System::Drawing::Color::Red;
			this->Austria_USSR->Location = System::Drawing::Point(37, 1);
			this->Austria_USSR->Name = L"Austria_USSR";
			this->Austria_USSR->Size = System::Drawing::Size(26, 17);
			this->Austria_USSR->TabIndex = 5;
			this->Austria_USSR->Text = L"10";
			this->Austria_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->label190);
			this->groupBox5->Controls->Add(this->label191);
			this->groupBox5->Controls->Add(this->tableLayoutPanel64);
			this->groupBox5->Controls->Add(this->tableLayoutPanel65);
			this->groupBox5->Controls->Add(this->label196);
			this->groupBox5->Controls->Add(this->label197);
			this->groupBox5->Controls->Add(this->tableLayoutPanel66);
			this->groupBox5->Controls->Add(this->tableLayoutPanel67);
			this->groupBox5->Controls->Add(this->label202);
			this->groupBox5->Controls->Add(this->label203);
			this->groupBox5->Controls->Add(this->tableLayoutPanel68);
			this->groupBox5->Controls->Add(this->label206);
			this->groupBox5->Controls->Add(this->tableLayoutPanel69);
			this->groupBox5->Controls->Add(this->label209);
			this->groupBox5->Controls->Add(this->label210);
			this->groupBox5->Controls->Add(this->tableLayoutPanel70);
			this->groupBox5->Controls->Add(this->label213);
			this->groupBox5->Controls->Add(this->tableLayoutPanel71);
			this->groupBox5->Controls->Add(this->tableLayoutPanel72);
			this->groupBox5->Controls->Add(this->tableLayoutPanel73);
			this->groupBox5->Location = System::Drawing::Point(911, 31);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(191, 258);
			this->groupBox5->TabIndex = 8;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Middle East";
			// 
			// label190
			// 
			this->label190->AutoSize = true;
			this->label190->Location = System::Drawing::Point(100, 196);
			this->label190->Name = L"label190";
			this->label190->Size = System::Drawing::Size(40, 17);
			this->label190->TabIndex = 29;
			this->label190->Text = L"Syria";
			// 
			// label191
			// 
			this->label191->AutoSize = true;
			this->label191->Location = System::Drawing::Point(17, 196);
			this->label191->Name = L"label191";
			this->label191->Size = System::Drawing::Size(42, 17);
			this->label191->TabIndex = 13;
			this->label191->Text = L"Israel";
			// 
			// tableLayoutPanel64
			// 
			this->tableLayoutPanel64->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel64->ColumnCount = 2;
			this->tableLayoutPanel64->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel64->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel64->Controls->Add(this->Syria_USA, 0, 0);
			this->tableLayoutPanel64->Controls->Add(this->Syria_USSR, 1, 0);
			this->tableLayoutPanel64->Location = System::Drawing::Point(103, 216);
			this->tableLayoutPanel64->Name = L"tableLayoutPanel64";
			this->tableLayoutPanel64->RowCount = 1;
			this->tableLayoutPanel64->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel64->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel64->TabIndex = 28;
			// 
			// Syria_USA
			// 
			this->Syria_USA->AutoSize = true;
			this->Syria_USA->BackColor = System::Drawing::Color::White;
			this->Syria_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Syria_USA->ForeColor = System::Drawing::Color::Blue;
			this->Syria_USA->Location = System::Drawing::Point(4, 1);
			this->Syria_USA->Name = L"Syria_USA";
			this->Syria_USA->Size = System::Drawing::Size(26, 17);
			this->Syria_USA->TabIndex = 0;
			this->Syria_USA->Text = L"10";
			this->Syria_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Syria_USSR
			// 
			this->Syria_USSR->AutoSize = true;
			this->Syria_USSR->BackColor = System::Drawing::Color::White;
			this->Syria_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Syria_USSR->ForeColor = System::Drawing::Color::Red;
			this->Syria_USSR->Location = System::Drawing::Point(37, 1);
			this->Syria_USSR->Name = L"Syria_USSR";
			this->Syria_USSR->Size = System::Drawing::Size(26, 17);
			this->Syria_USSR->TabIndex = 5;
			this->Syria_USSR->Text = L"10";
			this->Syria_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel65
			// 
			this->tableLayoutPanel65->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel65->ColumnCount = 2;
			this->tableLayoutPanel65->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel65->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel65->Controls->Add(this->Israel_USA, 0, 0);
			this->tableLayoutPanel65->Controls->Add(this->Israel_USSR, 1, 0);
			this->tableLayoutPanel65->Location = System::Drawing::Point(20, 216);
			this->tableLayoutPanel65->Name = L"tableLayoutPanel65";
			this->tableLayoutPanel65->RowCount = 1;
			this->tableLayoutPanel65->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel65->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel65->TabIndex = 12;
			// 
			// Israel_USA
			// 
			this->Israel_USA->AutoSize = true;
			this->Israel_USA->BackColor = System::Drawing::Color::White;
			this->Israel_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Israel_USA->ForeColor = System::Drawing::Color::Blue;
			this->Israel_USA->Location = System::Drawing::Point(4, 1);
			this->Israel_USA->Name = L"Israel_USA";
			this->Israel_USA->Size = System::Drawing::Size(26, 17);
			this->Israel_USA->TabIndex = 0;
			this->Israel_USA->Text = L"10";
			this->Israel_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Israel_USSR
			// 
			this->Israel_USSR->AutoSize = true;
			this->Israel_USSR->BackColor = System::Drawing::Color::White;
			this->Israel_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Israel_USSR->ForeColor = System::Drawing::Color::Red;
			this->Israel_USSR->Location = System::Drawing::Point(37, 1);
			this->Israel_USSR->Name = L"Israel_USSR";
			this->Israel_USSR->Size = System::Drawing::Size(26, 17);
			this->Israel_USSR->TabIndex = 5;
			this->Israel_USSR->Text = L"10";
			this->Israel_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label196
			// 
			this->label196->AutoSize = true;
			this->label196->Location = System::Drawing::Point(100, 152);
			this->label196->Name = L"label196";
			this->label196->Size = System::Drawing::Size(89, 17);
			this->label196->TabIndex = 24;
			this->label196->Text = L"Saudi Arabia";
			// 
			// label197
			// 
			this->label197->AutoSize = true;
			this->label197->Location = System::Drawing::Point(17, 152);
			this->label197->Name = L"label197";
			this->label197->Size = System::Drawing::Size(32, 17);
			this->label197->TabIndex = 9;
			this->label197->Text = L"Iraq";
			// 
			// tableLayoutPanel66
			// 
			this->tableLayoutPanel66->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel66->ColumnCount = 2;
			this->tableLayoutPanel66->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel66->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel66->Controls->Add(this->SaudiArabia_USA, 0, 0);
			this->tableLayoutPanel66->Controls->Add(this->SaudiArabia_USSR, 1, 0);
			this->tableLayoutPanel66->Location = System::Drawing::Point(103, 172);
			this->tableLayoutPanel66->Name = L"tableLayoutPanel66";
			this->tableLayoutPanel66->RowCount = 1;
			this->tableLayoutPanel66->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel66->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel66->TabIndex = 22;
			// 
			// SaudiArabia_USA
			// 
			this->SaudiArabia_USA->AutoSize = true;
			this->SaudiArabia_USA->BackColor = System::Drawing::Color::White;
			this->SaudiArabia_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SaudiArabia_USA->ForeColor = System::Drawing::Color::Blue;
			this->SaudiArabia_USA->Location = System::Drawing::Point(4, 1);
			this->SaudiArabia_USA->Name = L"SaudiArabia_USA";
			this->SaudiArabia_USA->Size = System::Drawing::Size(26, 17);
			this->SaudiArabia_USA->TabIndex = 0;
			this->SaudiArabia_USA->Text = L"10";
			this->SaudiArabia_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// SaudiArabia_USSR
			// 
			this->SaudiArabia_USSR->AutoSize = true;
			this->SaudiArabia_USSR->BackColor = System::Drawing::Color::White;
			this->SaudiArabia_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SaudiArabia_USSR->ForeColor = System::Drawing::Color::Red;
			this->SaudiArabia_USSR->Location = System::Drawing::Point(37, 1);
			this->SaudiArabia_USSR->Name = L"SaudiArabia_USSR";
			this->SaudiArabia_USSR->Size = System::Drawing::Size(26, 17);
			this->SaudiArabia_USSR->TabIndex = 5;
			this->SaudiArabia_USSR->Text = L"10";
			this->SaudiArabia_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel67
			// 
			this->tableLayoutPanel67->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel67->ColumnCount = 2;
			this->tableLayoutPanel67->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel67->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel67->Controls->Add(this->Iraq_USA, 0, 0);
			this->tableLayoutPanel67->Controls->Add(this->Iraq_USSR, 1, 0);
			this->tableLayoutPanel67->Location = System::Drawing::Point(20, 172);
			this->tableLayoutPanel67->Name = L"tableLayoutPanel67";
			this->tableLayoutPanel67->RowCount = 1;
			this->tableLayoutPanel67->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel67->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel67->TabIndex = 8;
			// 
			// Iraq_USA
			// 
			this->Iraq_USA->AutoSize = true;
			this->Iraq_USA->BackColor = System::Drawing::Color::White;
			this->Iraq_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Iraq_USA->ForeColor = System::Drawing::Color::Blue;
			this->Iraq_USA->Location = System::Drawing::Point(4, 1);
			this->Iraq_USA->Name = L"Iraq_USA";
			this->Iraq_USA->Size = System::Drawing::Size(26, 17);
			this->Iraq_USA->TabIndex = 0;
			this->Iraq_USA->Text = L"10";
			this->Iraq_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Iraq_USSR
			// 
			this->Iraq_USSR->AutoSize = true;
			this->Iraq_USSR->BackColor = System::Drawing::Color::White;
			this->Iraq_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Iraq_USSR->ForeColor = System::Drawing::Color::Red;
			this->Iraq_USSR->Location = System::Drawing::Point(37, 1);
			this->Iraq_USSR->Name = L"Iraq_USSR";
			this->Iraq_USSR->Size = System::Drawing::Size(26, 17);
			this->Iraq_USSR->TabIndex = 5;
			this->Iraq_USSR->Text = L"10";
			this->Iraq_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label202
			// 
			this->label202->AutoSize = true;
			this->label202->Location = System::Drawing::Point(100, 109);
			this->label202->Name = L"label202";
			this->label202->Size = System::Drawing::Size(42, 17);
			this->label202->TabIndex = 27;
			this->label202->Text = L"Libya";
			// 
			// label203
			// 
			this->label203->AutoSize = true;
			this->label203->Location = System::Drawing::Point(17, 109);
			this->label203->Name = L"label203";
			this->label203->Size = System::Drawing::Size(32, 17);
			this->label203->TabIndex = 11;
			this->label203->Text = L"Iran";
			// 
			// tableLayoutPanel68
			// 
			this->tableLayoutPanel68->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel68->ColumnCount = 2;
			this->tableLayoutPanel68->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel68->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel68->Controls->Add(this->Libya_USA, 0, 0);
			this->tableLayoutPanel68->Controls->Add(this->Libya_USSR, 1, 0);
			this->tableLayoutPanel68->Location = System::Drawing::Point(103, 129);
			this->tableLayoutPanel68->Name = L"tableLayoutPanel68";
			this->tableLayoutPanel68->RowCount = 1;
			this->tableLayoutPanel68->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel68->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel68->TabIndex = 26;
			// 
			// Libya_USA
			// 
			this->Libya_USA->AutoSize = true;
			this->Libya_USA->BackColor = System::Drawing::Color::White;
			this->Libya_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Libya_USA->ForeColor = System::Drawing::Color::Blue;
			this->Libya_USA->Location = System::Drawing::Point(4, 1);
			this->Libya_USA->Name = L"Libya_USA";
			this->Libya_USA->Size = System::Drawing::Size(26, 17);
			this->Libya_USA->TabIndex = 0;
			this->Libya_USA->Text = L"10";
			this->Libya_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Libya_USSR
			// 
			this->Libya_USSR->AutoSize = true;
			this->Libya_USSR->BackColor = System::Drawing::Color::White;
			this->Libya_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Libya_USSR->ForeColor = System::Drawing::Color::Red;
			this->Libya_USSR->Location = System::Drawing::Point(37, 1);
			this->Libya_USSR->Name = L"Libya_USSR";
			this->Libya_USSR->Size = System::Drawing::Size(26, 17);
			this->Libya_USSR->TabIndex = 5;
			this->Libya_USSR->Text = L"10";
			this->Libya_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label206
			// 
			this->label206->AutoSize = true;
			this->label206->Location = System::Drawing::Point(100, 66);
			this->label206->Name = L"label206";
			this->label206->Size = System::Drawing::Size(64, 17);
			this->label206->TabIndex = 25;
			this->label206->Text = L"Lebanon";
			// 
			// tableLayoutPanel69
			// 
			this->tableLayoutPanel69->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel69->ColumnCount = 2;
			this->tableLayoutPanel69->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel69->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel69->Controls->Add(this->Iran_USA, 0, 0);
			this->tableLayoutPanel69->Controls->Add(this->Iran_USSR, 1, 0);
			this->tableLayoutPanel69->Location = System::Drawing::Point(20, 129);
			this->tableLayoutPanel69->Name = L"tableLayoutPanel69";
			this->tableLayoutPanel69->RowCount = 1;
			this->tableLayoutPanel69->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel69->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel69->TabIndex = 10;
			// 
			// Iran_USA
			// 
			this->Iran_USA->AutoSize = true;
			this->Iran_USA->BackColor = System::Drawing::Color::White;
			this->Iran_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Iran_USA->ForeColor = System::Drawing::Color::Blue;
			this->Iran_USA->Location = System::Drawing::Point(4, 1);
			this->Iran_USA->Name = L"Iran_USA";
			this->Iran_USA->Size = System::Drawing::Size(26, 17);
			this->Iran_USA->TabIndex = 0;
			this->Iran_USA->Text = L"10";
			this->Iran_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Iran_USSR
			// 
			this->Iran_USSR->AutoSize = true;
			this->Iran_USSR->BackColor = System::Drawing::Color::White;
			this->Iran_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Iran_USSR->ForeColor = System::Drawing::Color::Red;
			this->Iran_USSR->Location = System::Drawing::Point(37, 1);
			this->Iran_USSR->Name = L"Iran_USSR";
			this->Iran_USSR->Size = System::Drawing::Size(26, 17);
			this->Iran_USSR->TabIndex = 5;
			this->Iran_USSR->Text = L"10";
			this->Iran_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label209
			// 
			this->label209->AutoSize = true;
			this->label209->Location = System::Drawing::Point(100, 23);
			this->label209->Name = L"label209";
			this->label209->Size = System::Drawing::Size(52, 17);
			this->label209->TabIndex = 21;
			this->label209->Text = L"Jordan";
			// 
			// label210
			// 
			this->label210->AutoSize = true;
			this->label210->Location = System::Drawing::Point(17, 66);
			this->label210->Name = L"label210";
			this->label210->Size = System::Drawing::Size(78, 17);
			this->label210->TabIndex = 9;
			this->label210->Text = L"Gulf States";
			// 
			// tableLayoutPanel70
			// 
			this->tableLayoutPanel70->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel70->ColumnCount = 2;
			this->tableLayoutPanel70->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel70->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel70->Controls->Add(this->Lebanon_USA, 0, 0);
			this->tableLayoutPanel70->Controls->Add(this->Lebanon_USSR, 1, 0);
			this->tableLayoutPanel70->Location = System::Drawing::Point(103, 86);
			this->tableLayoutPanel70->Name = L"tableLayoutPanel70";
			this->tableLayoutPanel70->RowCount = 1;
			this->tableLayoutPanel70->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel70->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel70->TabIndex = 23;
			// 
			// Lebanon_USA
			// 
			this->Lebanon_USA->AutoSize = true;
			this->Lebanon_USA->BackColor = System::Drawing::Color::White;
			this->Lebanon_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lebanon_USA->ForeColor = System::Drawing::Color::Blue;
			this->Lebanon_USA->Location = System::Drawing::Point(4, 1);
			this->Lebanon_USA->Name = L"Lebanon_USA";
			this->Lebanon_USA->Size = System::Drawing::Size(26, 17);
			this->Lebanon_USA->TabIndex = 0;
			this->Lebanon_USA->Text = L"10";
			this->Lebanon_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Lebanon_USSR
			// 
			this->Lebanon_USSR->AutoSize = true;
			this->Lebanon_USSR->BackColor = System::Drawing::Color::White;
			this->Lebanon_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lebanon_USSR->ForeColor = System::Drawing::Color::Red;
			this->Lebanon_USSR->Location = System::Drawing::Point(37, 1);
			this->Lebanon_USSR->Name = L"Lebanon_USSR";
			this->Lebanon_USSR->Size = System::Drawing::Size(26, 17);
			this->Lebanon_USSR->TabIndex = 5;
			this->Lebanon_USSR->Text = L"10";
			this->Lebanon_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label213
			// 
			this->label213->AutoSize = true;
			this->label213->Location = System::Drawing::Point(17, 23);
			this->label213->Name = L"label213";
			this->label213->Size = System::Drawing::Size(44, 17);
			this->label213->TabIndex = 7;
			this->label213->Text = L"Egypt";
			// 
			// tableLayoutPanel71
			// 
			this->tableLayoutPanel71->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel71->ColumnCount = 2;
			this->tableLayoutPanel71->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel71->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel71->Controls->Add(this->Jordan_USA, 0, 0);
			this->tableLayoutPanel71->Controls->Add(this->Jordan_USSR, 1, 0);
			this->tableLayoutPanel71->Location = System::Drawing::Point(103, 43);
			this->tableLayoutPanel71->Name = L"tableLayoutPanel71";
			this->tableLayoutPanel71->RowCount = 1;
			this->tableLayoutPanel71->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel71->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel71->TabIndex = 20;
			// 
			// Jordan_USA
			// 
			this->Jordan_USA->AutoSize = true;
			this->Jordan_USA->BackColor = System::Drawing::Color::White;
			this->Jordan_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Jordan_USA->ForeColor = System::Drawing::Color::Blue;
			this->Jordan_USA->Location = System::Drawing::Point(4, 1);
			this->Jordan_USA->Name = L"Jordan_USA";
			this->Jordan_USA->Size = System::Drawing::Size(26, 17);
			this->Jordan_USA->TabIndex = 0;
			this->Jordan_USA->Text = L"10";
			this->Jordan_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Jordan_USSR
			// 
			this->Jordan_USSR->AutoSize = true;
			this->Jordan_USSR->BackColor = System::Drawing::Color::White;
			this->Jordan_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Jordan_USSR->ForeColor = System::Drawing::Color::Red;
			this->Jordan_USSR->Location = System::Drawing::Point(37, 1);
			this->Jordan_USSR->Name = L"Jordan_USSR";
			this->Jordan_USSR->Size = System::Drawing::Size(26, 17);
			this->Jordan_USSR->TabIndex = 5;
			this->Jordan_USSR->Text = L"10";
			this->Jordan_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel72
			// 
			this->tableLayoutPanel72->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel72->ColumnCount = 2;
			this->tableLayoutPanel72->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel72->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel72->Controls->Add(this->GulfStates_USA, 0, 0);
			this->tableLayoutPanel72->Controls->Add(this->GulfStates_USSR, 1, 0);
			this->tableLayoutPanel72->Location = System::Drawing::Point(20, 86);
			this->tableLayoutPanel72->Name = L"tableLayoutPanel72";
			this->tableLayoutPanel72->RowCount = 1;
			this->tableLayoutPanel72->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel72->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel72->TabIndex = 8;
			// 
			// GulfStates_USA
			// 
			this->GulfStates_USA->AutoSize = true;
			this->GulfStates_USA->BackColor = System::Drawing::Color::White;
			this->GulfStates_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GulfStates_USA->ForeColor = System::Drawing::Color::Blue;
			this->GulfStates_USA->Location = System::Drawing::Point(4, 1);
			this->GulfStates_USA->Name = L"GulfStates_USA";
			this->GulfStates_USA->Size = System::Drawing::Size(26, 17);
			this->GulfStates_USA->TabIndex = 0;
			this->GulfStates_USA->Text = L"10";
			this->GulfStates_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// GulfStates_USSR
			// 
			this->GulfStates_USSR->AutoSize = true;
			this->GulfStates_USSR->BackColor = System::Drawing::Color::White;
			this->GulfStates_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GulfStates_USSR->ForeColor = System::Drawing::Color::Red;
			this->GulfStates_USSR->Location = System::Drawing::Point(37, 1);
			this->GulfStates_USSR->Name = L"GulfStates_USSR";
			this->GulfStates_USSR->Size = System::Drawing::Size(26, 17);
			this->GulfStates_USSR->TabIndex = 5;
			this->GulfStates_USSR->Text = L"10";
			this->GulfStates_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel73
			// 
			this->tableLayoutPanel73->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel73->ColumnCount = 2;
			this->tableLayoutPanel73->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel73->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel73->Controls->Add(this->Egypt_USA, 0, 0);
			this->tableLayoutPanel73->Controls->Add(this->Egypt_USSR, 1, 0);
			this->tableLayoutPanel73->Location = System::Drawing::Point(20, 43);
			this->tableLayoutPanel73->Name = L"tableLayoutPanel73";
			this->tableLayoutPanel73->RowCount = 1;
			this->tableLayoutPanel73->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel73->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel73->TabIndex = 6;
			// 
			// Egypt_USA
			// 
			this->Egypt_USA->AutoSize = true;
			this->Egypt_USA->BackColor = System::Drawing::Color::White;
			this->Egypt_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Egypt_USA->ForeColor = System::Drawing::Color::Blue;
			this->Egypt_USA->Location = System::Drawing::Point(4, 1);
			this->Egypt_USA->Name = L"Egypt_USA";
			this->Egypt_USA->Size = System::Drawing::Size(26, 17);
			this->Egypt_USA->TabIndex = 0;
			this->Egypt_USA->Text = L"10";
			this->Egypt_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Egypt_USSR
			// 
			this->Egypt_USSR->AutoSize = true;
			this->Egypt_USSR->BackColor = System::Drawing::Color::White;
			this->Egypt_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Egypt_USSR->ForeColor = System::Drawing::Color::Red;
			this->Egypt_USSR->Location = System::Drawing::Point(37, 1);
			this->Egypt_USSR->Name = L"Egypt_USSR";
			this->Egypt_USSR->Size = System::Drawing::Size(26, 17);
			this->Egypt_USSR->TabIndex = 5;
			this->Egypt_USSR->Text = L"10";
			this->Egypt_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->label220);
			this->groupBox6->Controls->Add(this->label221);
			this->groupBox6->Controls->Add(this->tableLayoutPanel74);
			this->groupBox6->Controls->Add(this->tableLayoutPanel75);
			this->groupBox6->Controls->Add(this->label226);
			this->groupBox6->Controls->Add(this->label227);
			this->groupBox6->Controls->Add(this->tableLayoutPanel76);
			this->groupBox6->Controls->Add(this->tableLayoutPanel77);
			this->groupBox6->Controls->Add(this->label232);
			this->groupBox6->Controls->Add(this->label233);
			this->groupBox6->Controls->Add(this->tableLayoutPanel78);
			this->groupBox6->Controls->Add(this->label236);
			this->groupBox6->Controls->Add(this->tableLayoutPanel79);
			this->groupBox6->Controls->Add(this->label239);
			this->groupBox6->Controls->Add(this->label240);
			this->groupBox6->Controls->Add(this->tableLayoutPanel80);
			this->groupBox6->Controls->Add(this->label243);
			this->groupBox6->Controls->Add(this->tableLayoutPanel81);
			this->groupBox6->Controls->Add(this->tableLayoutPanel82);
			this->groupBox6->Controls->Add(this->tableLayoutPanel83);
			this->groupBox6->Location = System::Drawing::Point(1108, 31);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(191, 258);
			this->groupBox6->TabIndex = 9;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"South America";
			// 
			// label220
			// 
			this->label220->AutoSize = true;
			this->label220->Location = System::Drawing::Point(100, 196);
			this->label220->Name = L"label220";
			this->label220->Size = System::Drawing::Size(75, 17);
			this->label220->TabIndex = 29;
			this->label220->Text = L"Venezuela";
			// 
			// label221
			// 
			this->label221->AutoSize = true;
			this->label221->Location = System::Drawing::Point(17, 196);
			this->label221->Name = L"label221";
			this->label221->Size = System::Drawing::Size(66, 17);
			this->label221->TabIndex = 13;
			this->label221->Text = L"Colombia";
			// 
			// tableLayoutPanel74
			// 
			this->tableLayoutPanel74->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel74->ColumnCount = 2;
			this->tableLayoutPanel74->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel74->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel74->Controls->Add(this->Venezuela_USA, 0, 0);
			this->tableLayoutPanel74->Controls->Add(this->Venezuela_USSR, 1, 0);
			this->tableLayoutPanel74->Location = System::Drawing::Point(103, 216);
			this->tableLayoutPanel74->Name = L"tableLayoutPanel74";
			this->tableLayoutPanel74->RowCount = 1;
			this->tableLayoutPanel74->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel74->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel74->TabIndex = 28;
			// 
			// Venezuela_USA
			// 
			this->Venezuela_USA->AutoSize = true;
			this->Venezuela_USA->BackColor = System::Drawing::Color::White;
			this->Venezuela_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Venezuela_USA->ForeColor = System::Drawing::Color::Blue;
			this->Venezuela_USA->Location = System::Drawing::Point(4, 1);
			this->Venezuela_USA->Name = L"Venezuela_USA";
			this->Venezuela_USA->Size = System::Drawing::Size(26, 17);
			this->Venezuela_USA->TabIndex = 0;
			this->Venezuela_USA->Text = L"10";
			this->Venezuela_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Venezuela_USSR
			// 
			this->Venezuela_USSR->AutoSize = true;
			this->Venezuela_USSR->BackColor = System::Drawing::Color::White;
			this->Venezuela_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Venezuela_USSR->ForeColor = System::Drawing::Color::Red;
			this->Venezuela_USSR->Location = System::Drawing::Point(37, 1);
			this->Venezuela_USSR->Name = L"Venezuela_USSR";
			this->Venezuela_USSR->Size = System::Drawing::Size(26, 17);
			this->Venezuela_USSR->TabIndex = 5;
			this->Venezuela_USSR->Text = L"10";
			this->Venezuela_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel75
			// 
			this->tableLayoutPanel75->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel75->ColumnCount = 2;
			this->tableLayoutPanel75->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel75->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel75->Controls->Add(this->Colombia_USA, 0, 0);
			this->tableLayoutPanel75->Controls->Add(this->Colombia_USSR, 1, 0);
			this->tableLayoutPanel75->Location = System::Drawing::Point(20, 216);
			this->tableLayoutPanel75->Name = L"tableLayoutPanel75";
			this->tableLayoutPanel75->RowCount = 1;
			this->tableLayoutPanel75->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel75->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel75->TabIndex = 12;
			// 
			// Colombia_USA
			// 
			this->Colombia_USA->AutoSize = true;
			this->Colombia_USA->BackColor = System::Drawing::Color::White;
			this->Colombia_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Colombia_USA->ForeColor = System::Drawing::Color::Blue;
			this->Colombia_USA->Location = System::Drawing::Point(4, 1);
			this->Colombia_USA->Name = L"Colombia_USA";
			this->Colombia_USA->Size = System::Drawing::Size(26, 17);
			this->Colombia_USA->TabIndex = 0;
			this->Colombia_USA->Text = L"10";
			this->Colombia_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Colombia_USSR
			// 
			this->Colombia_USSR->AutoSize = true;
			this->Colombia_USSR->BackColor = System::Drawing::Color::White;
			this->Colombia_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Colombia_USSR->ForeColor = System::Drawing::Color::Red;
			this->Colombia_USSR->Location = System::Drawing::Point(37, 1);
			this->Colombia_USSR->Name = L"Colombia_USSR";
			this->Colombia_USSR->Size = System::Drawing::Size(26, 17);
			this->Colombia_USSR->TabIndex = 5;
			this->Colombia_USSR->Text = L"10";
			this->Colombia_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label226
			// 
			this->label226->AutoSize = true;
			this->label226->Location = System::Drawing::Point(100, 152);
			this->label226->Name = L"label226";
			this->label226->Size = System::Drawing::Size(62, 17);
			this->label226->TabIndex = 24;
			this->label226->Text = L"Uruguay";
			// 
			// label227
			// 
			this->label227->AutoSize = true;
			this->label227->Location = System::Drawing::Point(17, 152);
			this->label227->Name = L"label227";
			this->label227->Size = System::Drawing::Size(39, 17);
			this->label227->TabIndex = 9;
			this->label227->Text = L"Chile";
			// 
			// tableLayoutPanel76
			// 
			this->tableLayoutPanel76->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel76->ColumnCount = 2;
			this->tableLayoutPanel76->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel76->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel76->Controls->Add(this->Uruguay_USA, 0, 0);
			this->tableLayoutPanel76->Controls->Add(this->Uruguay_USSR, 1, 0);
			this->tableLayoutPanel76->Location = System::Drawing::Point(103, 172);
			this->tableLayoutPanel76->Name = L"tableLayoutPanel76";
			this->tableLayoutPanel76->RowCount = 1;
			this->tableLayoutPanel76->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel76->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel76->TabIndex = 22;
			// 
			// Uruguay_USA
			// 
			this->Uruguay_USA->AutoSize = true;
			this->Uruguay_USA->BackColor = System::Drawing::Color::White;
			this->Uruguay_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Uruguay_USA->ForeColor = System::Drawing::Color::Blue;
			this->Uruguay_USA->Location = System::Drawing::Point(4, 1);
			this->Uruguay_USA->Name = L"Uruguay_USA";
			this->Uruguay_USA->Size = System::Drawing::Size(26, 17);
			this->Uruguay_USA->TabIndex = 0;
			this->Uruguay_USA->Text = L"10";
			this->Uruguay_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Uruguay_USSR
			// 
			this->Uruguay_USSR->AutoSize = true;
			this->Uruguay_USSR->BackColor = System::Drawing::Color::White;
			this->Uruguay_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Uruguay_USSR->ForeColor = System::Drawing::Color::Red;
			this->Uruguay_USSR->Location = System::Drawing::Point(37, 1);
			this->Uruguay_USSR->Name = L"Uruguay_USSR";
			this->Uruguay_USSR->Size = System::Drawing::Size(26, 17);
			this->Uruguay_USSR->TabIndex = 5;
			this->Uruguay_USSR->Text = L"10";
			this->Uruguay_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel77
			// 
			this->tableLayoutPanel77->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel77->ColumnCount = 2;
			this->tableLayoutPanel77->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel77->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel77->Controls->Add(this->Chile_USA, 0, 0);
			this->tableLayoutPanel77->Controls->Add(this->Chile_USSR, 1, 0);
			this->tableLayoutPanel77->Location = System::Drawing::Point(20, 172);
			this->tableLayoutPanel77->Name = L"tableLayoutPanel77";
			this->tableLayoutPanel77->RowCount = 1;
			this->tableLayoutPanel77->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel77->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel77->TabIndex = 8;
			// 
			// Chile_USA
			// 
			this->Chile_USA->AutoSize = true;
			this->Chile_USA->BackColor = System::Drawing::Color::White;
			this->Chile_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Chile_USA->ForeColor = System::Drawing::Color::Blue;
			this->Chile_USA->Location = System::Drawing::Point(4, 1);
			this->Chile_USA->Name = L"Chile_USA";
			this->Chile_USA->Size = System::Drawing::Size(26, 17);
			this->Chile_USA->TabIndex = 0;
			this->Chile_USA->Text = L"10";
			this->Chile_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Chile_USSR
			// 
			this->Chile_USSR->AutoSize = true;
			this->Chile_USSR->BackColor = System::Drawing::Color::White;
			this->Chile_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Chile_USSR->ForeColor = System::Drawing::Color::Red;
			this->Chile_USSR->Location = System::Drawing::Point(37, 1);
			this->Chile_USSR->Name = L"Chile_USSR";
			this->Chile_USSR->Size = System::Drawing::Size(26, 17);
			this->Chile_USSR->TabIndex = 5;
			this->Chile_USSR->Text = L"10";
			this->Chile_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label232
			// 
			this->label232->AutoSize = true;
			this->label232->Location = System::Drawing::Point(100, 109);
			this->label232->Name = L"label232";
			this->label232->Size = System::Drawing::Size(38, 17);
			this->label232->TabIndex = 27;
			this->label232->Text = L"Peru";
			// 
			// label233
			// 
			this->label233->AutoSize = true;
			this->label233->Location = System::Drawing::Point(17, 109);
			this->label233->Name = L"label233";
			this->label233->Size = System::Drawing::Size(49, 17);
			this->label233->TabIndex = 11;
			this->label233->Text = L"Bolivia";
			// 
			// tableLayoutPanel78
			// 
			this->tableLayoutPanel78->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel78->ColumnCount = 2;
			this->tableLayoutPanel78->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel78->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel78->Controls->Add(this->Peru_USA, 0, 0);
			this->tableLayoutPanel78->Controls->Add(this->Peru_USSR, 1, 0);
			this->tableLayoutPanel78->Location = System::Drawing::Point(103, 129);
			this->tableLayoutPanel78->Name = L"tableLayoutPanel78";
			this->tableLayoutPanel78->RowCount = 1;
			this->tableLayoutPanel78->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel78->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel78->TabIndex = 26;
			// 
			// Peru_USA
			// 
			this->Peru_USA->AutoSize = true;
			this->Peru_USA->BackColor = System::Drawing::Color::White;
			this->Peru_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Peru_USA->ForeColor = System::Drawing::Color::Blue;
			this->Peru_USA->Location = System::Drawing::Point(4, 1);
			this->Peru_USA->Name = L"Peru_USA";
			this->Peru_USA->Size = System::Drawing::Size(26, 17);
			this->Peru_USA->TabIndex = 0;
			this->Peru_USA->Text = L"10";
			this->Peru_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Peru_USSR
			// 
			this->Peru_USSR->AutoSize = true;
			this->Peru_USSR->BackColor = System::Drawing::Color::White;
			this->Peru_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Peru_USSR->ForeColor = System::Drawing::Color::Red;
			this->Peru_USSR->Location = System::Drawing::Point(37, 1);
			this->Peru_USSR->Name = L"Peru_USSR";
			this->Peru_USSR->Size = System::Drawing::Size(26, 17);
			this->Peru_USSR->TabIndex = 5;
			this->Peru_USSR->Text = L"10";
			this->Peru_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label236
			// 
			this->label236->AutoSize = true;
			this->label236->Location = System::Drawing::Point(100, 66);
			this->label236->Name = L"label236";
			this->label236->Size = System::Drawing::Size(69, 17);
			this->label236->TabIndex = 25;
			this->label236->Text = L"Paraguay";
			// 
			// tableLayoutPanel79
			// 
			this->tableLayoutPanel79->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel79->ColumnCount = 2;
			this->tableLayoutPanel79->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel79->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel79->Controls->Add(this->Bolivia_USA, 0, 0);
			this->tableLayoutPanel79->Controls->Add(this->Bolivia_USSR, 1, 0);
			this->tableLayoutPanel79->Location = System::Drawing::Point(20, 129);
			this->tableLayoutPanel79->Name = L"tableLayoutPanel79";
			this->tableLayoutPanel79->RowCount = 1;
			this->tableLayoutPanel79->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel79->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel79->TabIndex = 10;
			// 
			// Bolivia_USA
			// 
			this->Bolivia_USA->AutoSize = true;
			this->Bolivia_USA->BackColor = System::Drawing::Color::White;
			this->Bolivia_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Bolivia_USA->ForeColor = System::Drawing::Color::Blue;
			this->Bolivia_USA->Location = System::Drawing::Point(4, 1);
			this->Bolivia_USA->Name = L"Bolivia_USA";
			this->Bolivia_USA->Size = System::Drawing::Size(26, 17);
			this->Bolivia_USA->TabIndex = 0;
			this->Bolivia_USA->Text = L"10";
			this->Bolivia_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Bolivia_USSR
			// 
			this->Bolivia_USSR->AutoSize = true;
			this->Bolivia_USSR->BackColor = System::Drawing::Color::White;
			this->Bolivia_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Bolivia_USSR->ForeColor = System::Drawing::Color::Red;
			this->Bolivia_USSR->Location = System::Drawing::Point(37, 1);
			this->Bolivia_USSR->Name = L"Bolivia_USSR";
			this->Bolivia_USSR->Size = System::Drawing::Size(26, 17);
			this->Bolivia_USSR->TabIndex = 5;
			this->Bolivia_USSR->Text = L"10";
			this->Bolivia_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label239
			// 
			this->label239->AutoSize = true;
			this->label239->Location = System::Drawing::Point(100, 23);
			this->label239->Name = L"label239";
			this->label239->Size = System::Drawing::Size(61, 17);
			this->label239->TabIndex = 21;
			this->label239->Text = L"Ecuador";
			// 
			// label240
			// 
			this->label240->AutoSize = true;
			this->label240->Location = System::Drawing::Point(17, 66);
			this->label240->Name = L"label240";
			this->label240->Size = System::Drawing::Size(43, 17);
			this->label240->TabIndex = 9;
			this->label240->Text = L"Brazil";
			// 
			// tableLayoutPanel80
			// 
			this->tableLayoutPanel80->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel80->ColumnCount = 2;
			this->tableLayoutPanel80->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel80->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel80->Controls->Add(this->Paraguay_USA, 0, 0);
			this->tableLayoutPanel80->Controls->Add(this->Paraguay_USSR, 1, 0);
			this->tableLayoutPanel80->Location = System::Drawing::Point(103, 86);
			this->tableLayoutPanel80->Name = L"tableLayoutPanel80";
			this->tableLayoutPanel80->RowCount = 1;
			this->tableLayoutPanel80->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel80->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel80->TabIndex = 23;
			// 
			// Paraguay_USA
			// 
			this->Paraguay_USA->AutoSize = true;
			this->Paraguay_USA->BackColor = System::Drawing::Color::White;
			this->Paraguay_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Paraguay_USA->ForeColor = System::Drawing::Color::Blue;
			this->Paraguay_USA->Location = System::Drawing::Point(4, 1);
			this->Paraguay_USA->Name = L"Paraguay_USA";
			this->Paraguay_USA->Size = System::Drawing::Size(26, 17);
			this->Paraguay_USA->TabIndex = 0;
			this->Paraguay_USA->Text = L"10";
			this->Paraguay_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Paraguay_USSR
			// 
			this->Paraguay_USSR->AutoSize = true;
			this->Paraguay_USSR->BackColor = System::Drawing::Color::White;
			this->Paraguay_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Paraguay_USSR->ForeColor = System::Drawing::Color::Red;
			this->Paraguay_USSR->Location = System::Drawing::Point(37, 1);
			this->Paraguay_USSR->Name = L"Paraguay_USSR";
			this->Paraguay_USSR->Size = System::Drawing::Size(26, 17);
			this->Paraguay_USSR->TabIndex = 5;
			this->Paraguay_USSR->Text = L"10";
			this->Paraguay_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label243
			// 
			this->label243->AutoSize = true;
			this->label243->Location = System::Drawing::Point(17, 23);
			this->label243->Name = L"label243";
			this->label243->Size = System::Drawing::Size(69, 17);
			this->label243->TabIndex = 7;
			this->label243->Text = L"Argentina";
			// 
			// tableLayoutPanel81
			// 
			this->tableLayoutPanel81->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel81->ColumnCount = 2;
			this->tableLayoutPanel81->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel81->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel81->Controls->Add(this->Ecuador_USA, 0, 0);
			this->tableLayoutPanel81->Controls->Add(this->Ecuador_USSR, 1, 0);
			this->tableLayoutPanel81->Location = System::Drawing::Point(103, 43);
			this->tableLayoutPanel81->Name = L"tableLayoutPanel81";
			this->tableLayoutPanel81->RowCount = 1;
			this->tableLayoutPanel81->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel81->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel81->TabIndex = 20;
			// 
			// Ecuador_USA
			// 
			this->Ecuador_USA->AutoSize = true;
			this->Ecuador_USA->BackColor = System::Drawing::Color::White;
			this->Ecuador_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ecuador_USA->ForeColor = System::Drawing::Color::Blue;
			this->Ecuador_USA->Location = System::Drawing::Point(4, 1);
			this->Ecuador_USA->Name = L"Ecuador_USA";
			this->Ecuador_USA->Size = System::Drawing::Size(26, 17);
			this->Ecuador_USA->TabIndex = 0;
			this->Ecuador_USA->Text = L"10";
			this->Ecuador_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Ecuador_USSR
			// 
			this->Ecuador_USSR->AutoSize = true;
			this->Ecuador_USSR->BackColor = System::Drawing::Color::White;
			this->Ecuador_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ecuador_USSR->ForeColor = System::Drawing::Color::Red;
			this->Ecuador_USSR->Location = System::Drawing::Point(37, 1);
			this->Ecuador_USSR->Name = L"Ecuador_USSR";
			this->Ecuador_USSR->Size = System::Drawing::Size(26, 17);
			this->Ecuador_USSR->TabIndex = 5;
			this->Ecuador_USSR->Text = L"10";
			this->Ecuador_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel82
			// 
			this->tableLayoutPanel82->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel82->ColumnCount = 2;
			this->tableLayoutPanel82->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel82->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel82->Controls->Add(this->Brazil_USA, 0, 0);
			this->tableLayoutPanel82->Controls->Add(this->Brazil_USSR, 1, 0);
			this->tableLayoutPanel82->Location = System::Drawing::Point(20, 86);
			this->tableLayoutPanel82->Name = L"tableLayoutPanel82";
			this->tableLayoutPanel82->RowCount = 1;
			this->tableLayoutPanel82->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel82->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel82->TabIndex = 8;
			// 
			// Brazil_USA
			// 
			this->Brazil_USA->AutoSize = true;
			this->Brazil_USA->BackColor = System::Drawing::Color::White;
			this->Brazil_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Brazil_USA->ForeColor = System::Drawing::Color::Blue;
			this->Brazil_USA->Location = System::Drawing::Point(4, 1);
			this->Brazil_USA->Name = L"Brazil_USA";
			this->Brazil_USA->Size = System::Drawing::Size(26, 17);
			this->Brazil_USA->TabIndex = 0;
			this->Brazil_USA->Text = L"10";
			this->Brazil_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Brazil_USSR
			// 
			this->Brazil_USSR->AutoSize = true;
			this->Brazil_USSR->BackColor = System::Drawing::Color::White;
			this->Brazil_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Brazil_USSR->ForeColor = System::Drawing::Color::Red;
			this->Brazil_USSR->Location = System::Drawing::Point(37, 1);
			this->Brazil_USSR->Name = L"Brazil_USSR";
			this->Brazil_USSR->Size = System::Drawing::Size(26, 17);
			this->Brazil_USSR->TabIndex = 5;
			this->Brazil_USSR->Text = L"10";
			this->Brazil_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel83
			// 
			this->tableLayoutPanel83->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel83->ColumnCount = 2;
			this->tableLayoutPanel83->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel83->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel83->Controls->Add(this->Argentina_USA, 0, 0);
			this->tableLayoutPanel83->Controls->Add(this->Argentina_USSR, 1, 0);
			this->tableLayoutPanel83->Location = System::Drawing::Point(20, 43);
			this->tableLayoutPanel83->Name = L"tableLayoutPanel83";
			this->tableLayoutPanel83->RowCount = 1;
			this->tableLayoutPanel83->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel83->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel83->TabIndex = 6;
			// 
			// Argentina_USA
			// 
			this->Argentina_USA->AutoSize = true;
			this->Argentina_USA->BackColor = System::Drawing::Color::White;
			this->Argentina_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Argentina_USA->ForeColor = System::Drawing::Color::Blue;
			this->Argentina_USA->Location = System::Drawing::Point(4, 1);
			this->Argentina_USA->Name = L"Argentina_USA";
			this->Argentina_USA->Size = System::Drawing::Size(26, 17);
			this->Argentina_USA->TabIndex = 0;
			this->Argentina_USA->Text = L"10";
			this->Argentina_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Argentina_USSR
			// 
			this->Argentina_USSR->AutoSize = true;
			this->Argentina_USSR->BackColor = System::Drawing::Color::White;
			this->Argentina_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Argentina_USSR->ForeColor = System::Drawing::Color::Red;
			this->Argentina_USSR->Location = System::Drawing::Point(37, 1);
			this->Argentina_USSR->Name = L"Argentina_USSR";
			this->Argentina_USSR->Size = System::Drawing::Size(26, 17);
			this->Argentina_USSR->TabIndex = 5;
			this->Argentina_USSR->Text = L"10";
			this->Argentina_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->label261);
			this->groupBox7->Controls->Add(this->tableLayoutPanel85);
			this->groupBox7->Controls->Add(this->label258);
			this->groupBox7->Controls->Add(this->label256);
			this->groupBox7->Controls->Add(this->tableLayoutPanel84);
			this->groupBox7->Controls->Add(this->Defcon_lbl);
			this->groupBox7->Controls->Add(this->label254);
			this->groupBox7->Controls->Add(this->Score_lbl);
			this->groupBox7->Controls->Add(this->label252);
			this->groupBox7->Controls->Add(this->Round_lbl);
			this->groupBox7->Controls->Add(this->label251);
			this->groupBox7->Controls->Add(this->Turn_lbl);
			this->groupBox7->Location = System::Drawing::Point(910, 295);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(190, 205);
			this->groupBox7->TabIndex = 10;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Board State";
			// 
			// label261
			// 
			this->label261->AutoSize = true;
			this->label261->Location = System::Drawing::Point(99, 110);
			this->label261->Name = L"label261";
			this->label261->Size = System::Drawing::Size(85, 17);
			this->label261->TabIndex = 45;
			this->label261->Text = L"Space Race";
			// 
			// tableLayoutPanel85
			// 
			this->tableLayoutPanel85->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel85->ColumnCount = 2;
			this->tableLayoutPanel85->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel85->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel85->Controls->Add(this->SpaceRace_USA, 0, 0);
			this->tableLayoutPanel85->Controls->Add(this->SpaceRace_USSR, 1, 0);
			this->tableLayoutPanel85->Location = System::Drawing::Point(102, 130);
			this->tableLayoutPanel85->Name = L"tableLayoutPanel85";
			this->tableLayoutPanel85->RowCount = 1;
			this->tableLayoutPanel85->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel85->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel85->TabIndex = 44;
			// 
			// SpaceRace_USA
			// 
			this->SpaceRace_USA->AutoSize = true;
			this->SpaceRace_USA->BackColor = System::Drawing::Color::White;
			this->SpaceRace_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SpaceRace_USA->ForeColor = System::Drawing::Color::Blue;
			this->SpaceRace_USA->Location = System::Drawing::Point(4, 1);
			this->SpaceRace_USA->Name = L"SpaceRace_USA";
			this->SpaceRace_USA->Size = System::Drawing::Size(26, 17);
			this->SpaceRace_USA->TabIndex = 0;
			this->SpaceRace_USA->Text = L"10";
			this->SpaceRace_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// SpaceRace_USSR
			// 
			this->SpaceRace_USSR->AutoSize = true;
			this->SpaceRace_USSR->BackColor = System::Drawing::Color::White;
			this->SpaceRace_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SpaceRace_USSR->ForeColor = System::Drawing::Color::Red;
			this->SpaceRace_USSR->Location = System::Drawing::Point(37, 1);
			this->SpaceRace_USSR->Name = L"SpaceRace_USSR";
			this->SpaceRace_USSR->Size = System::Drawing::Size(26, 17);
			this->SpaceRace_USSR->TabIndex = 5;
			this->SpaceRace_USSR->Text = L"10";
			this->SpaceRace_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label258
			// 
			this->label258->AutoSize = true;
			this->label258->Location = System::Drawing::Point(99, 22);
			this->label258->Name = L"label258";
			this->label258->Size = System::Drawing::Size(82, 17);
			this->label258->TabIndex = 43;
			this->label258->Text = L"Military Ops";
			// 
			// label256
			// 
			this->label256->AutoSize = true;
			this->label256->Location = System::Drawing::Point(16, 150);
			this->label256->Name = L"label256";
			this->label256->Size = System::Drawing::Size(53, 17);
			this->label256->TabIndex = 18;
			this->label256->Text = L"Defcon";
			// 
			// tableLayoutPanel84
			// 
			this->tableLayoutPanel84->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel84->ColumnCount = 2;
			this->tableLayoutPanel84->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel84->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel84->Controls->Add(this->MilitaryOps_USA, 0, 0);
			this->tableLayoutPanel84->Controls->Add(this->MilitaryOps_USSR, 1, 0);
			this->tableLayoutPanel84->Location = System::Drawing::Point(102, 42);
			this->tableLayoutPanel84->Name = L"tableLayoutPanel84";
			this->tableLayoutPanel84->RowCount = 1;
			this->tableLayoutPanel84->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel84->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel84->TabIndex = 42;
			// 
			// MilitaryOps_USA
			// 
			this->MilitaryOps_USA->AutoSize = true;
			this->MilitaryOps_USA->BackColor = System::Drawing::Color::White;
			this->MilitaryOps_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MilitaryOps_USA->ForeColor = System::Drawing::Color::Blue;
			this->MilitaryOps_USA->Location = System::Drawing::Point(4, 1);
			this->MilitaryOps_USA->Name = L"MilitaryOps_USA";
			this->MilitaryOps_USA->Size = System::Drawing::Size(26, 17);
			this->MilitaryOps_USA->TabIndex = 0;
			this->MilitaryOps_USA->Text = L"10";
			this->MilitaryOps_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MilitaryOps_USSR
			// 
			this->MilitaryOps_USSR->AutoSize = true;
			this->MilitaryOps_USSR->BackColor = System::Drawing::Color::White;
			this->MilitaryOps_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MilitaryOps_USSR->ForeColor = System::Drawing::Color::Red;
			this->MilitaryOps_USSR->Location = System::Drawing::Point(37, 1);
			this->MilitaryOps_USSR->Name = L"MilitaryOps_USSR";
			this->MilitaryOps_USSR->Size = System::Drawing::Size(26, 17);
			this->MilitaryOps_USSR->TabIndex = 5;
			this->MilitaryOps_USSR->Text = L"10";
			this->MilitaryOps_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Defcon_lbl
			// 
			this->Defcon_lbl->AutoSize = true;
			this->Defcon_lbl->BackColor = System::Drawing::Color::White;
			this->Defcon_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Defcon_lbl->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Defcon_lbl->Location = System::Drawing::Point(16, 173);
			this->Defcon_lbl->Name = L"Defcon_lbl";
			this->Defcon_lbl->Size = System::Drawing::Size(32, 17);
			this->Defcon_lbl->TabIndex = 17;
			this->Defcon_lbl->Text = L"-10";
			this->Defcon_lbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label254
			// 
			this->label254->AutoSize = true;
			this->label254->Location = System::Drawing::Point(16, 107);
			this->label254->Name = L"label254";
			this->label254->Size = System::Drawing::Size(45, 17);
			this->label254->TabIndex = 16;
			this->label254->Text = L"Score";
			// 
			// Score_lbl
			// 
			this->Score_lbl->AutoSize = true;
			this->Score_lbl->BackColor = System::Drawing::Color::White;
			this->Score_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Score_lbl->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Score_lbl->Location = System::Drawing::Point(16, 130);
			this->Score_lbl->Name = L"Score_lbl";
			this->Score_lbl->Size = System::Drawing::Size(32, 17);
			this->Score_lbl->TabIndex = 15;
			this->Score_lbl->Text = L"-10";
			this->Score_lbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label252
			// 
			this->label252->AutoSize = true;
			this->label252->Location = System::Drawing::Point(16, 64);
			this->label252->Name = L"label252";
			this->label252->Size = System::Drawing::Size(50, 17);
			this->label252->TabIndex = 14;
			this->label252->Text = L"Round";
			// 
			// Round_lbl
			// 
			this->Round_lbl->AutoSize = true;
			this->Round_lbl->BackColor = System::Drawing::Color::White;
			this->Round_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Round_lbl->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Round_lbl->Location = System::Drawing::Point(16, 87);
			this->Round_lbl->Name = L"Round_lbl";
			this->Round_lbl->Size = System::Drawing::Size(32, 17);
			this->Round_lbl->TabIndex = 13;
			this->Round_lbl->Text = L"-10";
			this->Round_lbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label251
			// 
			this->label251->AutoSize = true;
			this->label251->Location = System::Drawing::Point(16, 19);
			this->label251->Name = L"label251";
			this->label251->Size = System::Drawing::Size(38, 17);
			this->label251->TabIndex = 12;
			this->label251->Text = L"Turn";
			// 
			// Turn_lbl
			// 
			this->Turn_lbl->AutoSize = true;
			this->Turn_lbl->BackColor = System::Drawing::Color::White;
			this->Turn_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Turn_lbl->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Turn_lbl->Location = System::Drawing::Point(16, 42);
			this->Turn_lbl->Name = L"Turn_lbl";
			this->Turn_lbl->Size = System::Drawing::Size(32, 17);
			this->Turn_lbl->TabIndex = 11;
			this->Turn_lbl->Text = L"-10";
			this->Turn_lbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// spainPortugulToolStripMenuItem
			// 
			this->spainPortugulToolStripMenuItem->Name = L"spainPortugulToolStripMenuItem";
			this->spainPortugulToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->spainPortugulToolStripMenuItem->Text = L"Spain/Portugul";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(124, 197);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(101, 17);
			this->label4->TabIndex = 37;
			this->label4->Text = L"Spain/Portugul";
			// 
			// tableLayoutPanel31
			// 
			this->tableLayoutPanel31->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel31->ColumnCount = 2;
			this->tableLayoutPanel31->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel31->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel31->Controls->Add(this->SpainPortugul_USA, 0, 0);
			this->tableLayoutPanel31->Controls->Add(this->SpainPortugul_USSR, 1, 0);
			this->tableLayoutPanel31->Location = System::Drawing::Point(127, 217);
			this->tableLayoutPanel31->Name = L"tableLayoutPanel31";
			this->tableLayoutPanel31->RowCount = 1;
			this->tableLayoutPanel31->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel31->Size = System::Drawing::Size(68, 20);
			this->tableLayoutPanel31->TabIndex = 36;
			// 
			// SpainPortugul_USA
			// 
			this->SpainPortugul_USA->AutoSize = true;
			this->SpainPortugul_USA->BackColor = System::Drawing::Color::White;
			this->SpainPortugul_USA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SpainPortugul_USA->ForeColor = System::Drawing::Color::Blue;
			this->SpainPortugul_USA->Location = System::Drawing::Point(4, 1);
			this->SpainPortugul_USA->Name = L"SpainPortugul_USA";
			this->SpainPortugul_USA->Size = System::Drawing::Size(26, 17);
			this->SpainPortugul_USA->TabIndex = 0;
			this->SpainPortugul_USA->Text = L"10";
			this->SpainPortugul_USA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// SpainPortugul_USSR
			// 
			this->SpainPortugul_USSR->AutoSize = true;
			this->SpainPortugul_USSR->BackColor = System::Drawing::Color::White;
			this->SpainPortugul_USSR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SpainPortugul_USSR->ForeColor = System::Drawing::Color::Red;
			this->SpainPortugul_USSR->Location = System::Drawing::Point(37, 1);
			this->SpainPortugul_USSR->Name = L"SpainPortugul_USSR";
			this->SpainPortugul_USSR->Size = System::Drawing::Size(26, 17);
			this->SpainPortugul_USSR->TabIndex = 5;
			this->SpainPortugul_USSR->Text = L"10";
			this->SpainPortugul_USSR->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1302, 555);
			this->Controls->Add(this->groupBox7);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Project Oppenheimer";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tableLayoutPanel17->ResumeLayout(false);
			this->tableLayoutPanel17->PerformLayout();
			this->tableLayoutPanel18->ResumeLayout(false);
			this->tableLayoutPanel18->PerformLayout();
			this->tableLayoutPanel9->ResumeLayout(false);
			this->tableLayoutPanel9->PerformLayout();
			this->tableLayoutPanel8->ResumeLayout(false);
			this->tableLayoutPanel8->PerformLayout();
			this->tableLayoutPanel10->ResumeLayout(false);
			this->tableLayoutPanel10->PerformLayout();
			this->tableLayoutPanel7->ResumeLayout(false);
			this->tableLayoutPanel7->PerformLayout();
			this->tableLayoutPanel11->ResumeLayout(false);
			this->tableLayoutPanel11->PerformLayout();
			this->tableLayoutPanel6->ResumeLayout(false);
			this->tableLayoutPanel6->PerformLayout();
			this->tableLayoutPanel12->ResumeLayout(false);
			this->tableLayoutPanel12->PerformLayout();
			this->tableLayoutPanel5->ResumeLayout(false);
			this->tableLayoutPanel5->PerformLayout();
			this->tableLayoutPanel13->ResumeLayout(false);
			this->tableLayoutPanel13->PerformLayout();
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel4->PerformLayout();
			this->tableLayoutPanel14->ResumeLayout(false);
			this->tableLayoutPanel14->PerformLayout();
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			this->tableLayoutPanel15->ResumeLayout(false);
			this->tableLayoutPanel15->PerformLayout();
			this->tableLayoutPanel16->ResumeLayout(false);
			this->tableLayoutPanel16->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->tableLayoutPanel22->ResumeLayout(false);
			this->tableLayoutPanel22->PerformLayout();
			this->tableLayoutPanel23->ResumeLayout(false);
			this->tableLayoutPanel23->PerformLayout();
			this->tableLayoutPanel24->ResumeLayout(false);
			this->tableLayoutPanel24->PerformLayout();
			this->tableLayoutPanel25->ResumeLayout(false);
			this->tableLayoutPanel25->PerformLayout();
			this->tableLayoutPanel26->ResumeLayout(false);
			this->tableLayoutPanel26->PerformLayout();
			this->tableLayoutPanel27->ResumeLayout(false);
			this->tableLayoutPanel27->PerformLayout();
			this->tableLayoutPanel28->ResumeLayout(false);
			this->tableLayoutPanel28->PerformLayout();
			this->tableLayoutPanel29->ResumeLayout(false);
			this->tableLayoutPanel29->PerformLayout();
			this->tableLayoutPanel30->ResumeLayout(false);
			this->tableLayoutPanel30->PerformLayout();
			this->Philippeans_USA->ResumeLayout(false);
			this->Philippeans_USA->PerformLayout();
			this->tableLayoutPanel32->ResumeLayout(false);
			this->tableLayoutPanel32->PerformLayout();
			this->tableLayoutPanel33->ResumeLayout(false);
			this->tableLayoutPanel33->PerformLayout();
			this->tableLayoutPanel34->ResumeLayout(false);
			this->tableLayoutPanel34->PerformLayout();
			this->tableLayoutPanel35->ResumeLayout(false);
			this->tableLayoutPanel35->PerformLayout();
			this->tableLayoutPanel36->ResumeLayout(false);
			this->tableLayoutPanel36->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->tableLayoutPanel39->ResumeLayout(false);
			this->tableLayoutPanel39->PerformLayout();
			this->tableLayoutPanel40->ResumeLayout(false);
			this->tableLayoutPanel40->PerformLayout();
			this->tableLayoutPanel41->ResumeLayout(false);
			this->tableLayoutPanel41->PerformLayout();
			this->tableLayoutPanel42->ResumeLayout(false);
			this->tableLayoutPanel42->PerformLayout();
			this->tableLayoutPanel43->ResumeLayout(false);
			this->tableLayoutPanel43->PerformLayout();
			this->tableLayoutPanel44->ResumeLayout(false);
			this->tableLayoutPanel44->PerformLayout();
			this->tableLayoutPanel45->ResumeLayout(false);
			this->tableLayoutPanel45->PerformLayout();
			this->tableLayoutPanel46->ResumeLayout(false);
			this->tableLayoutPanel46->PerformLayout();
			this->tableLayoutPanel47->ResumeLayout(false);
			this->tableLayoutPanel47->PerformLayout();
			this->tableLayoutPanel48->ResumeLayout(false);
			this->tableLayoutPanel48->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->tableLayoutPanel62->ResumeLayout(false);
			this->tableLayoutPanel62->PerformLayout();
			this->tableLayoutPanel63->ResumeLayout(false);
			this->tableLayoutPanel63->PerformLayout();
			this->tableLayoutPanel19->ResumeLayout(false);
			this->tableLayoutPanel19->PerformLayout();
			this->tableLayoutPanel20->ResumeLayout(false);
			this->tableLayoutPanel20->PerformLayout();
			this->tableLayoutPanel21->ResumeLayout(false);
			this->tableLayoutPanel21->PerformLayout();
			this->tableLayoutPanel37->ResumeLayout(false);
			this->tableLayoutPanel37->PerformLayout();
			this->tableLayoutPanel38->ResumeLayout(false);
			this->tableLayoutPanel38->PerformLayout();
			this->tableLayoutPanel49->ResumeLayout(false);
			this->tableLayoutPanel49->PerformLayout();
			this->tableLayoutPanel50->ResumeLayout(false);
			this->tableLayoutPanel50->PerformLayout();
			this->tableLayoutPanel51->ResumeLayout(false);
			this->tableLayoutPanel51->PerformLayout();
			this->tableLayoutPanel52->ResumeLayout(false);
			this->tableLayoutPanel52->PerformLayout();
			this->tableLayoutPanel53->ResumeLayout(false);
			this->tableLayoutPanel53->PerformLayout();
			this->tableLayoutPanel54->ResumeLayout(false);
			this->tableLayoutPanel54->PerformLayout();
			this->tableLayoutPanel55->ResumeLayout(false);
			this->tableLayoutPanel55->PerformLayout();
			this->tableLayoutPanel56->ResumeLayout(false);
			this->tableLayoutPanel56->PerformLayout();
			this->tableLayoutPanel57->ResumeLayout(false);
			this->tableLayoutPanel57->PerformLayout();
			this->tableLayoutPanel58->ResumeLayout(false);
			this->tableLayoutPanel58->PerformLayout();
			this->tableLayoutPanel59->ResumeLayout(false);
			this->tableLayoutPanel59->PerformLayout();
			this->tableLayoutPanel60->ResumeLayout(false);
			this->tableLayoutPanel60->PerformLayout();
			this->tableLayoutPanel61->ResumeLayout(false);
			this->tableLayoutPanel61->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->tableLayoutPanel64->ResumeLayout(false);
			this->tableLayoutPanel64->PerformLayout();
			this->tableLayoutPanel65->ResumeLayout(false);
			this->tableLayoutPanel65->PerformLayout();
			this->tableLayoutPanel66->ResumeLayout(false);
			this->tableLayoutPanel66->PerformLayout();
			this->tableLayoutPanel67->ResumeLayout(false);
			this->tableLayoutPanel67->PerformLayout();
			this->tableLayoutPanel68->ResumeLayout(false);
			this->tableLayoutPanel68->PerformLayout();
			this->tableLayoutPanel69->ResumeLayout(false);
			this->tableLayoutPanel69->PerformLayout();
			this->tableLayoutPanel70->ResumeLayout(false);
			this->tableLayoutPanel70->PerformLayout();
			this->tableLayoutPanel71->ResumeLayout(false);
			this->tableLayoutPanel71->PerformLayout();
			this->tableLayoutPanel72->ResumeLayout(false);
			this->tableLayoutPanel72->PerformLayout();
			this->tableLayoutPanel73->ResumeLayout(false);
			this->tableLayoutPanel73->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->tableLayoutPanel74->ResumeLayout(false);
			this->tableLayoutPanel74->PerformLayout();
			this->tableLayoutPanel75->ResumeLayout(false);
			this->tableLayoutPanel75->PerformLayout();
			this->tableLayoutPanel76->ResumeLayout(false);
			this->tableLayoutPanel76->PerformLayout();
			this->tableLayoutPanel77->ResumeLayout(false);
			this->tableLayoutPanel77->PerformLayout();
			this->tableLayoutPanel78->ResumeLayout(false);
			this->tableLayoutPanel78->PerformLayout();
			this->tableLayoutPanel79->ResumeLayout(false);
			this->tableLayoutPanel79->PerformLayout();
			this->tableLayoutPanel80->ResumeLayout(false);
			this->tableLayoutPanel80->PerformLayout();
			this->tableLayoutPanel81->ResumeLayout(false);
			this->tableLayoutPanel81->PerformLayout();
			this->tableLayoutPanel82->ResumeLayout(false);
			this->tableLayoutPanel82->PerformLayout();
			this->tableLayoutPanel83->ResumeLayout(false);
			this->tableLayoutPanel83->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->tableLayoutPanel85->ResumeLayout(false);
			this->tableLayoutPanel85->PerformLayout();
			this->tableLayoutPanel84->ResumeLayout(false);
			this->tableLayoutPanel84->PerformLayout();
			this->tableLayoutPanel31->ResumeLayout(false);
			this->tableLayoutPanel31->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
};
}
