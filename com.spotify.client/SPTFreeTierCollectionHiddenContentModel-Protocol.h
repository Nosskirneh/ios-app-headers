//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTFreeTierCollectionHiddenContentModelDelegate;

@protocol SPTFreeTierCollectionHiddenContentModel <NSObject>
@property(readonly, nonatomic) _Bool hasHiddenArtists;
@property(readonly, nonatomic) _Bool hasHiddenSongs;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
@property(nonatomic) __weak id <SPTFreeTierCollectionHiddenContentModelDelegate> delegate;
- (void)loadModel;
@end

