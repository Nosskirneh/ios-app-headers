//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTHomeMixTrackViewModel-Protocol.h"

@class NSArray, NSString, NSURL;

@interface SPTHomeMixTrackViewModelImplementation : NSObject <SPTHomeMixTrackViewModel>
{
    _Bool _ratedExplicit;
    NSString *_albumName;
    NSURL *_albumURL;
    NSURL *_albumImageURL;
    NSArray *_artistEntities;
    NSString *_subtitle;
    NSString *_title;
    NSURL *_URL;
    NSArray *_members;
}

@property(readonly, nonatomic, getter=isRatedExplicit) _Bool ratedExplicit; // @synthesize ratedExplicit=_ratedExplicit;
@property(readonly, copy, nonatomic) NSArray *members; // @synthesize members=_members;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSArray *artistEntities; // @synthesize artistEntities=_artistEntities;
@property(readonly, nonatomic) NSURL *albumImageURL; // @synthesize albumImageURL=_albumImageURL;
@property(readonly, nonatomic) NSURL *albumURL; // @synthesize albumURL=_albumURL;
@property(readonly, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
- (id)constructMemberViewModelsFromAffinities:(id)arg1 memberModels:(id)arg2;
- (id)initWithTrackModelEntity:(id)arg1 homeMixMembers:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

