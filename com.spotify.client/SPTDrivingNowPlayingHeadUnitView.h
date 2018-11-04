//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface SPTDrivingNowPlayingHeadUnitView : UIView
{
    UIButton *_skipBackButton;
    UIButton *_playPauseButton;
    UIButton *_skipForwardButton;
    UIButton *_heartButton;
    UIButton *_banShuffleButton;
}

@property(readonly, nonatomic) UIButton *banShuffleButton; // @synthesize banShuffleButton=_banShuffleButton;
@property(readonly, nonatomic) UIButton *heartButton; // @synthesize heartButton=_heartButton;
@property(readonly, nonatomic) UIButton *skipForwardButton; // @synthesize skipForwardButton=_skipForwardButton;
@property(readonly, nonatomic) UIButton *playPauseButton; // @synthesize playPauseButton=_playPauseButton;
@property(readonly, nonatomic) UIButton *skipBackButton; // @synthesize skipBackButton=_skipBackButton;
- (void).cxx_destruct;
- (id)setupButtonWithNowPlayingButton:(id)arg1;
- (void)setupPrimaryAndSecondaryButtons;
- (void)setupPlayButton;
- (void)layoutButtons;
- (id)initWithFrame:(struct CGRect)arg1;

@end
