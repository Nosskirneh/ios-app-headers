//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RLMObject.h"

@class NSDate, NSNumber, NSString;
@protocol RLMInt;

@interface RLMSyncPermissionOffer : RLMObject
{
    _Bool _mayRead;
    _Bool _mayWrite;
    _Bool _mayManage;
    NSString *_id;
    NSDate *_createdAt;
    NSDate *_updatedAt;
    NSNumber<RLMInt> *_statusCode;
    NSString *_statusMessage;
    NSString *_token;
    NSString *_realmUrl;
    NSDate *_expiresAt;
}

+ (id)_realmObjectName;
+ (_Bool)shouldIncludeInDefaultSchema;
+ (id)primaryKey;
+ (id)defaultPropertyValues;
+ (id)indexedProperties;
+ (id)requiredProperties;
+ (id)permissionOfferWithRealmURL:(id)arg1 expiresAt:(id)arg2 read:(_Bool)arg3 write:(_Bool)arg4 manage:(_Bool)arg5;
@property(retain) NSDate *expiresAt; // @synthesize expiresAt=_expiresAt;
@property _Bool mayManage; // @synthesize mayManage=_mayManage;
@property _Bool mayWrite; // @synthesize mayWrite=_mayWrite;
@property _Bool mayRead; // @synthesize mayRead=_mayRead;
@property(retain) NSString *realmUrl; // @synthesize realmUrl=_realmUrl;
@property(retain) NSString *token; // @synthesize token=_token;
@property(retain) NSString *statusMessage; // @synthesize statusMessage=_statusMessage;
@property(retain) NSNumber<RLMInt> *statusCode; // @synthesize statusCode=_statusCode;
@property(retain) NSDate *updatedAt; // @synthesize updatedAt=_updatedAt;
@property(retain) NSDate *createdAt; // @synthesize createdAt=_createdAt;
@property(retain) NSString *id; // @synthesize id=_id;
- (void).cxx_destruct;
@property(readonly) unsigned long long status;

@end

