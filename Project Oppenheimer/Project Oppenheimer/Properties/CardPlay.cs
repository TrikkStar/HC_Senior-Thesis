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
        private Card card;
        private Supervisor TS;
        public CardPlay(Card _card, Supervisor supervisor)
        {
            card = _card;
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
            else if (SpaceRace_Radio.Checked)
            {
                isDiscarded = true;
            }
            if (TS.player == 1)
            {
                TS.playCard(1, card.id, isEvent, isDiscarded);
            }
            else
            {
                TS.playCard(-1, card.id, isEvent, isDiscarded);
            }
            this.Close();
        }
    }
}
