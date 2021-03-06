//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EX2SlidingNotification.h"

@class ANGAsyncImageView, NSLayoutConstraint, NSString, UIImageView, UILabel, UIStackView, UIView;

@interface ANGScreenShotSlidingNotification : EX2SlidingNotification
{
    NSString *topString;
    NSString *botString;
    NSString *imgId;
    NSLayoutConstraint *_stackViewTopC;
    NSLayoutConstraint *_labelsLeftC;
    CDUnknownBlockType _targetBlock;
    ANGAsyncImageView *_leftImageView;
    UIView *_leftImageViewContainer;
    UIStackView *_stackView;
    UIImageView *_rightImageView;
    UILabel *_topLabel;
    UILabel *_bottomLabel;
}

@property(nonatomic) __weak UILabel *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
@property(nonatomic) __weak UILabel *topLabel; // @synthesize topLabel=_topLabel;
@property(nonatomic) __weak UIImageView *rightImageView; // @synthesize rightImageView=_rightImageView;
@property(nonatomic) __weak UIStackView *stackView; // @synthesize stackView=_stackView;
@property(nonatomic) __weak UIView *leftImageViewContainer; // @synthesize leftImageViewContainer=_leftImageViewContainer;
@property(nonatomic) __weak ANGAsyncImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
@property(copy, nonatomic) CDUnknownBlockType targetBlock; // @synthesize targetBlock=_targetBlock;
@property(nonatomic) __weak NSLayoutConstraint *labelsLeftC; // @synthesize labelsLeftC=_labelsLeftC;
@property(nonatomic) __weak NSLayoutConstraint *stackViewTopC; // @synthesize stackViewTopC=_stackViewTopC;
- (void).cxx_destruct;
- (void)targetButtonClicked:(id)arg1;
- (void)sizeToFit;
- (void)viewDidLoad;
- (id)initOnView:(id)arg1 withTopText:(id)arg2 withBottomText:(id)arg3 andImageId:(id)arg4 displayTime:(double)arg5 buttonBlock:(CDUnknownBlockType)arg6;

@end

