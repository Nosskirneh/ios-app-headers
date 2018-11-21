//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNowPlayingMode-Protocol.h"

@class NSPointerArray, NSString, UIViewController;
@protocol SPTNowPlayingAdUnitViewController, SPTNowPlayingContainedViewController, SPTNowPlayingModeLayoutDelegate;

@interface SPTNowPlayingVideoAdMode : NSObject <SPTNowPlayingMode>
{
    id <SPTNowPlayingModeLayoutDelegate> _layoutDelegate;
    NSPointerArray *_unitViewControllers;
    UIViewController<SPTNowPlayingContainedViewController> *_navigationBarViewController;
    UIViewController<SPTNowPlayingContainedViewController> *_informationViewController;
    UIViewController<SPTNowPlayingContainedViewController> *_durationViewController;
    UIViewController<SPTNowPlayingContainedViewController> *_headViewController;
    UIViewController<SPTNowPlayingContainedViewController> *_footerViewController;
    UIViewController<SPTNowPlayingAdUnitViewController> *_decorationViewController;
    UIViewController<SPTNowPlayingContainedViewController> *_queueViewController;
}

@property(retain, nonatomic) UIViewController<SPTNowPlayingContainedViewController> *queueViewController; // @synthesize queueViewController=_queueViewController;
@property(retain, nonatomic) UIViewController<SPTNowPlayingAdUnitViewController> *decorationViewController; // @synthesize decorationViewController=_decorationViewController;
@property(retain, nonatomic) UIViewController<SPTNowPlayingContainedViewController> *footerViewController; // @synthesize footerViewController=_footerViewController;
@property(retain, nonatomic) UIViewController<SPTNowPlayingContainedViewController> *headViewController; // @synthesize headViewController=_headViewController;
@property(retain, nonatomic) UIViewController<SPTNowPlayingContainedViewController> *durationViewController; // @synthesize durationViewController=_durationViewController;
@property(retain, nonatomic) UIViewController<SPTNowPlayingContainedViewController> *informationViewController; // @synthesize informationViewController=_informationViewController;
@property(retain, nonatomic) UIViewController<SPTNowPlayingContainedViewController> *navigationBarViewController; // @synthesize navigationBarViewController=_navigationBarViewController;
@property(retain, nonatomic) NSPointerArray *unitViewControllers; // @synthesize unitViewControllers=_unitViewControllers;
@property(nonatomic) __weak id <SPTNowPlayingModeLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (id)queueHeadUnitViewController;
- (id)contentDecorationViewController;
- (id)footerUnitViewController;
- (id)headUnitViewController;
- (id)durationUnitViewController;
- (id)informationUnitViewController;
- (id)navigationBarUnitViewController;
- (id)identifier;
- (id)initWithNavigationBarViewController:(id)arg1 informationUnitViewController:(id)arg2 durationUnitViewController:(id)arg3 headUnitViewController:(id)arg4 footerUnitViewController:(id)arg5 contentDecorationController:(id)arg6 queueHeadUnitViewController:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

