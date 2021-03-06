//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SPTNowPlayingAccessoryIndicatorView, SPTNowPlayingButton, SPTTheme, UIButton, UILabel, UIStackView;
@protocol SPTNowPlayingRepeatButton, SPTNowPlayingShuffleButton;

@interface SPTNowPlayingContextMenuHeaderView : UIView
{
    SPTNowPlayingButton<SPTNowPlayingShuffleButton> *_shuffleButton;
    SPTNowPlayingButton<SPTNowPlayingRepeatButton> *_repeatButton;
    UIButton *_queueButton;
    SPTTheme *_theme;
    UIStackView *_stackView;
    SPTNowPlayingAccessoryIndicatorView *_shuffleAccessoryIndicator;
    SPTNowPlayingAccessoryIndicatorView *_repeatAccessoryIndicator;
    UILabel *_shuffleLabel;
    UILabel *_repeatLabel;
    UILabel *_queueLabel;
}

@property(retain, nonatomic) UILabel *queueLabel; // @synthesize queueLabel=_queueLabel;
@property(retain, nonatomic) UILabel *repeatLabel; // @synthesize repeatLabel=_repeatLabel;
@property(retain, nonatomic) UILabel *shuffleLabel; // @synthesize shuffleLabel=_shuffleLabel;
@property(retain, nonatomic) SPTNowPlayingAccessoryIndicatorView *repeatAccessoryIndicator; // @synthesize repeatAccessoryIndicator=_repeatAccessoryIndicator;
@property(retain, nonatomic) SPTNowPlayingAccessoryIndicatorView *shuffleAccessoryIndicator; // @synthesize shuffleAccessoryIndicator=_shuffleAccessoryIndicator;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) UIButton *queueButton; // @synthesize queueButton=_queueButton;
@property(retain, nonatomic) SPTNowPlayingButton<SPTNowPlayingRepeatButton> *repeatButton; // @synthesize repeatButton=_repeatButton;
@property(retain, nonatomic) SPTNowPlayingButton<SPTNowPlayingShuffleButton> *shuffleButton; // @synthesize shuffleButton=_shuffleButton;
- (void).cxx_destruct;
- (double)contextMenuHeight;
- (void)updateRepeatButtonWithRepeatMode:(unsigned long long)arg1 isRadio:(_Bool)arg2;
- (void)updateShuffleButton:(_Bool)arg1 disallowsToggleShuffle:(_Bool)arg2;
- (void)setupConstraintsForView:(id)arg1 button:(id)arg2 accessoryIndicator:(id)arg3;
- (void)setupConstraintsForView:(id)arg1 button:(id)arg2 label:(id)arg3;
- (void)setupQueueButton;
- (void)setupRepeatButton;
- (id)createButtonLabel;
- (void)setupShuffleButton;
- (void)setupStackView;
- (id)initWithTheme:(id)arg1;

@end

