using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Project_Oppenheimer.Properties
{
    public partial class CardPlay : Form
    {
        private Card target;
        private Supervisor TS;
        public CardPlay(Card card, Supervisor supervisor)
        {
            target = card;
            TS = supervisor;
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            //stuff for it to do
            bool isEvent = false;
            bool isDiscarded = false;
            if (Event_Radio.Checked)
            {
                isEvent = true;
            }
            if (SpaceRace_Radio.Checked)
            {
                isDiscarded = true;
            }
            if (TS.player == 1)
            {
                TS.playCard(1, target.id, isEvent, isDiscarded);
            }
            else
            {
                TS.playCard(-1, target.id, isEvent, isDiscarded);
            }
            this.Close();
        }
    }
}
