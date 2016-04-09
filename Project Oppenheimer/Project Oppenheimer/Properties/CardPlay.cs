using System;
using System.Collections.Generic;
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
                if (card.scoring)
                {
                    TS.game.scoreRegion(card.id);
                }
                else if (doesNotTarget(card.id))
                {
                    TS.applyEvent(TS.player, card.id, new List<int> {0}, new List<int> {0});
                }
                else if (isSingleTarget(card.id))
                {
                    using (var form = new SingleEventTarget())
                    {
                        form.ShowDialog();
                        TS.applyEvent(TS.player, card.id, new List<int> { form.target }, new List<int> {0});
                    }
                }
                else if (isMultiTarget(card.id))
                {
                    using (var form = new MultiEventTargeting())
                    {
                        form.ShowDialog();
                        TS.applyEvent(TS.player, card.id, form.targets, new List<int> { 0 });
                    }
                }
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
                if (Coup_Radio.Checked)
                {
                    using (var form = new SingleEventTarget())
                    {
                        form.ShowDialog();
                        TS.attemptCoup(TS.player, form.target, card.opsValue);
                    }
                }
                else
                {
                    using (var form = new MultiEventTargeting())
                    {
                        form.ShowDialog();
                        var targets = form.targets;
                        if (targets.Count < card.opsValue)
                        {
                            while(targets.Count < card.opsValue)
                            {
                                using (var newForm = new SingleEventTarget())
                                {
                                    newForm.ShowDialog();
                                    targets.Add(newForm.target);
                                }
                            }
                        }
                        if (Realignment_Radio.Checked)
                        {
                            //need to change this to single event targeting, so all results are displayed to the user
                            foreach (int target in targets)
                            {
                                System.Diagnostics.Debug.WriteLine(target);
                                //TS.attempRealignment(TS.player, target);
                            }
                        }
                        else
                        {
                            //need to figure out way to factor in multiple points being spent because of control
                            foreach (int target in targets)
                            {
                                System.Diagnostics.Debug.WriteLine(target);
                                //TS.placeInfluence(TS.player, target, 1);
                            }
                        }
                    }
                }
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

        private bool doesNotTarget(int card)
        {
            switch (card)
            {
                case 4:
                case 5:
                case 8:
                case 9:
                case 10:
                case 11:
                case 12:
                case 13:
                case 15:
                case 17:
                case 18:
                case 20:
                case 21:
                case 25:
                case 26:
                case 27:
                case 31:
                case 32:
                case 34:
                case 35:
                case 103:
                    return true;
            }
            return false;
        }

        private bool isSingleTarget(int card)
        {
            switch (card)
            {
                case 19:
                case 22:
                case 24:
                case 104:
                    return true;
            }
            return false;
        }

        private bool isMultiTarget(int card)
        {
            switch (card)
            {
                case 7:
                case 16:
                case 23:
                case 28:
                case 29:
                case 30:
                case 33:
                case 105:
                case 106:
                return true;
            }
        return false;
        }
    }
}
