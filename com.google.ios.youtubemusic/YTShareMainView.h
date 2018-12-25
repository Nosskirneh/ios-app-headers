//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "YTPageStyleProvider-Protocol.h"
#import "YTPageStyling-Protocol.h"
#import "YTResponder-Protocol.h"
#import "YTShareKeyboardHelperDelegate-Protocol.h"

@class CALayer, NSString, UIButton, UICollectionView, UIControl, UIScrollView, YTConnectionsOverflowView, YTDismissSuggestedConnectionView, YTIButtonRenderer, YTIUnifiedSharePanelRenderer, YTShareBusyView, YTShareCommunityPostView, YTShareKeyboardHelper, YTShareNotificationView, YTSharePanelPromoView, YTShareTitleView;
@protocol YTCommonButton, YTMessageInputProtocol, YTPageStyleProvider, YTResponder, YTShareMainViewDelegate;

@interface YTShareMainView : UIView <YTShareKeyboardHelperDelegate, YTPageStyling, YTPageStyleProvider, YTResponder>
{
    YTIUnifiedSharePanelRenderer *_renderer;
    YTShareBusyView *_busyView;
    UIButton<YTCommonButton> *_cancelButton;
    CALayer *_cancelButtonBorder;
    YTConnectionsOverflowView *_connectionsOverflowView;
    UICollectionView *_contentListView;
    UIControl *_dismissArea;
    UIControl *_safeArea;
    YTDismissSuggestedConnectionView *_dismissSuggestedConnectionView;
    UIView<YTMessageInputProtocol> *_messageInputView;
    YTSharePanelPromoView *_promoView;
    YTShareNotificationView *_notificationView;
    UIButton<YTCommonButton> *_shareButton;
    YTIButtonRenderer *_shareButtonRenderer;
    YTShareTitleView *_titleView;
    YTShareCommunityPostView *_communityPostTitleView;
    YTShareKeyboardHelper *_keyboardHelper;
    UIScrollView *_communityPostScrollView;
    _Bool _notificationViewShown;
    _Bool _shareButtonShown;
    double _sharePanelHeight;
    id <YTResponder> _parentResponder;
    id <YTPageStyleProvider> _pageStyleProviderDelegate;
    id <YTShareMainViewDelegate> _mainViewDelegate;
}

@property(nonatomic) __weak id <YTShareMainViewDelegate> mainViewDelegate; // @synthesize mainViewDelegate=_mainViewDelegate;
@property(nonatomic) __weak id <YTPageStyleProvider> pageStyleProviderDelegate; // @synthesize pageStyleProviderDelegate=_pageStyleProviderDelegate;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (_Bool)isMovedToMakeRoomForKeyboard;
- (double)adjustHeightForSafeArea:(double)arg1 offsetYFromBottom:(double)arg2;
- (unsigned long long)currentTimeMs;
- (_Bool)shouldShowPromo;
- (void)layoutBusyView;
- (double)layoutCommunityPostScrollViewWithWidth:(double)arg1 offsetYFromBottom:(double)arg2 offsetXFromLeft:(double)arg3;
- (double)layoutConnectionsOverflowWithWidth:(double)arg1 offsetYFromBottom:(double)arg2 offsetXFromLeft:(double)arg3;
- (double)layoutTitleViewWithWidth:(double)arg1 offsetYFromBottom:(double)arg2 offsetXFromLeft:(double)arg3;
- (double)layoutPromoWithWidth:(double)arg1 offsetYFromBottom:(double)arg2 offsetXFromLeft:(double)arg3;
- (double)heightForContentList;
- (double)layoutContentListWithWidth:(double)arg1 offsetYFromBottom:(double)arg2 offsetXFromLeft:(double)arg3;
- (double)layoutNotificationViewWithWidth:(double)arg1 offsetYFromBottom:(double)arg2 offsetXFromLeft:(double)arg3;
- (double)layoutMessageInputWithWidth:(double)arg1 offsetYFromBottom:(double)arg2 offsetXFromLeft:(double)arg3;
- (double)layoutCancelButtonWithWidth:(double)arg1 offsetYFromBottom:(double)arg2 offsetXFromLeft:(double)arg3;
- (double)layoutSafeAreaWithWidth:(double)arg1 offsetYFromBottom:(double)arg2 offsetXFromLeft:(double)arg3;
- (void)animateVerticallyWithView:(id)arg1 y:(double)arg2 height:(double)arg3;
- (void)layoutDismissSuggestedConnectionView;
- (double)sharePanelWidth;
- (void)updateViewDrawingOrder;
- (void)layoutShareButton;
- (void)layoutBusyViewForClassInitialization;
- (_Bool)hasCommunityPostHeader;
- (_Bool)hasSenderIdSection;
- (_Bool)isLandscapeMode;
- (void)didTapShare;
- (void)animateShareButtonWithDuration:(double)arg1 willBeHidden:(_Bool)arg2;
- (void)addCommunityPostScrollViewWithFrame:(struct CGRect)arg1;
- (void)addShareButton;
- (void)addSafeArea;
- (void)addNotificationView;
- (void)addDismissSuggestedConnectionViewWithFrame:(struct CGRect)arg1;
- (void)addDismissArea;
- (void)addCancelButton;
- (void)addBusyViewWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) long long pageStyle;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)setShareButtonRenderer:(id)arg1;
- (void)setRenderer:(id)arg1;
- (void)setPromoView:(id)arg1;
- (void)setMessageInputView:(id)arg1;
- (void)setContentListView:(id)arg1;
- (void)setConnectionsOverflowView:(id)arg1;
- (void)setFormattedStringLabelDelegate:(id)arg1;
- (void)setCommunityPostViewDelegate:(id)arg1;
- (void)viewWillDisappear;
- (void)displayHint;
- (void)viewDidAppear;
- (void)showShareButtonIfRendererIsSet;
- (void)showDismissSuggestedConnectionMenuWithContactView:(id)arg1 suggestedContactRenderer:(id)arg2;
- (void)layoutBusyViews;
- (void)setWaitingForContents:(_Bool)arg1;
- (void)setShareButtonHidden:(_Bool)arg1;
- (void)setNotificationText:(id)arg1;
- (void)setMessageInputShown:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setBusy:(_Bool)arg1;
- (void)resetAccessibilityCursor;
- (void)hidePromoWithDismissalExpiryMs:(long long)arg1;
- (void)setDismissTarget:(id)arg1 action:(SEL)arg2;
- (void)removeDismissTarget:(id)arg1 action:(SEL)arg2;
- (void)keyboardHeightChangeFrom:(struct CGRect)arg1 to:(struct CGRect)arg2 animationDuration:(double)arg3 animationCurve:(long long)arg4;
- (_Bool)accessibilityPerformEscape;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

