//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPContentInsetViewController-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "SPTSearch2RootViewControllerProtocol-Protocol.h"
#import "SPTSearchSearchBarDelegate-Protocol.h"
#import "SPTSearchVoiceEnabledViewDelegate-Protocol.h"

@class NSLayoutConstraint, NSString, NSURL, SPTFloatingVoiceSearchView, SPTNetworkConnectivityController, SPTSearch2ViewController, UIView;
@protocol SPTLinkDispatcher, SPTPageContainer, SPTSearchLogger, SPTSearchSearchBarProtocol, SPTVoiceService;

@interface SPTSearch2RootViewController : UIViewController <SPTSearchSearchBarDelegate, SPContentInsetViewController, SPTSearchVoiceEnabledViewDelegate, SPTSearch2RootViewControllerProtocol, SPTPageController>
{
    _Bool _automaticallyAdjustsInsets;
    _Bool _voiceSearchAllowed;
    _Bool _shouldFocusSearchBarOnViewDidAppear;
    unsigned long long _cancelButtonVisibility;
    NSString *_query;
    SPTSearch2ViewController *_searchViewController;
    id <SPTSearchLogger> _logger;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTVoiceService> _voiceService;
    SPTNetworkConnectivityController *_networkConnectivityController;
    UIView<SPTSearchSearchBarProtocol> *_searchBar;
    NSLayoutConstraint *_searchBarWidthConstraint;
    SPTFloatingVoiceSearchView *_floatingSearchView;
    NSLayoutConstraint *_floatingSearchViewBottomConstraint;
    struct UIEdgeInsets _insets;
}

@property(retain, nonatomic) NSLayoutConstraint *floatingSearchViewBottomConstraint; // @synthesize floatingSearchViewBottomConstraint=_floatingSearchViewBottomConstraint;
@property(retain, nonatomic) SPTFloatingVoiceSearchView *floatingSearchView; // @synthesize floatingSearchView=_floatingSearchView;
@property(readonly, nonatomic) NSLayoutConstraint *searchBarWidthConstraint; // @synthesize searchBarWidthConstraint=_searchBarWidthConstraint;
@property(readonly, nonatomic) UIView<SPTSearchSearchBarProtocol> *searchBar; // @synthesize searchBar=_searchBar;
@property(readonly, nonatomic) SPTNetworkConnectivityController *networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
@property(readonly, nonatomic) id <SPTVoiceService> voiceService; // @synthesize voiceService=_voiceService;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) id <SPTSearchLogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) SPTSearch2ViewController *searchViewController; // @synthesize searchViewController=_searchViewController;
@property(nonatomic) _Bool shouldFocusSearchBarOnViewDidAppear; // @synthesize shouldFocusSearchBarOnViewDidAppear=_shouldFocusSearchBarOnViewDidAppear;
@property(nonatomic) _Bool voiceSearchAllowed; // @synthesize voiceSearchAllowed=_voiceSearchAllowed;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(nonatomic) _Bool automaticallyAdjustsInsets; // @synthesize automaticallyAdjustsInsets=_automaticallyAdjustsInsets;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(nonatomic) unsigned long long cancelButtonVisibility; // @synthesize cancelButtonVisibility=_cancelButtonVisibility;
- (void).cxx_destruct;
- (void)voiceEnabledView:(id)arg1 didSelectElementWithSourceIdentifier:(id)arg2;
- (void)configureFloatingMicrophoneForVoiceEnabledSearch;
- (void)setupVoiceView;
- (void)updateSearchBarForCurrentCancelButtonVisibility;
- (id)spotifyURIFromQuery:(id)arg1;
- (void)dismissKeyboard;
- (void)adjustFloatingButtonBottomConstraint;
- (void)adjustInsetsIfNeeded;
- (void)layoutSubviews;
- (void)resetSearch;
- (void)focusSearchBar;
- (void)sp_updateContentInsets;
- (void)logQueryClear;
- (void)returnKeyPressed;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (_Bool)searchBarShouldEndEditing:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
@property(readonly, copy, nonatomic) NSString *requestID;
- (id)initWithSearchViewController:(id)arg1 logger:(id)arg2 linkDispatcher:(id)arg3 voiceService:(id)arg4 connectivityController:(id)arg5;

// Remaining properties
@property(nonatomic) _Bool automaticallyAdjustsScrollViewInsets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

