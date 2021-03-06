//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "ContentControllerDelegate-Protocol.h"

@class CollectionController, CollectionView, CollectionViewStateSetupHelper, SocialRelationshipsServiceCoordinator, _TtC10SoundCloud29SocialRelationshipsEmptyState, _TtC10SoundCloud33SocialRelationshipsEmptyStateView;

@interface SocialRelationshipsViewController : BaseViewController <ContentControllerDelegate>
{
    CollectionView *_collectionView;
    CollectionController *_collectionController;
    SocialRelationshipsServiceCoordinator *_serviceCoordinator;
    _TtC10SoundCloud33SocialRelationshipsEmptyStateView *_emptyStateView;
    _TtC10SoundCloud29SocialRelationshipsEmptyState *_emptyState;
    CollectionViewStateSetupHelper *_stateSetupHelper;
    long long _userRelationshipType;
}

@property(nonatomic) long long userRelationshipType; // @synthesize userRelationshipType=_userRelationshipType;
@property(retain, nonatomic) CollectionViewStateSetupHelper *stateSetupHelper; // @synthesize stateSetupHelper=_stateSetupHelper;
@property(retain, nonatomic) _TtC10SoundCloud29SocialRelationshipsEmptyState *emptyState; // @synthesize emptyState=_emptyState;
@property(nonatomic) __weak _TtC10SoundCloud33SocialRelationshipsEmptyStateView *emptyStateView; // @synthesize emptyStateView=_emptyStateView;
@property(retain, nonatomic) SocialRelationshipsServiceCoordinator *serviceCoordinator; // @synthesize serviceCoordinator=_serviceCoordinator;
@property(retain, nonatomic) CollectionController *collectionController; // @synthesize collectionController=_collectionController;
@property(nonatomic) __weak CollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)showCollectionView;
- (void)showEmptyStateView;
- (void)contentControllerDidReload:(id)arg1;
- (void)sync;
- (void)setupStateHelper;
- (void)setupContentController;
- (void)setupCollectionView;
- (void)setupAccessibilityIdentifier;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (long long)screen;
- (void)setupWithCollectionController:(id)arg1 serviceCoordinator:(id)arg2 emptyState:(id)arg3 forType:(long long)arg4;

@end

