namespace Project_Oppenheimer.Properties
{
    partial class EditCountryScore
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
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.USA_UpDown = new System.Windows.Forms.NumericUpDown();
            this.USSR_UpDown = new System.Windows.Forms.NumericUpDown();
            this.submit_button = new System.Windows.Forms.Button();
            ((System.ComponentModel.ISupportInitialize)(this.USA_UpDown)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.USSR_UpDown)).BeginInit();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(25, 9);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(36, 17);
            this.label1.TabIndex = 0;
            this.label1.Text = "USA";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(93, 9);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(46, 17);
            this.label2.TabIndex = 1;
            this.label2.Text = "USSR";
            // 
            // USA_UpDown
            // 
            this.USA_UpDown.Location = new System.Drawing.Point(28, 48);
            this.USA_UpDown.Maximum = new decimal(new int[] {
            20,
            0,
            0,
            0});
            this.USA_UpDown.Minimum = new decimal(new int[] {
            20,
            0,
            0,
            -2147483648});
            this.USA_UpDown.Name = "USA_UpDown";
            this.USA_UpDown.Size = new System.Drawing.Size(43, 22);
            this.USA_UpDown.TabIndex = 2;
            // 
            // USSR_UpDown
            // 
            this.USSR_UpDown.Location = new System.Drawing.Point(96, 48);
            this.USSR_UpDown.Maximum = new decimal(new int[] {
            20,
            0,
            0,
            0});
            this.USSR_UpDown.Minimum = new decimal(new int[] {
            20,
            0,
            0,
            -2147483648});
            this.USSR_UpDown.Name = "USSR_UpDown";
            this.USSR_UpDown.Size = new System.Drawing.Size(43, 22);
            this.USSR_UpDown.TabIndex = 3;
            // 
            // submit_button
            // 
            this.submit_button.Location = new System.Drawing.Point(43, 85);
            this.submit_button.Name = "submit_button";
            this.submit_button.Size = new System.Drawing.Size(75, 23);
            this.submit_button.TabIndex = 4;
            this.submit_button.Text = "Submit";
            this.submit_button.UseVisualStyleBackColor = true;
            this.submit_button.Click += new System.EventHandler(this.submit_button_Click);
            // 
            // EditCountryScore
            // 
            this.AcceptButton = this.submit_button;
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(174, 120);
            this.Controls.Add(this.submit_button);
            this.Controls.Add(this.USSR_UpDown);
            this.Controls.Add(this.USA_UpDown);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedSingle;
            this.MaximizeBox = false;
            this.MinimizeBox = false;
            this.Name = "EditCountryScore";
            this.ShowIcon = false;
            this.ShowInTaskbar = false;
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterParent;
            this.Text = "Add Score";
            this.TopMost = true;
            ((System.ComponentModel.ISupportInitialize)(this.USA_UpDown)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.USSR_UpDown)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.NumericUpDown USA_UpDown;
        private System.Windows.Forms.NumericUpDown USSR_UpDown;
        private System.Windows.Forms.Button submit_button;
    }
}