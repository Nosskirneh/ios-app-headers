//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVPlayer, AVPlayerItem, NSArray;
@protocol SPTVideoSubtitleFactory;

@interface SPTVideoSubtitleSelector : NSObject
{
    id <SPTVideoSubtitleFactory> _subtitleFactory;
    AVPlayerItem *_playerItem;
    AVPlayer *_player;
    NSArray *_availableSubtitles;
}

@property(copy, nonatomic) NSArray *availableSubtitles; // @synthesize availableSubtitles=_availableSubtitles;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(retain, nonatomic) id <SPTVideoSubtitleFactory> subtitleFactory; // @synthesize subtitleFactory=_subtitleFactory;
- (void).cxx_destruct;
- (id)refreshSelectedSubtitleWithPreferredSubtitle:(id)arg1;
- (id)initWithSubtitleFactory:(id)arg1 playerItem:(id)arg2 player:(id)arg3 availableSubtitles:(id)arg4;

@end

