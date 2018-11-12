//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTAssistedCurationNavigationControllerDelegate-Protocol.h"

@class NSString, SPNavigationController;
@protocol SPTAssistedCurationLinkDispatcher, SPTFreeTierPresentationModalPresenter;

@interface SPTAssistedCurationPresentationHelper : NSObject <SPTAssistedCurationNavigationControllerDelegate>
{
    id <SPTFreeTierPresentationModalPresenter> _modalPresenter;
    id <SPTAssistedCurationLinkDispatcher> _assistedCurationLinkDispatcher;
    SPNavigationController *_navigationController;
}

@property(retain, nonatomic) SPNavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) id <SPTAssistedCurationLinkDispatcher> assistedCurationLinkDispatcher; // @synthesize assistedCurationLinkDispatcher=_assistedCurationLinkDispatcher;
@property(readonly, nonatomic) id <SPTFreeTierPresentationModalPresenter> modalPresenter; // @synthesize modalPresenter=_modalPresenter;
- (void).cxx_destruct;
- (void)assistedCurationNavigationController:(id)arg1 dismiss:(_Bool)arg2;
- (void)presentAssistedCurationViewController:(id)arg1;
- (id)initWithAssistedCurationLinkDispatcher:(id)arg1 modalPresenter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

