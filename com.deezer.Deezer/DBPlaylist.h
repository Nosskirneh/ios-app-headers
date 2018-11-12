//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DBObject.h"

@class NSMutableArray, NSString;

@interface DBPlaylist : DBObject
{
    NSString *identifier;
    NSString *checksum;
    unsigned long long nbTracks;
    NSString *userId;
    _Bool isCached;
    NSMutableArray *weakTracks;
}

+ (void)removeAllForAllUsers;
+ (void)removeAllForUser:(id)arg1;
+ (id)allObjects;
+ (void)finalizeStatements;
+ (void)prepareStatements:(struct sqlite3 *)arg1;
@property _Bool isCached; // @synthesize isCached;
@property(retain, nonatomic) NSString *userId; // @synthesize userId;
@property(nonatomic) unsigned long long nbTracks; // @synthesize nbTracks;
@property(retain, nonatomic) NSString *checksum; // @synthesize checksum;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier;
- (void).cxx_destruct;
- (void)removeTrack:(id)arg1;
- (void)addTrack:(id)arg1;
- (id)initForInsertion;
- (id)init;
- (void)deleteObject;
- (void)makeClean;
- (void)insert;
- (void)save;

@end
