//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTDroppedFramesObserver-Protocol.h"

@class GIMMe, NSString;

@interface YTDFESummarizer : NSObject <YTDroppedFramesObserver>
{
    int _dfeFrameCounts[30];
    int _eventCountForAverage[30];
    double _sumOfTimeMonitoringBetweenEvents[30];
    double _dfeLastTimeObserved[30];
    double _timeSpentMonitoring;
    double _startTime;
    _Bool _isTracking;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)reset;
- (int)timeBetweenFramesOfAtLeast:(int)arg1;
- (int)droppedFrameEventCountAtFrame:(int)arg1;
- (id)createSummaryForFrameDrop:(int)arg1;
- (id)createSummary;
- (double)currentTime;
- (void)stopMonitoring;
- (void)onFramesDropped:(id)arg1;
- (id)endSummary;
- (void)pauseSummary;
- (void)startSummary;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
