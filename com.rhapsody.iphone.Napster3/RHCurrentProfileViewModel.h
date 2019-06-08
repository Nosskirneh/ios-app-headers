//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHProfileViewModel.h"

@class RHAccountController, RHDataController;

@interface RHCurrentProfileViewModel : RHProfileViewModel
{
    RHDataController *_dataController;
    RHAccountController *_accountController;
}

@property(retain, nonatomic) RHAccountController *accountController; // @synthesize accountController=_accountController;
@property(retain, nonatomic) RHDataController *dataController; // @synthesize dataController=_dataController;
- (void).cxx_destruct;
- (_Bool)isEditProfileTooltipPending;
- (id)deferredLoadFriends;
- (id)deferredLoadSignature;
- (id)followedPlaylistsModelObserver;
- (id)userPlaylistsModelObserver;
- (void)didMoveToParent;
- (void)dismissShareProfileTooltip;
- (void)pushPlaylists;
- (id)signatureButtonTapped;
- (unsigned long long)followersCount;
- (unsigned long long)followingCount;
- (void)presentingView;
- (void)viewWillAppear;
- (_Bool)isPrivate;
- (_Bool)isCurrentUser;
- (id)favoritesFetchedResultsController;
- (id)screenName;
- (id)initWithDependencies:(id)arg1 profile:(id)arg2 metricsSource:(id)arg3;
- (id)initForCurrentUserWithDependencies:(id)arg1 metricsSource:(id)arg2;

@end

