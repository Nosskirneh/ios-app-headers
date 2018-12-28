//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADOBufferedClearcutLogger, NSString;
@protocol OS_dispatch_queue;

@interface GADOClearcutLogger : NSObject
{
    GADOBufferedClearcutLogger *_bufferedLogger;
    NSString *_clearcutID;
    _Bool _shouldReportEventsOnDealloc;
    NSObject<OS_dispatch_queue> *_lockQueue;
    _Bool _environmentReported;
    _Bool _experimentIDsReported;
}

- (void).cxx_destruct;
@property _Bool experimentIDsReported;
@property _Bool environmentReported;
- (void)reportBufferedParameters:(id)arg1;
- (id)clearcutParametersFromEvent:(id)arg1;
- (void)executeClearcutCommandWithParameter:(id)arg1;
- (void)reportExperimentIDs;
- (void)reportEnvironment;
- (void)reportEvent:(id)arg1;
- (void)dealloc;
- (id)init;

@end

