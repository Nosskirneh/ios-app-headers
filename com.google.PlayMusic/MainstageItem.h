//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MusicItem.h"

@class NSNumber, NSString;

@interface MainstageItem : MusicItem
{
    MusicItem *_wrappedItem;
    long long _reason;
    NSString *_suggestionString;
    NSNumber *_recentTimestamp;
}

@property(retain, nonatomic) NSNumber *recentTimestamp; // @synthesize recentTimestamp=_recentTimestamp;
@property(copy, nonatomic) NSString *suggestionString; // @synthesize suggestionString=_suggestionString;
@property(nonatomic) long long reason; // @synthesize reason=_reason;
@property(retain, nonatomic) MusicItem *wrappedItem; // @synthesize wrappedItem=_wrappedItem;
- (void).cxx_destruct;
- (id)supportedContextMenuKeysForAvailabilityState:(unsigned long long)arg1;
- (_Bool)isEquivalentToMusicItem:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)displayName;
- (id)reasonString;
- (id)initWithMusicItem:(id)arg1 forReason:(long long)arg2 suggestionString:(id)arg3 recentTimestamp:(id)arg4;
- (id)initWithMusicItem:(id)arg1 forReason:(long long)arg2 recentTimestamp:(id)arg3;
- (int)playLogReason;
- (id)tagDictionary;
- (id)playLogContainer;
- (id)playLogCard;

@end

