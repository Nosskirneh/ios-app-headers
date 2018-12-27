//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SocialRelationshipCache, SocialRelationshipStorageControllerFactory;

@interface SocialRelationshipsContentSourceFactory : NSObject
{
    SocialRelationshipCache *_cache;
    SocialRelationshipStorageControllerFactory *_factory;
}

@property(readonly, nonatomic) SocialRelationshipStorageControllerFactory *factory; // @synthesize factory=_factory;
@property(readonly, nonatomic) SocialRelationshipCache *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (id)socialRelationshipsPersistentCacheContentSource;
- (id)socialRelationshipsMemoryCacheContentSource;
- (id)initWithFactory:(id)arg1 cache:(id)arg2;
- (id)initWithUrn:(id)arg1 cache:(id)arg2;

@end

