//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MusicItem.h"

@class NSString;

@interface InfoMusicItem : MusicItem
{
    NSString *_cardKey;
}

@property(copy, nonatomic) NSString *cardKey; // @synthesize cardKey=_cardKey;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *playlogCollectionType;
- (id)initWithKey:(id)arg1;

@end

