//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class CABasicAnimation, NSString;

@interface _TtC4WiMP17SpinningImageView : UIImageView
{
    // Error parsing type: , name: kFullRotationDuration
    // Error parsing type: , name: kSpinningKey
    // Error parsing type: , name: rotation
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithImage:(id)arg1 highlightedImage:(id)arg2;
- (id)initWithImage:(id)arg1;
- (void)resetSpinning;
- (void)pauseSpinning;
- (void)startSpinning;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, retain) CABasicAnimation *rotation; // @synthesize rotation;
@property(nonatomic, readonly) NSString *kSpinningKey; // @synthesize kSpinningKey;
@property(nonatomic, readonly) double kFullRotationDuration; // @synthesize kFullRotationDuration;

@end

