//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface ISHPullUpHandleView : UIView
{
    double _strokeWidth;
    UIColor *_strokeColor;
    unsigned long long _state;
    struct CGSize _arrowSize;
    struct CGRect _boundsUsedForCurrentPath;
}

+ (unsigned long long)handleStateForPullUpState:(unsigned long long)arg1;
+ (Class)layerClass;
@property(nonatomic) struct CGRect boundsUsedForCurrentPath; // @synthesize boundsUsedForCurrentPath=_boundsUsedForCurrentPath;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(nonatomic) double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(nonatomic) struct CGSize arrowSize; // @synthesize arrowSize=_arrowSize;
- (void).cxx_destruct;
- (id)pathForBounds:(struct CGRect)arg1 state:(unsigned long long)arg2;
- (void)layoutSubviews;
- (id)shapeLayer;
- (struct CGSize)intrinsicContentSize;
- (void)setState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)setupDefaultsValues;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

