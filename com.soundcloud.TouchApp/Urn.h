//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface Urn : NSObject
{
    // Error parsing type: , name: urn
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *stringValue;
@property(nonatomic, readonly) _Bool isGenre;
@property(nonatomic, readonly) _Bool isStation;
@property(nonatomic, readonly) _Bool isArtistStation;
@property(nonatomic, readonly) _Bool isTrackStation;
@property(nonatomic, readonly) _Bool isUser;
@property(nonatomic, readonly) _Bool isPlaylist;
@property(nonatomic, readonly) _Bool isTrack;
@property(nonatomic, readonly) long long hash;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) NSString *identifier;
@property(nonatomic, readonly) NSString *collection;
@property(nonatomic, readonly) NSString *namespace;
- (_Bool)isEqual:(id)arg1;
- (id)init:(id)arg1;
- (id)deprecatedInitWithNamespace:(id)arg1 collection:(id)arg2 identifier:(id)arg3;
- (id)analyticsResource;

@end

