//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface UAScheduleDelayBuilder : NSObject
{
    double _seconds;
    NSString *_screen;
    NSString *_regionID;
    long long _appState;
    NSArray *_cancellationTriggers;
}

@property(copy, nonatomic) NSArray *cancellationTriggers; // @synthesize cancellationTriggers=_cancellationTriggers;
@property(nonatomic) long long appState; // @synthesize appState=_appState;
@property(copy, nonatomic) NSString *regionID; // @synthesize regionID=_regionID;
@property(copy, nonatomic) NSString *screen; // @synthesize screen=_screen;
@property(nonatomic) double seconds; // @synthesize seconds=_seconds;
- (void).cxx_destruct;

@end

