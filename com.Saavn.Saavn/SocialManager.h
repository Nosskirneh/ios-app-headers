//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SocialManager : NSObject
{
}

+ (id)getSingleton;
- (void)userDetailsSuccess:(id)arg1;
- (void)getUserDetails:(id)arg1;
- (void)FBFriendsSuccess:(id)arg1;
- (void)getFBFriends;
- (void)followCountsSuccess:(id)arg1;
- (void)getFollowCounts:(id)arg1;
- (void)followersDetailSuccess:(id)arg1;
- (void)getFollowersDetails:(id)arg1 pagenumber:(int)arg2 sortorder:(id)arg3;
- (void)followingDetailsSuccess:(id)arg1;
- (void)getFollowingDetails:(id)arg1 type:(id)arg2 pagenumber:(int)arg3 sortorder:(id)arg4;
- (void)tagSuccess:(id)arg1;
- (void)tagUsers:(id)arg1 typeID:(id)arg2 userid:(id)arg3;
- (void)unfollowSuccess:(id)arg1 type:(id)arg2 typeID:(id)arg3;
- (void)unfollow:(id)arg1 typeID:(id)arg2;
- (void)followSuccess:(id)arg1 type:(id)arg2 typeID:(id)arg3;
- (void)follow:(id)arg1 typeID:(id)arg2;

@end

