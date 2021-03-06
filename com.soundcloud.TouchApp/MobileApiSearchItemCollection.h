//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MobileApiCollection.h"

@interface MobileApiSearchItemCollection : MobileApiCollection
{
    long long _usersCount;
    long long _tracksCount;
    long long _playlistsCount;
}

+ (id)queryUrnJSONTransformer;
+ (Class)modelClass;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) long long playlistsCount; // @synthesize playlistsCount=_playlistsCount;
@property(nonatomic) long long tracksCount; // @synthesize tracksCount=_tracksCount;
@property(nonatomic) long long usersCount; // @synthesize usersCount=_usersCount;
- (_Bool)validate:(id *)arg1;

@end

