using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Project_Oppenheimer
{
    public partial class Form1 : Form
    {
        Properties.Supervisor supervisor = new Properties.Supervisor();
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            refreshEvent();
        }

        private void refreshEvent()
        {
            //Afghanistan
            if (supervisor.game.countryLst.countries[0].controller == 1)
            {
                Afghanistan_USA.ForeColor = Color.White;
                Afghanistan_USA.BackColor = Color.Blue;
                Afghanistan_USSR.ForeColor = Color.Red;
                Afghanistan_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[0].controller == -1)
            {
                Afghanistan_USA.ForeColor = Color.Blue;
                Afghanistan_USA.BackColor = Color.White;
                Afghanistan_USSR.ForeColor = Color.White;
                Afghanistan_USSR.BackColor = Color.Red;
            }
            else
            {
                Afghanistan_USA.ForeColor = Color.Blue;
                Afghanistan_USA.BackColor = Color.White;
                Afghanistan_USSR.ForeColor = Color.Red;
                Afghanistan_USSR.BackColor = Color.White;
            }
            Afghanistan_USA.Text = supervisor.game.countryLst.countries[0].influenceUSA.ToString();
            Afghanistan_USSR.Text = supervisor.game.countryLst.countries[0].influenceUSSR.ToString();

            //Algeria
            if (supervisor.game.countryLst.countries[1].controller == 1)
            {
                Algeria_USA.ForeColor = Color.White;
                Algeria_USA.BackColor = Color.Blue;
                Algeria_USSR.ForeColor = Color.Red;
                Algeria_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[1].controller == -1)
            {
                Algeria_USA.ForeColor = Color.Blue;
                Algeria_USA.BackColor = Color.White;
                Algeria_USSR.ForeColor = Color.White;
                Algeria_USSR.BackColor = Color.Red;
            }
            else
            {
                Algeria_USA.ForeColor = Color.Blue;
                Algeria_USA.BackColor = Color.White;
                Algeria_USSR.ForeColor = Color.Red;
                Algeria_USSR.BackColor = Color.White;
            }
            Algeria_USA.Text = supervisor.game.countryLst.countries[1].influenceUSA.ToString();
            Algeria_USSR.Text = supervisor.game.countryLst.countries[1].influenceUSSR.ToString();

            //Angola
            if (supervisor.game.countryLst.countries[2].controller == 1)
            {
                Angola_USA.ForeColor = Color.White;
                Angola_USA.BackColor = Color.Blue;
                Angola_USSR.ForeColor = Color.Red;
                Angola_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[2].controller == -1)
            {
                Angola_USA.ForeColor = Color.Blue;
                Angola_USA.BackColor = Color.White;
                Angola_USSR.ForeColor = Color.White;
                Angola_USSR.BackColor = Color.Red;
            }
            else
            {
                Angola_USA.ForeColor = Color.Blue;
                Angola_USA.BackColor = Color.White;
                Angola_USSR.ForeColor = Color.Red;
                Angola_USSR.BackColor = Color.White;
            }
            Angola_USA.Text = supervisor.game.countryLst.countries[2].influenceUSA.ToString();
            Angola_USSR.Text = supervisor.game.countryLst.countries[2].influenceUSSR.ToString();

            //Argentina
            if (supervisor.game.countryLst.countries[3].controller == 1)
            {
                Argentina_USA.ForeColor = Color.White;
                Argentina_USA.BackColor = Color.Blue;
                Argentina_USSR.ForeColor = Color.Red;
                Argentina_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[3].controller == -1)
            {
                Argentina_USA.ForeColor = Color.Blue;
                Argentina_USA.BackColor = Color.White;
                Argentina_USSR.ForeColor = Color.White;
                Argentina_USSR.BackColor = Color.Red;
            }
            else
            {
                Argentina_USA.ForeColor = Color.Blue;
                Argentina_USA.BackColor = Color.White;
                Argentina_USSR.ForeColor = Color.Red;
                Argentina_USSR.BackColor = Color.White;
            }
            Argentina_USA.Text = supervisor.game.countryLst.countries[3].influenceUSA.ToString();
            Argentina_USSR.Text = supervisor.game.countryLst.countries[3].influenceUSSR.ToString();

            //Australia
            if (supervisor.game.countryLst.countries[4].controller == 1)
            {
                Australia_USA.ForeColor = Color.White;
                Australia_USA.BackColor = Color.Blue;
                Australia_USSR.ForeColor = Color.Red;
                Australia_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[4].controller == -1)
            {
                Australia_USA.ForeColor = Color.Blue;
                Australia_USA.BackColor = Color.White;
                Australia_USSR.ForeColor = Color.White;
                Australia_USSR.BackColor = Color.Red;
            }
            else
            {
                Australia_USA.ForeColor = Color.Blue;
                Australia_USA.BackColor = Color.White;
                Australia_USSR.ForeColor = Color.Red;
                Australia_USSR.BackColor = Color.White;
            }
            Australia_USA.Text = supervisor.game.countryLst.countries[4].influenceUSA.ToString();
            Australia_USSR.Text = supervisor.game.countryLst.countries[4].influenceUSSR.ToString();

            //Austria
            if (supervisor.game.countryLst.countries[5].controller == 1)
            {
                Austria_USA.ForeColor = Color.White;
                Austria_USA.BackColor = Color.Blue;
                Austria_USSR.ForeColor = Color.Red;
                Austria_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[5].controller == -1)
            {
                Austria_USA.ForeColor = Color.Blue;
                Austria_USA.BackColor = Color.White;
                Austria_USSR.ForeColor = Color.White;
                Austria_USSR.BackColor = Color.Red;
            }
            else
            {
                Austria_USA.ForeColor = Color.Blue;
                Austria_USA.BackColor = Color.White;
                Austria_USSR.ForeColor = Color.Red;
                Austria_USSR.BackColor = Color.White;
            }
            Austria_USA.Text = supervisor.game.countryLst.countries[5].influenceUSA.ToString();
            Austria_USSR.Text = supervisor.game.countryLst.countries[5].influenceUSSR.ToString();

            //Benlux
            if (supervisor.game.countryLst.countries[6].controller == 1)
            {
                Benlux_USA.ForeColor = Color.White;
                Benlux_USA.BackColor = Color.Blue;
                Benlux_USSR.ForeColor = Color.Red;
                Benlux_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[6].controller == -1)
            {
                Benlux_USA.ForeColor = Color.Blue;
                Benlux_USA.BackColor = Color.White;
                Benlux_USSR.ForeColor = Color.White;
                Benlux_USSR.BackColor = Color.Red;
            }
            else
            {
                Benlux_USA.ForeColor = Color.Blue;
                Benlux_USA.BackColor = Color.White;
                Benlux_USSR.ForeColor = Color.Red;
                Benlux_USSR.BackColor = Color.White;
            }
            Benlux_USA.Text = supervisor.game.countryLst.countries[6].influenceUSA.ToString();
            Benlux_USSR.Text = supervisor.game.countryLst.countries[6].influenceUSSR.ToString();

            //Bolivia
            if (supervisor.game.countryLst.countries[7].controller == 1)
            {
                Bolivia_USA.ForeColor = Color.White;
                Bolivia_USA.BackColor = Color.Blue;
                Bolivia_USSR.ForeColor = Color.Red;
                Bolivia_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[7].controller == -1)
            {
                Bolivia_USA.ForeColor = Color.Blue;
                Bolivia_USA.BackColor = Color.White;
                Bolivia_USSR.ForeColor = Color.White;
                Bolivia_USSR.BackColor = Color.Red;
            }
            else
            {
                Bolivia_USA.ForeColor = Color.Blue;
                Bolivia_USA.BackColor = Color.White;
                Bolivia_USSR.ForeColor = Color.Red;
                Bolivia_USSR.BackColor = Color.White;
            }
            Bolivia_USA.Text = supervisor.game.countryLst.countries[7].influenceUSA.ToString();
            Bolivia_USSR.Text = supervisor.game.countryLst.countries[7].influenceUSSR.ToString();

            //Botswana
            if (supervisor.game.countryLst.countries[8].controller == 1)
            {
                Botswana_USA.ForeColor = Color.White;
                Botswana_USA.BackColor = Color.Blue;
                Botswana_USSR.ForeColor = Color.Red;
                Botswana_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[8].controller == -1)
            {
                Botswana_USA.ForeColor = Color.Blue;
                Botswana_USA.BackColor = Color.White;
                Botswana_USSR.ForeColor = Color.White;
                Botswana_USSR.BackColor = Color.Red;
            }
            else
            {
                Botswana_USA.ForeColor = Color.Blue;
                Botswana_USA.BackColor = Color.White;
                Botswana_USSR.ForeColor = Color.Red;
                Botswana_USSR.BackColor = Color.White;
            }
            Botswana_USA.Text = supervisor.game.countryLst.countries[8].influenceUSA.ToString();
            Botswana_USSR.Text = supervisor.game.countryLst.countries[8].influenceUSSR.ToString();

            //Brazil
            if (supervisor.game.countryLst.countries[9].controller == 1)
            {
                Brazil_USA.ForeColor = Color.White;
                Brazil_USA.BackColor = Color.Blue;
                Brazil_USSR.ForeColor = Color.Red;
                Brazil_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[9].controller == -1)
            {
                Brazil_USA.ForeColor = Color.Blue;
                Brazil_USA.BackColor = Color.White;
                Brazil_USSR.ForeColor = Color.White;
                Brazil_USSR.BackColor = Color.Red;
            }
            else
            {
                Brazil_USA.ForeColor = Color.Blue;
                Brazil_USA.BackColor = Color.White;
                Brazil_USSR.ForeColor = Color.Red;
                Brazil_USSR.BackColor = Color.White;
            }
            Brazil_USA.Text = supervisor.game.countryLst.countries[9].influenceUSA.ToString();
            Brazil_USSR.Text = supervisor.game.countryLst.countries[9].influenceUSSR.ToString();

            //Bulgaria
            if (supervisor.game.countryLst.countries[10].controller == 1)
            {
                Bulgaria_USA.ForeColor = Color.White;
                Bulgaria_USA.BackColor = Color.Blue;
                Bulgaria_USSR.ForeColor = Color.Red;
                Bulgaria_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[10].controller == -1)
            {
                Bulgaria_USA.ForeColor = Color.Blue;
                Bulgaria_USA.BackColor = Color.White;
                Bulgaria_USSR.ForeColor = Color.White;
                Bulgaria_USSR.BackColor = Color.Red;
            }
            else
            {
                Bulgaria_USA.ForeColor = Color.Blue;
                Bulgaria_USA.BackColor = Color.White;
                Bulgaria_USSR.ForeColor = Color.Red;
                Bulgaria_USSR.BackColor = Color.White;
            }
            Bulgaria_USA.Text = supervisor.game.countryLst.countries[10].influenceUSA.ToString();
            Bulgaria_USSR.Text = supervisor.game.countryLst.countries[10].influenceUSSR.ToString();

            //Burma
            if (supervisor.game.countryLst.countries[11].controller == 1)
            {
                Burma_USA.ForeColor = Color.White;
                Burma_USA.BackColor = Color.Blue;
                Burma_USSR.ForeColor = Color.Red;
                Burma_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[11].controller == -1)
            {
                Burma_USA.ForeColor = Color.Blue;
                Burma_USA.BackColor = Color.White;
                Burma_USSR.ForeColor = Color.White;
                Burma_USSR.BackColor = Color.Red;
            }
            else
            {
                Burma_USA.ForeColor = Color.Blue;
                Burma_USA.BackColor = Color.White;
                Burma_USSR.ForeColor = Color.Red;
                Burma_USSR.BackColor = Color.White;
            }
            Burma_USA.Text = supervisor.game.countryLst.countries[11].influenceUSA.ToString();
            Burma_USSR.Text = supervisor.game.countryLst.countries[11].influenceUSSR.ToString();

            //Cameroon
            if (supervisor.game.countryLst.countries[12].controller == 1)
            {
                Cameroon_USA.ForeColor = Color.White;
                Cameroon_USA.BackColor = Color.Blue;
                Cameroon_USSR.ForeColor = Color.Red;
                Cameroon_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[12].controller == -1)
            {
                Cameroon_USA.ForeColor = Color.Blue;
                Cameroon_USA.BackColor = Color.White;
                Cameroon_USSR.ForeColor = Color.White;
                Cameroon_USSR.BackColor = Color.Red;
            }
            else
            {
                Cameroon_USA.ForeColor = Color.Blue;
                Cameroon_USA.BackColor = Color.White;
                Cameroon_USSR.ForeColor = Color.Red;
                Cameroon_USSR.BackColor = Color.White;
            }
            Cameroon_USA.Text = supervisor.game.countryLst.countries[12].influenceUSA.ToString();
            Cameroon_USSR.Text = supervisor.game.countryLst.countries[12].influenceUSSR.ToString();

            //Canada
            if (supervisor.game.countryLst.countries[13].controller == 1)
            {
                Canada_USA.ForeColor = Color.White;
                Canada_USA.BackColor = Color.Blue;
                Canada_USSR.ForeColor = Color.Red;
                Canada_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[13].controller == -1)
            {
                Canada_USA.ForeColor = Color.Blue;
                Canada_USA.BackColor = Color.White;
                Canada_USSR.ForeColor = Color.White;
                Canada_USSR.BackColor = Color.Red;
            }
            else
            {
                Canada_USA.ForeColor = Color.Blue;
                Canada_USA.BackColor = Color.White;
                Canada_USSR.ForeColor = Color.Red;
                Canada_USSR.BackColor = Color.White;
            }
            Canada_USA.Text = supervisor.game.countryLst.countries[13].influenceUSA.ToString();
            Canada_USSR.Text = supervisor.game.countryLst.countries[13].influenceUSSR.ToString();

            //Chile
            if (supervisor.game.countryLst.countries[14].controller == 1)
            {
                Chile_USA.ForeColor = Color.White;
                Chile_USA.BackColor = Color.Blue;
                Chile_USSR.ForeColor = Color.Red;
                Chile_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[14].controller == -1)
            {
                Chile_USA.ForeColor = Color.Blue;
                Chile_USA.BackColor = Color.White;
                Chile_USSR.ForeColor = Color.White;
                Chile_USSR.BackColor = Color.Red;
            }
            else
            {
                Chile_USA.ForeColor = Color.Blue;
                Chile_USA.BackColor = Color.White;
                Chile_USSR.ForeColor = Color.Red;
                Chile_USSR.BackColor = Color.White;
            }
            Chile_USA.Text = supervisor.game.countryLst.countries[14].influenceUSA.ToString();
            Chile_USSR.Text = supervisor.game.countryLst.countries[14].influenceUSSR.ToString();

            //Colombia
            if (supervisor.game.countryLst.countries[15].controller == 1)
            {
                Colombia_USA.ForeColor = Color.White;
                Colombia_USA.BackColor = Color.Blue;
                Colombia_USSR.ForeColor = Color.Red;
                Colombia_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[15].controller == -1)
            {
                Colombia_USA.ForeColor = Color.Blue;
                Colombia_USA.BackColor = Color.White;
                Colombia_USSR.ForeColor = Color.White;
                Colombia_USSR.BackColor = Color.Red;
            }
            else
            {
                Colombia_USA.ForeColor = Color.Blue;
                Colombia_USA.BackColor = Color.White;
                Colombia_USSR.ForeColor = Color.Red;
                Colombia_USSR.BackColor = Color.White;
            }
            Colombia_USA.Text = supervisor.game.countryLst.countries[15].influenceUSA.ToString();
            Colombia_USSR.Text = supervisor.game.countryLst.countries[15].influenceUSSR.ToString();

            //Costa Rica
            if (supervisor.game.countryLst.countries[16].controller == 1)
            {
                CostaRica_USA.ForeColor = Color.White;
                CostaRica_USA.BackColor = Color.Blue;
                CostaRica_USSR.ForeColor = Color.Red;
                CostaRica_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[16].controller == -1)
            {
                CostaRica_USA.ForeColor = Color.Blue;
                CostaRica_USA.BackColor = Color.White;
                CostaRica_USSR.ForeColor = Color.White;
                CostaRica_USSR.BackColor = Color.Red;
            }
            else
            {
                CostaRica_USA.ForeColor = Color.Blue;
                CostaRica_USA.BackColor = Color.White;
                CostaRica_USSR.ForeColor = Color.Red;
                CostaRica_USSR.BackColor = Color.White;
            }
            CostaRica_USA.Text = supervisor.game.countryLst.countries[16].influenceUSA.ToString();
            CostaRica_USSR.Text = supervisor.game.countryLst.countries[16].influenceUSSR.ToString();

            //Cuba
            if (supervisor.game.countryLst.countries[17].controller == 1)
            {
                Cuba_USA.ForeColor = Color.White;
                Cuba_USA.BackColor = Color.Blue;
                Cuba_USSR.ForeColor = Color.Red;
                Cuba_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[17].controller == -1)
            {
                Cuba_USA.ForeColor = Color.Blue;
                Cuba_USA.BackColor = Color.White;
                Cuba_USSR.ForeColor = Color.White;
                Cuba_USSR.BackColor = Color.Red;
            }
            else
            {
                Cuba_USA.ForeColor = Color.Blue;
                Cuba_USA.BackColor = Color.White;
                Cuba_USSR.ForeColor = Color.Red;
                Cuba_USSR.BackColor = Color.White;
            }
            Cuba_USA.Text = supervisor.game.countryLst.countries[17].influenceUSA.ToString();
            Cuba_USSR.Text = supervisor.game.countryLst.countries[17].influenceUSSR.ToString();

            //Czechoslovakia
            if (supervisor.game.countryLst.countries[18].controller == 1)
            {
                Czechoslovakia_USA.ForeColor = Color.White;
                Czechoslovakia_USA.BackColor = Color.Blue;
                Czechoslovakia_USSR.ForeColor = Color.Red;
                Czechoslovakia_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[18].controller == -1)
            {
                Czechoslovakia_USA.ForeColor = Color.Blue;
                Czechoslovakia_USA.BackColor = Color.White;
                Czechoslovakia_USSR.ForeColor = Color.White;
                Czechoslovakia_USSR.BackColor = Color.Red;
            }
            else
            {
                Czechoslovakia_USA.ForeColor = Color.Blue;
                Czechoslovakia_USA.BackColor = Color.White;
                Czechoslovakia_USSR.ForeColor = Color.Red;
                Czechoslovakia_USSR.BackColor = Color.White;
            }
            Czechoslovakia_USA.Text = supervisor.game.countryLst.countries[18].influenceUSA.ToString();
            Czechoslovakia_USSR.Text = supervisor.game.countryLst.countries[18].influenceUSSR.ToString();

            //Denmark
            if (supervisor.game.countryLst.countries[19].controller == 1)
            {
                Denmark_USA.ForeColor = Color.White;
                Denmark_USA.BackColor = Color.Blue;
                Denmark_USSR.ForeColor = Color.Red;
                Denmark_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[19].controller == -1)
            {
                Denmark_USA.ForeColor = Color.Blue;
                Denmark_USA.BackColor = Color.White;
                Denmark_USSR.ForeColor = Color.White;
                Denmark_USSR.BackColor = Color.Red;
            }
            else
            {
                Denmark_USA.ForeColor = Color.Blue;
                Denmark_USA.BackColor = Color.White;
                Denmark_USSR.ForeColor = Color.Red;
                Denmark_USSR.BackColor = Color.White;
            }
            Denmark_USA.Text = supervisor.game.countryLst.countries[19].influenceUSA.ToString();
            Denmark_USSR.Text = supervisor.game.countryLst.countries[19].influenceUSSR.ToString();

            //Dominican Republic
            if (supervisor.game.countryLst.countries[20].controller == 1)
            {
                DominicanRep_USA.ForeColor = Color.White;
                DominicanRep_USA.BackColor = Color.Blue;
                DominicanRep_USSR.ForeColor = Color.Red;
                DominicanRep_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[20].controller == -1)
            {
                DominicanRep_USA.ForeColor = Color.Blue;
                DominicanRep_USA.BackColor = Color.White;
                DominicanRep_USSR.ForeColor = Color.White;
                DominicanRep_USSR.BackColor = Color.Red;
            }
            else
            {
                DominicanRep_USA.ForeColor = Color.Blue;
                DominicanRep_USA.BackColor = Color.White;
                DominicanRep_USSR.ForeColor = Color.Red;
                DominicanRep_USSR.BackColor = Color.White;
            }
            DominicanRep_USA.Text = supervisor.game.countryLst.countries[20].influenceUSA.ToString();
            DominicanRep_USSR.Text = supervisor.game.countryLst.countries[20].influenceUSSR.ToString();

            //East Germany
            if (supervisor.game.countryLst.countries[21].controller == 1)
            {
                EGermany_USA.ForeColor = Color.White;
                EGermany_USA.BackColor = Color.Blue;
                EGermany_USSR.ForeColor = Color.Red;
                EGermany_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[21].controller == -1)
            {
                EGermany_USA.ForeColor = Color.Blue;
                EGermany_USA.BackColor = Color.White;
                EGermany_USSR.ForeColor = Color.White;
                EGermany_USSR.BackColor = Color.Red;
            }
            else
            {
                EGermany_USA.ForeColor = Color.Blue;
                EGermany_USA.BackColor = Color.White;
                EGermany_USSR.ForeColor = Color.Red;
                EGermany_USSR.BackColor = Color.White;
            }
            EGermany_USA.Text = supervisor.game.countryLst.countries[21].influenceUSA.ToString();
            EGermany_USSR.Text = supervisor.game.countryLst.countries[21].influenceUSSR.ToString();

            //Ecuador
            if (supervisor.game.countryLst.countries[22].controller == 1)
            {
                Ecuador_USA.ForeColor = Color.White;
                Ecuador_USA.BackColor = Color.Blue;
                Ecuador_USSR.ForeColor = Color.Red;
                Ecuador_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[22].controller == -1)
            {
                Ecuador_USA.ForeColor = Color.Blue;
                Ecuador_USA.BackColor = Color.White;
                Ecuador_USSR.ForeColor = Color.White;
                Ecuador_USSR.BackColor = Color.Red;
            }
            else
            {
                Ecuador_USA.ForeColor = Color.Blue;
                Ecuador_USA.BackColor = Color.White;
                Ecuador_USSR.ForeColor = Color.Red;
                Ecuador_USSR.BackColor = Color.White;
            }
            Ecuador_USA.Text = supervisor.game.countryLst.countries[22].influenceUSA.ToString();
            Ecuador_USSR.Text = supervisor.game.countryLst.countries[22].influenceUSSR.ToString();

            //Egypt
            if (supervisor.game.countryLst.countries[23].controller == 1)
            {
                Egypt_USA.ForeColor = Color.White;
                Egypt_USA.BackColor = Color.Blue;
                Egypt_USSR.ForeColor = Color.Red;
                Egypt_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[23].controller == -1)
            {
                Egypt_USA.ForeColor = Color.Blue;
                Egypt_USA.BackColor = Color.White;
                Egypt_USSR.ForeColor = Color.White;
                Egypt_USSR.BackColor = Color.Red;
            }
            else
            {
                Egypt_USA.ForeColor = Color.Blue;
                Egypt_USA.BackColor = Color.White;
                Egypt_USSR.ForeColor = Color.Red;
                Egypt_USSR.BackColor = Color.White;
            }
            Egypt_USA.Text = supervisor.game.countryLst.countries[23].influenceUSA.ToString();
            Egypt_USSR.Text = supervisor.game.countryLst.countries[23].influenceUSSR.ToString();

            //El Salvador
            if (supervisor.game.countryLst.countries[24].controller == 1)
            {
                ElSalvador_USA.ForeColor = Color.White;
                ElSalvador_USA.BackColor = Color.Blue;
                ElSalvador_USSR.ForeColor = Color.Red;
                ElSalvador_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[24].controller == -1)
            {
                ElSalvador_USA.ForeColor = Color.Blue;
                ElSalvador_USA.BackColor = Color.White;
                ElSalvador_USSR.ForeColor = Color.White;
                ElSalvador_USSR.BackColor = Color.Red;
            }
            else
            {
                ElSalvador_USA.ForeColor = Color.Blue;
                ElSalvador_USA.BackColor = Color.White;
                ElSalvador_USSR.ForeColor = Color.Red;
                ElSalvador_USSR.BackColor = Color.White;
            }
            ElSalvador_USA.Text = supervisor.game.countryLst.countries[24].influenceUSA.ToString();
            ElSalvador_USSR.Text = supervisor.game.countryLst.countries[24].influenceUSSR.ToString();

            //Ethiopia
            if (supervisor.game.countryLst.countries[25].controller == 1)
            {
                Ethiopia_USA.ForeColor = Color.White;
                Ethiopia_USA.BackColor = Color.Blue;
                Ethiopia_USSR.ForeColor = Color.Red;
                Ethiopia_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[25].controller == -1)
            {
                Ethiopia_USA.ForeColor = Color.Blue;
                Ethiopia_USA.BackColor = Color.White;
                Ethiopia_USSR.ForeColor = Color.White;
                Ethiopia_USSR.BackColor = Color.Red;
            }
            else
            {
                Ethiopia_USA.ForeColor = Color.Blue;
                Ethiopia_USA.BackColor = Color.White;
                Ethiopia_USSR.ForeColor = Color.Red;
                Ethiopia_USSR.BackColor = Color.White;
            }
            Ethiopia_USA.Text = supervisor.game.countryLst.countries[25].influenceUSA.ToString();
            Ethiopia_USSR.Text = supervisor.game.countryLst.countries[25].influenceUSSR.ToString();

            //Finland
            if (supervisor.game.countryLst.countries[26].controller == 1)
            {
                Finland_USA.ForeColor = Color.White;
                Finland_USA.BackColor = Color.Blue;
                Finland_USSR.ForeColor = Color.Red;
                Finland_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[26].controller == -1)
            {
                Finland_USA.ForeColor = Color.Blue;
                Finland_USA.BackColor = Color.White;
                Finland_USSR.ForeColor = Color.White;
                Finland_USSR.BackColor = Color.Red;
            }
            else
            {
                Finland_USA.ForeColor = Color.Blue;
                Finland_USA.BackColor = Color.White;
                Finland_USSR.ForeColor = Color.Red;
                Finland_USSR.BackColor = Color.White;
            }
            Finland_USA.Text = supervisor.game.countryLst.countries[26].influenceUSA.ToString();
            Finland_USSR.Text = supervisor.game.countryLst.countries[26].influenceUSSR.ToString();

            //France
            if (supervisor.game.countryLst.countries[27].controller == 1)
            {
                France_USA.ForeColor = Color.White;
                France_USA.BackColor = Color.Blue;
                France_USSR.ForeColor = Color.Red;
                France_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[27].controller == -1)
            {
                France_USA.ForeColor = Color.Blue;
                France_USA.BackColor = Color.White;
                France_USSR.ForeColor = Color.White;
                France_USSR.BackColor = Color.Red;
            }
            else
            {
                France_USA.ForeColor = Color.Blue;
                France_USA.BackColor = Color.White;
                France_USSR.ForeColor = Color.Red;
                France_USSR.BackColor = Color.White;
            }
            France_USA.Text = supervisor.game.countryLst.countries[27].influenceUSA.ToString();
            France_USSR.Text = supervisor.game.countryLst.countries[27].influenceUSSR.ToString();

            //Greece
            if (supervisor.game.countryLst.countries[28].controller == 1)
            {
                Greece_USA.ForeColor = Color.White;
                Greece_USA.BackColor = Color.Blue;
                Greece_USSR.ForeColor = Color.Red;
                Greece_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[28].controller == -1)
            {
                Greece_USA.ForeColor = Color.Blue;
                Greece_USA.BackColor = Color.White;
                Greece_USSR.ForeColor = Color.White;
                Greece_USSR.BackColor = Color.Red;
            }
            else
            {
                Greece_USA.ForeColor = Color.Blue;
                Greece_USA.BackColor = Color.White;
                Greece_USSR.ForeColor = Color.Red;
                Greece_USSR.BackColor = Color.White;
            }
            Greece_USA.Text = supervisor.game.countryLst.countries[28].influenceUSA.ToString();
            Greece_USSR.Text = supervisor.game.countryLst.countries[28].influenceUSSR.ToString();

            //Guatemala
            if (supervisor.game.countryLst.countries[29].controller == 1)
            {
                Guatemala_USA.ForeColor = Color.White;
                Guatemala_USA.BackColor = Color.Blue;
                Guatemala_USSR.ForeColor = Color.Red;
                Guatemala_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[29].controller == -1)
            {
                Guatemala_USA.ForeColor = Color.Blue;
                Guatemala_USA.BackColor = Color.White;
                Guatemala_USSR.ForeColor = Color.White;
                Guatemala_USSR.BackColor = Color.Red;
            }
            else
            {
                Guatemala_USA.ForeColor = Color.Blue;
                Guatemala_USA.BackColor = Color.White;
                Guatemala_USSR.ForeColor = Color.Red;
                Guatemala_USSR.BackColor = Color.White;
            }
            Guatemala_USA.Text = supervisor.game.countryLst.countries[29].influenceUSA.ToString();
            Guatemala_USSR.Text = supervisor.game.countryLst.countries[29].influenceUSSR.ToString();

            //Gulf States
            if (supervisor.game.countryLst.countries[30].controller == 1)
            {
                GulfStates_USA.ForeColor = Color.White;
                GulfStates_USA.BackColor = Color.Blue;
                GulfStates_USSR.ForeColor = Color.Red;
                GulfStates_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[30].controller == -1)
            {
                GulfStates_USA.ForeColor = Color.Blue;
                GulfStates_USA.BackColor = Color.White;
                GulfStates_USSR.ForeColor = Color.White;
                GulfStates_USSR.BackColor = Color.Red;
            }
            else
            {
                GulfStates_USA.ForeColor = Color.Blue;
                GulfStates_USA.BackColor = Color.White;
                GulfStates_USSR.ForeColor = Color.Red;
                GulfStates_USSR.BackColor = Color.White;
            }
            GulfStates_USA.Text = supervisor.game.countryLst.countries[30].influenceUSA.ToString();
            GulfStates_USSR.Text = supervisor.game.countryLst.countries[30].influenceUSSR.ToString();

            //Haiti
            if (supervisor.game.countryLst.countries[31].controller == 1)
            {
                Haiti_USA.ForeColor = Color.White;
                Haiti_USA.BackColor = Color.Blue;
                Haiti_USSR.ForeColor = Color.Red;
                Haiti_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[31].controller == -1)
            {
                Haiti_USA.ForeColor = Color.Blue;
                Haiti_USA.BackColor = Color.White;
                Haiti_USSR.ForeColor = Color.White;
                Haiti_USSR.BackColor = Color.Red;
            }
            else
            {
                Haiti_USA.ForeColor = Color.Blue;
                Haiti_USA.BackColor = Color.White;
                Haiti_USSR.ForeColor = Color.Red;
                Haiti_USSR.BackColor = Color.White;
            }
            Haiti_USA.Text = supervisor.game.countryLst.countries[31].influenceUSA.ToString();
            Haiti_USSR.Text = supervisor.game.countryLst.countries[31].influenceUSSR.ToString();

            //Honduras
            if (supervisor.game.countryLst.countries[32].controller == 1)
            {
                Honduras_USA.ForeColor = Color.White;
                Honduras_USA.BackColor = Color.Blue;
                Honduras_USSR.ForeColor = Color.Red;
                Honduras_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[32].controller == -1)
            {
                Honduras_USA.ForeColor = Color.Blue;
                Honduras_USA.BackColor = Color.White;
                Honduras_USSR.ForeColor = Color.White;
                Honduras_USSR.BackColor = Color.Red;
            }
            else
            {
                Honduras_USA.ForeColor = Color.Blue;
                Honduras_USA.BackColor = Color.White;
                Honduras_USSR.ForeColor = Color.Red;
                Honduras_USSR.BackColor = Color.White;
            }
            Honduras_USA.Text = supervisor.game.countryLst.countries[32].influenceUSA.ToString();
            Honduras_USSR.Text = supervisor.game.countryLst.countries[32].influenceUSSR.ToString();

            //Hungary
            if (supervisor.game.countryLst.countries[33].controller == 1)
            {
                Hungary_USA.ForeColor = Color.White;
                Hungary_USA.BackColor = Color.Blue;
                Hungary_USSR.ForeColor = Color.Red;
                Hungary_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[33].controller == -1)
            {
                Hungary_USA.ForeColor = Color.Blue;
                Hungary_USA.BackColor = Color.White;
                Hungary_USSR.ForeColor = Color.White;
                Hungary_USSR.BackColor = Color.Red;
            }
            else
            {
                Hungary_USA.ForeColor = Color.Blue;
                Hungary_USA.BackColor = Color.White;
                Hungary_USSR.ForeColor = Color.Red;
                Hungary_USSR.BackColor = Color.White;
            }
            Hungary_USA.Text = supervisor.game.countryLst.countries[33].influenceUSA.ToString();
            Hungary_USSR.Text = supervisor.game.countryLst.countries[33].influenceUSSR.ToString();

            //India
            if (supervisor.game.countryLst.countries[34].controller == 1)
            {
                India_USA.ForeColor = Color.White;
                India_USA.BackColor = Color.Blue;
                India_USSR.ForeColor = Color.Red;
                India_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[34].controller == -1)
            {
                India_USA.ForeColor = Color.Blue;
                India_USA.BackColor = Color.White;
                India_USSR.ForeColor = Color.White;
                India_USSR.BackColor = Color.Red;
            }
            else
            {
                India_USA.ForeColor = Color.Blue;
                India_USA.BackColor = Color.White;
                India_USSR.ForeColor = Color.Red;
                India_USSR.BackColor = Color.White;
            }
            India_USA.Text = supervisor.game.countryLst.countries[34].influenceUSA.ToString();
            India_USSR.Text = supervisor.game.countryLst.countries[34].influenceUSSR.ToString();

            //Indonesia
            if (supervisor.game.countryLst.countries[35].controller == 1)
            {
                Indonesia_USA.ForeColor = Color.White;
                Indonesia_USA.BackColor = Color.Blue;
                Indonesia_USSR.ForeColor = Color.Red;
                Indonesia_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[35].controller == -1)
            {
                Indonesia_USA.ForeColor = Color.Blue;
                Indonesia_USA.BackColor = Color.White;
                Indonesia_USSR.ForeColor = Color.White;
                Indonesia_USSR.BackColor = Color.Red;
            }
            else
            {
                Indonesia_USA.ForeColor = Color.Blue;
                Indonesia_USA.BackColor = Color.White;
                Indonesia_USSR.ForeColor = Color.Red;
                Indonesia_USSR.BackColor = Color.White;
            }
            Indonesia_USA.Text = supervisor.game.countryLst.countries[35].influenceUSA.ToString();
            Indonesia_USSR.Text = supervisor.game.countryLst.countries[35].influenceUSSR.ToString();

            //Iran
            if (supervisor.game.countryLst.countries[36].controller == 1)
            {
                Iran_USA.ForeColor = Color.White;
                Iran_USA.BackColor = Color.Blue;
                Iran_USSR.ForeColor = Color.Red;
                Iran_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[36].controller == -1)
            {
                Iran_USA.ForeColor = Color.Blue;
                Iran_USA.BackColor = Color.White;
                Iran_USSR.ForeColor = Color.White;
                Iran_USSR.BackColor = Color.Red;
            }
            else
            {
                Iran_USA.ForeColor = Color.Blue;
                Iran_USA.BackColor = Color.White;
                Iran_USSR.ForeColor = Color.Red;
                Iran_USSR.BackColor = Color.White;
            }
            Iran_USA.Text = supervisor.game.countryLst.countries[36].influenceUSA.ToString();
            Iran_USSR.Text = supervisor.game.countryLst.countries[36].influenceUSSR.ToString();

            //Iraq
            if (supervisor.game.countryLst.countries[37].controller == 1)
            {
                Iraq_USA.ForeColor = Color.White;
                Iraq_USA.BackColor = Color.Blue;
                Iraq_USSR.ForeColor = Color.Red;
                Iraq_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[37].controller == -1)
            {
                Iraq_USA.ForeColor = Color.Blue;
                Iraq_USA.BackColor = Color.White;
                Iraq_USSR.ForeColor = Color.White;
                Iraq_USSR.BackColor = Color.Red;
            }
            else
            {
                Iraq_USA.ForeColor = Color.Blue;
                Iraq_USA.BackColor = Color.White;
                Iraq_USSR.ForeColor = Color.Red;
                Iraq_USSR.BackColor = Color.White;
            }
            Iraq_USA.Text = supervisor.game.countryLst.countries[37].influenceUSA.ToString();
            Iraq_USSR.Text = supervisor.game.countryLst.countries[37].influenceUSSR.ToString();

            //Israel
            if (supervisor.game.countryLst.countries[38].controller == 1)
            {
                Israel_USA.ForeColor = Color.White;
                Israel_USA.BackColor = Color.Blue;
                Israel_USSR.ForeColor = Color.Red;
                Israel_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[38].controller == -1)
            {
                Israel_USA.ForeColor = Color.Blue;
                Israel_USA.BackColor = Color.White;
                Israel_USSR.ForeColor = Color.White;
                Israel_USSR.BackColor = Color.Red;
            }
            else
            {
                Israel_USA.ForeColor = Color.Blue;
                Israel_USA.BackColor = Color.White;
                Israel_USSR.ForeColor = Color.Red;
                Israel_USSR.BackColor = Color.White;
            }
            Israel_USA.Text = supervisor.game.countryLst.countries[38].influenceUSA.ToString();
            Israel_USSR.Text = supervisor.game.countryLst.countries[38].influenceUSSR.ToString();

            //Italy
            if (supervisor.game.countryLst.countries[39].controller == 1)
            {
                Italy_USA.ForeColor = Color.White;
                Italy_USA.BackColor = Color.Blue;
                Italy_USSR.ForeColor = Color.Red;
                Italy_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[39].controller == -1)
            {
                Italy_USA.ForeColor = Color.Blue;
                Italy_USA.BackColor = Color.White;
                Italy_USSR.ForeColor = Color.White;
                Italy_USSR.BackColor = Color.Red;
            }
            else
            {
                Italy_USA.ForeColor = Color.Blue;
                Italy_USA.BackColor = Color.White;
                Italy_USSR.ForeColor = Color.Red;
                Italy_USSR.BackColor = Color.White;
            }
            Italy_USA.Text = supervisor.game.countryLst.countries[39].influenceUSA.ToString();
            Italy_USSR.Text = supervisor.game.countryLst.countries[39].influenceUSSR.ToString();

            //Ivory Coast
            if (supervisor.game.countryLst.countries[40].controller == 1)
            {
                IvoryCoast_USA.ForeColor = Color.White;
                IvoryCoast_USA.BackColor = Color.Blue;
                IvoryCoast_USSR.ForeColor = Color.Red;
                IvoryCoast_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[40].controller == -1)
            {
                IvoryCoast_USA.ForeColor = Color.Blue;
                IvoryCoast_USA.BackColor = Color.White;
                IvoryCoast_USSR.ForeColor = Color.White;
                IvoryCoast_USSR.BackColor = Color.Red;
            }
            else
            {
                IvoryCoast_USA.ForeColor = Color.Blue;
                IvoryCoast_USA.BackColor = Color.White;
                IvoryCoast_USSR.ForeColor = Color.Red;
                IvoryCoast_USSR.BackColor = Color.White;
            }
            IvoryCoast_USA.Text = supervisor.game.countryLst.countries[40].influenceUSA.ToString();
            IvoryCoast_USSR.Text = supervisor.game.countryLst.countries[40].influenceUSSR.ToString();

            //Japan
            if (supervisor.game.countryLst.countries[41].controller == 1)
            {
                Japan_USA.ForeColor = Color.White;
                Japan_USA.BackColor = Color.Blue;
                Japan_USSR.ForeColor = Color.Red;
                Japan_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[41].controller == -1)
            {
                Japan_USA.ForeColor = Color.Blue;
                Japan_USA.BackColor = Color.White;
                Japan_USSR.ForeColor = Color.White;
                Japan_USSR.BackColor = Color.Red;
            }
            else
            {
                Japan_USA.ForeColor = Color.Blue;
                Japan_USA.BackColor = Color.White;
                Japan_USSR.ForeColor = Color.Red;
                Japan_USSR.BackColor = Color.White;
            }
            Japan_USA.Text = supervisor.game.countryLst.countries[41].influenceUSA.ToString();
            Japan_USSR.Text = supervisor.game.countryLst.countries[41].influenceUSSR.ToString();

            //Jordan
            if (supervisor.game.countryLst.countries[42].controller == 1)
            {
                Jordan_USA.ForeColor = Color.White;
                Jordan_USA.BackColor = Color.Blue;
                Jordan_USSR.ForeColor = Color.Red;
                Jordan_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[42].controller == -1)
            {
                Jordan_USA.ForeColor = Color.Blue;
                Jordan_USA.BackColor = Color.White;
                Jordan_USSR.ForeColor = Color.White;
                Jordan_USSR.BackColor = Color.Red;
            }
            else
            {
                Jordan_USA.ForeColor = Color.Blue;
                Jordan_USA.BackColor = Color.White;
                Jordan_USSR.ForeColor = Color.Red;
                Jordan_USSR.BackColor = Color.White;
            }
            Jordan_USA.Text = supervisor.game.countryLst.countries[42].influenceUSA.ToString();
            Jordan_USSR.Text = supervisor.game.countryLst.countries[42].influenceUSSR.ToString();

            //Kenya
            if (supervisor.game.countryLst.countries[43].controller == 1)
            {
                Kenya_USA.ForeColor = Color.White;
                Kenya_USA.BackColor = Color.Blue;
                Kenya_USSR.ForeColor = Color.Red;
                Kenya_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[43].controller == -1)
            {
                Kenya_USA.ForeColor = Color.Blue;
                Kenya_USA.BackColor = Color.White;
                Kenya_USSR.ForeColor = Color.White;
                Kenya_USSR.BackColor = Color.Red;
            }
            else
            {
                Kenya_USA.ForeColor = Color.Blue;
                Kenya_USA.BackColor = Color.White;
                Kenya_USSR.ForeColor = Color.Red;
                Kenya_USSR.BackColor = Color.White;
            }
            Kenya_USA.Text = supervisor.game.countryLst.countries[43].influenceUSA.ToString();
            Kenya_USSR.Text = supervisor.game.countryLst.countries[43].influenceUSSR.ToString();

            //Laos/Cambodia
            if (supervisor.game.countryLst.countries[44].controller == 1)
            {
                LaosCambodia_USA.ForeColor = Color.White;
                LaosCambodia_USA.BackColor = Color.Blue;
                LaosCambodia_USSR.ForeColor = Color.Red;
                LaosCambodia_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[44].controller == -1)
            {
                LaosCambodia_USA.ForeColor = Color.Blue;
                LaosCambodia_USA.BackColor = Color.White;
                LaosCambodia_USSR.ForeColor = Color.White;
                LaosCambodia_USSR.BackColor = Color.Red;
            }
            else
            {
                LaosCambodia_USA.ForeColor = Color.Blue;
                LaosCambodia_USA.BackColor = Color.White;
                LaosCambodia_USSR.ForeColor = Color.Red;
                LaosCambodia_USSR.BackColor = Color.White;
            }
            LaosCambodia_USA.Text = supervisor.game.countryLst.countries[44].influenceUSA.ToString();
            LaosCambodia_USSR.Text = supervisor.game.countryLst.countries[44].influenceUSSR.ToString();

            //Lebanon
            if (supervisor.game.countryLst.countries[45].controller == 1)
            {
                Lebanon_USA.ForeColor = Color.White;
                Lebanon_USA.BackColor = Color.Blue;
                Lebanon_USSR.ForeColor = Color.Red;
                Lebanon_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[45].controller == -1)
            {
                Lebanon_USA.ForeColor = Color.Blue;
                Lebanon_USA.BackColor = Color.White;
                Lebanon_USSR.ForeColor = Color.White;
                Lebanon_USSR.BackColor = Color.Red;
            }
            else
            {
                Lebanon_USA.ForeColor = Color.Blue;
                Lebanon_USA.BackColor = Color.White;
                Lebanon_USSR.ForeColor = Color.Red;
                Lebanon_USSR.BackColor = Color.White;
            }
            Lebanon_USA.Text = supervisor.game.countryLst.countries[45].influenceUSA.ToString();
            Lebanon_USSR.Text = supervisor.game.countryLst.countries[45].influenceUSSR.ToString();

            //Libya
            if (supervisor.game.countryLst.countries[46].controller == 1)
            {
                Libya_USA.ForeColor = Color.White;
                Libya_USA.BackColor = Color.Blue;
                Libya_USSR.ForeColor = Color.Red;
                Libya_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[46].controller == -1)
            {
                Libya_USA.ForeColor = Color.Blue;
                Libya_USA.BackColor = Color.White;
                Libya_USSR.ForeColor = Color.White;
                Libya_USSR.BackColor = Color.Red;
            }
            else
            {
                Libya_USA.ForeColor = Color.Blue;
                Libya_USA.BackColor = Color.White;
                Libya_USSR.ForeColor = Color.Red;
                Libya_USSR.BackColor = Color.White;
            }
            Libya_USA.Text = supervisor.game.countryLst.countries[46].influenceUSA.ToString();
            Libya_USSR.Text = supervisor.game.countryLst.countries[46].influenceUSSR.ToString();

            //Malaysia
            if (supervisor.game.countryLst.countries[47].controller == 1)
            {
                Malaysia_USA.ForeColor = Color.White;
                Malaysia_USA.BackColor = Color.Blue;
                Malaysia_USSR.ForeColor = Color.Red;
                Malaysia_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[47].controller == -1)
            {
                Malaysia_USA.ForeColor = Color.Blue;
                Malaysia_USA.BackColor = Color.White;
                Malaysia_USSR.ForeColor = Color.White;
                Malaysia_USSR.BackColor = Color.Red;
            }
            else
            {
                Malaysia_USA.ForeColor = Color.Blue;
                Malaysia_USA.BackColor = Color.White;
                Malaysia_USSR.ForeColor = Color.Red;
                Malaysia_USSR.BackColor = Color.White;
            }
            Malaysia_USA.Text = supervisor.game.countryLst.countries[47].influenceUSA.ToString();
            Malaysia_USSR.Text = supervisor.game.countryLst.countries[47].influenceUSSR.ToString();

            //Mexico
            if (supervisor.game.countryLst.countries[48].controller == 1)
            {
                Mexico_USA.ForeColor = Color.White;
                Mexico_USA.BackColor = Color.Blue;
                Mexico_USSR.ForeColor = Color.Red;
                Mexico_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[48].controller == -1)
            {
                Mexico_USA.ForeColor = Color.Blue;
                Mexico_USA.BackColor = Color.White;
                Mexico_USSR.ForeColor = Color.White;
                Mexico_USSR.BackColor = Color.Red;
            }
            else
            {
                Mexico_USA.ForeColor = Color.Blue;
                Mexico_USA.BackColor = Color.White;
                Mexico_USSR.ForeColor = Color.Red;
                Mexico_USSR.BackColor = Color.White;
            }
            Mexico_USA.Text = supervisor.game.countryLst.countries[48].influenceUSA.ToString();
            Mexico_USSR.Text = supervisor.game.countryLst.countries[48].influenceUSSR.ToString();

            //Morocco
            if (supervisor.game.countryLst.countries[49].controller == 1)
            {
                Morocco_USA.ForeColor = Color.White;
                Morocco_USA.BackColor = Color.Blue;
                Morocco_USSR.ForeColor = Color.Red;
                Morocco_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[49].controller == -1)
            {
                Morocco_USA.ForeColor = Color.Blue;
                Morocco_USA.BackColor = Color.White;
                Morocco_USSR.ForeColor = Color.White;
                Morocco_USSR.BackColor = Color.Red;
            }
            else
            {
                Morocco_USA.ForeColor = Color.Blue;
                Morocco_USA.BackColor = Color.White;
                Morocco_USSR.ForeColor = Color.Red;
                Morocco_USSR.BackColor = Color.White;
            }
            Morocco_USA.Text = supervisor.game.countryLst.countries[49].influenceUSA.ToString();
            Morocco_USSR.Text = supervisor.game.countryLst.countries[49].influenceUSSR.ToString();

            //Nicaragua
            if (supervisor.game.countryLst.countries[50].controller == 1)
            {
                Nicaragua_USA.ForeColor = Color.White;
                Nicaragua_USA.BackColor = Color.Blue;
                Nicaragua_USSR.ForeColor = Color.Red;
                Nicaragua_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[50].controller == -1)
            {
                Nicaragua_USA.ForeColor = Color.Blue;
                Nicaragua_USA.BackColor = Color.White;
                Nicaragua_USSR.ForeColor = Color.White;
                Nicaragua_USSR.BackColor = Color.Red;
            }
            else
            {
                Nicaragua_USA.ForeColor = Color.Blue;
                Nicaragua_USA.BackColor = Color.White;
                Nicaragua_USSR.ForeColor = Color.Red;
                Nicaragua_USSR.BackColor = Color.White;
            }
            Nicaragua_USA.Text = supervisor.game.countryLst.countries[50].influenceUSA.ToString();
            Nicaragua_USSR.Text = supervisor.game.countryLst.countries[50].influenceUSSR.ToString();

            //Nigeria
            if (supervisor.game.countryLst.countries[51].controller == 1)
            {
                Nigeria_USA.ForeColor = Color.White;
                Nigeria_USA.BackColor = Color.Blue;
                Nigeria_USSR.ForeColor = Color.Red;
                Nigeria_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[51].controller == -1)
            {
                Nigeria_USA.ForeColor = Color.Blue;
                Nigeria_USA.BackColor = Color.White;
                Nigeria_USSR.ForeColor = Color.White;
                Nigeria_USSR.BackColor = Color.Red;
            }
            else
            {
                Nigeria_USA.ForeColor = Color.Blue;
                Nigeria_USA.BackColor = Color.White;
                Nigeria_USSR.ForeColor = Color.Red;
                Nigeria_USSR.BackColor = Color.White;
            }
            Nigeria_USA.Text = supervisor.game.countryLst.countries[51].influenceUSA.ToString();
            Nigeria_USSR.Text = supervisor.game.countryLst.countries[51].influenceUSSR.ToString();

            //North Korea
            if (supervisor.game.countryLst.countries[52].controller == 1)
            {
                NorthKorea_USA.ForeColor = Color.White;
                NorthKorea_USA.BackColor = Color.Blue;
                NorthKorea_USSR.ForeColor = Color.Red;
                NorthKorea_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[52].controller == -1)
            {
                NorthKorea_USA.ForeColor = Color.Blue;
                NorthKorea_USA.BackColor = Color.White;
                NorthKorea_USSR.ForeColor = Color.White;
                NorthKorea_USSR.BackColor = Color.Red;
            }
            else
            {
                NorthKorea_USA.ForeColor = Color.Blue;
                NorthKorea_USA.BackColor = Color.White;
                NorthKorea_USSR.ForeColor = Color.Red;
                NorthKorea_USSR.BackColor = Color.White;
            }
            NorthKorea_USA.Text = supervisor.game.countryLst.countries[52].influenceUSA.ToString();
            NorthKorea_USSR.Text = supervisor.game.countryLst.countries[52].influenceUSSR.ToString();

            //Norway
            if (supervisor.game.countryLst.countries[53].controller == 1)
            {
                Norway_USA.ForeColor = Color.White;
                Norway_USA.BackColor = Color.Blue;
                Norway_USSR.ForeColor = Color.Red;
                Norway_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[53].controller == -1)
            {
                Norway_USA.ForeColor = Color.Blue;
                Norway_USA.BackColor = Color.White;
                Norway_USSR.ForeColor = Color.White;
                Norway_USSR.BackColor = Color.Red;
            }
            else
            {
                Norway_USA.ForeColor = Color.Blue;
                Norway_USA.BackColor = Color.White;
                Norway_USSR.ForeColor = Color.Red;
                Norway_USSR.BackColor = Color.White;
            }
            Norway_USA.Text = supervisor.game.countryLst.countries[53].influenceUSA.ToString();
            Norway_USSR.Text = supervisor.game.countryLst.countries[53].influenceUSSR.ToString();

            //Pakistan
            if (supervisor.game.countryLst.countries[54].controller == 1)
            {
                Pakistan_USA.ForeColor = Color.White;
                Pakistan_USA.BackColor = Color.Blue;
                Pakistan_USSR.ForeColor = Color.Red;
                Pakistan_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[54].controller == -1)
            {
                Pakistan_USA.ForeColor = Color.Blue;
                Pakistan_USA.BackColor = Color.White;
                Pakistan_USSR.ForeColor = Color.White;
                Pakistan_USSR.BackColor = Color.Red;
            }
            else
            {
                Pakistan_USA.ForeColor = Color.Blue;
                Pakistan_USA.BackColor = Color.White;
                Pakistan_USSR.ForeColor = Color.Red;
                Pakistan_USSR.BackColor = Color.White;
            }
            Pakistan_USA.Text = supervisor.game.countryLst.countries[54].influenceUSA.ToString();
            Pakistan_USSR.Text = supervisor.game.countryLst.countries[54].influenceUSSR.ToString();

            //Panama
            if (supervisor.game.countryLst.countries[55].controller == 1)
            {
                Panama_USA.ForeColor = Color.White;
                Panama_USA.BackColor = Color.Blue;
                Panama_USSR.ForeColor = Color.Red;
                Panama_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[55].controller == -1)
            {
                Panama_USA.ForeColor = Color.Blue;
                Panama_USA.BackColor = Color.White;
                Panama_USSR.ForeColor = Color.White;
                Panama_USSR.BackColor = Color.Red;
            }
            else
            {
                Panama_USA.ForeColor = Color.Blue;
                Panama_USA.BackColor = Color.White;
                Panama_USSR.ForeColor = Color.Red;
                Panama_USSR.BackColor = Color.White;
            }
            Panama_USA.Text = supervisor.game.countryLst.countries[55].influenceUSA.ToString();
            Panama_USSR.Text = supervisor.game.countryLst.countries[55].influenceUSSR.ToString();

            //Paraguay
            if (supervisor.game.countryLst.countries[56].controller == 1)
            {
                Paraguay_USA.ForeColor = Color.White;
                Paraguay_USA.BackColor = Color.Blue;
                Paraguay_USSR.ForeColor = Color.Red;
                Paraguay_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[56].controller == -1)
            {
                Paraguay_USA.ForeColor = Color.Blue;
                Paraguay_USA.BackColor = Color.White;
                Paraguay_USSR.ForeColor = Color.White;
                Paraguay_USSR.BackColor = Color.Red;
            }
            else
            {
                Paraguay_USA.ForeColor = Color.Blue;
                Paraguay_USA.BackColor = Color.White;
                Paraguay_USSR.ForeColor = Color.Red;
                Paraguay_USSR.BackColor = Color.White;
            }
            Paraguay_USA.Text = supervisor.game.countryLst.countries[56].influenceUSA.ToString();
            Paraguay_USSR.Text = supervisor.game.countryLst.countries[56].influenceUSSR.ToString();

            //Peru
            if (supervisor.game.countryLst.countries[57].controller == 1)
            {
                Peru_USA.ForeColor = Color.White;
                Peru_USA.BackColor = Color.Blue;
                Peru_USSR.ForeColor = Color.Red;
                Peru_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[57].controller == -1)
            {
                Peru_USA.ForeColor = Color.Blue;
                Peru_USA.BackColor = Color.White;
                Peru_USSR.ForeColor = Color.White;
                Peru_USSR.BackColor = Color.Red;
            }
            else
            {
                Peru_USA.ForeColor = Color.Blue;
                Peru_USA.BackColor = Color.White;
                Peru_USSR.ForeColor = Color.Red;
                Peru_USSR.BackColor = Color.White;
            }
            Peru_USA.Text = supervisor.game.countryLst.countries[57].influenceUSA.ToString();
            Peru_USSR.Text = supervisor.game.countryLst.countries[57].influenceUSSR.ToString();

            //Philippines
            if (supervisor.game.countryLst.countries[58].controller == 1)
            {
                Philippines_USA.ForeColor = Color.White;
                Philippines_USA.BackColor = Color.Blue;
                Philippines_USSR.ForeColor = Color.Red;
                Philippines_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[58].controller == -1)
            {
                Philippines_USA.ForeColor = Color.Blue;
                Philippines_USA.BackColor = Color.White;
                Philippines_USSR.ForeColor = Color.White;
                Philippines_USSR.BackColor = Color.Red;
            }
            else
            {
                Philippines_USA.ForeColor = Color.Blue;
                Philippines_USA.BackColor = Color.White;
                Philippines_USSR.ForeColor = Color.Red;
                Philippines_USSR.BackColor = Color.White;
            }
            Philippines_USA.Text = supervisor.game.countryLst.countries[58].influenceUSA.ToString();
            Philippines_USSR.Text = supervisor.game.countryLst.countries[58].influenceUSSR.ToString();

            //Poland
            if (supervisor.game.countryLst.countries[59].controller == 1)
            {
                Poland_USA.ForeColor = Color.White;
                Poland_USA.BackColor = Color.Blue;
                Poland_USSR.ForeColor = Color.Red;
                Poland_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[59].controller == -1)
            {
                Poland_USA.ForeColor = Color.Blue;
                Poland_USA.BackColor = Color.White;
                Poland_USSR.ForeColor = Color.White;
                Poland_USSR.BackColor = Color.Red;
            }
            else
            {
                Poland_USA.ForeColor = Color.Blue;
                Poland_USA.BackColor = Color.White;
                Poland_USSR.ForeColor = Color.Red;
                Poland_USSR.BackColor = Color.White;
            }
            Poland_USA.Text = supervisor.game.countryLst.countries[59].influenceUSA.ToString();
            Poland_USSR.Text = supervisor.game.countryLst.countries[59].influenceUSSR.ToString();

            //Romania
            if (supervisor.game.countryLst.countries[60].controller == 1)
            {
                Romania_USA.ForeColor = Color.White;
                Romania_USA.BackColor = Color.Blue;
                Romania_USSR.ForeColor = Color.Red;
                Romania_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[60].controller == -1)
            {
                Romania_USA.ForeColor = Color.Blue;
                Romania_USA.BackColor = Color.White;
                Romania_USSR.ForeColor = Color.White;
                Romania_USSR.BackColor = Color.Red;
            }
            else
            {
                Romania_USA.ForeColor = Color.Blue;
                Romania_USA.BackColor = Color.White;
                Romania_USSR.ForeColor = Color.Red;
                Romania_USSR.BackColor = Color.White;
            }
            Romania_USA.Text = supervisor.game.countryLst.countries[60].influenceUSA.ToString();
            Romania_USSR.Text = supervisor.game.countryLst.countries[60].influenceUSSR.ToString();

            //Southeast African States
            if (supervisor.game.countryLst.countries[61].controller == 1)
            {
                SEAfricanStates_USA.ForeColor = Color.White;
                SEAfricanStates_USA.BackColor = Color.Blue;
                SEAfricanStates_USSR.ForeColor = Color.Red;
                SEAfricanStates_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[61].controller == -1)
            {
                SEAfricanStates_USA.ForeColor = Color.Blue;
                SEAfricanStates_USA.BackColor = Color.White;
                SEAfricanStates_USSR.ForeColor = Color.White;
                SEAfricanStates_USSR.BackColor = Color.Red;
            }
            else
            {
                SEAfricanStates_USA.ForeColor = Color.Blue;
                SEAfricanStates_USA.BackColor = Color.White;
                SEAfricanStates_USSR.ForeColor = Color.Red;
                SEAfricanStates_USSR.BackColor = Color.White;
            }
            SEAfricanStates_USA.Text = supervisor.game.countryLst.countries[61].influenceUSA.ToString();
            SEAfricanStates_USSR.Text = supervisor.game.countryLst.countries[61].influenceUSSR.ToString();

            //Saharan States
            if (supervisor.game.countryLst.countries[62].controller == 1)
            {
                SaharanStates_USA.ForeColor = Color.White;
                SaharanStates_USA.BackColor = Color.Blue;
                SaharanStates_USSR.ForeColor = Color.Red;
                SaharanStates_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[62].controller == -1)
            {
                SaharanStates_USA.ForeColor = Color.Blue;
                SaharanStates_USA.BackColor = Color.White;
                SaharanStates_USSR.ForeColor = Color.White;
                SaharanStates_USSR.BackColor = Color.Red;
            }
            else
            {
                SaharanStates_USA.ForeColor = Color.Blue;
                SaharanStates_USA.BackColor = Color.White;
                SaharanStates_USSR.ForeColor = Color.Red;
                SaharanStates_USSR.BackColor = Color.White;
            }
            SaharanStates_USA.Text = supervisor.game.countryLst.countries[62].influenceUSA.ToString();
            SaharanStates_USSR.Text = supervisor.game.countryLst.countries[62].influenceUSSR.ToString();

            //Saudi Arabia
            if (supervisor.game.countryLst.countries[63].controller == 1)
            {
                SaudiArabia_USA.ForeColor = Color.White;
                SaudiArabia_USA.BackColor = Color.Blue;
                SaudiArabia_USSR.ForeColor = Color.Red;
                SaudiArabia_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[63].controller == -1)
            {
                SaudiArabia_USA.ForeColor = Color.Blue;
                SaudiArabia_USA.BackColor = Color.White;
                SaudiArabia_USSR.ForeColor = Color.White;
                SaudiArabia_USSR.BackColor = Color.Red;
            }
            else
            {
                SaudiArabia_USA.ForeColor = Color.Blue;
                SaudiArabia_USA.BackColor = Color.White;
                SaudiArabia_USSR.ForeColor = Color.Red;
                SaudiArabia_USSR.BackColor = Color.White;
            }
            SaudiArabia_USA.Text = supervisor.game.countryLst.countries[63].influenceUSA.ToString();
            SaudiArabia_USSR.Text = supervisor.game.countryLst.countries[63].influenceUSSR.ToString();

            //Somalia
            if (supervisor.game.countryLst.countries[64].controller == 1)
            {
                Somalia_USA.ForeColor = Color.White;
                Somalia_USA.BackColor = Color.Blue;
                Somalia_USSR.ForeColor = Color.Red;
                Somalia_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[64].controller == -1)
            {
                Somalia_USA.ForeColor = Color.Blue;
                Somalia_USA.BackColor = Color.White;
                Somalia_USSR.ForeColor = Color.White;
                Somalia_USSR.BackColor = Color.Red;
            }
            else
            {
                Somalia_USA.ForeColor = Color.Blue;
                Somalia_USA.BackColor = Color.White;
                Somalia_USSR.ForeColor = Color.Red;
                Somalia_USSR.BackColor = Color.White;
            }
            Somalia_USA.Text = supervisor.game.countryLst.countries[64].influenceUSA.ToString();
            Somalia_USSR.Text = supervisor.game.countryLst.countries[64].influenceUSSR.ToString();

            //South Africa
            if (supervisor.game.countryLst.countries[65].controller == 1)
            {
                SouthAfrica_USA.ForeColor = Color.White;
                SouthAfrica_USA.BackColor = Color.Blue;
                SouthAfrica_USSR.ForeColor = Color.Red;
                SouthAfrica_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[65].controller == -1)
            {
                SouthAfrica_USA.ForeColor = Color.Blue;
                SouthAfrica_USA.BackColor = Color.White;
                SouthAfrica_USSR.ForeColor = Color.White;
                SouthAfrica_USSR.BackColor = Color.Red;
            }
            else
            {
                SouthAfrica_USA.ForeColor = Color.Blue;
                SouthAfrica_USA.BackColor = Color.White;
                SouthAfrica_USSR.ForeColor = Color.Red;
                SouthAfrica_USSR.BackColor = Color.White;
            }
            SouthAfrica_USA.Text = supervisor.game.countryLst.countries[65].influenceUSA.ToString();
            SouthAfrica_USSR.Text = supervisor.game.countryLst.countries[65].influenceUSSR.ToString();

            //South Korea
            if (supervisor.game.countryLst.countries[66].controller == 1)
            {
                SouthKorea_USA.ForeColor = Color.White;
                SouthKorea_USA.BackColor = Color.Blue;
                SouthKorea_USSR.ForeColor = Color.Red;
                SouthKorea_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[66].controller == -1)
            {
                SouthKorea_USA.ForeColor = Color.Blue;
                SouthKorea_USA.BackColor = Color.White;
                SouthKorea_USSR.ForeColor = Color.White;
                SouthKorea_USSR.BackColor = Color.Red;
            }
            else
            {
                SouthKorea_USA.ForeColor = Color.Blue;
                SouthKorea_USA.BackColor = Color.White;
                SouthKorea_USSR.ForeColor = Color.Red;
                SouthKorea_USSR.BackColor = Color.White;
            }
            SouthKorea_USA.Text = supervisor.game.countryLst.countries[66].influenceUSA.ToString();
            SouthKorea_USSR.Text = supervisor.game.countryLst.countries[66].influenceUSSR.ToString();

            //Spain/Portugal
            if (supervisor.game.countryLst.countries[67].controller == 1)
            {
                SpainPortugal_USA.ForeColor = Color.White;
                SpainPortugal_USA.BackColor = Color.Blue;
                SpainPortugal_USSR.ForeColor = Color.Red;
                SpainPortugal_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[67].controller == -1)
            {
                SpainPortugal_USA.ForeColor = Color.Blue;
                SpainPortugal_USA.BackColor = Color.White;
                SpainPortugal_USSR.ForeColor = Color.White;
                SpainPortugal_USSR.BackColor = Color.Red;
            }
            else
            {
                SpainPortugal_USA.ForeColor = Color.Blue;
                SpainPortugal_USA.BackColor = Color.White;
                SpainPortugal_USSR.ForeColor = Color.Red;
                SpainPortugal_USSR.BackColor = Color.White;
            }
            SpainPortugal_USA.Text = supervisor.game.countryLst.countries[67].influenceUSA.ToString();
            SpainPortugal_USSR.Text = supervisor.game.countryLst.countries[67].influenceUSSR.ToString();

            //Sudan
            if (supervisor.game.countryLst.countries[68].controller == 1)
            {
                Sudan_USA.ForeColor = Color.White;
                Sudan_USA.BackColor = Color.Blue;
                Sudan_USSR.ForeColor = Color.Red;
                Sudan_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[68].controller == -1)
            {
                Sudan_USA.ForeColor = Color.Blue;
                Sudan_USA.BackColor = Color.White;
                Sudan_USSR.ForeColor = Color.White;
                Sudan_USSR.BackColor = Color.Red;
            }
            else
            {
                Sudan_USA.ForeColor = Color.Blue;
                Sudan_USA.BackColor = Color.White;
                Sudan_USSR.ForeColor = Color.Red;
                Sudan_USSR.BackColor = Color.White;
            }
            Sudan_USA.Text = supervisor.game.countryLst.countries[68].influenceUSA.ToString();
            Sudan_USSR.Text = supervisor.game.countryLst.countries[68].influenceUSSR.ToString();

            //Sweden
            if (supervisor.game.countryLst.countries[69].controller == 1)
            {
                Sweden_USA.ForeColor = Color.White;
                Sweden_USA.BackColor = Color.Blue;
                Sweden_USSR.ForeColor = Color.Red;
                Sweden_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[69].controller == -1)
            {
                Sweden_USA.ForeColor = Color.Blue;
                Sweden_USA.BackColor = Color.White;
                Sweden_USSR.ForeColor = Color.White;
                Sweden_USSR.BackColor = Color.Red;
            }
            else
            {
                Sweden_USA.ForeColor = Color.Blue;
                Sweden_USA.BackColor = Color.White;
                Sweden_USSR.ForeColor = Color.Red;
                Sweden_USSR.BackColor = Color.White;
            }
            Sweden_USA.Text = supervisor.game.countryLst.countries[69].influenceUSA.ToString();
            Sweden_USSR.Text = supervisor.game.countryLst.countries[69].influenceUSSR.ToString();

            //Syria
            if (supervisor.game.countryLst.countries[70].controller == 1)
            {
                Syria_USA.ForeColor = Color.White;
                Syria_USA.BackColor = Color.Blue;
                Syria_USSR.ForeColor = Color.Red;
                Syria_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[70].controller == -1)
            {
                Syria_USA.ForeColor = Color.Blue;
                Syria_USA.BackColor = Color.White;
                Syria_USSR.ForeColor = Color.White;
                Syria_USSR.BackColor = Color.Red;
            }
            else
            {
                Syria_USA.ForeColor = Color.Blue;
                Syria_USA.BackColor = Color.White;
                Syria_USSR.ForeColor = Color.Red;
                Syria_USSR.BackColor = Color.White;
            }
            Syria_USA.Text = supervisor.game.countryLst.countries[70].influenceUSA.ToString();
            Syria_USSR.Text = supervisor.game.countryLst.countries[70].influenceUSSR.ToString();

            //Taiwan
            if (supervisor.game.countryLst.countries[71].controller == 1)
            {
                Taiwan_USA.ForeColor = Color.White;
                Taiwan_USA.BackColor = Color.Blue;
                Taiwan_USSR.ForeColor = Color.Red;
                Taiwan_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[71].controller == -1)
            {
                Taiwan_USA.ForeColor = Color.Blue;
                Taiwan_USA.BackColor = Color.White;
                Taiwan_USSR.ForeColor = Color.White;
                Taiwan_USSR.BackColor = Color.Red;
            }
            else
            {
                Taiwan_USA.ForeColor = Color.Blue;
                Taiwan_USA.BackColor = Color.White;
                Taiwan_USSR.ForeColor = Color.Red;
                Taiwan_USSR.BackColor = Color.White;
            }
            Taiwan_USA.Text = supervisor.game.countryLst.countries[71].influenceUSA.ToString();
            Taiwan_USSR.Text = supervisor.game.countryLst.countries[71].influenceUSSR.ToString();

            //Thailand
            if (supervisor.game.countryLst.countries[72].controller == 1)
            {
                Thailand_USA.ForeColor = Color.White;
                Thailand_USA.BackColor = Color.Blue;
                Thailand_USSR.ForeColor = Color.Red;
                Thailand_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[72].controller == -1)
            {
                Thailand_USA.ForeColor = Color.Blue;
                Thailand_USA.BackColor = Color.White;
                Thailand_USSR.ForeColor = Color.White;
                Thailand_USSR.BackColor = Color.Red;
            }
            else
            {
                Thailand_USA.ForeColor = Color.Blue;
                Thailand_USA.BackColor = Color.White;
                Thailand_USSR.ForeColor = Color.Red;
                Thailand_USSR.BackColor = Color.White;
            }
            Thailand_USA.Text = supervisor.game.countryLst.countries[72].influenceUSA.ToString();
            Thailand_USSR.Text = supervisor.game.countryLst.countries[72].influenceUSSR.ToString();

            //Tunisia
            if (supervisor.game.countryLst.countries[73].controller == 1)
            {
                Tunisia_USA.ForeColor = Color.White;
                Tunisia_USA.BackColor = Color.Blue;
                Tunisia_USSR.ForeColor = Color.Red;
                Tunisia_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[73].controller == -1)
            {
                Tunisia_USA.ForeColor = Color.Blue;
                Tunisia_USA.BackColor = Color.White;
                Tunisia_USSR.ForeColor = Color.White;
                Tunisia_USSR.BackColor = Color.Red;
            }
            else
            {
                Tunisia_USA.ForeColor = Color.Blue;
                Tunisia_USA.BackColor = Color.White;
                Tunisia_USSR.ForeColor = Color.Red;
                Tunisia_USSR.BackColor = Color.White;
            }
            Tunisia_USA.Text = supervisor.game.countryLst.countries[73].influenceUSA.ToString();
            Tunisia_USSR.Text = supervisor.game.countryLst.countries[73].influenceUSSR.ToString();

            //Turkey
            if (supervisor.game.countryLst.countries[74].controller == 1)
            {
                Turkey_USA.ForeColor = Color.White;
                Turkey_USA.BackColor = Color.Blue;
                Turkey_USSR.ForeColor = Color.Red;
                Turkey_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[74].controller == -1)
            {
                Turkey_USA.ForeColor = Color.Blue;
                Turkey_USA.BackColor = Color.White;
                Turkey_USSR.ForeColor = Color.White;
                Turkey_USSR.BackColor = Color.Red;
            }
            else
            {
                Turkey_USA.ForeColor = Color.Blue;
                Turkey_USA.BackColor = Color.White;
                Turkey_USSR.ForeColor = Color.Red;
                Turkey_USSR.BackColor = Color.White;
            }
            Turkey_USA.Text = supervisor.game.countryLst.countries[74].influenceUSA.ToString();
            Turkey_USSR.Text = supervisor.game.countryLst.countries[74].influenceUSSR.ToString();

            //U.K.
            if (supervisor.game.countryLst.countries[75].controller == 1)
            {
                UK_USA.ForeColor = Color.White;
                UK_USA.BackColor = Color.Blue;
                UK_USSR.ForeColor = Color.Red;
                UK_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[75].controller == -1)
            {
                UK_USA.ForeColor = Color.Blue;
                UK_USA.BackColor = Color.White;
                UK_USSR.ForeColor = Color.White;
                UK_USSR.BackColor = Color.Red;
            }
            else
            {
                UK_USA.ForeColor = Color.Blue;
                UK_USA.BackColor = Color.White;
                UK_USSR.ForeColor = Color.Red;
                UK_USSR.BackColor = Color.White;
            }
            UK_USA.Text = supervisor.game.countryLst.countries[75].influenceUSA.ToString();
            UK_USSR.Text = supervisor.game.countryLst.countries[75].influenceUSSR.ToString();

            //Uruguay
            if (supervisor.game.countryLst.countries[76].controller == 1)
            {
                Uruguay_USA.ForeColor = Color.White;
                Uruguay_USA.BackColor = Color.Blue;
                Uruguay_USSR.ForeColor = Color.Red;
                Uruguay_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[76].controller == -1)
            {
                Uruguay_USA.ForeColor = Color.Blue;
                Uruguay_USA.BackColor = Color.White;
                Uruguay_USSR.ForeColor = Color.White;
                Uruguay_USSR.BackColor = Color.Red;
            }
            else
            {
                Uruguay_USA.ForeColor = Color.Blue;
                Uruguay_USA.BackColor = Color.White;
                Uruguay_USSR.ForeColor = Color.Red;
                Uruguay_USSR.BackColor = Color.White;
            }
            Uruguay_USA.Text = supervisor.game.countryLst.countries[76].influenceUSA.ToString();
            Uruguay_USSR.Text = supervisor.game.countryLst.countries[76].influenceUSSR.ToString();

            //Venezuela
            if (supervisor.game.countryLst.countries[77].controller == 1)
            {
                Venezuela_USA.ForeColor = Color.White;
                Venezuela_USA.BackColor = Color.Blue;
                Venezuela_USSR.ForeColor = Color.Red;
                Venezuela_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[77].controller == -1)
            {
                Venezuela_USA.ForeColor = Color.Blue;
                Venezuela_USA.BackColor = Color.White;
                Venezuela_USSR.ForeColor = Color.White;
                Venezuela_USSR.BackColor = Color.Red;
            }
            else
            {
                Venezuela_USA.ForeColor = Color.Blue;
                Venezuela_USA.BackColor = Color.White;
                Venezuela_USSR.ForeColor = Color.Red;
                Venezuela_USSR.BackColor = Color.White;
            }
            Venezuela_USA.Text = supervisor.game.countryLst.countries[77].influenceUSA.ToString();
            Venezuela_USSR.Text = supervisor.game.countryLst.countries[77].influenceUSSR.ToString();

            //Vietnam
            if (supervisor.game.countryLst.countries[78].controller == 1)
            {
                Vietnam_USA.ForeColor = Color.White;
                Vietnam_USA.BackColor = Color.Blue;
                Vietnam_USSR.ForeColor = Color.Red;
                Vietnam_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[78].controller == -1)
            {
                Vietnam_USA.ForeColor = Color.Blue;
                Vietnam_USA.BackColor = Color.White;
                Vietnam_USSR.ForeColor = Color.White;
                Vietnam_USSR.BackColor = Color.Red;
            }
            else
            {
                Vietnam_USA.ForeColor = Color.Blue;
                Vietnam_USA.BackColor = Color.White;
                Vietnam_USSR.ForeColor = Color.Red;
                Vietnam_USSR.BackColor = Color.White;
            }
            Vietnam_USA.Text = supervisor.game.countryLst.countries[78].influenceUSA.ToString();
            Vietnam_USSR.Text = supervisor.game.countryLst.countries[78].influenceUSSR.ToString();

            //West Germany
            if (supervisor.game.countryLst.countries[79].controller == 1)
            {
                WGermany_USA.ForeColor = Color.White;
                WGermany_USA.BackColor = Color.Blue;
                WGermany_USSR.ForeColor = Color.Red;
                WGermany_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[79].controller == -1)
            {
                WGermany_USA.ForeColor = Color.Blue;
                WGermany_USA.BackColor = Color.White;
                WGermany_USSR.ForeColor = Color.White;
                WGermany_USSR.BackColor = Color.Red;
            }
            else
            {
                WGermany_USA.ForeColor = Color.Blue;
                WGermany_USA.BackColor = Color.White;
                WGermany_USSR.ForeColor = Color.Red;
                WGermany_USSR.BackColor = Color.White;
            }
            WGermany_USA.Text = supervisor.game.countryLst.countries[79].influenceUSA.ToString();
            WGermany_USSR.Text = supervisor.game.countryLst.countries[79].influenceUSSR.ToString();

            //West African States
            if (supervisor.game.countryLst.countries[80].controller == 1)
            {
                WestAfricanStates_USA.ForeColor = Color.White;
                WestAfricanStates_USA.BackColor = Color.Blue;
                WestAfricanStates_USSR.ForeColor = Color.Red;
                WestAfricanStates_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[80].controller == -1)
            {
                WestAfricanStates_USA.ForeColor = Color.Blue;
                WestAfricanStates_USA.BackColor = Color.White;
                WestAfricanStates_USSR.ForeColor = Color.White;
                WestAfricanStates_USSR.BackColor = Color.Red;
            }
            else
            {
                WestAfricanStates_USA.ForeColor = Color.Blue;
                WestAfricanStates_USA.BackColor = Color.White;
                WestAfricanStates_USSR.ForeColor = Color.Red;
                WestAfricanStates_USSR.BackColor = Color.White;
            }
            WestAfricanStates_USA.Text = supervisor.game.countryLst.countries[80].influenceUSA.ToString();
            WestAfricanStates_USSR.Text = supervisor.game.countryLst.countries[80].influenceUSSR.ToString();

            //Yugoslavia
            if (supervisor.game.countryLst.countries[81].controller == 1)
            {
                Yugoslavia_USA.ForeColor = Color.White;
                Yugoslavia_USA.BackColor = Color.Blue;
                Yugoslavia_USSR.ForeColor = Color.Red;
                Yugoslavia_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[81].controller == -1)
            {
                Yugoslavia_USA.ForeColor = Color.Blue;
                Yugoslavia_USA.BackColor = Color.White;
                Yugoslavia_USSR.ForeColor = Color.White;
                Yugoslavia_USSR.BackColor = Color.Red;
            }
            else
            {
                Yugoslavia_USA.ForeColor = Color.Blue;
                Yugoslavia_USA.BackColor = Color.White;
                Yugoslavia_USSR.ForeColor = Color.Red;
                Yugoslavia_USSR.BackColor = Color.White;
            }
            Yugoslavia_USA.Text = supervisor.game.countryLst.countries[81].influenceUSA.ToString();
            Yugoslavia_USSR.Text = supervisor.game.countryLst.countries[81].influenceUSSR.ToString();

            //Zaire
            if (supervisor.game.countryLst.countries[82].controller == 1)
            {
                Zaire_USA.ForeColor = Color.White;
                Zaire_USA.BackColor = Color.Blue;
                Zaire_USSR.ForeColor = Color.Red;
                Zaire_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[82].controller == -1)
            {
                Zaire_USA.ForeColor = Color.Blue;
                Zaire_USA.BackColor = Color.White;
                Zaire_USSR.ForeColor = Color.White;
                Zaire_USSR.BackColor = Color.Red;
            }
            else
            {
                Zaire_USA.ForeColor = Color.Blue;
                Zaire_USA.BackColor = Color.White;
                Zaire_USSR.ForeColor = Color.Red;
                Zaire_USSR.BackColor = Color.White;
            }
            Zaire_USA.Text = supervisor.game.countryLst.countries[82].influenceUSA.ToString();
            Zaire_USSR.Text = supervisor.game.countryLst.countries[82].influenceUSSR.ToString();

            //Zimbabwe
            if (supervisor.game.countryLst.countries[83].controller == 1)
            {
                Zimbabwe_USA.ForeColor = Color.White;
                Zimbabwe_USA.BackColor = Color.Blue;
                Zimbabwe_USSR.ForeColor = Color.Red;
                Zimbabwe_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[83].controller == -1)
            {
                Zimbabwe_USA.ForeColor = Color.Blue;
                Zimbabwe_USA.BackColor = Color.White;
                Zimbabwe_USSR.ForeColor = Color.White;
                Zimbabwe_USSR.BackColor = Color.Red;
            }
            else
            {
                Zimbabwe_USA.ForeColor = Color.Blue;
                Zimbabwe_USA.BackColor = Color.White;
                Zimbabwe_USSR.ForeColor = Color.Red;
                Zimbabwe_USSR.BackColor = Color.White;
            }
            Zimbabwe_USA.Text = supervisor.game.countryLst.countries[83].influenceUSA.ToString();
            Zimbabwe_USSR.Text = supervisor.game.countryLst.countries[83].influenceUSSR.ToString();

            //Board State
            Turn_lbl.Text = supervisor.game.turn.ToString();
            Round_lbl.Text = supervisor.game.round.ToString();
            Score_lbl.Text = supervisor.game.score.ToString();
            Defcon_lbl.Text = supervisor.game.defcon.ToString();
            MilitaryOps_USA.Text = supervisor.game.usMilOps.ToString();
            MilitaryOps_USSR.Text = supervisor.game.ussrMilOps.ToString();
            SpaceRace_USA.Text = supervisor.game.usSpaceRace.ToString();
            SpaceRace_USSR.Text = supervisor.game.ussrSpaceRace.ToString();
        }

        private void uSAToolStripMenuItem_Click(object sender, EventArgs e)
        {
            supervisor.player = 1;
            supervisor.AI = -1;
            supervisor.newGame();
            refreshEvent();
            //play game
        }

        private void uSSRToolStripMenuItem_Click(object sender, EventArgs e)
        {
            supervisor.player = -1;
            supervisor.AI = 1;
            supervisor.newGame();
            refreshEvent();
            //play game
        }

        private void toolStripMenuItem2_Click(object sender, EventArgs e)
        {
            supervisor.game.turn = 1;
            refreshEvent();
        }

        private void toolStripMenuItem3_Click(object sender, EventArgs e)
        {
            supervisor.game.turn = 2;
            refreshEvent();
        }

        private void toolStripMenuItem4_Click(object sender, EventArgs e)
        {
            supervisor.game.turn = 3;
            refreshEvent();
        }

        private void toolStripMenuItem5_Click(object sender, EventArgs e)
        {
            supervisor.game.turn = 4;
            refreshEvent();
        }

        private void toolStripMenuItem6_Click(object sender, EventArgs e)
        {
            supervisor.game.turn = 5;
            refreshEvent();
        }

        private void toolStripMenuItem7_Click(object sender, EventArgs e)
        {
            supervisor.game.turn = 6;
            refreshEvent();
        }

        private void toolStripMenuItem8_Click(object sender, EventArgs e)
        {
            supervisor.game.turn = 7;
            refreshEvent();
        }

        private void toolStripMenuItem9_Click(object sender, EventArgs e)
        {
            supervisor.game.turn = 8;
            refreshEvent();
        }

        private void toolStripMenuItem10_Click(object sender, EventArgs e)
        {
            supervisor.game.turn = 9;
            refreshEvent();
        }

        private void toolStripMenuItem11_Click(object sender, EventArgs e)
        {
            supervisor.game.turn = 10;
            refreshEvent();
        }

        private void toolStripMenuItem21_Click(object sender, EventArgs e)
        {
            supervisor.game.score = 1;
            refreshEvent();
        }

        private void toolStripMenuItem22_Click(object sender, EventArgs e)
        {
            supervisor.game.score = 2;
            refreshEvent();
        }

        private void toolStripMenuItem23_Click(object sender, EventArgs e)
        {
            supervisor.game.score = 3;
            refreshEvent();
        }

        private void toolStripMenuItem24_Click(object sender, EventArgs e)
        {
            supervisor.game.score = 4;
            refreshEvent();
        }

        private void toolStripMenuItem25_Click(object sender, EventArgs e)
        {
            supervisor.game.score = 5;
            refreshEvent();
        }

        private void toolStripMenuItem26_Click(object sender, EventArgs e)
        {
            supervisor.game.score = 6;
            refreshEvent();
        }

        private void toolStripMenuItem27_Click(object sender, EventArgs e)
        {
            supervisor.game.score = 7;
            refreshEvent();
        }

        private void toolStripMenuItem28_Click(object sender, EventArgs e)
        {
            supervisor.game.score = 8;
            refreshEvent();
        }

        private void toolStripMenuItem29_Click(object sender, EventArgs e)
        {
            supervisor.game.score = 9;
            refreshEvent();
        }

        private void toolStripMenuItem30_Click(object sender, EventArgs e)
        {
            supervisor.game.score = 10;
            refreshEvent();
        }

        private void toolStripMenuItem31_Click(object sender, EventArgs e)
        {
            supervisor.game.score = 11;
            refreshEvent();
        }

        private void toolStripMenuItem32_Click(object sender, EventArgs e)
        {
            supervisor.game.score = 12;
            refreshEvent();
        }

        private void toolStripMenuItem33_Click(object sender, EventArgs e)
        {
            supervisor.game.score = 13;
            refreshEvent();
        }

        private void toolStripMenuItem34_Click(object sender, EventArgs e)
        {
            supervisor.game.score = 14;
            refreshEvent();
        }

        private void toolStripMenuItem35_Click(object sender, EventArgs e)
        {
            supervisor.game.score = 15;
            refreshEvent();
        }

        private void toolStripMenuItem36_Click(object sender, EventArgs e)
        {
            supervisor.game.score = 16;
            refreshEvent();
        }

        private void toolStripMenuItem37_Click(object sender, EventArgs e)
        {
            supervisor.game.score = 17;
            refreshEvent();
        }

        private void toolStripMenuItem38_Click(object sender, EventArgs e)
        {
            supervisor.game.score = 18;
            refreshEvent();
        }

        private void toolStripMenuItem39_Click(object sender, EventArgs e)
        {
            supervisor.game.score = 19;
            refreshEvent();
        }

        private void toolStripMenuItem20_Click(object sender, EventArgs e)
        {
            supervisor.game.score = 0;
            refreshEvent();
        }

        private void toolStripMenuItem40_Click(object sender, EventArgs e)
        {
            supervisor.game.score = -1;
            refreshEvent();
        }

        private void toolStripMenuItem41_Click(object sender, EventArgs e)
        {
            supervisor.game.score = -2;
            refreshEvent();
        }

        private void toolStripMenuItem42_Click(object sender, EventArgs e)
        {
            supervisor.game.score = -3;
            refreshEvent();
        }

        private void toolStripMenuItem43_Click(object sender, EventArgs e)
        {
            supervisor.game.score = -4;
            refreshEvent();
        }

        private void toolStripMenuItem44_Click(object sender, EventArgs e)
        {
            supervisor.game.score = -5;
            refreshEvent();
        }

        private void toolStripMenuItem45_Click(object sender, EventArgs e)
        {
            supervisor.game.score = -6;
            refreshEvent();
        }

        private void toolStripMenuItem46_Click(object sender, EventArgs e)
        {
            supervisor.game.score = -7;
            refreshEvent();
        }

        private void toolStripMenuItem47_Click(object sender, EventArgs e)
        {
            supervisor.game.score = -8;
            refreshEvent();
        }

        private void toolStripMenuItem48_Click(object sender, EventArgs e)
        {
            supervisor.game.score = -9;
            refreshEvent();
        }

        private void toolStripMenuItem49_Click(object sender, EventArgs e)
        {
            supervisor.game.score = -10;
            refreshEvent();
        }

        private void toolStripMenuItem50_Click(object sender, EventArgs e)
        {
            supervisor.game.score = -11;
            refreshEvent();
        }

        private void toolStripMenuItem51_Click(object sender, EventArgs e)
        {
            supervisor.game.score = -12;
            refreshEvent();
        }

        private void toolStripMenuItem52_Click(object sender, EventArgs e)
        {
            supervisor.game.score = -13;
            refreshEvent();
        }

        private void toolStripMenuItem53_Click(object sender, EventArgs e)
        {
            supervisor.game.score = -14;
            refreshEvent();
        }

        private void toolStripMenuItem54_Click(object sender, EventArgs e)
        {
            supervisor.game.score = -15;
            refreshEvent();
        }

        private void toolStripMenuItem55_Click(object sender, EventArgs e)
        {
            supervisor.game.score = -16;
            refreshEvent();
        }

        private void toolStripMenuItem56_Click(object sender, EventArgs e)
        {
            supervisor.game.score = -17;
            refreshEvent();
        }

        private void toolStripMenuItem57_Click(object sender, EventArgs e)
        {
            supervisor.game.score = -18;
            refreshEvent();
        }

        private void toolStripMenuItem58_Click(object sender, EventArgs e)
        {
            supervisor.game.score = -20;
            refreshEvent();
        }

        private void toolStripMenuItem59_Click(object sender, EventArgs e)
        {
            supervisor.game.defcon = 5;
            refreshEvent();
        }

        private void toolStripMenuItem60_Click(object sender, EventArgs e)
        {
            supervisor.game.defcon = 4;
            refreshEvent();
        }

        private void toolStripMenuItem61_Click(object sender, EventArgs e)
        {
            supervisor.game.defcon = 3;
            refreshEvent();
        }

        private void toolStripMenuItem62_Click(object sender, EventArgs e)
        {
            supervisor.game.score = 2;
            refreshEvent();
        }

        private void toolStripMenuItem63_Click(object sender, EventArgs e)
        {
            supervisor.game.usMilOps = 0;
            refreshEvent();
        }

        private void toolStripMenuItem64_Click(object sender, EventArgs e)
        {
            supervisor.game.usMilOps = 1;
            refreshEvent();
        }

        private void toolStripMenuItem65_Click(object sender, EventArgs e)
        {
            supervisor.game.usMilOps = 2;
            refreshEvent();
        }

        private void toolStripMenuItem66_Click(object sender, EventArgs e)
        {
            supervisor.game.usMilOps = 3;
            refreshEvent();
        }

        private void toolStripMenuItem67_Click(object sender, EventArgs e)
        {
            supervisor.game.usMilOps = 4;
            refreshEvent();
        }

        private void toolStripMenuItem68_Click(object sender, EventArgs e)
        {
            supervisor.game.usMilOps = 5;
            refreshEvent();
        }

        private void toolStripMenuItem69_Click(object sender, EventArgs e)
        {
            supervisor.game.ussrMilOps = 0;
            refreshEvent();
        }

        private void toolStripMenuItem70_Click(object sender, EventArgs e)
        {
            supervisor.game.ussrMilOps = 1;
            refreshEvent();
        }

        private void toolStripMenuItem71_Click(object sender, EventArgs e)
        {
            supervisor.game.ussrMilOps = 2;
            refreshEvent();
        }

        private void toolStripMenuItem72_Click(object sender, EventArgs e)
        {
            supervisor.game.ussrMilOps = 3;
            refreshEvent();
        }

        private void toolStripMenuItem73_Click(object sender, EventArgs e)
        {
            supervisor.game.ussrMilOps = 4;
            refreshEvent();
        }

        private void toolStripMenuItem74_Click(object sender, EventArgs e)
        {
            supervisor.game.ussrMilOps = 5;
            refreshEvent();
        }

        private void startToolStripMenuItem_Click(object sender, EventArgs e)
        {
            supervisor.game.usSpaceRace = 0;
            refreshEvent();
        }

        private void toolStripMenuItem75_Click(object sender, EventArgs e)
        {
            supervisor.game.usSpaceRace = 1;
            refreshEvent();
        }

        private void toolStripMenuItem76_Click(object sender, EventArgs e)
        {
            supervisor.game.usSpaceRace = 2;
            refreshEvent();
        }

        private void toolStripMenuItem77_Click(object sender, EventArgs e)
        {
            supervisor.game.usSpaceRace = 3;
            refreshEvent();
        }

        private void toolStripMenuItem78_Click(object sender, EventArgs e)
        {
            supervisor.game.usSpaceRace = 4;
            refreshEvent();
        }

        private void toolStripMenuItem79_Click(object sender, EventArgs e)
        {
            supervisor.game.usSpaceRace = 5;
            refreshEvent();
        }

        private void toolStripMenuItem80_Click(object sender, EventArgs e)
        {
            supervisor.game.usSpaceRace = 6;
            refreshEvent();
        }

        private void toolStripMenuItem81_Click(object sender, EventArgs e)
        {
            supervisor.game.usSpaceRace = 7;
            refreshEvent();
        }

        private void toolStripMenuItem82_Click(object sender, EventArgs e)
        {
            supervisor.game.usSpaceRace = 8;
            refreshEvent();
        }

        private void startToolStripMenuItem1_Click(object sender, EventArgs e)
        {
            supervisor.game.ussrSpaceRace = 0;
            refreshEvent();
        }

        private void toolStripMenuItem83_Click(object sender, EventArgs e)
        {
            supervisor.game.ussrSpaceRace = 1;
            refreshEvent();
        }

        private void toolStripMenuItem84_Click(object sender, EventArgs e)
        {
            supervisor.game.ussrSpaceRace = 2;
            refreshEvent();
        }

        private void toolStripMenuItem85_Click(object sender, EventArgs e)
        {
            supervisor.game.ussrSpaceRace = 3;
            refreshEvent();
        }

        private void toolStripMenuItem86_Click(object sender, EventArgs e)
        {
            supervisor.game.ussrSpaceRace = 4;
            refreshEvent();
        }

        private void toolStripMenuItem87_Click(object sender, EventArgs e)
        {
            supervisor.game.ussrSpaceRace = 5;
            refreshEvent();
        }

        private void toolStripMenuItem88_Click(object sender, EventArgs e)
        {
            supervisor.game.ussrSpaceRace = 6;
            refreshEvent();
        }

        private void toolStripMenuItem89_Click(object sender, EventArgs e)
        {
            supervisor.game.ussrSpaceRace = 7;
            refreshEvent();
        }

        private void toolStripMenuItem90_Click(object sender, EventArgs e)
        {
            supervisor.game.ussrSpaceRace = 8;
            refreshEvent();
        }

        private void headlinePhaseToolStripMenuItem_Click(object sender, EventArgs e)
        {
            supervisor.game.round = 0;
            refreshEvent();
        }

        private void toolStripMenuItem12_Click(object sender, EventArgs e)
        {
            supervisor.game.round = 1;
            refreshEvent();
        }

        private void toolStripMenuItem13_Click(object sender, EventArgs e)
        {
            supervisor.game.round = 2;
            refreshEvent();
        }

        private void toolStripMenuItem14_Click(object sender, EventArgs e)
        {
            supervisor.game.round = 3;
            refreshEvent();
        }

        private void toolStripMenuItem15_Click(object sender, EventArgs e)
        {
            supervisor.game.round = 4;
            refreshEvent();
        }

        private void toolStripMenuItem16_Click(object sender, EventArgs e)
        {
            supervisor.game.round = 5;
            refreshEvent();
        }

        private void toolStripMenuItem17_Click(object sender, EventArgs e)
        {
            supervisor.game.round = 6;
            refreshEvent();
        }

        private void toolStripMenuItem18_Click(object sender, EventArgs e)
        {
            supervisor.game.round = 7;
            refreshEvent();
        }

        private void toolStripMenuItem19_Click(object sender, EventArgs e)
        {
            supervisor.game.round = 8;
            refreshEvent();
        }

        private void toolStripMenuItem91_Click(object sender, EventArgs e)
        {
            supervisor.game.round = 9;
            refreshEvent();
        }

        private void toolStripMenuItem92_Click(object sender, EventArgs e)
        {
            supervisor.game.round = 10;
            refreshEvent();
        }

        private void toolStripMenuItem93_Click(object sender, EventArgs e)
        {
            supervisor.game.round = 11;
            refreshEvent();
        }

        private void toolStripMenuItem94_Click(object sender, EventArgs e)
        {
            supervisor.game.round = 12;
            refreshEvent();
        }

        private void toolStripMenuItem95_Click(object sender, EventArgs e)
        {
            supervisor.game.round = 13;
            refreshEvent();
        }

        private void toolStripMenuItem96_Click(object sender, EventArgs e)
        {
            supervisor.game.round = 14;
            refreshEvent();
        }

        private void toolStripMenuItem97_Click(object sender, EventArgs e)
        {
            supervisor.game.round = 15;
            refreshEvent();
        }

        private void toolStripMenuItem98_Click(object sender, EventArgs e)
        {
            supervisor.game.round = 16;
            refreshEvent();
        }

        private void algeriaToolStripMenuItem_Click(object sender, EventArgs e)
        {
            var popup = new Properties.EditCountryScore();
            popup.ShowDialog();
        }
    }
}
