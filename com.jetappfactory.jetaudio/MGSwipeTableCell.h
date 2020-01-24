//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CADisplayLink, MGSwipeAnimationData, MGSwipeButtonsView, MGSwipeExpansionSettings, MGSwipeSettings, MGSwipeTableInputOverlay, NSArray, NSMutableSet, UIColor, UIImageView, UIPanGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol MGSwipeTableCellDelegate;

@interface MGSwipeTableCell : UITableViewCell
{
    UITapGestureRecognizer *_tapRecognizer;
    UIPanGestureRecognizer *_panRecognizer;
    struct CGPoint _panStartPoint;
    double _panStartOffset;
    double _targetOffset;
    UIView *_swipeOverlay;
    UIImageView *_swipeView;
    UIView *_swipeContentView;
    MGSwipeButtonsView *_leftView;
    MGSwipeButtonsView *_rightView;
    _Bool _allowSwipeRightToLeft;
    _Bool _allowSwipeLeftToRight;
    MGSwipeButtonsView *_activeExpansion;
    MGSwipeTableInputOverlay *_tableInputOverlay;
    _Bool _overlayEnabled;
    long long _previusSelectionStyle;
    NSMutableSet *_previusHiddenViews;
    long long _previusAccessoryType;
    _Bool _triggerStateChanges;
    MGSwipeAnimationData *_animationData;
    CDUnknownBlockType _animationCompletion;
    CADisplayLink *_displayLink;
    long long _firstSwipeState;
    _Bool _allowsMultipleSwipe;
    _Bool _allowsButtonsWithDifferentWidth;
    _Bool _allowsSwipeWhenTappingButtons;
    _Bool _allowsOppositeSwipe;
    _Bool _preservesSelectionStatus;
    _Bool _touchOnDismissSwipe;
    id <MGSwipeTableCellDelegate> _delegate;
    NSArray *_leftButtons;
    NSArray *_rightButtons;
    MGSwipeSettings *_leftSwipeSettings;
    MGSwipeSettings *_rightSwipeSettings;
    MGSwipeExpansionSettings *_leftExpansion;
    MGSwipeExpansionSettings *_rightExpansion;
    long long _swipeState;
    UIColor *_swipeBackgroundColor;
    double _swipeOffset;
}

@property(nonatomic) double swipeOffset; // @synthesize swipeOffset=_swipeOffset;
@property(retain, nonatomic) UIColor *swipeBackgroundColor; // @synthesize swipeBackgroundColor=_swipeBackgroundColor;
@property(nonatomic) _Bool touchOnDismissSwipe; // @synthesize touchOnDismissSwipe=_touchOnDismissSwipe;
@property(nonatomic) _Bool preservesSelectionStatus; // @synthesize preservesSelectionStatus=_preservesSelectionStatus;
@property(nonatomic) _Bool allowsOppositeSwipe; // @synthesize allowsOppositeSwipe=_allowsOppositeSwipe;
@property(nonatomic) _Bool allowsSwipeWhenTappingButtons; // @synthesize allowsSwipeWhenTappingButtons=_allowsSwipeWhenTappingButtons;
@property(nonatomic) _Bool allowsButtonsWithDifferentWidth; // @synthesize allowsButtonsWithDifferentWidth=_allowsButtonsWithDifferentWidth;
@property(nonatomic) _Bool allowsMultipleSwipe; // @synthesize allowsMultipleSwipe=_allowsMultipleSwipe;
@property(readonly, nonatomic) long long swipeState; // @synthesize swipeState=_swipeState;
@property(retain, nonatomic) MGSwipeExpansionSettings *rightExpansion; // @synthesize rightExpansion=_rightExpansion;
@property(retain, nonatomic) MGSwipeExpansionSettings *leftExpansion; // @synthesize leftExpansion=_leftExpansion;
@property(retain, nonatomic) MGSwipeSettings *rightSwipeSettings; // @synthesize rightSwipeSettings=_rightSwipeSettings;
@property(retain, nonatomic) MGSwipeSettings *leftSwipeSettings; // @synthesize leftSwipeSettings=_leftSwipeSettings;
@property(copy, nonatomic) NSArray *rightButtons; // @synthesize rightButtons=_rightButtons;
@property(copy, nonatomic) NSArray *leftButtons; // @synthesize leftButtons=_leftButtons;
@property(nonatomic) __weak id <MGSwipeTableCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(readonly, nonatomic) _Bool isSwipeGestureActive;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)panHandler:(id)arg1;
- (double)filterSwipe:(double)arg1;
- (void)tapHandler:(id)arg1;
- (void)cancelPanGesture;
- (void)setSwipeOffset:(double)arg1 animation:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setSwipeOffset:(double)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)invalidateDisplayLink;
- (void)animationTick:(id)arg1;
- (void)expandSwipe:(long long)arg1 animated:(_Bool)arg2;
- (void)showSwipe:(long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showSwipe:(long long)arg1 animated:(_Bool)arg2;
- (void)hideSwipeAnimated:(_Bool)arg1;
- (void)hideSwipeAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateState:(long long)arg1;
- (id)parentTable;
- (id)backgroundColorForSwipe;
- (void)setAccesoryViewsHidden:(_Bool)arg1;
- (id)imageFromView:(id)arg1 cropSize:(struct CGSize)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setEditing:(_Bool)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)prepareForReuse;
- (void)willMoveToSuperview:(id)arg1;
- (void)refreshButtons:(_Bool)arg1;
- (void)refreshContentView;
- (void)hideSwipeOverlayIfNeededIncludingReselect:(_Bool)arg1;
- (void)showSwipeOverlayIfNeeded;
- (void)createSwipeViewIfNeeded;
- (void)fetchButtonsIfNeeded;
- (void)layoutSubviews;
@property(readonly, nonatomic) UIView *swipeContentView;
- (struct UIEdgeInsets)getSafeInsets;
- (void)fixRegionAndAccesoryViews;
- (_Bool)isRTLLocale;
- (_Bool)isAppExtension;
- (void)cleanViews;
- (void)initViews:(_Bool)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
