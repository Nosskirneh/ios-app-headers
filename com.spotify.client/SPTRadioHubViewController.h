//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EXP_SPTHubViewController.h"

#import "SPTRadioPlaybackObserver.h"

@class NSDate, NSString, SPTRadioPlaybackService, UIBarButtonItem;

@interface SPTRadioHubViewController : EXP_SPTHubViewController <SPTRadioPlaybackObserver>
{
    NSDate *_lastUpdate;
    SPTRadioPlaybackService *_playbackService;
    id <SPTBarButtonItemManager> _barButtonItemManager;
    UIBarButtonItem *_barButton;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTRadioTestManager> _radioTestManager;
}

@property(readonly, nonatomic) id <SPTRadioTestManager> radioTestManager; // @synthesize radioTestManager=_radioTestManager;
@property(nonatomic) __weak id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) UIBarButtonItem *barButton; // @synthesize barButton=_barButton;
@property(readonly, nonatomic) __weak id <SPTBarButtonItemManager> barButtonItemManager; // @synthesize barButtonItemManager=_barButtonItemManager;
@property(readonly, nonatomic) SPTRadioPlaybackService *playbackService; // @synthesize playbackService=_playbackService;
@property(retain, nonatomic) NSDate *lastUpdate; // @synthesize lastUpdate=_lastUpdate;
- (void).cxx_destruct;
- (void)hubView:(id)arg1 componentViewDidDisappear:(id)arg2;
- (void)hubView:(id)arg1 componentViewWillAppear:(id)arg2;
- (void)radioSearchButtonTapped:(id)arg1;
- (void)setupRightNavigationItems;
- (void)clearBarNavigationItems;
- (void)configureRightBarButtonItems:(id)arg1;
- (void)radioPlaybackService:(id)arg1 playbackStateChanged:(unsigned long long)arg2;
- (void)viewModelDidLoad:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)initWithTheme:(id)arg1 pageURI:(id)arg2 componentRegistry:(id)arg3 componentLayoutManager:(id)arg4 imageLoaderFactory:(id)arg5 commandHandler:(id)arg6 viewModelProvider:(id)arg7 impressionLogger:(id)arg8 loadingLogger:(id)arg9 pageIdentifier:(id)arg10 playbackService:(id)arg11 barButtonItemManager:(id)arg12 linkDispatcher:(id)arg13 radioTestManager:(id)arg14;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
