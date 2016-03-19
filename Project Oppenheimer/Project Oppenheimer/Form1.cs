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
