//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTFreeTierCollectionArtistModelItemEntity-Protocol.h"

@class NSString;
@protocol SPTFreeTierCollectionArtistEntity;

@interface SPTFreeTierCollectionArtistModelItemEntityImplementation : NSObject <SPTFreeTierCollectionArtistModelItemEntity>
{
    id <SPTFreeTierCollectionArtistEntity> _artistEntity;
    unsigned long long _type;
}

@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) id <SPTFreeTierCollectionArtistEntity> artistEntity; // @synthesize artistEntity=_artistEntity;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isOnDemand) _Bool onDemand;
- (id)initWithArtistEntity:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

