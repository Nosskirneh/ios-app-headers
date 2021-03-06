//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DZRLibraryItemTableViewCell.h"

@class DZRBadge, NSLayoutConstraint, _TtC6Deezer15DeezerAudiobook;

@interface DZRAudiobookTableViewCell : DZRLibraryItemTableViewCell
{
    DZRBadge *_badge;
    NSLayoutConstraint *_textHorizontalConstraint;
    _TtC6Deezer15DeezerAudiobook *_audiobook;
}

@property(retain, nonatomic) _TtC6Deezer15DeezerAudiobook *audiobook; // @synthesize audiobook=_audiobook;
@property(nonatomic) __weak NSLayoutConstraint *textHorizontalConstraint; // @synthesize textHorizontalConstraint=_textHorizontalConstraint;
@property(nonatomic) __weak DZRBadge *badge; // @synthesize badge=_badge;
- (void).cxx_destruct;
- (_Bool)isEnabled;
- (id)listenableItem;
- (long long)listeningState;
@property(nonatomic) long long badgeValue;
- (void)setSyncStateViewHidden:(_Bool)arg1;
- (_Bool)itemIsFavorite;
- (void)populateWithAudiobook:(id)arg1 style:(unsigned long long)arg2;
- (void)prepareForReuse;

@end

