//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "ANGAsyncImageViewDelegate-Protocol.h"

@class ANGAsyncImageView, ANGRACColorSignal, NSArray, NSLayoutConstraint, NSString, UIImageView, UILabel;

@interface ANGHomeButton : UIControl <ANGAsyncImageViewDelegate>
{
    unsigned long long style;
    _Bool _hasTwoButtons;
    _Bool _isInPlayQueue;
    NSString *_imageURL;
    NSString *_deeplinkURL;
    UILabel *_titleLabel;
    ANGAsyncImageView *_imageView;
    NSArray *_gradientColors;
    UIImageView *_frontArrow;
    NSLayoutConstraint *_imageViewWidth;
    NSLayoutConstraint *_imageViewHeight;
    ANGRACColorSignal *_backgroundColorSignal;
}

@property(retain, nonatomic) ANGRACColorSignal *backgroundColorSignal; // @synthesize backgroundColorSignal=_backgroundColorSignal;
@property(retain, nonatomic) NSLayoutConstraint *imageViewHeight; // @synthesize imageViewHeight=_imageViewHeight;
@property(retain, nonatomic) NSLayoutConstraint *imageViewWidth; // @synthesize imageViewWidth=_imageViewWidth;
@property(retain, nonatomic) UIImageView *frontArrow; // @synthesize frontArrow=_frontArrow;
@property(nonatomic) _Bool isInPlayQueue; // @synthesize isInPlayQueue=_isInPlayQueue;
@property(retain, nonatomic) NSArray *gradientColors; // @synthesize gradientColors=_gradientColors;
@property(nonatomic) _Bool hasTwoButtons; // @synthesize hasTwoButtons=_hasTwoButtons;
@property(readonly) ANGAsyncImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain) NSString *deeplinkURL; // @synthesize deeplinkURL=_deeplinkURL;
@property(retain, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
- (void).cxx_destruct;
- (void)resizeImageView;
- (void)layoutSubviews;
- (double)imageHorizontalPadding;
- (double)imageVerticalPadding;
- (void)setStyleBackgroundColor;
- (void)asyncImageSet:(id)arg1;
- (_Bool)shouldShowArrowImage;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1 andStyle:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
