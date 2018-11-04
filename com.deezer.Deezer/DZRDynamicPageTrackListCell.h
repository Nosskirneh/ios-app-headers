//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "DZRDynamicPageCell-Protocol.h"
#import "DZROfflineModeCell-Protocol.h"
#import "DZRPlayableContentCell-Protocol.h"
#import "DZRSynchronizableCell-Protocol.h"

@class NSString, UIButton, UIImageView, UILabel, UIProgressView, UIView;
@protocol DZRDynamicPageItem;

@interface DZRDynamicPageTrackListCell : UICollectionViewCell <DZRDynamicPageCell, DZROfflineModeCell, DZRPlayableContentCell, DZRSynchronizableCell>
{
    _Bool _isOffline;
    long long _listeningState;
    UILabel *_positionLabel;
    UIView *_labelsContainer;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_listeningStateImageView;
    UIButton *_loveButton;
    UIButton *_contextMenuButton;
    UIView *_syncStatusView;
    UIProgressView *_progressView;
    id <DZRDynamicPageItem> _item;
    long long _syncState;
}

+ (struct CGSize)sizeWithItem:(id)arg1 inSection:(id)arg2 usingBounds:(struct CGRect)arg3;
+ (id)cellIdentifier;
@property(nonatomic) _Bool isOffline; // @synthesize isOffline=_isOffline;
@property(nonatomic) long long syncState; // @synthesize syncState=_syncState;
@property(retain, nonatomic) id <DZRDynamicPageItem> item; // @synthesize item=_item;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIView *syncStatusView; // @synthesize syncStatusView=_syncStatusView;
@property(retain, nonatomic) UIButton *contextMenuButton; // @synthesize contextMenuButton=_contextMenuButton;
@property(retain, nonatomic) UIButton *loveButton; // @synthesize loveButton=_loveButton;
@property(retain, nonatomic) UIImageView *listeningStateImageView; // @synthesize listeningStateImageView=_listeningStateImageView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *labelsContainer; // @synthesize labelsContainer=_labelsContainer;
@property(retain, nonatomic) UILabel *positionLabel; // @synthesize positionLabel=_positionLabel;
@property(nonatomic) long long listeningState; // @synthesize listeningState=_listeningState;
- (void).cxx_destruct;
- (void)action:(id)arg1 didFailWithError:(id)arg2;
- (void)contextMenuButtonTouched:(id)arg1;
- (void)updateLoveButtonSelectedState;
- (void)loveButtonTouched:(id)arg1;
- (void)updateSyncViewState;
- (void)setDownloadProgress:(double)arg1 animated:(_Bool)arg2;
- (void)setDownloadProgress:(double)arg1;
- (void)setState:(id)arg1;
- (void)checkAvailability;
- (void)setOffline:(_Bool)arg1;
- (void)layoutSubviews;
- (id)nonEmptyLabels;
- (id)allLabels;
- (void)populateWithItem:(id)arg1 inSection:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

