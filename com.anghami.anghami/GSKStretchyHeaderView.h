//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIScrollView;
@protocol GSKStretchyHeaderViewStretchDelegate;

@interface GSKStretchyHeaderView : UIView
{
    _Bool _manageScrollViewInsets;
    _Bool _manageScrollViewSubviewHierarchy;
    _Bool _contentShrinks;
    _Bool _contentExpands;
    _Bool _needsLayoutContentView;
    _Bool _arrangingSelfInScrollView;
    _Bool _observingScrollView;
    unsigned long long _expansionMode;
    UIView *_contentView;
    double _maximumContentHeight;
    double _minimumContentHeight;
    unsigned long long _contentAnchor;
    UIScrollView *_scrollView;
    id <GSKStretchyHeaderViewStretchDelegate> _stretchDelegate;
    double _stretchFactor;
    struct UIEdgeInsets _contentInset;
}

@property(nonatomic) double stretchFactor; // @synthesize stretchFactor=_stretchFactor;
@property(nonatomic) __weak id <GSKStretchyHeaderViewStretchDelegate> stretchDelegate; // @synthesize stretchDelegate=_stretchDelegate;
@property(nonatomic) _Bool observingScrollView; // @synthesize observingScrollView=_observingScrollView;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) _Bool arrangingSelfInScrollView; // @synthesize arrangingSelfInScrollView=_arrangingSelfInScrollView;
@property(nonatomic) _Bool needsLayoutContentView; // @synthesize needsLayoutContentView=_needsLayoutContentView;
@property(nonatomic) _Bool contentExpands; // @synthesize contentExpands=_contentExpands;
@property(nonatomic) _Bool contentShrinks; // @synthesize contentShrinks=_contentShrinks;
@property(nonatomic) _Bool manageScrollViewSubviewHierarchy; // @synthesize manageScrollViewSubviewHierarchy=_manageScrollViewSubviewHierarchy;
@property(nonatomic) _Bool manageScrollViewInsets; // @synthesize manageScrollViewInsets=_manageScrollViewInsets;
@property(nonatomic) unsigned long long contentAnchor; // @synthesize contentAnchor=_contentAnchor;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) double minimumContentHeight; // @synthesize minimumContentHeight=_minimumContentHeight;
@property(nonatomic) double maximumContentHeight; // @synthesize maximumContentHeight=_maximumContentHeight;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) unsigned long long expansionMode; // @synthesize expansionMode=_expansionMode;
- (void).cxx_destruct;
- (void)contentViewDidLayoutSubviews;
- (void)layoutSubviews;
- (void)didChangeStretchFactor:(double)arg1;
- (void)layoutContentViewIfNeeded;
- (void)setNeedsLayoutContentView;
- (void)setupScrollViewInsetsIfNeeded;
- (double)minimumHeight;
- (double)maximumHeight;
- (double)horizontalInset;
- (double)verticalInset;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObservingScrollView;
- (void)removeFromSuperview;
- (void)observeScrollViewIfPossible;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (void)awakeFromNib;
- (void)setMaximumContentHeight:(double)arg1 resetAnimated:(_Bool)arg2;
- (void)setupContentView;
- (void)setupView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

