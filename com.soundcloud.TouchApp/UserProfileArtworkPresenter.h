//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DataSourceStateDelegate-Protocol.h"
#import "SupplementaryViewPresenter-Protocol.h"

@class NSString, StretchableErrorView, UserProfileArtworkView, UserProfileBarPresenter, UserProfileBarView, UsernameFormatter;
@protocol CollectionViewDataSource, UpsellCellDelegate, UserProfileArtworkPresenterDelegate;

@interface UserProfileArtworkPresenter : NSObject <SupplementaryViewPresenter, DataSourceStateDelegate>
{
    id <UserProfileArtworkPresenterDelegate> _delegate;
    id <UpsellCellDelegate> _upsellDelegate;
    id <CollectionViewDataSource> _dataSource;
    UsernameFormatter *_usernameFormatter;
    UserProfileBarPresenter *_barPresenter;
    UserProfileArtworkView *_artworkView;
    UserProfileBarView *_barView;
    StretchableErrorView *_errorView;
    unsigned long long _artworkState;
}

@property(nonatomic) unsigned long long artworkState; // @synthesize artworkState=_artworkState;
@property(nonatomic) __weak StretchableErrorView *errorView; // @synthesize errorView=_errorView;
@property(nonatomic) __weak UserProfileBarView *barView; // @synthesize barView=_barView;
@property(nonatomic) __weak UserProfileArtworkView *artworkView; // @synthesize artworkView=_artworkView;
@property(readonly, nonatomic) UserProfileBarPresenter *barPresenter; // @synthesize barPresenter=_barPresenter;
@property(readonly, nonatomic) UsernameFormatter *usernameFormatter; // @synthesize usernameFormatter=_usernameFormatter;
@property(nonatomic) __weak id <CollectionViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <UpsellCellDelegate> upsellDelegate; // @synthesize upsellDelegate=_upsellDelegate;
@property(nonatomic) __weak id <UserProfileArtworkPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)userProfileHasNoContent;
- (id)unreachableReuseId;
- (id)errorReuseId;
- (id)artworkReuseId;
- (void)updateErrorView:(id)arg1 forState:(unsigned long long)arg2;
- (void)updateArtworkView:(id)arg1 forState:(unsigned long long)arg2;
- (_Bool)shouldHidePlayButtonForUser:(id)arg1 state:(unsigned long long)arg2;
- (void)presentUnreachableView:(id)arg1;
- (void)presentUserErrorView:(id)arg1 forUser:(id)arg2 state:(unsigned long long)arg3;
- (void)presentRefreshArtworkView:(id)arg1 forUser:(id)arg2 state:(unsigned long long)arg3;
- (void)presentEmptyView:(id)arg1 forUser:(id)arg2;
- (_Bool)upsellAppIsInstalled;
- (void)presentUpsellView:(id)arg1;
- (void)presentUserProfileBarView:(id)arg1 forUser:(id)arg2;
- (void)presentUserProfileArtworkView:(id)arg1 forUser:(id)arg2 state:(unsigned long long)arg3;
- (void)retainArtworkStatePriorToLoading:(unsigned long long)arg1;
- (void)updateForState:(unsigned long long)arg1;
- (id)reuseIdentifierForSupplementaryViewKind:(id)arg1 forEntity:(id)arg2;
- (void)registerSupplementaryViewsInCollectionView:(id)arg1;
- (void)presentSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3 forEntity:(id)arg4 state:(unsigned long long)arg5;
- (void)endArtworkLoadingAnimation;
- (void)beginArtworkLoadingAnimation;
- (id)initWithBarPresenter:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

