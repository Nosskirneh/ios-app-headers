//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTLoginDialogController;
@protocol SPTLoginNavigationCoordinator;

@interface SPTRecoverAccountLinkErrorHandler : NSObject
{
    id <SPTLoginNavigationCoordinator> _navigationCoordinator;
    SPTLoginDialogController *_dialogController;
}

@property(readonly, nonatomic) SPTLoginDialogController *dialogController; // @synthesize dialogController=_dialogController;
@property(readonly, nonatomic) id <SPTLoginNavigationCoordinator> navigationCoordinator; // @synthesize navigationCoordinator=_navigationCoordinator;
- (void).cxx_destruct;
- (void)showRegionMismatchErrorDialog;
- (void)showLinkExpiredErrorDialog;
- (void)getNewRecoverAccountLink;
- (void)showDialogWithError:(id)arg1;
- (id)initWithNavigationCoordinator:(id)arg1 dialogController:(id)arg2;

@end

