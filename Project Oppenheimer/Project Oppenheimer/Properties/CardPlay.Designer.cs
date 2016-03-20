namespace Project_Oppenheimer.Properties
{
    partial class CardPlay
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.SpaceRace_Radio = new System.Windows.Forms.RadioButton();
            this.Event_Radio = new System.Windows.Forms.RadioButton();
            this.OPS_Radio = new System.Windows.Forms.RadioButton();
            this.button1 = new System.Windows.Forms.Button();
            this.groupBox1.SuspendLayout();
            this.SuspendLayout();
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.SpaceRace_Radio);
            this.groupBox1.Controls.Add(this.Event_Radio);
            this.groupBox1.Controls.Add(this.OPS_Radio);
            this.groupBox1.Location = new System.Drawing.Point(13, 13);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(119, 107);
            this.groupBox1.TabIndex = 0;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "Chose Action";
            // 
            // SpaceRace_Radio
            // 
            this.SpaceRace_Radio.AutoSize = true;
            this.SpaceRace_Radio.Location = new System.Drawing.Point(7, 78);
            this.SpaceRace_Radio.Name = "SpaceRace_Radio";
            this.SpaceRace_Radio.Size = new System.Drawing.Size(106, 21);
            this.SpaceRace_Radio.TabIndex = 2;
            this.SpaceRace_Radio.TabStop = true;
            this.SpaceRace_Radio.Text = "Space Race";
            this.SpaceRace_Radio.UseVisualStyleBackColor = true;
            // 
            // Event_Radio
            // 
            this.Event_Radio.AutoSize = true;
            this.Event_Radio.Location = new System.Drawing.Point(7, 50);
            this.Event_Radio.Name = "Event_Radio";
            this.Event_Radio.Size = new System.Drawing.Size(65, 21);
            this.Event_Radio.TabIndex = 1;
            this.Event_Radio.TabStop = true;
            this.Event_Radio.Text = "Event";
            this.Event_Radio.UseVisualStyleBackColor = true;
            // 
            // OPS_Radio
            // 
            this.OPS_Radio.AutoSize = true;
            this.OPS_Radio.Location = new System.Drawing.Point(7, 22);
            this.OPS_Radio.Name = "OPS_Radio";
            this.OPS_Radio.Size = new System.Drawing.Size(101, 21);
            this.OPS_Radio.TabIndex = 0;
            this.OPS_Radio.TabStop = true;
            this.OPS_Radio.Text = "OPS Points";
            this.OPS_Radio.UseVisualStyleBackColor = true;
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(20, 126);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(77, 28);
            this.button1.TabIndex = 1;
            this.button1.Text = "Play Card";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // CardPlay
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(140, 160);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.groupBox1);
            this.MaximizeBox = false;
            this.MinimizeBox = false;
            this.Name = "CardPlay";
            this.ShowIcon = false;
            this.ShowInTaskbar = false;
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterParent;
            this.Text = "Play Card";
            this.TopMost = true;
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.RadioButton SpaceRace_Radio;
        private System.Windows.Forms.RadioButton Event_Radio;
        private System.Windows.Forms.RadioButton OPS_Radio;
        private System.Windows.Forms.Button button1;
    }
}