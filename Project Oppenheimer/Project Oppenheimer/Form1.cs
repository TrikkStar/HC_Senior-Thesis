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
