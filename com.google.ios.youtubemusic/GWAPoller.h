//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol GWACoordinator, GWAFlow;

@interface GWAPoller : NSObject
{
    id <GWACoordinator> _coordinator;
    id <GWAFlow> _flow;
    id _value;
    double _timeInterval;
}

- (void).cxx_destruct;
- (void)scheduleSubmit;
- (id)initWithCoordinator:(id)arg1 flow:(id)arg2 value:(id)arg3 timeInterval:(double)arg4;

@end

