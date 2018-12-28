//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GOOSideViewContentView-Protocol.h"
#import "MDCInkTouchControllerDelegate-Protocol.h"

@class GOOSideViewCarouselView, GOOSideViewFlowLayout, GOOSideViewHeaderView, GOOSideViewSignInHeader, MDCInkTouchController, NSString, UICollectionView, UIScrollView;
@protocol GOOSideViewContentViewDelegate, GOOSideViewProfile, GOOSideViewProfileDataSource;

@interface GOOSideViewLegacyContentView : UIView <GOOSideViewContentView, MDCInkTouchControllerDelegate>
{
    MDCInkTouchController *_touchController;
    UICollectionView *_collectionView;
    GOOSideViewFlowLayout *_collectionViewLayout;
    UIScrollView *_scrollView;
    GOOSideViewCarouselView *_carouselView;
    GOOSideViewSignInHeader *_headerButton;
    long long _displayOptions;
}

@property(nonatomic) long long displayOptions; // @synthesize displayOptions=_displayOptions;
@property(retain, nonatomic) GOOSideViewSignInHeader *headerButton; // @synthesize headerButton=_headerButton;
@property(retain, nonatomic) GOOSideViewCarouselView *carouselView; // @synthesize carouselView=_carouselView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) GOOSideViewFlowLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (id)indexPathForInkTouchController:(id)arg1 touchLocation:(struct CGPoint)arg2;
- (id)inkTouchController:(id)arg1 inkViewAtTouchLocation:(struct CGPoint)arg2;
- (_Bool)inkTouchController:(id)arg1 shouldProcessInkTouchesAtTouchLocation:(struct CGPoint)arg2;
- (void)layoutSubviews;
- (void)reloadAccountData;
- (id)initWithFrame:(struct CGRect)arg1 colorGroup:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) __weak id <GOOSideViewProfileDataSource> accountDataSource;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <GOOSideViewContentViewDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool disableAccountSwitching;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) GOOSideViewHeaderView *headerView;
@property(retain, nonatomic) id <GOOSideViewProfile> selectedAccount;
@property(readonly) Class superclass;

@end

