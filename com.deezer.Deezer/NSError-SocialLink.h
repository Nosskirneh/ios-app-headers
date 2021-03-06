//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (SocialLink)
+ (id)dzrUserCancelledLinkError;
+ (id)dzrSocialLinkGoogleLinkFailedError;
+ (id)dzrSocialLinkAccountAlreadyLinkedToFacebook:(id)arg1;
+ (id)dzrSocialLinkFacebookIDAlreadyLinked:(id)arg1;
+ (id)dzrSocialLinkErrorWithCode:(unsigned long long)arg1 userInfo:(id)arg2;
@property(readonly, nonatomic) _Bool dzrIsUserCancelledLinkError; // @dynamic dzrIsUserCancelledLinkError;
@property(readonly, nonatomic) _Bool dzrIsSocialLinkGoogleLinkFailedError; // @dynamic dzrIsSocialLinkGoogleLinkFailedError;
@property(readonly, nonatomic) _Bool dzrIsSocialLinkAccountAlreadyLinkedToFacebookError; // @dynamic dzrIsSocialLinkAccountAlreadyLinkedToFacebookError;
@property(readonly, nonatomic) _Bool dzrIsSocialLinkFacebookIDAlreadyLinkedError; // @dynamic dzrIsSocialLinkFacebookIDAlreadyLinkedError;
- (_Bool)dzrIsSocialLinkErrorWithCode:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool dzrIsSocialLinkError; // @dynamic dzrIsSocialLinkError;
@end

