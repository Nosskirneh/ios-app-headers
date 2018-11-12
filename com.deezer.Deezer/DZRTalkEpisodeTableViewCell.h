//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DZRLibraryItemTableViewCell.h"

@class DZRHeardStatusIndicator, DeezerTalkEpisode, NSLayoutConstraint;

@interface DZRTalkEpisodeTableViewCell : DZRLibraryItemTableViewCell
{
    DeezerTalkEpisode *_talkEpisode;
    DZRHeardStatusIndicator *_heardStatusIndicator;
    NSLayoutConstraint *_illustrationWidthConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *illustrationWidthConstraint; // @synthesize illustrationWidthConstraint=_illustrationWidthConstraint;
@property(nonatomic) __weak DZRHeardStatusIndicator *heardStatusIndicator; // @synthesize heardStatusIndicator=_heardStatusIndicator;
@property(retain, nonatomic) DeezerTalkEpisode *talkEpisode; // @synthesize talkEpisode=_talkEpisode;
- (void).cxx_destruct;
- (_Bool)isEnabled;
- (id)listenableItem;
- (void)setSyncState:(long long)arg1;
- (void)setSyncStateViewHidden:(_Bool)arg1;
- (_Bool)itemIsFavorite;
- (void)populateWithTalkEpisode:(id)arg1 style:(unsigned long long)arg2;

@end
