//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UIButton, UILabel;
@protocol ANGFollowRequestsHeaderViewDelegate;

@interface ANGFollowRequestsHeaderView : UIView
{
    id <ANGFollowRequestsHeaderViewDelegate> _delegate;
    UIView *_acceptAllContainerView;
    UILabel *_requestsLabel;
    UIButton *_acceptAllButton;
    UIActivityIndicatorView *_loadingIndicator;
    UILabel *_noRequestsLabel;
    UIView *_noRequestsContainerView;
}

@property(nonatomic) __weak UIView *noRequestsContainerView; // @synthesize noRequestsContainerView=_noRequestsContainerView;
@property(nonatomic) __weak UILabel *noRequestsLabel; // @synthesize noRequestsLabel=_noRequestsLabel;
@property(nonatomic) __weak UIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(nonatomic) __weak UIButton *acceptAllButton; // @synthesize acceptAllButton=_acceptAllButton;
@property(nonatomic) __weak UILabel *requestsLabel; // @synthesize requestsLabel=_requestsLabel;
@property(nonatomic) __weak UIView *acceptAllContainerView; // @synthesize acceptAllContainerView=_acceptAllContainerView;
@property(nonatomic) __weak id <ANGFollowRequestsHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dismissLoading;
- (void)showLoading;
- (void)initColorsSignal;
- (void)acceptAllClicked:(id)arg1;
- (void)updateFollowRequestsCount:(long long)arg1;
- (void)layoutSubviews;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)awakeFromNib;

@end
