//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DZRQueueListLogger : NSObject
{
}

+ (id)sharedLogger;
- (void)queuerDidAddTracks:(id)arg1;
- (void)queuedCollectionDidChange:(id)arg1;
- (void)logOnPlayNextEvent;
- (void)logOnAddToQueueEvent;
- (void)logOnCreateEvent;
- (void)logEventWithType:(id)arg1;
- (id)tagLogEventWithType:(id)arg1;
- (void)dealloc;
- (id)init;

@end

