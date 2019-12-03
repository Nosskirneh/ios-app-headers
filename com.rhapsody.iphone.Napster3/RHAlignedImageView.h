//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class UIColor, UIView, _TtC7Napster15RHDeferredImage, _TtC7Napster19RHDeferredImageView;

@interface RHAlignedImageView : UIImageView
{
    _Bool _showOverlay;
    _Bool _disableScaleUp;
    _Bool _disableScaleDown;
    long long _alignment;
    UIColor *_overlayColor;
    UIColor *_highlightedOverlayColor;
    _TtC7Napster19RHDeferredImageView *_deferredImageView;
    UIView *_overlayView;
}

@property(nonatomic) __weak UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) _TtC7Napster19RHDeferredImageView *deferredImageView; // @synthesize deferredImageView=_deferredImageView;
@property(nonatomic) _Bool disableScaleDown; // @synthesize disableScaleDown=_disableScaleDown;
@property(nonatomic) _Bool disableScaleUp; // @synthesize disableScaleUp=_disableScaleUp;
@property(retain, nonatomic) UIColor *highlightedOverlayColor; // @synthesize highlightedOverlayColor=_highlightedOverlayColor;
@property(retain, nonatomic) UIColor *overlayColor; // @synthesize overlayColor=_overlayColor;
@property(nonatomic) _Bool showOverlay; // @synthesize showOverlay=_showOverlay;
@property(nonatomic) long long alignment; // @synthesize alignment=_alignment;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(nonatomic) _Bool alignBottom;
@property(nonatomic) _Bool alignTop;
@property(nonatomic) _Bool alignRight;
@property(nonatomic) _Bool alignLeft;
@property(readonly, nonatomic) struct CGSize realContentSize;
@property(nonatomic) _Bool disableAnimation;
- (void)setHighlighted:(_Bool)arg1;
- (void)setContentMode:(long long)arg1;
@property(retain, nonatomic) _TtC7Napster15RHDeferredImage *deferredImage;
- (void)setImage:(id)arg1;
- (id)image;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithImage:(id)arg1 highlightedImage:(id)arg2;
- (id)initWithImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
