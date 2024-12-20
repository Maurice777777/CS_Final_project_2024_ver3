#ifndef OPERATIONCENTER_H_INCLUDED
#define OPERATIONCENTER_H_INCLUDED

/**
 * @brief Class that defines functions for all object operations.
 * @details Object self-update, draw, and object-to-object interact functions are defined here.
 */
class OperationCenter
{
	public:
		double spawn_start_time = 0.0;	
		bool delay_in_progress = false;
	public:
		static OperationCenter *get_instance() 
		{
			static OperationCenter OC;
			return &OC;
		}
		/**
	 	* @brief Highest level update function.
	 	* @details Calls all other update functions.
	 	*/
		void update();
		/**
	 	* @brief Highest level draw function.
	 	* @details Calls all other draw functions.
	 	*/
		void draw();
		/*------------------*/
		void reset_enemies();
		/*------------------*/
	private:
		OperationCenter() {}
	private:
		void _update_monster();
		void _update_tower();
		void _update_towerBullet();
		void _update_monster_towerBullet();
		void _update_monster_player();
		//void _update_hero();
		void _update_hero_bullet();
		/*------revise-------*/
		void _update_enemy_combat();
		void _spawn_enemy_around_hero();
		
		double enemy_spawn_delay_start = 0.0; // 記錄生成開始的時間
    	
		bool enemies_spawned = false;
		/*------revise-------*/
	private:
		void _draw_monster();
		void _draw_tower();
		void _draw_towerBullet();
		void _draw_hero();
		void _draw_hero_bullet();
		/*------revise-----*/
		void _draw_enemy_combat();
		/*------revise-----*/
};

#endif
