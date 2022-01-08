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

        private void Form1_Load(object sender, EventArgs e)
        {
        }

        private void login_btn_Click(object sender, EventArgs e)
        {
            string userLogin = login_field.Text;
            string userPassword = password_field.Text;

            DB db = new DB();
            DataTable table = new DataTable();
            MySqlDataAdapter adapter = new MySqlDataAdapter(); // Трансформатор
            MySqlCommand command = new MySqlCommand("SELECT * FROM `account` WHERE `login` = @uL AND `password` = @uP", db.getDBConnection()); // Для выборки данных

            command.Parameters.Add("@uL", MySqlDbType.VarChar).Value = userLogin;
            command.Parameters.Add("@uP", MySqlDbType.VarChar).Value = userPassword;
            adapter.SelectCommand = command;
            adapter.Fill(table);

            if(table.Rows.Count > 0)
                MessageBox.Show("Yes");
            else 
                MessageBox.Show("No");
        }
    }
}


