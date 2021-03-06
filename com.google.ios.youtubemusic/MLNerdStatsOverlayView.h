//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MLKeyValueLabel, UIButton, UIPanGestureRecognizer;

@interface MLNerdStatsOverlayView : UIView
{
    MLKeyValueLabel *_videoIDLabel;
    MLKeyValueLabel *_CPNLabel;
    MLKeyValueLabel *_errorLabel;
    UIButton *_closeButton;
    UIButton *_copyDebugInfoButton;
    UIButton *_moveButton;
    UIPanGestureRecognizer *_panGestureRecognizer;
    struct CGSize _itemSize;
}

+ (id)subTextAttributes;
+ (id)textAttributes;
+ (id)textAttributesWithColor:(id)arg1;
+ (id)subTextColor;
+ (id)textColor;
+ (id)lineColor;
+ (id)strokeColor;
+ (id)borderColor;
+ (id)foregroundColor;
+ (id)backgroundColor;
+ (id)textFont;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
- (void).cxx_destruct;
- (id)buttonWithImage:(id)arg1 selectedImage:(id)arg2 accessibilityLabel:(id)arg3 accessibilityIdentifier:(id)arg4;
- (id)createLabelWithName:(id)arg1;
- (void)createButtons;
- (void)createLabels;
- (void)handlePanGesture:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)removeDidTapCopyDebugInfoTarget:(id)arg1 action:(SEL)arg2;
- (void)addDidTapCopyDebugInfoTarget:(id)arg1 action:(SEL)arg2;
- (void)removeDidTapCloseTarget:(id)arg1 action:(SEL)arg2;
- (void)addDidTapCloseTarget:(id)arg1 action:(SEL)arg2;
- (void)setError:(id)arg1;
- (void)setAdCPN:(id)arg1;
- (void)setCPN:(id)arg1;
- (void)setAdVideoID:(id)arg1;
- (void)setVideoID:(id)arg1;
- (void)resetLabels;
- (id)initWithSparklineViews:(id)arg1;

@end

