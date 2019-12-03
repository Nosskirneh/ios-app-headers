//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCEasyTipPreferences.h"

@interface RCEasyTipAnimating : RCEasyTipPreferences
{
    double _springDamping;
    double _springVelocity;
    double _showInitialAlpha;
    double _dismissFinalAlpha;
    double _showDuration;
    double _dismissDuration;
    double _autohideDuration;
    struct CGAffineTransform _dismissTransform;
    struct CGAffineTransform _showInitialTransform;
    struct CGAffineTransform _showFinalTransform;
}

@property(nonatomic) double autohideDuration; // @synthesize autohideDuration=_autohideDuration;
@property(nonatomic) double dismissDuration; // @synthesize dismissDuration=_dismissDuration;
@property(nonatomic) double showDuration; // @synthesize showDuration=_showDuration;
@property(nonatomic) double dismissFinalAlpha; // @synthesize dismissFinalAlpha=_dismissFinalAlpha;
@property(nonatomic) double showInitialAlpha; // @synthesize showInitialAlpha=_showInitialAlpha;
@property(nonatomic) double springVelocity; // @synthesize springVelocity=_springVelocity;
@property(nonatomic) double springDamping; // @synthesize springDamping=_springDamping;
@property(nonatomic) struct CGAffineTransform showFinalTransform; // @synthesize showFinalTransform=_showFinalTransform;
@property(nonatomic) struct CGAffineTransform showInitialTransform; // @synthesize showInitialTransform=_showInitialTransform;
@property(nonatomic) struct CGAffineTransform dismissTransform; // @synthesize dismissTransform=_dismissTransform;
- (id)init;

@end
