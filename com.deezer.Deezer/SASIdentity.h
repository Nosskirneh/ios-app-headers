//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SASIdentity : NSObject
{
    NSString *_UUID;
    unsigned long long _type;
    _Bool _isHashed;
    _Bool _transientIDEnabled;
}

+ (_Bool)isTransientIDExpiredOrInvalid:(id)arg1 lastGeneration:(id)arg2;
+ (id)retrieveTransientID;
+ (_Bool)isIDFAInvalid:(id)arg1;
+ (id)identityWithCustomID:(id)arg1;
+ (id)identityWithHashing:(_Bool)arg1 transientIDEnabled:(_Bool)arg2;
- (void).cxx_destruct;
- (_Bool)isHashed;
- (unsigned long long)type;
- (id)UUID;
- (id)initWithType:(unsigned long long)arg1 UUID:(id)arg2 hashed:(_Bool)arg3;

@end

