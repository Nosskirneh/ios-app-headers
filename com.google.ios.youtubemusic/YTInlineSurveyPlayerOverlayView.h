//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTAdBasePlayerOverlayView.h"

#import "YTPageViewScrolling-Protocol.h"

@class NSString, UIButton, UILabel, UIView, YTFormattedStringLabel, YTInlineAdPlayerBarView, YTSurveyInterstitialView;
@protocol YTCommonButton;

@interface YTInlineSurveyPlayerOverlayView : YTAdBasePlayerOverlayView <YTPageViewScrolling>
{
    YTSurveyInterstitialView *_interstitialView;
    UIView *_surveyView;
    double _totalTime;
    YTInlineAdPlayerBarView *_surveyAdPlayerBarView;
    UIView *_optionsView;
    UILabel *_questionLabel;
    UILabel *_surveyCountdownLabel;
    UILabel *_separator;
    YTFormattedStringLabel *_learnMoreLabel;
    UIButton<YTCommonButton> *_adChoicesButton;
}

+ (id)learnMoreButton;
- (void).cxx_destruct;
- (void)adjustFonts;
- (_Bool)pageViewShouldBeginScrolling;
- (void)addAdChoicesButtonTarget:(id)arg1 action:(SEL)arg2;
- (void)setLearnMoreLink:(id)arg1 delegate:(id)arg2;
- (void)setMediaTime:(double)arg1;
- (void)setOptionsView:(id)arg1;
- (void)setQuestion:(id)arg1;
- (void)setInterstitialView:(id)arg1;
- (void)switchFromInterstitialToSurvey;
- (void)addSurveyView;
- (void)layoutSubviews;
- (id)initWithTotalTime:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
