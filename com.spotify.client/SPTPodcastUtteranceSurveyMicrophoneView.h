//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer;

@interface SPTPodcastUtteranceSurveyMicrophoneView : UIView
{
    _Bool _didSetupAnimations;
    CALayer *_innerCircle;
    CALayer *_middleCircle;
    CALayer *_outerCircle;
}

@property(retain, nonatomic) CALayer *outerCircle; // @synthesize outerCircle=_outerCircle;
@property(retain, nonatomic) CALayer *middleCircle; // @synthesize middleCircle=_middleCircle;
@property(retain, nonatomic) CALayer *innerCircle; // @synthesize innerCircle=_innerCircle;
@property(nonatomic) _Bool didSetupAnimations; // @synthesize didSetupAnimations=_didSetupAnimations;
- (void).cxx_destruct;
- (id)createCircleAnimationForKeyTimes:(id)arg1 layer:(id)arg2 size:(struct CGSize)arg3 alpha:(double)arg4;
- (void)setupAnimationInLayer:(id)arg1 withSize:(struct CGSize)arg2;
- (void)stopAnimations;
- (void)startAnimations;
- (void)setupAnimations;

@end

