//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import "GHKViewControllerDelegate-Protocol.h"
#import "YTResponder-Protocol.h"
#import "YTTopController-Protocol.h"

@class GTMSessionFetcherService, NSString, YTMSettings;
@protocol YTResponder;

@interface YTMHelpNavigationController : UINavigationController <GHKViewControllerDelegate, YTResponder, YTTopController>
{
    YTMSettings *_settings;
    id <YTResponder> _parentResponder;
    GTMSessionFetcherService *_service;
}

@property(readonly, nonatomic) GTMSessionFetcherService *service; // @synthesize service=_service;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (_Bool)isEqualTopController:(id)arg1;
- (void)canBePushedWithBlock:(CDUnknownBlockType)arg1;
- (id)model;
- (void)loadWithModel:(id)arg1 fromView:(id)arg2;
- (void)exitHelpKitWithStatus:(long long)arg1;
- (id)initWithIdentity:(id)arg1 parentResponder:(id)arg2 settings:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

