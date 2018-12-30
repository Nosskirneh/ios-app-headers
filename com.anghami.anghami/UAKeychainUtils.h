//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface UAKeychainUtils : NSObject
{
}

+ (id)getDeviceID;
+ (id)createDeviceID;
+ (id)searchDictionaryWithIdentifier:(id)arg1;
+ (id)getUsername:(id)arg1;
+ (id)getPassword:(id)arg1;
+ (id)getUserCredentials:(id)arg1;
+ (_Bool)updateKeychainValueForUsername:(id)arg1 withPassword:(id)arg2 forIdentifier:(id)arg3;
+ (void)deleteKeychainValue:(id)arg1;
+ (_Bool)createKeychainValueForUsername:(id)arg1 withPassword:(id)arg2 forIdentifier:(id)arg3;

@end

