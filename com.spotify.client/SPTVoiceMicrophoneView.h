//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface SPTVoiceMicrophoneView : UIView
{
    _Bool _didSetupAnimations;
}

@property(nonatomic) _Bool didSetupAnimations; // @synthesize didSetupAnimations=_didSetupAnimations;
- (void)createCircleAnimationForKeyTimes:(id)arg1 layer:(id)arg2 size:(struct CGSize)arg3 alpha:(double)arg4;
- (void)setupAnimationInLayer:(id)arg1 withSize:(struct CGSize)arg2;
- (void)setupAnimations;

@end

