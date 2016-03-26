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
            this.Text = card.name;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (Event_Radio.Checked)
            {
                var popup = new SingleEventTarget();
                popup.ShowDialog();
                TS.playCard(TS.player, card.id, true, false);
                this.Close();
            }
            else if (SpaceRace_Radio.Checked)
            {
                TS.attemptSpaceRace(TS.player);
                TS.playCard(TS.player, card.id, false, true);
                this.Close();
            }
            else if (OPS_Radio.Checked)
            {
                //need to make targeting form
                TS.playCard(TS.player, card.id, false, false);
                this.Close();
            }
        }

        private void OPS_Radio_CheckedChanged(object sender, EventArgs e)
        {
            groupBox2.Enabled = true;
        }

        private void Event_Radio_CheckedChanged(object sender, EventArgs e)
        {
            groupBox2.Enabled = false;
        }

        private void SpaceRace_Radio_CheckedChanged(object sender, EventArgs e)
        {
            groupBox2.Enabled = false;
        }
    }
}
