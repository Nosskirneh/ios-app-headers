//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNowPlayingMode-Protocol.h"

@class NSMutableDictionary, NSString, SPTDrivingModeSession;
@protocol SPTDrivingModeViewControllerFactory, SPTNowPlayingModeLayoutDelegate;

@interface SPTDrivingNowPlayingMode : NSObject <SPTNowPlayingMode>
{
    id <SPTNowPlayingModeLayoutDelegate> _layoutDelegate;
    unsigned long long _headUnit;
    NSMutableDictionary *_viewControllerCache;
    id <SPTDrivingModeViewControllerFactory> _viewControllerFactory;
    SPTDrivingModeSession *_session;
    NSString *_identifier;
}

@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) SPTDrivingModeSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) id <SPTDrivingModeViewControllerFactory> viewControllerFactory; // @synthesize viewControllerFactory=_viewControllerFactory;
@property(readonly, nonatomic) NSMutableDictionary *viewControllerCache; // @synthesize viewControllerCache=_viewControllerCache;
@property(readonly, nonatomic) unsigned long long headUnit; // @synthesize headUnit=_headUnit;
@property(nonatomic) __weak id <SPTNowPlayingModeLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (_Bool)canBeResized;
- (_Bool)requiresContentViewDisabled;
- (_Bool)requiresScrollDisabled;
- (id)queueHeadUnitViewController;
- (id)footerUnitViewController;
- (id)headUnitViewController;
- (id)durationUnitViewController;
- (id)informationUnitViewController;
- (id)navigationBarUnitViewController;
- (id)getViewControllerForUnit:(unsigned long long)arg1;
- (id)initWithIdentifier:(id)arg1 headUnit:(unsigned long long)arg2 viewControllerCache:(id)arg3 viewControllerFactory:(id)arg4 session:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

