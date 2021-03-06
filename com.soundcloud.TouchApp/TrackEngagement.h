//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, Urn;

@interface TrackEngagement : NSObject
{
    _Bool _isLiked;
    _Bool _isReposted;
    _Bool _isPrivate;
    _Bool _artistIsLoggedInUser;
    _Bool _displayLikeCount;
    Urn *_urn;
    unsigned long long _likeCount;
    NSNumber *_searchQueryPosition;
    NSString *_searchQueryUrn;
    unsigned long long _commentsCount;
}

@property(readonly, nonatomic) unsigned long long commentsCount; // @synthesize commentsCount=_commentsCount;
@property(readonly, nonatomic) _Bool displayLikeCount; // @synthesize displayLikeCount=_displayLikeCount;
@property(readonly, nonatomic) NSString *searchQueryUrn; // @synthesize searchQueryUrn=_searchQueryUrn;
@property(readonly, nonatomic) NSNumber *searchQueryPosition; // @synthesize searchQueryPosition=_searchQueryPosition;
@property(readonly, nonatomic) _Bool artistIsLoggedInUser; // @synthesize artistIsLoggedInUser=_artistIsLoggedInUser;
@property(readonly, nonatomic) _Bool isPrivate; // @synthesize isPrivate=_isPrivate;
@property(readonly, nonatomic) _Bool isReposted; // @synthesize isReposted=_isReposted;
@property(readonly, nonatomic) unsigned long long likeCount; // @synthesize likeCount=_likeCount;
@property(readonly, nonatomic) _Bool isLiked; // @synthesize isLiked=_isLiked;
@property(readonly, nonatomic) Urn *urn; // @synthesize urn=_urn;
- (void).cxx_destruct;
- (id)initWithUrn:(id)arg1 isLiked:(_Bool)arg2 likeCount:(unsigned long long)arg3 isReposted:(_Bool)arg4 isPrivate:(_Bool)arg5 artistIsLoggedInUser:(_Bool)arg6 searchQueryPosition:(id)arg7 searchQueryUrn:(id)arg8 displayLikeCount:(_Bool)arg9 commentsCount:(unsigned long long)arg10;

@end

