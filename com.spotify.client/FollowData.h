//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface FollowData : NSObject
{
    _Bool _isFollowing;
    _Bool _isBanned;
    NSURL *_targetURI;
    long long _followersCount;
    long long _followingCount;
}

+ (id)firstValidStringFromJsonDict:(id)arg1 withKeypaths:(id)arg2;
@property(readonly, nonatomic) long long followingCount; // @synthesize followingCount=_followingCount;
@property(readonly, nonatomic) long long followersCount; // @synthesize followersCount=_followersCount;
@property(readonly, nonatomic) _Bool isBanned; // @synthesize isBanned=_isBanned;
@property(readonly, nonatomic) _Bool isFollowing; // @synthesize isFollowing=_isFollowing;
@property(readonly, nonatomic) NSURL *targetURI; // @synthesize targetURI=_targetURI;
- (void).cxx_destruct;
- (id)initWithURI:(id)arg1 followingState:(_Bool)arg2 bannedState:(_Bool)arg3 followerCount:(unsigned long long)arg4 followingCount:(unsigned long long)arg5;
- (id)initWithURI:(id)arg1 followingState:(_Bool)arg2 followerCount:(unsigned long long)arg3 followingCount:(unsigned long long)arg4;
- (id)initWithDictionary:(id)arg1;

@end

