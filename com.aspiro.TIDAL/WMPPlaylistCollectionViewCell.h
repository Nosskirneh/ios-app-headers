//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "WMPModule-Protocol.h"

@class NSDictionary, NSLayoutConstraint, NSString, UIImageView, UILabel, UIView, WMPProgressAnimator, _TtC4WiMP14ForceClickView;
@protocol WMPModuleDelegate;

@interface WMPPlaylistCollectionViewCell : UICollectionViewCell <WMPModule>
{
    _TtC4WiMP14ForceClickView *_clicker;
    UIImageView *_playlistImageView;
    UILabel *_playlistTitleLabel;
    UIView *_separatorLine;
    UILabel *_playlistNumberOfTracksLabel;
    UILabel *_playlistAuthorLabel;
    NSLayoutConstraint *_separatorLineHeightConstraint;
    id _itemId;
}

@property(retain, nonatomic) id itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) NSLayoutConstraint *separatorLineHeightConstraint; // @synthesize separatorLineHeightConstraint=_separatorLineHeightConstraint;
@property(retain, nonatomic) UILabel *playlistAuthorLabel; // @synthesize playlistAuthorLabel=_playlistAuthorLabel;
@property(retain, nonatomic) UILabel *playlistNumberOfTracksLabel; // @synthesize playlistNumberOfTracksLabel=_playlistNumberOfTracksLabel;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) UILabel *playlistTitleLabel; // @synthesize playlistTitleLabel=_playlistTitleLabel;
@property(retain, nonatomic) UIImageView *playlistImageView; // @synthesize playlistImageView=_playlistImageView;
@property(retain, nonatomic) _TtC4WiMP14ForceClickView *clicker; // @synthesize clicker=_clicker;
- (void).cxx_destruct;
- (void)configureFontsForType:(long long)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setArtwork:(id)arg1;
- (void)configureUI;
- (void)awakeFromNib;

// Remaining properties
@property(retain, nonatomic) WMPProgressAnimator *animator;
@property(nonatomic) _Bool canCollapse;
@property(nonatomic) _Bool contentLoadFinished;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSDictionary *eventMetadata;
@property(nonatomic) _Bool hasDetails;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *header;
@property(nonatomic) double heightConstraint;
@property(nonatomic) double heightUnits;
@property(nonatomic) double horizontalUnits;
@property(nonatomic) _Bool isFullScreen;
@property(nonatomic) _Bool isLoadedFromNavigation;
@property(nonatomic) __weak id <WMPModuleDelegate> moduleDelegate;
@property(retain, nonatomic) NSString *moduleTag;
@property(retain, nonatomic) UIView *noConnectionView;
@property(nonatomic) _Bool scrollEnabled;
@property(nonatomic) _Bool sortingEnabled;
@property(readonly) Class superclass;

@end

