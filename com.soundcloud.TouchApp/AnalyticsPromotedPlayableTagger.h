//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AnalyticsEntityTagger.h"

@interface AnalyticsPromotedPlayableTagger : AnalyticsEntityTagger
{
}

+ (id)sharedInstance;
- (void)addDefaultEventLoggerAttributes:(id)arg1 state:(id)arg2;
- (id)eventLoggerImpressionEventForState:(id)arg1;
- (void)addDefaultEventloggerClickAttributes:(id)arg1 state:(id)arg2;
- (id)clickEventsForState:(id)arg1 target:(id)arg2 promotedUrls:(id)arg3;
- (id)impressionEventsForState:(id)arg1;
- (void)tagPlayablePlayed:(id)arg1;
- (void)tagPlayableClicked:(id)arg1;
- (void)tagSponsorClicked:(id)arg1;
- (void)tagProfileClicked:(id)arg1;
- (void)tagImpression:(id)arg1;

@end

