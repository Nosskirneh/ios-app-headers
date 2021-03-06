//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "MDCInkTouchControllerDelegate-Protocol.h"

@class GPMSongTableCard, MDCInkTouchController, NSString;
@protocol CardDelegate, GPMCardDataSource;

@interface SongTableViewCell : UITableViewCell <MDCInkTouchControllerDelegate>
{
    GPMSongTableCard *_songCard;
    MDCInkTouchController *_inkTouchController;
}

- (void).cxx_destruct;
- (void)refreshAvailability;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic) unsigned long long roundedCornerState;
@property(nonatomic) _Bool shouldLayoutTextVertically;
@property(nonatomic, getter=isSelectionEnabled) _Bool selectionEnabled;
- (void)matchBackgroundOfSongCard;
@property(nonatomic) long long backgroundColorMode;
@property(nonatomic, getter=isMenuButtonEnabled) _Bool menuButtonEnabled;
@property(nonatomic, getter=isMenuButtonHidden) _Bool menuButtonHidden;
@property(nonatomic, getter=shouldPlayingIndicatorBeHidden) _Bool shouldHidePlayingIndicator;
@property(nonatomic, getter=isCurrentlyPlaying) _Bool currentlyPlaying;
@property(nonatomic) long long playingIndicatorMode;
@property(nonatomic, getter=isSubtitleHidden) _Bool hideSubtitle;
@property(nonatomic, getter=isAlbumArtHidden) _Bool hideAlbumArt;
@property(nonatomic) __weak id <GPMCardDataSource> dataSource;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
@property(nonatomic) __weak id <CardDelegate> delegate;
- (id)initWithReuseIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

