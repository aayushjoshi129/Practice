class CreateGames < ActiveRecord::Migration[6.1]
  def change
    create_table :games do |t|
      t.string :name
      t.integer :launched
      t.float :version

      t.timestamps
    end
  end
end
