//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTHomeMixMetadataModelEntity.h"

@class NSArray, NSString, NSURL;

@interface SPTHomeMixModelEntityImplementation : NSObject <SPTHomeMixMetadataModelEntity>
{
    _Bool _liked;
    NSString *_madeForName;
    NSString *_name;
    NSURL *_URI;
    NSURL *_imageURI;
    NSArray *_members;
}

@property(readonly, copy, nonatomic) NSArray *members; // @synthesize members=_members;
@property(readonly, nonatomic, getter=isLiked) _Bool liked; // @synthesize liked=_liked;
@property(readonly, nonatomic) NSURL *imageURI; // @synthesize imageURI=_imageURI;
@property(readonly, nonatomic) NSURL *URI; // @synthesize URI=_URI;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *madeForName; // @synthesize madeForName=_madeForName;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToMixModelEntity:(id)arg1;
- (id)parseMembers:(id)arg1;
- (id)initWithURL:(id)arg1 playlistMetadata:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
