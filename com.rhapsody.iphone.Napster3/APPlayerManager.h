//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APPlayerManagerImpl, NSArray;
@protocol APPlayerManagerDelegate;

@interface APPlayerManager : NSObject
{
    APPlayerManagerImpl *_impl;
}

+ (id)sharedManagerWithApplicationName:(id)arg1 andLogPath:(id)arg2;
- (void)stop;
- (void)start;
- (_Bool)deleteZone:(id)arg1 error:(id *)arg2;
- (_Bool)editZone:(id)arg1 withPlayers:(id)arg2 error:(id *)arg3;
- (_Bool)createZoneWithPlayers:(id)arg1 error:(id *)arg2;
- (_Bool)createZone:(id)arg1 withSlaves:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) _Bool isStarted;
@property(readonly, nonatomic) NSArray *players;
@property(readonly, nonatomic) NSArray *partyModePlayers;
@property(readonly, nonatomic) NSArray *zones;
- (void)refreshPlayerList;
@property(nonatomic) id <APPlayerManagerDelegate> delegate;
- (id)version;
- (void)dealloc;
- (id)initWithApplicationName:(id)arg1 andLogPath:(id)arg2;

@end

