//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AppsFlyerShareInviteHelper : NSObject
{
}

+ (void)trackLinkedSent:(id)arg1 channel:(id)arg2 parameters:(id)arg3;
+ (void)trackInvite:(id)arg1 parameters:(id)arg2;
+ (id)createLink:(id)arg1;
+ (id)buildOneLinkWithID:(id)arg1 domain:(id)arg2;
+ (void)generateInviteUrlWithLinkGenerator:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

