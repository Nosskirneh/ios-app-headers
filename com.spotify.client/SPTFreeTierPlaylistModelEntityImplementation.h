//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTFreeTierPlaylistModelEntity-Protocol.h"

@class NSArray, NSString;
@protocol SPTFreeTierPlaylistModelEntityMetadataFields;

@interface SPTFreeTierPlaylistModelEntityImplementation : NSObject <SPTFreeTierPlaylistModelEntity>
{
    id <SPTFreeTierPlaylistModelEntityMetadataFields> _metadata;
    NSArray *_tracks;
    unsigned long long _unrangedTracksLength;
    unsigned long long onDemandType;
    NSArray *_recommendations;
}

@property(retain, nonatomic) NSArray *recommendations; // @synthesize recommendations=_recommendations;
@property(nonatomic) unsigned long long onDemandType; // @synthesize onDemandType;
@property(nonatomic) unsigned long long unrangedTracksLength; // @synthesize unrangedTracksLength=_unrangedTracksLength;
@property(retain, nonatomic) NSArray *tracks; // @synthesize tracks=_tracks;
@property(retain, nonatomic) id <SPTFreeTierPlaylistModelEntityMetadataFields> metadata; // @synthesize metadata=_metadata;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

