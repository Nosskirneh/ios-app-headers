//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class WMPUserServiceProvider;

@interface WMPUserServiceDAL : NSObject
{
    WMPUserServiceProvider *_provider;
}

@property(retain, nonatomic) WMPUserServiceProvider *provider; // @synthesize provider=_provider;
- (void).cxx_destruct;
- (void)uploadPictureAtPath:(id)arg1 forUser:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)updateUser:(id)arg1 withDictionary:(id)arg2 andCompletionHandler:(CDUnknownBlockType)arg3;
- (void)addOnboardingPropertyWithUserId:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchOnboardingWithUserId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchIdsForFavorites:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchUserWithId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithProvider:(id)arg1;
- (id)init;

@end

