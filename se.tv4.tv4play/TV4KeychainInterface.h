//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TV4KeychainInterface : NSObject
{
}

+ (void)clearAccount;
+ (id)loadAccount;
+ (_Bool)saveAccount:(id)arg1;
+ (void)clearTokens;
+ (id)loadTokens;
+ (void)addBirthYearToken:(id)arg1 andFirstNameToken:(id)arg2 andLastNameToken:(id)arg3;
+ (_Bool)addZipCodeToken:(id)arg1;
+ (_Bool)saveTokens:(id)arg1;
+ (void)completedUserData;
+ (_Bool)isUserDataComplete;
+ (_Bool)isNoAds;
+ (id)loadJwtToken;
+ (_Bool)saveJwtToken:(id)arg1;

@end
