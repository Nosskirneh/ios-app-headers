//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCKAnalyticsEventSink.h"

@class GCKClearcutLogger;

@interface GCKClearcutEventSink : GCKAnalyticsEventSink
{
    GCKClearcutLogger *_clearcutLogger;
}

- (void).cxx_destruct;
- (void)flush;
- (_Bool)logEventWithExtension:(id)arg1 eventCode:(int)arg2;
- (id)init;
- (id)initWithClearcutLogger:(id)arg1;

@end

