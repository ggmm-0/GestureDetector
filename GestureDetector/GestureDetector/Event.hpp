#ifndef EVENT_HPP
#define EVENT_HPP

/*
 * @author: Grzegorz Mirek
*/
class Event {
public:
	virtual void trigger() = 0;
};

#endif