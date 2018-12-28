//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MusicItem.h"

@class NSString;

@interface GPMSearchEntitySuggestionMusicItem : MusicItem
{
    _Bool _playable;
    MusicItem *_wrappedItem;
    NSString *_query;
    long long _type;
}

+ (_Bool)itemIsSupportedEntityType:(id)arg1;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(nonatomic, getter=isPlayable) _Bool playable; // @synthesize playable=_playable;
@property(retain, nonatomic) MusicItem *wrappedItem; // @synthesize wrappedItem=_wrappedItem;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMusicItem:(id)arg1 playable:(_Bool)arg2 query:(id)arg3 type:(long long)arg4;

@end

