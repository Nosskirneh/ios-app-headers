//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BNCKeyChain : NSObject
{
}

+ (id)securityAccessGroup;
+ (id)removeValuesForService:(id)arg1 key:(id)arg2;
+ (id)storeValue:(id)arg1 forService:(id)arg2 key:(id)arg3 cloudAccessGroup:(id)arg4;
+ (id)retrieveValueForService:(id)arg1 key:(id)arg2 error:(id *)arg3;
+ (id)retieveAllValuesWithError:(id *)arg1;
+ (id)errorWithKey:(id)arg1 OSStatus:(int)arg2;

@end

