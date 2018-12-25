//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CSIReporter, CSITimer, GIMMe, GTMSessionFetcherService, NSString, YTDeviceClassificationURLDecorator;
@protocol CSITimeSource;

@interface YTCSIBeacon : NSObject
{
    GTMSessionFetcherService *_fetcherService;
    YTDeviceClassificationURLDecorator *_deviceClassificationURLDecorator;
    CSIReporter *_reporter;
    CSITimer *_timer;
    id <CSITimeSource> _timeSource;
    double _staleTime;
    _Bool _stopped;
    double _lastActivityTime;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)updateLastActivityTime;
- (void)report;
- (void)flush;
- (_Bool)removeOngoingTickVariable:(id)arg1;
- (_Bool)endOngoingTickVariable:(id)arg1;
- (void)startTickVariable:(id)arg1;
- (void)removeSharedParameter:(id)arg1;
- (void)setValue:(id)arg1 forSharedParameter:(id)arg2;
- (_Bool)isStopped;
- (void)stop;
@property(readonly, nonatomic) NSString *actionName;
- (void)setDefaultSharedParameters:(int)arg1;
- (id)initWithActionName:(id)arg1 fetcherService:(id)arg2 configuration:(id)arg3 staleTime:(double)arg4 timeSource:(id)arg5 connectionType:(int)arg6;

@end

