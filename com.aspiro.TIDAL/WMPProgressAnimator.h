//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIActivityIndicatorView, WMPProgressIndicatorView, WMPProgressViewController;

@interface WMPProgressAnimator : NSObject
{
    long long _state;
    WMPProgressIndicatorView *_progressView;
    UIActivityIndicatorView *_activityIndicator;
    WMPProgressViewController *_progressViewController;
}

@property(retain, nonatomic) WMPProgressViewController *progressViewController; // @synthesize progressViewController=_progressViewController;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) WMPProgressIndicatorView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)startAnimation;
- (void)configureTidalProgressViewController;
- (void)configureWimpProgressViewController;
- (void)configureProgressViewController;
- (void)addNotificationObservers;
- (void)setBackgroundColor:(id)arg1;
- (void)hideProgress;
- (void)showProgressInView:(id)arg1;
- (void)dealloc;
- (id)init;

@end
