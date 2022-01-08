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
    public partial class AddAnimal : Form
    {
        public AddAnimal()
        {
            InitializeComponent();
        }

        private void button_add_Click(object sender, EventArgs e)
        {
            string animal_txt = animal_field.Text;
            string type_txt = type_field.Text;
            string variety_txt = variety_field.Text;
            string class_txt = class_field.Text;
            string food_txt = food_field.Text;
            string card_txt = card_field.Text;
            string owner_txt = owner_field.Text;

            DB db = new DB();
            MySqlDataAdapter adapter = new MySqlDataAdapter(); // Трансформатор
            MySqlCommand command = new MySqlCommand("INSERT INTO `animals` (`animal`, `type`, `variety`, `class`, `food`, `card`, `owner`) VALUES (@animal, @type, @variety, @class, @food, @card, @owner)", db.getDBConnection());
            command.Parameters.Add("@animal", MySqlDbType.VarChar).Value = animal_txt;
            command.Parameters.Add("@type", MySqlDbType.VarChar).Value = type_txt;
            command.Parameters.Add("@variety", MySqlDbType.VarChar).Value = variety_txt;
            command.Parameters.Add("@class", MySqlDbType.VarChar).Value = class_txt;
            command.Parameters.Add("@food", MySqlDbType.VarChar).Value = food_txt;
            command.Parameters.Add("@card", MySqlDbType.VarChar).Value = card_txt;
            command.Parameters.Add("@owner", MySqlDbType.VarChar).Value = owner_txt;

            db.ConnectDB();
            if (command.ExecuteNonQuery() == 1)
            {
                MessageBox.Show("Успех !", "Животное успешно добавлено !", MessageBoxButtons.OK, MessageBoxIcon.Information);
            }
            else
            {
                MessageBox.Show("Ошибка !", "Животное не добавлено !", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
            db.DisconnectDB();
        }
    }
}
