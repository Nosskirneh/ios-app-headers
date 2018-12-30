//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ANGFollowRequestsManager : NSObject
{
}

+ (void)removeCachedFollowRequest:(id)arg1;
+ (void)removeAllCachedFollowRequests;
+ (void)setFollowRequestsAsSeen:(id)arg1;
+ (_Bool)shouldShowFollowRequestReadDot;
+ (id)getCurrentFollowRequestsIds;
+ (id)getCurrentFollowRequests;
+ (long long)followRequestsCount;
+ (void)cancelUserSuggestion:(id)arg1;
+ (void)declineFollowRequest:(id)arg1;
+ (void)acceptFollowRequest:(id)arg1;
+ (void)acceptAllRequests:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
+ (void)notifyChanges;
+ (void)getFollowRequests;

@end

