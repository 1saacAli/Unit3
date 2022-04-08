#ifndef Utils_h
#define Utils_h

class Utils
{
	public:
		  Utils(int ledPin);
		  void blink();
		  void blink_times(int times);
		  void set_blinkTime(int blinkTime);
		  int get_blinkTime();
		  Utils search_in_array(int search_term, int array[], int size_of_array);
	private:
		  int _ledPin; 
		  int _blinkTime;
};

#endif+