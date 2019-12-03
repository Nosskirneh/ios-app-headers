//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSDictionary, NSString, RHMetricsController, RHPermissionsController, _TtC7Napster17AccountController;

@interface RHViewController : UIViewController
{
    _Bool _keyboardShown;
    _Bool _isChildViewController;
    long long _viewState;
    CDUnknownBlockType _onViewDidAppearBlock;
    NSString *_metricsSource;
    NSString *_metricsScreenEvent;
    struct CGSize _keyboardSize;
    struct CGSize _lastCalculatedWillLayoutSize;
    struct CGSize _lastCalculatedDidLayoutSize;
}

+ (long long)defaultStatusBarStyle;
@property(nonatomic) struct CGSize lastCalculatedDidLayoutSize; // @synthesize lastCalculatedDidLayoutSize=_lastCalculatedDidLayoutSize;
@property(nonatomic) struct CGSize lastCalculatedWillLayoutSize; // @synthesize lastCalculatedWillLayoutSize=_lastCalculatedWillLayoutSize;
@property(readonly, nonatomic) NSString *metricsScreenEvent; // @synthesize metricsScreenEvent=_metricsScreenEvent;
@property(readonly, nonatomic) NSString *metricsSource; // @synthesize metricsSource=_metricsSource;
@property(copy, nonatomic) CDUnknownBlockType onViewDidAppearBlock; // @synthesize onViewDidAppearBlock=_onViewDidAppearBlock;
@property(nonatomic) _Bool isChildViewController; // @synthesize isChildViewController=_isChildViewController;
@property(nonatomic) _Bool keyboardShown; // @synthesize keyboardShown=_keyboardShown;
@property(nonatomic) struct CGSize keyboardSize; // @synthesize keyboardSize=_keyboardSize;
@property(nonatomic) long long viewState; // @synthesize viewState=_viewState;
- (void).cxx_destruct;
- (void)trackTapEventForButtonIdentifier:(id)arg1 additionalAttributes:(id)arg2;
- (void)trackTapEventForButtonIdentifier:(id)arg1;
@property(readonly, nonatomic) NSDictionary *metricsProperties;
@property(readonly, nonatomic) NSString *parentMetriscScreenName;
@property(readonly, nonatomic) NSString *metricsScreenName;
- (double)navigationAlphaWithScrollView:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)handleKeyboardDidHide:(id)arg1;
- (void)handleKeyboardWillHide:(id)arg1;
- (void)handleKeyboardDidShow:(id)arg1;
- (void)handleKeyboardWillShow:(id)arg1;
- (void)unregisterKeyboardNotifcations;
- (void)registerKeyboardNotifcations;
- (void)updateLayout;
- (void)layoutChildCollectionViewControllers;
- (void)ensureModalViewControllerPresented:(id)arg1 animated:(_Bool)arg2;
- (void)ensureModalViewControllerPresented:(id)arg1;
- (void)ensureModalViewControllerDismissedWithCompletion:(CDUnknownBlockType)arg1;
- (id)promise;
- (id)moviePlayerViewControllerWithContentURL:(id)arg1;
- (id)videoController;
- (void)dismissViewController:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (id)playVideoForEditorial:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)playAssetForEditorial:(id)arg1 selectedGenre:(id)arg2 withShuffle:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)playPlaylist:(id)arg1 withShuffle:(_Bool)arg2 originatingEditorial:(id)arg3 inGenre:(id)arg4;
- (id)playPlaylist:(id)arg1 withShuffle:(_Bool)arg2;
- (id)playPlaylistWithId:(id)arg1 withShuffle:(_Bool)arg2 originatingEditorial:(id)arg3 inGenre:(id)arg4;
- (id)playPlaylistWithId:(id)arg1 withShuffle:(_Bool)arg2;
- (long long)preferredStatusBarStyle;
- (id)playbackService;
@property(readonly, nonatomic) RHMetricsController *metricsController;
@property(readonly, nonatomic) RHPermissionsController *permissionsController;
- (id)dataController;
@property(readonly, nonatomic) _TtC7Napster17AccountController *accountController;
- (id)reachabilityService;
- (id)appDelegate;
- (void)handleWillEnterForeground:(id)arg1;
- (void)didChangeAccount:(id)arg1;
- (void)didFailSessionValidation:(id)arg1;
- (void)didSignOut:(id)arg1;
- (void)didSignIn:(id)arg1;
- (void)viewApplicationWillEnterForeground:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviewsAfterSizeChanged;
- (void)viewWillLayoutSubviewsAfterSizeChanged;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)logPageViewEvent;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewUnloading;
@property(readonly, nonatomic) _Bool showNavigationBar;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 metricsSource:(id)arg3;

@end
