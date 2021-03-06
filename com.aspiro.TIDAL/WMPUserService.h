//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WMPUserServiceDAL;

@interface WMPUserService : NSObject
{
    WMPUserServiceDAL *_userDAL;
}

@property(retain, nonatomic) WMPUserServiceDAL *userDAL; // @synthesize userDAL=_userDAL;
- (void).cxx_destruct;
- (void)obtainLoginTokenForUser:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setSharingAlbums:(_Bool)arg1 artists:(_Bool)arg2 playlists:(_Bool)arg3 tracks:(_Bool)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)obtainSharingPreferencesWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeOwnPlaylistsInContext:(id)arg1;
- (void)deleteUserContent;
- (void)uploadUserPictureById:(id)arg1 picture:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateUser:(id)arg1 withDictionary:(id)arg2;
- (void)addOnboardingPropertyWithUserId:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)obtainOnboardingWithUserId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)obtainIdsForFavorites:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)obtainInfoForUserWithId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)checkIfUsernameIsSet;
- (void)setUserName:(id)arg1 andPassword:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)recoverPasswordForUsername:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)changeFromOldPassword:(id)arg1 newPassword:(id)arg2 newPasswordAgain:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateSubscriptionUsingReceipt:(id)arg1 completion:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (id)getUserById:(id)arg1;
- (id)countryCode;
- (id)sessionId;
- (id)init;

@end

