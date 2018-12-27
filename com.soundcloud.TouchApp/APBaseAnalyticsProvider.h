//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "_TtP8Features28APAnalyticsProviderInterface_-Protocol.h"

@class NSString;

@interface APBaseAnalyticsProvider : NSObject <_TtP8Features28APAnalyticsProviderInterface_>
{
    _Bool _analyticsEnabled;
}

@property(nonatomic, getter=isAnalyticsEnabled) _Bool analyticsEnabled; // @synthesize analyticsEnabled=_analyticsEnabled;
- (void)flush;
- (void)setDimensions:(id)arg1;
- (void)tagEvent:(id)arg1;
- (id)trackedEvents;
- (void)tagScreen:(id)arg1;
- (void)resumeSession;
- (void)closeSession;
- (void)startSession;
- (void)setUserInfo:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

