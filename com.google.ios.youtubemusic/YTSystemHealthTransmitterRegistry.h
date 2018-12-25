//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, NSMutableDictionary, YTSystemHealthContext;
@protocol YTSystemHealthConfig;

@interface YTSystemHealthTransmitterRegistry : NSObject
{
    id <YTSystemHealthConfig> _config;
    YTSystemHealthContext *_systemHealthContext;
    NSMutableDictionary *_transmitters;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)transmitDroppedFramesEvent:(id)arg1 eventDate:(id)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)transmitSystemHealthMetrics:(id)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)unregisterTransmitterWithTag:(id)arg1;
- (void)registerTransmitter:(id)arg1 withTag:(id)arg2;
- (void)reconfigure:(id)arg1;
- (id)init;

@end

