//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SKStoreProductViewControllerDelegate-Protocol.h"

@class FBAdWeakProxy, NSDictionary, NSMutableArray, NSString, SKStoreProductViewController, UIView;
@protocol FBStoreProductViewControllerDelegate;

@interface FBStoreProductViewController : UIViewController <SKStoreProductViewControllerDelegate>
{
    NSMutableArray *_storeKitControllersInProgress;
    SKStoreProductViewController *_storeKitController;
    UIView *_navigationBarView;
    FBAdWeakProxy *_weakProxy;
    NSDictionary *_loadParameters;
    unsigned long long _maxNumberOfAttempts;
    double _delayBetweenAttempts;
    CDUnknownBlockType _loadCompletionBlock;
    double _loadProductFinishedTime;
    double _presentedTime;
    double _dismissedTime;
    _Bool _loadCompleted;
    long long _orientationWhenPresented;
    _Bool _viewHasAppeared;
    _Bool _viewHasLayedOutSubviews;
    _Bool _loadWasSuccessful;
    id <FBStoreProductViewControllerDelegate> _delegate;
    unsigned long long _loadAttemptsCount;
    unsigned long long _loadAttemptThatSucceeded;
}

@property(readonly, nonatomic) unsigned long long loadAttemptThatSucceeded; // @synthesize loadAttemptThatSucceeded=_loadAttemptThatSucceeded;
@property(readonly, nonatomic) unsigned long long loadAttemptsCount; // @synthesize loadAttemptsCount=_loadAttemptsCount;
@property(readonly, nonatomic) _Bool loadWasSuccessful; // @synthesize loadWasSuccessful=_loadWasSuccessful;
@property(nonatomic) id <FBStoreProductViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_notifyProductViewControllerDidFinish;
- (void)_didPressCancel;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)productViewControllerDidAppear:(id)arg1;
- (void)_dismissProductViewControllerWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_presentProductViewController;
- (id)_dimmingViewBehindModal;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)loadView;
- (id)_navigationBarView;
@property(readonly, nonatomic) double timeSpentAfterLoad; // @dynamic timeSpentAfterLoad;
@property(readonly, nonatomic) double timeSpentBeforeLoad; // @dynamic timeSpentBeforeLoad;
@property(readonly, nonatomic) double timeSpent; // @dynamic timeSpent;
- (void)loadProductWithParameters:(id)arg1 numberOfAttempts:(int)arg2 delayBetweenAttempts:(double)arg3 timeoutAfterDelay:(double)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)reliablyLoadProductWithParameters:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)loadProductWithParameters:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_timeoutAfterDelay;
- (void)_scheduleAnotherLoad;
- (id)_createAndPrepareStoreProductViewController;
- (void)_loadCompletedWithResult:(_Bool)arg1 error:(id)arg2 duration:(double)arg3 loadAttempt:(unsigned long long)arg4 storeKitController:(id)arg5;
- (void)_dismissStoreKitControllerIfPresented:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) SKStoreProductViewController *createStoreProductViewController;
- (void)dealloc;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

