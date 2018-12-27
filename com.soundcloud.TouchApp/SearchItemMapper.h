//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ServiceObjectMapper-Protocol.h"

@class NSString, SearchCollectionMapper, UserSocialRelationshipManager;

@interface SearchItemMapper : NSObject <ServiceObjectMapper>
{
    SearchCollectionMapper *_searchCollectionMapper;
    UserSocialRelationshipManager *_userSocialRelationshipManager;
}

@property(retain, nonatomic) UserSocialRelationshipManager *userSocialRelationshipManager; // @synthesize userSocialRelationshipManager=_userSocialRelationshipManager;
@property(retain, nonatomic) SearchCollectionMapper *searchCollectionMapper; // @synthesize searchCollectionMapper=_searchCollectionMapper;
- (void).cxx_destruct;
- (id)permalinkUrlFromDictionary:(id)arg1;
- (_Bool)isFollowedFromDictionary:(id)arg1;
- (id)mapUserFromDictionary:(id)arg1;
- (id)mapPlaylistFromDictionary:(id)arg1 withUrn:(id)arg2;
- (id)mapTrackFromDictionary:(id)arg1 withUrn:(id)arg2;
- (id)mapFromDictionary:(id)arg1;
- (id)initWithSearchCollectionMapper:(id)arg1 userSocialRelationshipManager:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

