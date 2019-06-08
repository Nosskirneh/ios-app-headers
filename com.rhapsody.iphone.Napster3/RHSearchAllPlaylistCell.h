//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "RHSearchAllCellReuseInfo-Protocol.h"
#import "RHSearchAllConfigurableCell-Protocol.h"

@class FBKVOController, NSLayoutConstraint, NSString, RHPlaylistMO, RHSearchAllPlaylistCellViewModel, UILabel, _TtC7Napster19RHDeferredImageView;

@interface RHSearchAllPlaylistCell : UITableViewCell <RHSearchAllConfigurableCell, RHSearchAllCellReuseInfo>
{
    RHSearchAllPlaylistCellViewModel *_viewModel;
    _TtC7Napster19RHDeferredImageView *_artworkImageView;
    UILabel *_playlistNameLabel;
    UILabel *_trackCountLabel;
    NSLayoutConstraint *_textPadding;
    FBKVOController *_viewModelKVO;
    FBKVOController *_artworkKVO;
}

+ (id)viewNib;
+ (id)reuseIdentifier;
+ (double)viewHeight;
@property(retain, nonatomic) FBKVOController *artworkKVO; // @synthesize artworkKVO=_artworkKVO;
@property(retain, nonatomic) FBKVOController *viewModelKVO; // @synthesize viewModelKVO=_viewModelKVO;
@property(nonatomic) __weak NSLayoutConstraint *textPadding; // @synthesize textPadding=_textPadding;
@property(nonatomic) __weak UILabel *trackCountLabel; // @synthesize trackCountLabel=_trackCountLabel;
@property(nonatomic) __weak UILabel *playlistNameLabel; // @synthesize playlistNameLabel=_playlistNameLabel;
@property(nonatomic) __weak _TtC7Napster19RHDeferredImageView *artworkImageView; // @synthesize artworkImageView=_artworkImageView;
@property(retain, nonatomic) RHSearchAllPlaylistCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)configureViewModelKVO;
- (void)updateTrackCountLabel;
- (void)updatePlaylistNameLabel;
- (void)updateArtworkImageView;
@property(readonly, nonatomic) RHPlaylistMO *playlist;
- (void)configureForCondensedDisplay;
- (void)configureWithViewModel:(id)arg1;
- (void)prepareForReuse;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

