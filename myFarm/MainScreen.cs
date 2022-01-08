using MySql.Data.MySqlClient;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace myFarm
{
    public partial class MainScreen : Form
    {
        public MainScreen()
        {
            InitializeComponent();
        }
        private void MainScreen_Load(object sender, EventArgs e)
        {
            
        }

        private void add_btn_Click(object sender, EventArgs e)
        {
            AddAnimal add_screen = new AddAnimal();
            add_screen.Show();
        }

        private void delete_btn_Click(object sender, EventArgs e)
        {
            DeleteAnimal delete_screen = new DeleteAnimal();
            delete_screen.Show();
        }

        private void about_btn_Click(object sender, EventArgs e)
        {
            About about_screen = new About();
            about_screen.Show();
        }
    }
}
