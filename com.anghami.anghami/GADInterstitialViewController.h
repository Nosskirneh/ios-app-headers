//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GADAdAppViewController.h"

@class NSString, OMIDAdSession;

@interface GADInterstitialViewController : GADAdAppViewController
{
    NSString *_previousScreenName;
    NSString *_previousScreenClass;
    _Bool _hasSetScreenName;
    double _applicationBackgroundTimeIntervalSinceBoot;
    OMIDAdSession *_adSession;
}

- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)finishDismissal;
- (void)relinquishScreenWithCompletion:(CDUnknownBlockType)arg1;
- (void)finishAppearing;
- (_Bool)isLoaded;
- (_Bool)shouldDismissOnApplicationEnteringForeground;
- (void)presentFromViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithAdView:(id)arg1;
- (id)initWithSlot:(id)arg1;

@end

