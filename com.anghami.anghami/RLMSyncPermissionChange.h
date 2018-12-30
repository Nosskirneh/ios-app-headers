//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RLMObject.h"

@class NSDate, NSNumber, NSString;
@protocol RLMBool, RLMInt;

@interface RLMSyncPermissionChange : RLMObject
{
    NSString *_id;
    NSDate *_createdAt;
    NSDate *_updatedAt;
    NSNumber<RLMInt> *_statusCode;
    NSString *_statusMessage;
    NSString *_realmUrl;
    NSString *_userId;
    NSNumber<RLMBool> *_mayRead;
    NSNumber<RLMBool> *_mayWrite;
    NSNumber<RLMBool> *_mayManage;
}

+ (id)_realmObjectName;
+ (_Bool)shouldIncludeInDefaultSchema;
+ (id)primaryKey;
+ (id)defaultPropertyValues;
+ (id)requiredProperties;
+ (id)permissionChangeWithRealmURL:(id)arg1 userID:(id)arg2 read:(id)arg3 write:(id)arg4 manage:(id)arg5;
@property(retain) NSNumber<RLMBool> *mayManage; // @synthesize mayManage=_mayManage;
@property(retain) NSNumber<RLMBool> *mayWrite; // @synthesize mayWrite=_mayWrite;
@property(retain) NSNumber<RLMBool> *mayRead; // @synthesize mayRead=_mayRead;
@property(retain) NSString *userId; // @synthesize userId=_userId;
@property(retain) NSString *realmUrl; // @synthesize realmUrl=_realmUrl;
@property(retain) NSString *statusMessage; // @synthesize statusMessage=_statusMessage;
@property(retain) NSNumber<RLMInt> *statusCode; // @synthesize statusCode=_statusCode;
@property(retain) NSDate *updatedAt; // @synthesize updatedAt=_updatedAt;
@property(retain) NSDate *createdAt; // @synthesize createdAt=_createdAt;
@property(retain) NSString *id; // @synthesize id=_id;
- (void).cxx_destruct;
@property(readonly) unsigned long long status;

@end

