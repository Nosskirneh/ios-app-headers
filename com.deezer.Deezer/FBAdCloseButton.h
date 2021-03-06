//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface FBAdCloseButton : UIView
{
    _Bool _forcedViewDisabled;
    CDStruct_1b6d18a9 _forcedViewTime;
    UIColor *_progressColor;
    double _contentPadding;
    CDStruct_1b6d18a9 _currentTime;
}

@property(nonatomic) double contentPadding; // @synthesize contentPadding=_contentPadding;
@property(retain, nonatomic) UIColor *progressColor; // @synthesize progressColor=_progressColor;
@property(nonatomic) CDStruct_1b6d18a9 currentTime; // @synthesize currentTime=_currentTime;
- (void).cxx_destruct;
- (double)completeRatio;
- (void)setForcedViewTime:(CDStruct_1b6d18a9)arg1;
@property(readonly, nonatomic, getter=isCloseable) _Bool closeable;
@property(readonly, nonatomic) CDStruct_1b6d18a9 forcedViewRemainingTime;
- (void)disableForcedView;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithForcedViewTime:(CDStruct_1b6d18a9)arg1;

@end

