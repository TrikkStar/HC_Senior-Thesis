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
            //Algeria
            if (supervisor.game.countryLst.countries[1].controller == 1)
            {
                Algeria_USA.ForeColor = Color.White;
                Algeria_USA.BackColor = Color.Blue;
                Algeria_USSR.ForeColor = Color.Red;
                Algeria_USSR.BackColor = Color.White;
            }
            else if (supervisor.game.countryLst.countries[1]. controller == -1)
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
