//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTHomeMixTrackModelEntity.h"

@class NSArray, NSString, NSURL;

@interface SPTHomeMixTrackModelEntityImplementation : NSObject <SPTHomeMixTrackModelEntity>
{
    _Bool _ratedExplicit;
    NSURL *_albumImageURI;
    NSString *_albumName;
    NSURL *_albumURL;
    NSArray *_artistEntities;
    NSArray *_affinities;
    NSString *_name;
    NSURL *_URI;
}

@property(readonly, nonatomic, getter=isRatedExplicit) _Bool ratedExplicit; // @synthesize ratedExplicit=_ratedExplicit;
@property(readonly, nonatomic) NSURL *URI; // @synthesize URI=_URI;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSArray *affinities; // @synthesize affinities=_affinities;
@property(readonly, copy, nonatomic) NSArray *artistEntities; // @synthesize artistEntities=_artistEntities;
@property(readonly, nonatomic) NSURL *albumURL; // @synthesize albumURL=_albumURL;
@property(readonly, copy, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(readonly, nonatomic) NSURL *albumImageURI; // @synthesize albumImageURI=_albumImageURI;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToTrackModelEntity:(id)arg1;
- (id)parseTrackAffinities:(id)arg1;
- (id)initWithTrackFields:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

