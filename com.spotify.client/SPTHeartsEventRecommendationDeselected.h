//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTHeartsEvent.h"

@class SPTHeartsRecommendation;

@interface SPTHeartsEventRecommendationDeselected : SPTHeartsEvent
{
    SPTHeartsRecommendation *_recommendation;
}

@property(copy, nonatomic) SPTHeartsRecommendation *recommendation; // @synthesize recommendation=_recommendation;
- (void).cxx_destruct;
- (id)initWithRecommendation:(id)arg1;

@end

