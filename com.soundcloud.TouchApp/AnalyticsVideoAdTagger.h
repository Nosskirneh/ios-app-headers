//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AnalyticsVastCapableAdTagger.h"

#import "PlayQueueItemAdTagger-Protocol.h"

@class NSString;

@interface AnalyticsVideoAdTagger : AnalyticsVastCapableAdTagger <PlayQueueItemAdTagger>
{
}

+ (id)sharedInstance;
- (_Bool)supportedAdType:(unsigned long long)arg1;
- (id)initWithAnalyticsController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

