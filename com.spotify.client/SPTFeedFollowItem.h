//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFollowShelfItem-Protocol.h"

@class NSString, NSURL;
@protocol GLUEImageLoader;

@interface SPTFeedFollowItem : NSObject <SPTFollowShelfItem>
{
    _Bool following;
    id <GLUEImageLoader> imageLoader;
    NSString *dismissUri;
    NSURL *_uri;
    NSString *_title;
    NSString *_subtitle;
    NSString *_followerCount;
    NSURL *_imageURL;
}

@property(copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSString *followerCount; // @synthesize followerCount=_followerCount;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSURL *uri; // @synthesize uri=_uri;
@property(readonly, copy, nonatomic) NSString *dismissUri; // @synthesize dismissUri;
@property(readonly, nonatomic) id <GLUEImageLoader> imageLoader; // @synthesize imageLoader;
@property(nonatomic, getter=isFollowing) _Bool following; // @synthesize following;
- (void).cxx_destruct;
- (void)processDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

