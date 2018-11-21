//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EXP_HUBContainerView;
@protocol EXP_SPTHubKeyboardManagerNavigationBarProvider;

@interface EXP_SPTHubKeyboardManager : NSObject
{
    id <EXP_SPTHubKeyboardManagerNavigationBarProvider> _navigationBarProvider;
    EXP_HUBContainerView *_containerView;
}

@property(readonly, nonatomic) EXP_HUBContainerView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) __weak id <EXP_SPTHubKeyboardManagerNavigationBarProvider> navigationBarProvider; // @synthesize navigationBarProvider=_navigationBarProvider;
- (void).cxx_destruct;
- (unsigned long long)animationOptionsWithCurve:(long long)arg1;
- (void)setUpOverlayWithTheKeyboardNotification:(id)arg1;
- (void)handleKeyboardWillChangeNotification:(id)arg1;
- (void)unregisterNotificationObservers;
- (void)registerNotificationObservers;
- (id)initWithNavigationBarProvider:(id)arg1 containerView:(id)arg2;

@end

