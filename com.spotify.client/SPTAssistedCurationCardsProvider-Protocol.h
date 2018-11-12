//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, NSURL;
@protocol SPTAssistedCurationCardsProviderDelegate;

@protocol SPTAssistedCurationCardsProvider <NSObject>
+ (NSString *)identifier;
@property(nonatomic) __weak id <SPTAssistedCurationCardsProviderDelegate> delegate;
- (void)provideCardsForCurrentTracks:(NSArray *)arg1 andPlaylistName:(NSString *)arg2;

@optional
- (void)addedTrack:(NSURL *)arg1 fromContext:(unsigned long long)arg2;
@end

