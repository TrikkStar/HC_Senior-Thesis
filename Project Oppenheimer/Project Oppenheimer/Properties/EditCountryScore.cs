using System;
using System.Windows.Forms;

namespace Project_Oppenheimer.Properties
{
    public partial class EditCountryScore : Form
    {
        private Country target;
        public EditCountryScore(Country country)
        {
            InitializeComponent();
            target = country;
            this.Text = target.name;
        }

        private void submit_button_Click(object sender, EventArgs e)
        {
            target.set_infUSA(Decimal.ToInt32(USA_UpDown.Value));
            target.set_infUSSR(Decimal.ToInt32(USSR_UpDown.Value));
            this.Close();
        }
    }
}
