json.extract! game, :id, :name, :launched, :version, :created_at, :updated_at
json.url game_url(game, format: :json)
