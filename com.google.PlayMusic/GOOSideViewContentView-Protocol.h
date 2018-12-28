//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GOOSideViewCarouselView, GOOSideViewFlowLayout, GOOSideViewHeaderView, GOOSideViewProductLockup, GOOSideViewSignInHeader, UICollectionView, UIScrollView;
@protocol GOOSideViewContentViewDelegate, GOOSideViewProfile, GOOSideViewProfileDataSource;

@protocol GOOSideViewContentView <NSObject>
@property(retain, nonatomic) UIScrollView *scrollView;
@property(retain, nonatomic) GOOSideViewFlowLayout *collectionViewLayout;
@property(retain, nonatomic) UICollectionView *collectionView;
- (void)reloadAccountData;

@optional
@property(nonatomic) __weak id <GOOSideViewContentViewDelegate> delegate;
@property(nonatomic) _Bool disableAccountSwitching;
@property(nonatomic) __weak id <GOOSideViewProfileDataSource> accountDataSource;
@property(retain, nonatomic) id <GOOSideViewProfile> selectedAccount;
@property(nonatomic) long long displayOptions;
@property(retain, nonatomic) GOOSideViewSignInHeader *headerButton;
@property(retain, nonatomic) GOOSideViewHeaderView *headerView;
@property(retain, nonatomic) GOOSideViewCarouselView *carouselView;
- (void)setMaxNumberOfAccountsToShow:(long long)arg1;
- (void)setProductLockup:(GOOSideViewProductLockup *)arg1;
- (void)reloadDataForAccount:(id <GOOSideViewProfile>)arg1;
@end

