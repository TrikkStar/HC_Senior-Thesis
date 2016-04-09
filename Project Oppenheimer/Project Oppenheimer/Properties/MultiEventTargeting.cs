using System;
using System.Collections.Generic;
using System.Windows.Forms;

namespace Project_Oppenheimer.Properties
{
    public partial class MultiEventTargeting : Form
    {
        public List<int> targets = new List<int>{};

        public MultiEventTargeting()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            foreach (int index in checkedListBox1.CheckedIndices)
            {
                targets.Add(index);
            }
            this.Close();
        }
    }
}
