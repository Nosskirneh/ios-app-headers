//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPAction.h"

@class NSURL, SPTModerationLegacyReportAbuseManager;

@interface SPTModerationLegacyReportAbuseAction : SPAction
{
    NSURL *_entityURL;
    SPTModerationLegacyReportAbuseManager *_reportAbuseManager;
}

@property(nonatomic) __weak SPTModerationLegacyReportAbuseManager *reportAbuseManager; // @synthesize reportAbuseManager=_reportAbuseManager;
@property(retain, nonatomic) NSURL *entityURL; // @synthesize entityURL=_entityURL;
- (void).cxx_destruct;
- (id)execute:(id)arg1;
- (long long)style;
- (id)logEventName;
- (long long)icon;
- (id)title;
- (id)initEntityURL:(id)arg1 logContext:(id)arg2 reportAbuseManager:(id)arg3;

@end

