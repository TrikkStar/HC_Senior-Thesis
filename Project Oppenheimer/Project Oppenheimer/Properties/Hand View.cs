using System.Collections.Generic;
using System.Windows.Forms;

namespace Project_Oppenheimer.Properties
{
    public partial class Hand_View : Form
    {
        private string display = "";
        public Hand_View(List<Card> hand)
        {
            foreach (var card in hand)
            {
                display = display + card.name + "\r\n";
            }
            InitializeComponent();
            label1.Text = display;
        }
    }
}
