//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class PlayerVC, TwoWaySwitch, UIButton;

@interface RadioFooter : UIView
{
    PlayerVC *player;
    UIView *controlsContainer;
    UIButton *backBtn;
    TwoWaySwitch *radioSwitch;
}

- (void).cxx_destruct;
- (void)radioSwitchTapped;
- (void)backBtnTapped;
- (void)updateRadioMode;
- (void)updateForPlayerMode;
- (void)updateUIMode;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

