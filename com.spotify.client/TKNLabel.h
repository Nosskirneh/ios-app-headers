//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class NSLayoutConstraint, NSLayoutYAxisAnchor, TKNTypeStyle, UILayoutGuide;

@interface TKNLabel : UILabel
{
    _Bool _usingDynamicType;
    _Bool _isReapplyingStyle;
    TKNTypeStyle *_style;
    UILayoutGuide *_firstAscenderLayoutGuide;
    UILayoutGuide *_firstLineHeightLayoutGuide;
    UILayoutGuide *_firstCapHeightLayoutGuide;
    NSLayoutConstraint *_firstAscenderLayoutConstraint;
    NSLayoutConstraint *_firstLineHeightLayoutConstraint;
    NSLayoutConstraint *_firstCapHeightLayoutConstraint;
    struct CGSize _lastSize;
}

@property(nonatomic) _Bool isReapplyingStyle; // @synthesize isReapplyingStyle=_isReapplyingStyle;
@property(nonatomic) struct CGSize lastSize; // @synthesize lastSize=_lastSize;
@property(retain, nonatomic) NSLayoutConstraint *firstCapHeightLayoutConstraint; // @synthesize firstCapHeightLayoutConstraint=_firstCapHeightLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *firstLineHeightLayoutConstraint; // @synthesize firstLineHeightLayoutConstraint=_firstLineHeightLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *firstAscenderLayoutConstraint; // @synthesize firstAscenderLayoutConstraint=_firstAscenderLayoutConstraint;
@property(retain, nonatomic) UILayoutGuide *firstCapHeightLayoutGuide; // @synthesize firstCapHeightLayoutGuide=_firstCapHeightLayoutGuide;
@property(retain, nonatomic) UILayoutGuide *firstLineHeightLayoutGuide; // @synthesize firstLineHeightLayoutGuide=_firstLineHeightLayoutGuide;
@property(retain, nonatomic) UILayoutGuide *firstAscenderLayoutGuide; // @synthesize firstAscenderLayoutGuide=_firstAscenderLayoutGuide;
@property(retain, nonatomic) TKNTypeStyle *style; // @synthesize style=_style;
@property(nonatomic, getter=isUsingDynamicType) _Bool usingDynamicType; // @synthesize usingDynamicType=_usingDynamicType;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSLayoutYAxisAnchor *firstCapHeightAnchor;
@property(readonly, nonatomic) NSLayoutYAxisAnchor *firstLineHeightAnchor;
@property(readonly, nonatomic) NSLayoutYAxisAnchor *firstAscenderAnchor;
- (void)setAttributedText:(id)arg1;
- (void)setText:(id)arg1;
- (void)layoutSubviews;
- (void)setup;
- (id)initWithStyle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 andStyle:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) _Bool adjustsFontSizeToFitWidth; // @dynamic adjustsFontSizeToFitWidth;

@end

