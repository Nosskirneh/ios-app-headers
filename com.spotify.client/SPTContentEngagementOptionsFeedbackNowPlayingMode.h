//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNowPlayingMode-Protocol.h"

@class NSString;
@protocol SPTNowPlayingCEOUnitViewControllerProvider, SPTNowPlayingModeLayoutDelegate, SPTNowPlayingModeViewControllerRegistry;

@interface SPTContentEngagementOptionsFeedbackNowPlayingMode : NSObject <SPTNowPlayingMode>
{
    id <SPTNowPlayingModeLayoutDelegate> _layoutDelegate;
    id <SPTNowPlayingModeViewControllerRegistry> _viewControllerRegistry;
    id <SPTNowPlayingCEOUnitViewControllerProvider> _unitViewControllerProvider;
}

@property(readonly, nonatomic) id <SPTNowPlayingCEOUnitViewControllerProvider> unitViewControllerProvider; // @synthesize unitViewControllerProvider=_unitViewControllerProvider;
@property(readonly, nonatomic) id <SPTNowPlayingModeViewControllerRegistry> viewControllerRegistry; // @synthesize viewControllerRegistry=_viewControllerRegistry;
@property(nonatomic) __weak id <SPTNowPlayingModeLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (id)queueHeadUnitViewController;
- (id)footerUnitViewController;
- (id)headUnitViewController;
- (id)durationUnitViewController;
- (id)informationUnitViewController;
- (id)navigationBarUnitViewController;
- (id)identifier;
- (id)initWithViewControllerRegistry:(id)arg1 unitViewControllerProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

