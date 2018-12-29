//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CellPresenter-Protocol.h"

@class NSString, UpsellManager;
@protocol UserLikesToolbarCellDelegate;

@interface UserLikesToolbarCellPresenter : NSObject <CellPresenter>
{
    id <UserLikesToolbarCellDelegate> _userLikesToolbarCellDelegate;
    UpsellManager *_upsellManager;
}

@property(readonly, nonatomic) UpsellManager *upsellManager; // @synthesize upsellManager=_upsellManager;
@property(nonatomic) __weak id <UserLikesToolbarCellDelegate> userLikesToolbarCellDelegate; // @synthesize userLikesToolbarCellDelegate=_userLikesToolbarCellDelegate;
- (void).cxx_destruct;
- (_Bool)shouldShowSaveOfflineButton;
- (void)setupSaveOfflineButtonInCell:(id)arg1;
- (void)setupShuffleButtonInCell:(id)arg1;
- (void)setupTitleLabelInCell:(id)arg1 forUser:(id)arg2;
- (void)presentCell:(id)arg1 withUser:(id)arg2;
- (void)registerCellsInCollectionView:(id)arg1;
- (Class)cellClassForEntity:(id)arg1;
- (id)cellReuseIdentifierForEntity:(id)arg1;
- (void)presentCell:(id)arg1 withEntity:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4;
- (id)initWithUpsellManager:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
