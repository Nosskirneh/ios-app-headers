//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSString, SocialRelationshipCache, Urn;
@protocol _TtP8Features15KeyValueStoring_;

@interface SocialRelationshipPaginationConfiguration : NSObject
{
    NSManagedObjectContext *_context;
    Urn *_urn;
    long long _type;
    id <_TtP8Features15KeyValueStoring_> _store;
    NSString *_storeKey;
    SocialRelationshipCache *_cache;
}

@property(readonly, nonatomic) SocialRelationshipCache *cache; // @synthesize cache=_cache;
@property(readonly, nonatomic) NSString *storeKey; // @synthesize storeKey=_storeKey;
@property(readonly, nonatomic) id <_TtP8Features15KeyValueStoring_> store; // @synthesize store=_store;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) Urn *urn; // @synthesize urn=_urn;
@property(readonly, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)nextPageUrl;
- (id)queryItemForNextPage;
- (_Bool)canDisplayPageOfSize:(unsigned long long)arg1;
- (id)initWithCache:(id)arg1 urn:(id)arg2 type:(long long)arg3;
- (id)initWithContext:(id)arg1 urn:(id)arg2 type:(long long)arg3 store:(id)arg4 storeKey:(id)arg5;

@end

