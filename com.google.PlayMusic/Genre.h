//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MusicItem.h"

@class NSArray, NSNumber, NSString;

@interface Genre : MusicItem
{
    NSString *_name;
    NSString *_normalizedName;
    NSArray *_albumArtUrls;
    NSNumber *_albumCount;
    NSNumber *_trackCount;
}

@property(retain, nonatomic) NSNumber *trackCount; // @synthesize trackCount=_trackCount;
@property(retain, nonatomic) NSNumber *albumCount; // @synthesize albumCount=_albumCount;
@property(retain, nonatomic) NSArray *albumArtUrls; // @synthesize albumArtUrls=_albumArtUrls;
@property(copy, nonatomic) NSString *normalizedName; // @synthesize normalizedName=_normalizedName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)hasContextMenu;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)tagDictionary;
- (id)playLogContainer;

@end
