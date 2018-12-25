//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MDCSliderDelegate-Protocol.h"

@class MDCSlider, NSString, UILabel, YTMSpinnableButton;
@protocol YTMTOfflineUnavailableViewDelegate;

@interface YTMTOfflineUnavailableView : UIView <MDCSliderDelegate>
{
    UILabel *_mixtapeLabel;
    UILabel *_songCountLabel;
    MDCSlider *_slider;
    UILabel *_instructionLabel;
    YTMSpinnableButton *_enableOfflineButton;
    id <YTMTOfflineUnavailableViewDelegate> _delegate;
    struct CGSize _enableOfflineButtonSize;
    int _maximumOfflineAudioQuality;
    int _maximumOfflineVideoQuality;
}

@property(nonatomic) int maximumOfflineVideoQuality; // @synthesize maximumOfflineVideoQuality=_maximumOfflineVideoQuality;
@property(nonatomic) int maximumOfflineAudioQuality; // @synthesize maximumOfflineAudioQuality=_maximumOfflineAudioQuality;
- (void).cxx_destruct;
- (void)refreshLabels;
- (void)didChangeValueSlider:(id)arg1;
- (void)didTapEnableOfflineButton:(id)arg1;
- (void)layoutInBounds:(struct CGRect)arg1;
- (id)slider:(id)arg1 accessibilityLabelForValue:(double)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
