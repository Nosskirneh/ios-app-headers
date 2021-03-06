//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JViewController_Base.h"

@class NSArray, UIActivityIndicatorView, UIButton, UILabel, UIView, UIXPaddedLabel, UIXSlider;

@interface JXTALViewController : JViewController_Base
{
    UIActivityIndicatorView *mSpinner;
    NSArray *mCrystalizerModes;
    _Bool XTALFlag;
    int XTALMode;
    int XTALValue;
    UIButton *_buyButton;
    UIButton *_powerButton;
    UIXSlider *_slider;
    UILabel *_leftValueLabel;
    UILabel *_centerValueLabel;
    UILabel *_rightValueLabel;
    UIXPaddedLabel *_curPosLabel;
    UIView *_separator;
    UIButton *_modeSpinnerButton;
}

@property(nonatomic) __weak UIButton *modeSpinnerButton; // @synthesize modeSpinnerButton=_modeSpinnerButton;
@property(nonatomic) __weak UIView *separator; // @synthesize separator=_separator;
@property(nonatomic) __weak UIXPaddedLabel *curPosLabel; // @synthesize curPosLabel=_curPosLabel;
@property(nonatomic) __weak UILabel *rightValueLabel; // @synthesize rightValueLabel=_rightValueLabel;
@property(nonatomic) __weak UILabel *centerValueLabel; // @synthesize centerValueLabel=_centerValueLabel;
@property(nonatomic) __weak UILabel *leftValueLabel; // @synthesize leftValueLabel=_leftValueLabel;
@property(nonatomic) __weak UIXSlider *slider; // @synthesize slider=_slider;
@property(nonatomic) __weak UIButton *powerButton; // @synthesize powerButton=_powerButton;
@property(nonatomic) __weak UIButton *buyButton; // @synthesize buyButton=_buyButton;
- (void).cxx_destruct;
- (void)applyTheme;
- (void)onSfxProfileChanging:(id)arg1;
- (void)onSfxProfileChanged:(id)arg1;
- (void)onTrialExpired:(id)arg1;
- (void)onBuy:(id)arg1;
- (void)updateUIForWorking:(_Bool)arg1;
- (void)onSliderMoved:(id)arg1;
- (void)onModeButtonClick:(id)arg1;
- (void)onPower:(id)arg1;
- (void)onClose:(id)arg1;
- (void)saveDefaults;
- (void)loadDefaults;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)updatePowerButton;
- (void)updateControls;
- (void)initControls;

@end

