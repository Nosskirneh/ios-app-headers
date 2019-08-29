//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class FBAdBackButton, FBAdCollectionViewFlowLayout, FBAdReportIcon, FBAdReportingOptionCollectionViewCell, NSArray, NSString, UIButton, UICollectionView, UILabel;

@interface FBAdReportingOptionsContentView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    long long _layoutType;
    CDUnknownBlockType _onDismiss;
    CDUnknownBlockType _onBack;
    CDUnknownBlockType _onSelect;
    UICollectionView *_collectionView;
    FBAdCollectionViewFlowLayout *_layout;
    UIView *_containerView;
    UIView *_lineView;
    UIButton *_transparentDismissButton;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIButton *_sendButton;
    UIView *_separatorView;
    FBAdReportIcon *_reportIcon;
    FBAdReportingOptionCollectionViewCell *_prototypeCell;
    FBAdBackButton *_backButton;
    NSString *_title;
    NSString *_heading;
    NSArray *_items;
}

@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(copy, nonatomic) NSString *heading; // @synthesize heading=_heading;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) FBAdBackButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) FBAdReportingOptionCollectionViewCell *prototypeCell; // @synthesize prototypeCell=_prototypeCell;
@property(retain, nonatomic) FBAdReportIcon *reportIcon; // @synthesize reportIcon=_reportIcon;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *transparentDismissButton; // @synthesize transparentDismissButton=_transparentDismissButton;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) FBAdCollectionViewFlowLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(copy, nonatomic) CDUnknownBlockType onSelect; // @synthesize onSelect=_onSelect;
@property(copy, nonatomic) CDUnknownBlockType onBack; // @synthesize onBack=_onBack;
@property(copy, nonatomic) CDUnknownBlockType onDismiss; // @synthesize onDismiss=_onDismiss;
@property(nonatomic) long long layoutType; // @synthesize layoutType=_layoutType;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)handleBackButtonTap;
- (void)dismissView;
- (struct CGSize)collectionViewContentSize;
- (void)layoutFullscreen;
- (void)layoutOneline;
- (void)layoutMultiline;
- (void)layoutSubviews;
- (id)initWithTitle:(id)arg1 heading:(id)arg2 items:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

