//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SocialRelationshipsCallFactory, SocialRelationshipsCommand, SyncCenter;

@interface SocialRelationshipService : NSObject
{
    SyncCenter *_syncCenter;
    SocialRelationshipsCallFactory *_callFactory;
    SocialRelationshipsCommand *_socialRelationshipsCommand;
    long long _type;
}

@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) SocialRelationshipsCommand *socialRelationshipsCommand; // @synthesize socialRelationshipsCommand=_socialRelationshipsCommand;
@property(readonly, nonatomic) SocialRelationshipsCallFactory *callFactory; // @synthesize callFactory=_callFactory;
@property(readonly, nonatomic) SyncCenter *syncCenter; // @synthesize syncCenter=_syncCenter;
- (void).cxx_destruct;
- (void)queueSync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)apiCall;
- (void)syncWithNextPageQueryItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithSyncCenter:(id)arg1 callFactory:(id)arg2 socialRelationshipsCommand:(id)arg3 type:(long long)arg4;
- (id)initWithUrnString:(id)arg1 socialRelationshipsCommand:(id)arg2 type:(long long)arg3;

@end

