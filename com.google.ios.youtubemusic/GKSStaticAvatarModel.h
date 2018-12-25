//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GKSAvatarModel-Protocol.h"

@class GIMMe, GKSAvatar, NSString;

@interface GKSStaticAvatarModel : NSObject <GKSAvatarModel>
{
    GKSAvatar *_avatar;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (id)avatar;
- (id)updateAvatar;
- (id)initWithPersonID:(id)arg1 profilePictureURL:(id)arg2 defaultProfilePicture:(id)arg3 backgroundColor:(id)arg4 imageURLUtil:(id)arg5 authorizer:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
