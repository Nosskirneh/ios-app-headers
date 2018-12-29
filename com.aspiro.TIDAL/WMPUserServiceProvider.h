//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WMPBaseServiceProvider.h"

@interface WMPUserServiceProvider : WMPBaseServiceProvider
{
}

- (void)uploadPictureAtPath:(id)arg1 forUser:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateUser:(id)arg1 withDictionary:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addOnboardingPropertyWithUserId:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchOnboardingById:(id)arg1 completion:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)fetchFavoritesById:(id)arg1 completion:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)fetchUserById:(id)arg1 andCompletionHandler:(CDUnknownBlockType)arg2;

@end
