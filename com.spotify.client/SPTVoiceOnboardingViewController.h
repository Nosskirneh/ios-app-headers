//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTMetaViewControllerPresentable-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "SPTVoiceOnboardingFlowSessionIdProvider-Protocol.h"
#import "SPTVoiceOnboardingViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class CAGradientLayer, NSArray, NSString, NSURL, SPTVoiceOnboardingFlow, UIButton, UIPageControl, UIScrollView, UIView;
@protocol GLUETheme, SPTLinkDispatcher, SPTPageContainer, SPTVoiceLoggerProtocol, SPTVoiceOnboardingRecordPermissionsState;

@interface SPTVoiceOnboardingViewController : UIViewController <UIScrollViewDelegate, SPTVoiceOnboardingViewDelegate, SPTPageController, SPTMetaViewControllerPresentable, SPTVoiceOnboardingFlowSessionIdProvider>
{
    SPTVoiceOnboardingFlow *_onboardingFlow;
    id <GLUETheme> _glueTheme;
    CDUnknownBlockType _completionHandler;
    id <SPTVoiceOnboardingRecordPermissionsState> _permissionsReducer;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTVoiceLoggerProtocol> _logger;
    NSString *_utteranceId;
    UIButton *_closeButton;
    UIView *_topView;
    UIScrollView *_scrollView;
    UIPageControl *_pageControl;
    CAGradientLayer *_backgroundGradientLayer;
    NSString *_exitMethod;
    unsigned long long _currentPageIndex;
    struct CGPoint _scrollDraggingStartOffset;
}

@property(nonatomic) unsigned long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property(retain, nonatomic) NSString *exitMethod; // @synthesize exitMethod=_exitMethod;
@property(nonatomic) struct CGPoint scrollDraggingStartOffset; // @synthesize scrollDraggingStartOffset=_scrollDraggingStartOffset;
@property(retain, nonatomic) CAGradientLayer *backgroundGradientLayer; // @synthesize backgroundGradientLayer=_backgroundGradientLayer;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(readonly, nonatomic) NSString *utteranceId; // @synthesize utteranceId=_utteranceId;
@property(readonly, nonatomic) id <SPTVoiceLoggerProtocol> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) id <SPTVoiceOnboardingRecordPermissionsState> permissionsReducer; // @synthesize permissionsReducer=_permissionsReducer;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) __weak id <GLUETheme> glueTheme; // @synthesize glueTheme=_glueTheme;
@property(readonly, nonatomic) SPTVoiceOnboardingFlow *onboardingFlow; // @synthesize onboardingFlow=_onboardingFlow;
- (void).cxx_destruct;
- (id)provideSessionId;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic) long long presentationStyle;
- (void)updateVisiblePage;
- (void)scrollToPreviousPage;
- (void)scrollToNextPage;
- (void)handleScrollViewDidEndScrolling:(id)arg1;
- (unsigned long long)currentPageIndexInScrollView:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)onboardingView:(id)arg1 didTapAdditionalLinkButton:(id)arg2;
- (void)onboardingView:(id)arg1 didTapActionButton:(id)arg2;
- (void)handleAdditionalLinkAction;
- (void)logAndRequestPermissions;
- (void)markOnboardingComplete;
- (void)requestUserPermissions;
- (void)didTapPageControl:(id)arg1;
- (void)didTapCloseButton;
- (void)setupLayout;
- (id)getOnboardingViewForPageElement:(id)arg1;
- (void)updateContainerViewsForPage:(id)arg1;
@property(readonly, nonatomic) NSArray *pagedViews;
@property(readonly, nonatomic) NSArray *allPages;
- (void)setupOnboardingPagesViews;
- (void)setupViews;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithOnboardingFlow:(id)arg1 glueTheme:(id)arg2 permissionsReducer:(id)arg3 linkDispatcher:(id)arg4 logger:(id)arg5 utteranceId:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

