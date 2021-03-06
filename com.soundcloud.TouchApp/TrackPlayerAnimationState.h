//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TrackPlayerAnimationState : NSObject
{
    unsigned long long _playerState;
    unsigned long long _overlayState;
}

@property(readonly, nonatomic) unsigned long long overlayState; // @synthesize overlayState=_overlayState;
@property(readonly, nonatomic) unsigned long long playerState; // @synthesize playerState=_playerState;
- (_Bool)showingOverlay;
- (_Bool)showingLeaveBehind;
- (_Bool)showingInterstitial;
@property(readonly, nonatomic) unsigned long long timeLabelState;
@property(readonly, nonatomic) _Bool hideWaveform;
@property(readonly, nonatomic) _Bool hideStationButton;
@property(readonly, nonatomic) _Bool hideCenterLabels;
@property(readonly, nonatomic) _Bool hidePlayControls;
@property(readonly, nonatomic) _Bool hideGoogleCastView;
@property(readonly, nonatomic) _Bool hideFooterButtons;
@property(readonly, nonatomic) _Bool hideTitleLabelBackgrounds;
@property(readonly, nonatomic) _Bool hideTitleLabels;
- (id)initWithPlayerViewState:(unsigned long long)arg1 overlayState:(unsigned long long)arg2;

@end

