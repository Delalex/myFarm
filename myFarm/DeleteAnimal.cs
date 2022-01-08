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
    public partial class DeleteAnimal : Form
    {
        public DeleteAnimal()
        {
            InitializeComponent();
        }

        private void DeleteAnimal_Load(object sender, EventArgs e)
        {

        }

        private void delete_btn_Click(object sender, EventArgs e)
        {
            string id = id_field.Text;

            DB db = new DB();
            DataTable table = new DataTable();
            MySqlDataAdapter adapter = new MySqlDataAdapter(); // Трансформатор
            MySqlCommand command = new MySqlCommand("DELETE FROM `animals` WHERE `animals`.`id` = @id", db.getDBConnection());
            command.Parameters.Add("@id", MySqlDbType.UInt64).Value = id;

            db.ConnectDB();
            if (command.ExecuteNonQuery() == 1)
            {
                MessageBox.Show("Успех !", "Животное успешно удалено !", MessageBoxButtons.OK, MessageBoxIcon.Information);
            }
            else
            {
                MessageBox.Show("Ошибка !", "Животное не удалено. Проверьте, существует ли животное с указанным ID ?", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
            db.DisconnectDB();
        }
    }
}
