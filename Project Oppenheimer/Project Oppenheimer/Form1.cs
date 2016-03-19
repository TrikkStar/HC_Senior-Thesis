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
                Australia_USSR.ForeColor = Color.White;
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
                Austria_USSR.ForeColor = Color.White;
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
                Benlux_USSR.ForeColor = Color.White;
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
                Bolivia_USSR.ForeColor = Color.White;
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
                Botswana_USSR.ForeColor = Color.White;
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
                Brazil_USSR.ForeColor = Color.White;
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
                Bulgaria_USSR.ForeColor = Color.White;
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
                Burma_USSR.ForeColor = Color.White;
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
                Cameroon_USSR.ForeColor = Color.White;
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
                Canada_USSR.ForeColor = Color.White;
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
                Chile_USSR.ForeColor = Color.White;
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
                Colombia_USSR.ForeColor = Color.White;
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
                CostaRica_USSR.ForeColor = Color.White;
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
                Cuba_USSR.ForeColor = Color.White;
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
                Czechoslovakia_USSR.ForeColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[18].controller == -1)
            {
                Czechoslovakia_USA.ForeColor = Color.Blue;
                Czechoslovakia_USA].BackColor = Color.White;
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
                Denmark_USSR.ForeColor = Color.White;
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
                DominicanRep_USSR.ForeColor = Color.White;
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
                EGermany_USSR.ForeColor = Color.White;
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
                Ecuador_USSR.ForeColor = Color.White;
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
                Egypt_USSR.ForeColor = Color.White;
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
                ElSalvador_USSR.ForeColor = Color.White;
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
                Ethiopia_USSR.ForeColor = Color.White;
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
                Finland_USSR.ForeColor = Color.White;
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
                France_USSR.ForeColor = Color.White;
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
                Greece_USSR.ForeColor = Color.White;
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
                Guatemala_USSR.ForeColor = Color.White;
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
                GulfStates_USSR.ForeColor = Color.White;
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
                Haiti_USSR.ForeColor = Color.White;
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
                Honduras_USSR.ForeColor = Color.White;
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
                Hungary_USSR.ForeColor = Color.White;
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
                India_USSR.ForeColor = Color.White;
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
                Indonesia_USSR.ForeColor = Color.White;
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
                Iran_USSR.ForeColor = Color.White;
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
                Iraq_USSR.ForeColor = Color.White;
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
                Israel_USSR.ForeColor = Color.White;
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
                Italy_USSR.ForeColor = Color.White;
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
                IvoryCoast_USSR.ForeColor = Color.White;
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
                Japan_USSR.ForeColor = Color.White;
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
                Jordan_USSR.ForeColor = Color.White;
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
                Kenya_USSR.ForeColor = Color.White;
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
                LaosCambodia_USSR.ForeColor = Color.White;
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
                Lebanon_USSR.ForeColor = Color.White;
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
                Libya_USSR.ForeColor = Color.White;
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


        }

        private void uSAToolStripMenuItem_Click(object sender, EventArgs e)
        {
            supervisor.player = 1;
            supervisor.AI = -1;
            //play game
        }

        private void uSSRToolStripMenuItem_Click(object sender, EventArgs e)
        {
            supervisor.player = -1;
            supervisor.AI = 1;
            //play game
        }
    }
}
