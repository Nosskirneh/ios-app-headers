//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPMLocalInfoCard.h"

@class GPMRatingOrFeedbackInfoViewModel;

@interface GPMRatingOrFeedbackInfoCard : GPMLocalInfoCard
{
    unsigned long long _displayState;
    GPMRatingOrFeedbackInfoViewModel *_ratingOrFeedbackViewModel;
}

+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 dataSource:(id)arg2;
- (void).cxx_destruct;
- (void)showFeedbackState;
- (void)showRatingState;
- (void)resetButtons;
- (void)didClickButton:(id)arg1;
- (void)bindContent:(id)arg1;
- (id)init;

@end

