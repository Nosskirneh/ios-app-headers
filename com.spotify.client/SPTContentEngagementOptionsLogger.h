//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPTContentEngagementOptionsLogger : NSObject
{
    id <SPTLogCenter> _logCenter;
}

@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (double)timestamp;
- (void)logInteractionWithSectionId:(id)arg1 targetUri:(id)arg2 interactionType:(id)arg3 userIntent:(id)arg4;
- (void)logImpressionWithSectionId:(id)arg1 impressionType:(id)arg2;
- (void)logCardSwipeInteraction;
- (void)logContentNotAvailableDalogNegativeButtonPressedInteraction;
- (void)logContentNotAvailableDalogPositiveButtonPressedInteraction;
- (void)logCardButtonPressedInteractionWithTrackURI:(id)arg1;
- (void)logContentNotAvailableDialogImpression;
- (void)logCardViewImpression;
- (id)initWithLogCenter:(id)arg1;

@end
