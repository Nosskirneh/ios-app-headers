//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "YTLightweightScrollable-Protocol.h"
#import "YTMMessageViewDelegate-Protocol.h"
#import "YTResponder-Protocol.h"

@class GIMMe, NSString, UIScrollView, YTIMessageRenderer, YTMMessageView;
@protocol YTLightweightScrollableDelegate, YTResponder;

@interface YTMMessageViewController : UIViewController <YTMMessageViewDelegate, YTLightweightScrollable, YTResponder>
{
    YTMMessageView *_messageView;
    YTIMessageRenderer *_renderer;
    _Bool _scrollableAllowsRefresh;
    id <YTResponder> _parentResponder;
    id <YTLightweightScrollableDelegate> _scrollableDelegate;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic) _Bool scrollableAllowsRefresh; // @synthesize scrollableAllowsRefresh=_scrollableAllowsRefresh;
@property(nonatomic) __weak id <YTLightweightScrollableDelegate> scrollableDelegate; // @synthesize scrollableDelegate=_scrollableDelegate;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIScrollView *scrollableView;
- (void)messageViewDidTapButton:(id)arg1;
- (void)loadWithModel:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

