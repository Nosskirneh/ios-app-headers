//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNowPlayingMode-Protocol.h"

@class NSString, UIViewController;
@protocol SPTDrivingModeViewControllerFactory, SPTNowPlayingContainedViewController, SPTNowPlayingModeLayoutDelegate;

@interface SPTDrivingNowPlayingMode : NSObject <SPTNowPlayingMode>
{
    id <SPTNowPlayingModeLayoutDelegate> _layoutDelegate;
    id <SPTDrivingModeViewControllerFactory> _factory;
    UIViewController<SPTNowPlayingContainedViewController> *_navigationBarUnitViewController;
    UIViewController<SPTNowPlayingContainedViewController> *_informationUnitViewController;
    UIViewController<SPTNowPlayingContainedViewController> *_durationUnitViewController;
    UIViewController<SPTNowPlayingContainedViewController> *_headUnitViewController;
    UIViewController<SPTNowPlayingContainedViewController> *_footerUnitViewController;
    UIViewController<SPTNowPlayingContainedViewController> *_queueHeadUnitViewController;
}

@property(retain, nonatomic) UIViewController<SPTNowPlayingContainedViewController> *queueHeadUnitViewController; // @synthesize queueHeadUnitViewController=_queueHeadUnitViewController;
@property(retain, nonatomic) UIViewController<SPTNowPlayingContainedViewController> *footerUnitViewController; // @synthesize footerUnitViewController=_footerUnitViewController;
@property(retain, nonatomic) UIViewController<SPTNowPlayingContainedViewController> *headUnitViewController; // @synthesize headUnitViewController=_headUnitViewController;
@property(retain, nonatomic) UIViewController<SPTNowPlayingContainedViewController> *durationUnitViewController; // @synthesize durationUnitViewController=_durationUnitViewController;
@property(retain, nonatomic) UIViewController<SPTNowPlayingContainedViewController> *informationUnitViewController; // @synthesize informationUnitViewController=_informationUnitViewController;
@property(retain, nonatomic) UIViewController<SPTNowPlayingContainedViewController> *navigationBarUnitViewController; // @synthesize navigationBarUnitViewController=_navigationBarUnitViewController;
@property(readonly, nonatomic) __weak id <SPTDrivingModeViewControllerFactory> factory; // @synthesize factory=_factory;
@property(nonatomic) __weak id <SPTNowPlayingModeLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (id)identifier;
- (id)initWithViewControllerFactory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

