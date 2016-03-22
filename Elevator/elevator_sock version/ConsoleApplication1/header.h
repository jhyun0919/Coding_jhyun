#define UP 1
#define DOWN 2
#define IDLE 3

#define ON 1
#define OFF 0

#define Max_Level 13








typedef struct EV {
	int cur_level;
	int direction;
	int weight;
} EV;

typedef struct Track {
	struct In_Event *In_ptr;
	int Out_passenger;
} Track;

typedef struct Input_Info {
	int tick;
	int load_level;
	int direction;
	int passenger;
	int unload_level[20];
	struct Input_Info *next;
} Input_Info;

typedef struct In_Event{
	int direction;
	int passenger;
	int unload_level[20];
	struct In_Event *next;
} In_Event;

/*
typedef struct Out_Event{
	int passenger;
	//int unload_level[20];
	struct Out_Event *next;
} Out_Event;
*/

typedef struct Event_Move {
	int wer;
	//int tick;
	//void( *Move)();
} Event_Move;

typedef struct Event_DoorOpen {
	int wer;
	//int tick;
	//void ( *DoorOpen)();
}Event_DoorOpen;

typedef struct Scheduler {
	int tick;
	struct Scheduler *next;
	Input_Info *Info_ptr;
	
	int Move_SW;
	int Door_SW;
	//Event_Move *M_ptr;
	//Event_DoorOpen *DO_ptr;

} Scheduler;
