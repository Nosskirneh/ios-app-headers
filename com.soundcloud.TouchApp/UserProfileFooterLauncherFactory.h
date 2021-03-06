//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TaggingContext, UserContentControllerConfigurationFactory, UserProfileUser;

@interface UserProfileFooterLauncherFactory : NSObject
{
    UserProfileUser *_user;
    UserContentControllerConfigurationFactory *_configurationFactory;
    TaggingContext *_context;
}

@property(readonly, nonatomic) TaggingContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) UserContentControllerConfigurationFactory *configurationFactory; // @synthesize configurationFactory=_configurationFactory;
@property(readonly, nonatomic) UserProfileUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (id)repostPlaylistsLauncher;
- (id)postPlaylistsLauncher;
- (id)releasePlaylistsLauncher;
- (id)postedPlaylistsLauncher;
- (id)postedTracksLauncher;
- (id)likedPlaylistsLauncher;
- (id)likedTracksLauncher;
- (id)initWithUser:(id)arg1 configurationFactory:(id)arg2 context:(id)arg3;
- (id)initWithUser:(id)arg1 context:(id)arg2;

@end

