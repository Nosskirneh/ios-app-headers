//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface RLMSyncPermissionValue : NSObject
{
    NSString *_userID;
    struct Optional<realm::Permission> _underlying;
    unsigned long long _accessLevel;
    NSString *_path;
    NSDate *_updatedAt;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (struct Permission)rawPermission;
@property(readonly, nonatomic) NSDate *updatedAt;
@property(readonly, nonatomic) NSString *userId;
@property(readonly, nonatomic) _Bool mayManage;
@property(readonly, nonatomic) _Bool mayWrite;
@property(readonly, nonatomic) _Bool mayRead;
@property(readonly, nonatomic) unsigned long long accessLevel;
@property(readonly, nonatomic) NSString *path;
- (id)initWithPermission:(struct Permission)arg1;
- (id)initWithRealmPath:(id)arg1 userID:(id)arg2 accessLevel:(unsigned long long)arg3;

@end

