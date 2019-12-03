//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIScrollView;
@protocol SSPullToRefreshContentView, SSPullToRefreshViewDelegate;

@interface SSPullToRefreshView : UIView
{
    _Bool _expanded;
    id <SSPullToRefreshViewDelegate> _delegate;
    UIScrollView *_scrollView;
    double _expandedHeight;
    UIView<SSPullToRefreshContentView> *_contentView;
    unsigned long long _state;
    double _topInset;
    struct dispatch_semaphore_s *_animationSemaphore;
    unsigned long long _style;
    struct UIEdgeInsets _defaultContentInset;
}

@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) struct dispatch_semaphore_s *animationSemaphore; // @synthesize animationSemaphore=_animationSemaphore;
@property(nonatomic) double topInset; // @synthesize topInset=_topInset;
@property(nonatomic) struct UIEdgeInsets defaultContentInset; // @synthesize defaultContentInset=_defaultContentInset;
@property(nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) double expandedHeight; // @synthesize expandedHeight=_expandedHeight;
@property(nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <SSPullToRefreshViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_setPullProgress:(double)arg1;
- (void)_setState:(unsigned long long)arg1 animated:(_Bool)arg2 expanded:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_setContentInsetTop:(double)arg1;
- (void)refreshLastUpdatedAt;
- (void)finishLoadingAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)finishLoading;
- (void)startLoadingAndExpand:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)startLoadingAndExpand:(_Bool)arg1 animated:(_Bool)arg2;
- (void)startLoading;
- (id)initWithScrollView:(id)arg1 delegate:(id)arg2;
- (void)layoutSubviews;
- (void)removeFromSuperview;
- (void)dealloc;
@property(retain, nonatomic) UIView<SSPullToRefreshContentView> *contentView; // @synthesize contentView=_contentView;

@end
