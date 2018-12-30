//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADClickTrackerDelegate-Protocol.h"

@class NSMutableSet, NSString;

@interface GADClickTrackerCollection : NSObject <GADClickTrackerDelegate>
{
    NSMutableSet *_trackers;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableSet *trackers; // @synthesize trackers=_trackers;
- (void).cxx_destruct;
- (void)trackerDidFinishTracking:(id)arg1;
- (void)cleanupTrackers;
- (void)trackURL:(id)arg1;
- (void)trackURLs:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)trackMediationURLsFromTemplates:(id)arg1 defaultTemplate:(id)arg2 networkID:(id)arg3 allocationID:(id)arg4 qData:(id)arg5 appKey:(id)arg6 refresh:(_Bool)arg7 durations:(id)arg8 exitCodes:(id)arg9 fillStatus:(id)arg10 eventType:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

