//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SupplementaryViewPresenter-Protocol.h"

@class NSString, UserProfileSectionDescription;
@protocol UserProfileSectionFooterDelegate;

@interface UserProfileSectionViewPresenter : NSObject <SupplementaryViewPresenter>
{
    id <UserProfileSectionFooterDelegate> _delegate;
    UserProfileSectionDescription *_userProfileSectionDescription;
}

@property(readonly, nonatomic) UserProfileSectionDescription *userProfileSectionDescription; // @synthesize userProfileSectionDescription=_userProfileSectionDescription;
@property(nonatomic) __weak id <UserProfileSectionFooterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)reuseIdentifierForSupplementaryViewKind:(id)arg1 forEntity:(id)arg2;
- (void)registerSupplementaryViewsInCollectionView:(id)arg1;
- (void)presentSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3 forEntity:(id)arg4 state:(unsigned long long)arg5;
- (id)initWithSectionDescription:(id)arg1 username:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
